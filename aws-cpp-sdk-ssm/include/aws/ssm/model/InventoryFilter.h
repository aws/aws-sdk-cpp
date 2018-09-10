﻿/*
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
#include <aws/ssm/model/InventoryQueryOperatorType.h>
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
   * <p>One or more filters. Use a filter to return a more specific list of
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InventoryFilter
  {
  public:
    InventoryFilter();
    InventoryFilter(Aws::Utils::Json::JsonView jsonValue);
    InventoryFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the filter key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the filter key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the filter key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the filter key.</p>
     */
    inline InventoryFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the filter key.</p>
     */
    inline InventoryFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the filter key.</p>
     */
    inline InventoryFilter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Inventory filter values. Example: inventory filter where instance IDs are
     * specified as values Key=AWS:InstanceInformation.InstanceId,Values=
     * i-a12b3c4d5e6g, i-1a2b3c4d5e6,Type=Equal </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>Inventory filter values. Example: inventory filter where instance IDs are
     * specified as values Key=AWS:InstanceInformation.InstanceId,Values=
     * i-a12b3c4d5e6g, i-1a2b3c4d5e6,Type=Equal </p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>Inventory filter values. Example: inventory filter where instance IDs are
     * specified as values Key=AWS:InstanceInformation.InstanceId,Values=
     * i-a12b3c4d5e6g, i-1a2b3c4d5e6,Type=Equal </p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>Inventory filter values. Example: inventory filter where instance IDs are
     * specified as values Key=AWS:InstanceInformation.InstanceId,Values=
     * i-a12b3c4d5e6g, i-1a2b3c4d5e6,Type=Equal </p>
     */
    inline InventoryFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>Inventory filter values. Example: inventory filter where instance IDs are
     * specified as values Key=AWS:InstanceInformation.InstanceId,Values=
     * i-a12b3c4d5e6g, i-1a2b3c4d5e6,Type=Equal </p>
     */
    inline InventoryFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>Inventory filter values. Example: inventory filter where instance IDs are
     * specified as values Key=AWS:InstanceInformation.InstanceId,Values=
     * i-a12b3c4d5e6g, i-1a2b3c4d5e6,Type=Equal </p>
     */
    inline InventoryFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>Inventory filter values. Example: inventory filter where instance IDs are
     * specified as values Key=AWS:InstanceInformation.InstanceId,Values=
     * i-a12b3c4d5e6g, i-1a2b3c4d5e6,Type=Equal </p>
     */
    inline InventoryFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>Inventory filter values. Example: inventory filter where instance IDs are
     * specified as values Key=AWS:InstanceInformation.InstanceId,Values=
     * i-a12b3c4d5e6g, i-1a2b3c4d5e6,Type=Equal </p>
     */
    inline InventoryFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The type of filter. Valid values include the following:
     * "Equal"|"NotEqual"|"BeginWith"|"LessThan"|"GreaterThan"</p>
     */
    inline const InventoryQueryOperatorType& GetType() const{ return m_type; }

    /**
     * <p>The type of filter. Valid values include the following:
     * "Equal"|"NotEqual"|"BeginWith"|"LessThan"|"GreaterThan"</p>
     */
    inline void SetType(const InventoryQueryOperatorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of filter. Valid values include the following:
     * "Equal"|"NotEqual"|"BeginWith"|"LessThan"|"GreaterThan"</p>
     */
    inline void SetType(InventoryQueryOperatorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of filter. Valid values include the following:
     * "Equal"|"NotEqual"|"BeginWith"|"LessThan"|"GreaterThan"</p>
     */
    inline InventoryFilter& WithType(const InventoryQueryOperatorType& value) { SetType(value); return *this;}

    /**
     * <p>The type of filter. Valid values include the following:
     * "Equal"|"NotEqual"|"BeginWith"|"LessThan"|"GreaterThan"</p>
     */
    inline InventoryFilter& WithType(InventoryQueryOperatorType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;

    InventoryQueryOperatorType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
