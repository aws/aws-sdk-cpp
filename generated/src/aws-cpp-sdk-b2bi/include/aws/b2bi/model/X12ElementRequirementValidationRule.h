/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/ElementRequirement.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace B2BI
{
namespace Model
{

  /**
   * <p>Defines a validation rule that modifies the requirement status of a specific
   * X12 element within a segment. This rule allows you to make optional elements
   * mandatory or mandatory elements optional, providing flexibility to accommodate
   * different trading partner requirements and business rules. The rule targets a
   * specific element position within a segment and sets its requirement status to
   * either OPTIONAL or MANDATORY.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/X12ElementRequirementValidationRule">AWS
   * API Reference</a></p>
   */
  class X12ElementRequirementValidationRule
  {
  public:
    AWS_B2BI_API X12ElementRequirementValidationRule() = default;
    AWS_B2BI_API X12ElementRequirementValidationRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12ElementRequirementValidationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the position of the element within an X12 segment for which the
     * requirement status will be modified. The format follows the pattern of segment
     * identifier followed by element position (e.g., "ST-01" for the first element of
     * the ST segment).</p>
     */
    inline const Aws::String& GetElementPosition() const { return m_elementPosition; }
    inline bool ElementPositionHasBeenSet() const { return m_elementPositionHasBeenSet; }
    template<typename ElementPositionT = Aws::String>
    void SetElementPosition(ElementPositionT&& value) { m_elementPositionHasBeenSet = true; m_elementPosition = std::forward<ElementPositionT>(value); }
    template<typename ElementPositionT = Aws::String>
    X12ElementRequirementValidationRule& WithElementPosition(ElementPositionT&& value) { SetElementPosition(std::forward<ElementPositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the requirement status for the element at the specified position.
     * Valid values are OPTIONAL (the element may be omitted) or MANDATORY (the element
     * must be present).</p>
     */
    inline ElementRequirement GetRequirement() const { return m_requirement; }
    inline bool RequirementHasBeenSet() const { return m_requirementHasBeenSet; }
    inline void SetRequirement(ElementRequirement value) { m_requirementHasBeenSet = true; m_requirement = value; }
    inline X12ElementRequirementValidationRule& WithRequirement(ElementRequirement value) { SetRequirement(value); return *this;}
    ///@}
  private:

    Aws::String m_elementPosition;
    bool m_elementPositionHasBeenSet = false;

    ElementRequirement m_requirement{ElementRequirement::NOT_SET};
    bool m_requirementHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
