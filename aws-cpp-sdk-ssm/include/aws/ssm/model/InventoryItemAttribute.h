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
#include <aws/ssm/model/InventoryAttributeDataType.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Attributes are the entries within the inventory item content. It contains
   * name and value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryItemAttribute">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InventoryItemAttribute
  {
  public:
    InventoryItemAttribute();
    InventoryItemAttribute(Aws::Utils::Json::JsonView jsonValue);
    InventoryItemAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the inventory item attribute.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the inventory item attribute.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the inventory item attribute.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the inventory item attribute.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the inventory item attribute.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the inventory item attribute.</p>
     */
    inline InventoryItemAttribute& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the inventory item attribute.</p>
     */
    inline InventoryItemAttribute& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the inventory item attribute.</p>
     */
    inline InventoryItemAttribute& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data type of the inventory item attribute. </p>
     */
    inline const InventoryAttributeDataType& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type of the inventory item attribute. </p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type of the inventory item attribute. </p>
     */
    inline void SetDataType(const InventoryAttributeDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type of the inventory item attribute. </p>
     */
    inline void SetDataType(InventoryAttributeDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type of the inventory item attribute. </p>
     */
    inline InventoryItemAttribute& WithDataType(const InventoryAttributeDataType& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type of the inventory item attribute. </p>
     */
    inline InventoryItemAttribute& WithDataType(InventoryAttributeDataType&& value) { SetDataType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    InventoryAttributeDataType m_dataType;
    bool m_dataTypeHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
