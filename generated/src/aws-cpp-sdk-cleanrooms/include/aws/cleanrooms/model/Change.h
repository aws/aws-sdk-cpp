/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ChangeSpecificationType.h>
#include <aws/cleanrooms/model/ChangeSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/ChangeType.h>
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
   * <p>Represents a single change within a collaboration change request, containing
   * the change identifier and specification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/Change">AWS
   * API Reference</a></p>
   */
  class Change
  {
  public:
    AWS_CLEANROOMS_API Change() = default;
    AWS_CLEANROOMS_API Change(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Change& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of specification for this change.</p>
     */
    inline ChangeSpecificationType GetSpecificationType() const { return m_specificationType; }
    inline bool SpecificationTypeHasBeenSet() const { return m_specificationTypeHasBeenSet; }
    inline void SetSpecificationType(ChangeSpecificationType value) { m_specificationTypeHasBeenSet = true; m_specificationType = value; }
    inline Change& WithSpecificationType(ChangeSpecificationType value) { SetSpecificationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specification details for this change.</p>
     */
    inline const ChangeSpecification& GetSpecification() const { return m_specification; }
    inline bool SpecificationHasBeenSet() const { return m_specificationHasBeenSet; }
    template<typename SpecificationT = ChangeSpecification>
    void SetSpecification(SpecificationT&& value) { m_specificationHasBeenSet = true; m_specification = std::forward<SpecificationT>(value); }
    template<typename SpecificationT = ChangeSpecification>
    Change& WithSpecification(SpecificationT&& value) { SetSpecification(std::forward<SpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of change types that were applied.</p>
     */
    inline const Aws::Vector<ChangeType>& GetTypes() const { return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    template<typename TypesT = Aws::Vector<ChangeType>>
    void SetTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types = std::forward<TypesT>(value); }
    template<typename TypesT = Aws::Vector<ChangeType>>
    Change& WithTypes(TypesT&& value) { SetTypes(std::forward<TypesT>(value)); return *this;}
    inline Change& AddTypes(ChangeType value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }
    ///@}
  private:

    ChangeSpecificationType m_specificationType{ChangeSpecificationType::NOT_SET};
    bool m_specificationTypeHasBeenSet = false;

    ChangeSpecification m_specification;
    bool m_specificationHasBeenSet = false;

    Aws::Vector<ChangeType> m_types;
    bool m_typesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
