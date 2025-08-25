/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Defines a validation rule that specifies custom length constraints for a
   * specific X12 element. This rule allows you to override the standard minimum and
   * maximum length requirements for an element, enabling validation of trading
   * partner-specific length requirements that may differ from the X12 specification.
   * Both minimum and maximum length values must be specified and must be between 1
   * and 200 characters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/X12ElementLengthValidationRule">AWS
   * API Reference</a></p>
   */
  class X12ElementLengthValidationRule
  {
  public:
    AWS_B2BI_API X12ElementLengthValidationRule() = default;
    AWS_B2BI_API X12ElementLengthValidationRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12ElementLengthValidationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the four-digit element ID to which the length constraints will be
     * applied. This identifies which X12 element will have its length requirements
     * modified.</p>
     */
    inline const Aws::String& GetElementId() const { return m_elementId; }
    inline bool ElementIdHasBeenSet() const { return m_elementIdHasBeenSet; }
    template<typename ElementIdT = Aws::String>
    void SetElementId(ElementIdT&& value) { m_elementIdHasBeenSet = true; m_elementId = std::forward<ElementIdT>(value); }
    template<typename ElementIdT = Aws::String>
    X12ElementLengthValidationRule& WithElementId(ElementIdT&& value) { SetElementId(std::forward<ElementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum allowed length for the identified element. This value
     * must be between 1 and 200 characters and defines the upper limit for the
     * element's content length.</p>
     */
    inline int GetMaxLength() const { return m_maxLength; }
    inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
    inline void SetMaxLength(int value) { m_maxLengthHasBeenSet = true; m_maxLength = value; }
    inline X12ElementLengthValidationRule& WithMaxLength(int value) { SetMaxLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the minimum required length for the identified element. This value
     * must be between 1 and 200 characters and defines the lower limit for the
     * element's content length.</p>
     */
    inline int GetMinLength() const { return m_minLength; }
    inline bool MinLengthHasBeenSet() const { return m_minLengthHasBeenSet; }
    inline void SetMinLength(int value) { m_minLengthHasBeenSet = true; m_minLength = value; }
    inline X12ElementLengthValidationRule& WithMinLength(int value) { SetMinLength(value); return *this;}
    ///@}
  private:

    Aws::String m_elementId;
    bool m_elementIdHasBeenSet = false;

    int m_maxLength{0};
    bool m_maxLengthHasBeenSet = false;

    int m_minLength{0};
    bool m_minLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
