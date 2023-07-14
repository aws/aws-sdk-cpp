﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/model/SystemInstanceFilterName.h>
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
namespace IoTThingsGraph
{
namespace Model
{

  /**
   * <p>An object that filters a system instance search. Multiple filters function as
   * OR criteria in the search. For example a search that includes a
   * GREENGRASS_GROUP_NAME and a STATUS filter searches for system instances in the
   * specified Greengrass group that have the specified status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SystemInstanceFilter">AWS
   * API Reference</a></p>
   */
  class AWS_IOTTHINGSGRAPH_API SystemInstanceFilter
  {
  public:
    SystemInstanceFilter();
    SystemInstanceFilter(Aws::Utils::Json::JsonView jsonValue);
    SystemInstanceFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the search filter field.</p>
     */
    inline const SystemInstanceFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the search filter field.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the search filter field.</p>
     */
    inline void SetName(const SystemInstanceFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the search filter field.</p>
     */
    inline void SetName(SystemInstanceFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the search filter field.</p>
     */
    inline SystemInstanceFilter& WithName(const SystemInstanceFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the search filter field.</p>
     */
    inline SystemInstanceFilter& WithName(SystemInstanceFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search. </p>
     */
    inline const Aws::Vector<Aws::String>& GetValue() const{ return m_value; }

    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search. </p>
     */
    inline void SetValue(const Aws::Vector<Aws::String>& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search. </p>
     */
    inline void SetValue(Aws::Vector<Aws::String>&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search. </p>
     */
    inline SystemInstanceFilter& WithValue(const Aws::Vector<Aws::String>& value) { SetValue(value); return *this;}

    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search. </p>
     */
    inline SystemInstanceFilter& WithValue(Aws::Vector<Aws::String>&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search. </p>
     */
    inline SystemInstanceFilter& AddValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value.push_back(value); return *this; }

    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search. </p>
     */
    inline SystemInstanceFilter& AddValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search. </p>
     */
    inline SystemInstanceFilter& AddValue(const char* value) { m_valueHasBeenSet = true; m_value.push_back(value); return *this; }

  private:

    SystemInstanceFilterName m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
