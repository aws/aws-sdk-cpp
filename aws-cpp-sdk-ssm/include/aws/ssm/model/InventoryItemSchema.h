/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InventoryItemAttribute.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>The inventory item schema definition. Users can use this to compose inventory
   * query filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryItemSchema">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InventoryItemSchema
  {
  public:
    InventoryItemSchema();
    InventoryItemSchema(const Aws::Utils::Json::JsonValue& jsonValue);
    InventoryItemSchema& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with
     * <code>Custom</code>. Default inventory item types include the following:
     * <code>AWS:AWSComponent</code>, <code>AWS:Application</code>,
     * <code>AWS:InstanceInformation</code>, <code>AWS:Network</code>, and
     * <code>AWS:WindowsUpdate</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with
     * <code>Custom</code>. Default inventory item types include the following:
     * <code>AWS:AWSComponent</code>, <code>AWS:Application</code>,
     * <code>AWS:InstanceInformation</code>, <code>AWS:Network</code>, and
     * <code>AWS:WindowsUpdate</code>.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with
     * <code>Custom</code>. Default inventory item types include the following:
     * <code>AWS:AWSComponent</code>, <code>AWS:Application</code>,
     * <code>AWS:InstanceInformation</code>, <code>AWS:Network</code>, and
     * <code>AWS:WindowsUpdate</code>.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with
     * <code>Custom</code>. Default inventory item types include the following:
     * <code>AWS:AWSComponent</code>, <code>AWS:Application</code>,
     * <code>AWS:InstanceInformation</code>, <code>AWS:Network</code>, and
     * <code>AWS:WindowsUpdate</code>.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with
     * <code>Custom</code>. Default inventory item types include the following:
     * <code>AWS:AWSComponent</code>, <code>AWS:Application</code>,
     * <code>AWS:InstanceInformation</code>, <code>AWS:Network</code>, and
     * <code>AWS:WindowsUpdate</code>.</p>
     */
    inline InventoryItemSchema& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with
     * <code>Custom</code>. Default inventory item types include the following:
     * <code>AWS:AWSComponent</code>, <code>AWS:Application</code>,
     * <code>AWS:InstanceInformation</code>, <code>AWS:Network</code>, and
     * <code>AWS:WindowsUpdate</code>.</p>
     */
    inline InventoryItemSchema& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the inventory type. Default inventory item type names start with
     * <code>AWS</code>. Custom inventory type names will start with
     * <code>Custom</code>. Default inventory item types include the following:
     * <code>AWS:AWSComponent</code>, <code>AWS:Application</code>,
     * <code>AWS:InstanceInformation</code>, <code>AWS:Network</code>, and
     * <code>AWS:WindowsUpdate</code>.</p>
     */
    inline InventoryItemSchema& WithTypeName(const char* value) { SetTypeName(value); return *this;}

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline InventoryItemSchema& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline InventoryItemSchema& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The schema version for the inventory item.</p>
     */
    inline InventoryItemSchema& WithVersion(const char* value) { SetVersion(value); return *this;}

    /**
     * <p>The schema attributes for inventory. This contains data type and attribute
     * name.</p>
     */
    inline const Aws::Vector<InventoryItemAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The schema attributes for inventory. This contains data type and attribute
     * name.</p>
     */
    inline void SetAttributes(const Aws::Vector<InventoryItemAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The schema attributes for inventory. This contains data type and attribute
     * name.</p>
     */
    inline void SetAttributes(Aws::Vector<InventoryItemAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The schema attributes for inventory. This contains data type and attribute
     * name.</p>
     */
    inline InventoryItemSchema& WithAttributes(const Aws::Vector<InventoryItemAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The schema attributes for inventory. This contains data type and attribute
     * name.</p>
     */
    inline InventoryItemSchema& WithAttributes(Aws::Vector<InventoryItemAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The schema attributes for inventory. This contains data type and attribute
     * name.</p>
     */
    inline InventoryItemSchema& AddAttributes(const InventoryItemAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The schema attributes for inventory. This contains data type and attribute
     * name.</p>
     */
    inline InventoryItemSchema& AddAttributes(InventoryItemAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:
    Aws::String m_typeName;
    bool m_typeNameHasBeenSet;
    Aws::String m_version;
    bool m_versionHasBeenSet;
    Aws::Vector<InventoryItemAttribute> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
