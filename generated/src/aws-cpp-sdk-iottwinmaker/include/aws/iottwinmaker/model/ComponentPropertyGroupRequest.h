/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/GroupType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/PropertyGroupUpdateType.h>
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
   * <p>The component property group request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ComponentPropertyGroupRequest">AWS
   * API Reference</a></p>
   */
  class ComponentPropertyGroupRequest
  {
  public:
    AWS_IOTTWINMAKER_API ComponentPropertyGroupRequest() = default;
    AWS_IOTTWINMAKER_API ComponentPropertyGroupRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API ComponentPropertyGroupRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The group type.</p>
     */
    inline GroupType GetGroupType() const { return m_groupType; }
    inline bool GroupTypeHasBeenSet() const { return m_groupTypeHasBeenSet; }
    inline void SetGroupType(GroupType value) { m_groupTypeHasBeenSet = true; m_groupType = value; }
    inline ComponentPropertyGroupRequest& WithGroupType(GroupType value) { SetGroupType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPropertyNames() const { return m_propertyNames; }
    inline bool PropertyNamesHasBeenSet() const { return m_propertyNamesHasBeenSet; }
    template<typename PropertyNamesT = Aws::Vector<Aws::String>>
    void SetPropertyNames(PropertyNamesT&& value) { m_propertyNamesHasBeenSet = true; m_propertyNames = std::forward<PropertyNamesT>(value); }
    template<typename PropertyNamesT = Aws::Vector<Aws::String>>
    ComponentPropertyGroupRequest& WithPropertyNames(PropertyNamesT&& value) { SetPropertyNames(std::forward<PropertyNamesT>(value)); return *this;}
    template<typename PropertyNamesT = Aws::String>
    ComponentPropertyGroupRequest& AddPropertyNames(PropertyNamesT&& value) { m_propertyNamesHasBeenSet = true; m_propertyNames.emplace_back(std::forward<PropertyNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The update type.</p>
     */
    inline PropertyGroupUpdateType GetUpdateType() const { return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    inline void SetUpdateType(PropertyGroupUpdateType value) { m_updateTypeHasBeenSet = true; m_updateType = value; }
    inline ComponentPropertyGroupRequest& WithUpdateType(PropertyGroupUpdateType value) { SetUpdateType(value); return *this;}
    ///@}
  private:

    GroupType m_groupType{GroupType::NOT_SET};
    bool m_groupTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_propertyNames;
    bool m_propertyNamesHasBeenSet = false;

    PropertyGroupUpdateType m_updateType{PropertyGroupUpdateType::NOT_SET};
    bool m_updateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
