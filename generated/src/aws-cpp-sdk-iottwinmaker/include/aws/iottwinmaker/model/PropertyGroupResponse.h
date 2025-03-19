/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/GroupType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The property group response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/PropertyGroupResponse">AWS
   * API Reference</a></p>
   */
  class PropertyGroupResponse
  {
  public:
    AWS_IOTTWINMAKER_API PropertyGroupResponse() = default;
    AWS_IOTTWINMAKER_API PropertyGroupResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API PropertyGroupResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The group types.</p>
     */
    inline GroupType GetGroupType() const { return m_groupType; }
    inline bool GroupTypeHasBeenSet() const { return m_groupTypeHasBeenSet; }
    inline void SetGroupType(GroupType value) { m_groupTypeHasBeenSet = true; m_groupType = value; }
    inline PropertyGroupResponse& WithGroupType(GroupType value) { SetGroupType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of properties.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPropertyNames() const { return m_propertyNames; }
    inline bool PropertyNamesHasBeenSet() const { return m_propertyNamesHasBeenSet; }
    template<typename PropertyNamesT = Aws::Vector<Aws::String>>
    void SetPropertyNames(PropertyNamesT&& value) { m_propertyNamesHasBeenSet = true; m_propertyNames = std::forward<PropertyNamesT>(value); }
    template<typename PropertyNamesT = Aws::Vector<Aws::String>>
    PropertyGroupResponse& WithPropertyNames(PropertyNamesT&& value) { SetPropertyNames(std::forward<PropertyNamesT>(value)); return *this;}
    template<typename PropertyNamesT = Aws::String>
    PropertyGroupResponse& AddPropertyNames(PropertyNamesT&& value) { m_propertyNamesHasBeenSet = true; m_propertyNames.emplace_back(std::forward<PropertyNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether the property group is inherited from a
     * parent entity</p>
     */
    inline bool GetIsInherited() const { return m_isInherited; }
    inline bool IsInheritedHasBeenSet() const { return m_isInheritedHasBeenSet; }
    inline void SetIsInherited(bool value) { m_isInheritedHasBeenSet = true; m_isInherited = value; }
    inline PropertyGroupResponse& WithIsInherited(bool value) { SetIsInherited(value); return *this;}
    ///@}
  private:

    GroupType m_groupType{GroupType::NOT_SET};
    bool m_groupTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_propertyNames;
    bool m_propertyNamesHasBeenSet = false;

    bool m_isInherited{false};
    bool m_isInheritedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
