/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ChangeSpecificationType.h>
#include <aws/cleanrooms/model/ChangeSpecification.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Specifies a change to apply to a collaboration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ChangeInput">AWS
   * API Reference</a></p>
   */
  class ChangeInput
  {
  public:
    AWS_CLEANROOMS_API ChangeInput() = default;
    AWS_CLEANROOMS_API ChangeInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ChangeInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of specification for the change. Currently supports
     * <code>MEMBER</code> for member-related changes.</p>
     */
    inline ChangeSpecificationType GetSpecificationType() const { return m_specificationType; }
    inline bool SpecificationTypeHasBeenSet() const { return m_specificationTypeHasBeenSet; }
    inline void SetSpecificationType(ChangeSpecificationType value) { m_specificationTypeHasBeenSet = true; m_specificationType = value; }
    inline ChangeInput& WithSpecificationType(ChangeSpecificationType value) { SetSpecificationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specification details for the change. The structure depends on the
     * specification type.</p>
     */
    inline const ChangeSpecification& GetSpecification() const { return m_specification; }
    inline bool SpecificationHasBeenSet() const { return m_specificationHasBeenSet; }
    template<typename SpecificationT = ChangeSpecification>
    void SetSpecification(SpecificationT&& value) { m_specificationHasBeenSet = true; m_specification = std::forward<SpecificationT>(value); }
    template<typename SpecificationT = ChangeSpecification>
    ChangeInput& WithSpecification(SpecificationT&& value) { SetSpecification(std::forward<SpecificationT>(value)); return *this;}
    ///@}
  private:

    ChangeSpecificationType m_specificationType{ChangeSpecificationType::NOT_SET};
    bool m_specificationTypeHasBeenSet = false;

    ChangeSpecification m_specification;
    bool m_specificationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
