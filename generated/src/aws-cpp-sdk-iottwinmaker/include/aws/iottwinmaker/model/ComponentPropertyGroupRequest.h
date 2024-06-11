﻿/**
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
    AWS_IOTTWINMAKER_API ComponentPropertyGroupRequest();
    AWS_IOTTWINMAKER_API ComponentPropertyGroupRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API ComponentPropertyGroupRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The group type.</p>
     */
    inline const GroupType& GetGroupType() const{ return m_groupType; }
    inline bool GroupTypeHasBeenSet() const { return m_groupTypeHasBeenSet; }
    inline void SetGroupType(const GroupType& value) { m_groupTypeHasBeenSet = true; m_groupType = value; }
    inline void SetGroupType(GroupType&& value) { m_groupTypeHasBeenSet = true; m_groupType = std::move(value); }
    inline ComponentPropertyGroupRequest& WithGroupType(const GroupType& value) { SetGroupType(value); return *this;}
    inline ComponentPropertyGroupRequest& WithGroupType(GroupType&& value) { SetGroupType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPropertyNames() const{ return m_propertyNames; }
    inline bool PropertyNamesHasBeenSet() const { return m_propertyNamesHasBeenSet; }
    inline void SetPropertyNames(const Aws::Vector<Aws::String>& value) { m_propertyNamesHasBeenSet = true; m_propertyNames = value; }
    inline void SetPropertyNames(Aws::Vector<Aws::String>&& value) { m_propertyNamesHasBeenSet = true; m_propertyNames = std::move(value); }
    inline ComponentPropertyGroupRequest& WithPropertyNames(const Aws::Vector<Aws::String>& value) { SetPropertyNames(value); return *this;}
    inline ComponentPropertyGroupRequest& WithPropertyNames(Aws::Vector<Aws::String>&& value) { SetPropertyNames(std::move(value)); return *this;}
    inline ComponentPropertyGroupRequest& AddPropertyNames(const Aws::String& value) { m_propertyNamesHasBeenSet = true; m_propertyNames.push_back(value); return *this; }
    inline ComponentPropertyGroupRequest& AddPropertyNames(Aws::String&& value) { m_propertyNamesHasBeenSet = true; m_propertyNames.push_back(std::move(value)); return *this; }
    inline ComponentPropertyGroupRequest& AddPropertyNames(const char* value) { m_propertyNamesHasBeenSet = true; m_propertyNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The update type.</p>
     */
    inline const PropertyGroupUpdateType& GetUpdateType() const{ return m_updateType; }
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }
    inline void SetUpdateType(const PropertyGroupUpdateType& value) { m_updateTypeHasBeenSet = true; m_updateType = value; }
    inline void SetUpdateType(PropertyGroupUpdateType&& value) { m_updateTypeHasBeenSet = true; m_updateType = std::move(value); }
    inline ComponentPropertyGroupRequest& WithUpdateType(const PropertyGroupUpdateType& value) { SetUpdateType(value); return *this;}
    inline ComponentPropertyGroupRequest& WithUpdateType(PropertyGroupUpdateType&& value) { SetUpdateType(std::move(value)); return *this;}
    ///@}
  private:

    GroupType m_groupType;
    bool m_groupTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_propertyNames;
    bool m_propertyNamesHasBeenSet = false;

    PropertyGroupUpdateType m_updateType;
    bool m_updateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
