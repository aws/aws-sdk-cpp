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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/model/FlowTemplateFilterName.h>
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
   * <p>An object that filters a workflow search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/FlowTemplateFilter">AWS
   * API Reference</a></p>
   */
  class AWS_IOTTHINGSGRAPH_API FlowTemplateFilter
  {
  public:
    FlowTemplateFilter();
    FlowTemplateFilter(Aws::Utils::Json::JsonView jsonValue);
    FlowTemplateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the search filter field.</p>
     */
    inline const FlowTemplateFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the search filter field.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the search filter field.</p>
     */
    inline void SetName(const FlowTemplateFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the search filter field.</p>
     */
    inline void SetName(FlowTemplateFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the search filter field.</p>
     */
    inline FlowTemplateFilter& WithName(const FlowTemplateFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the search filter field.</p>
     */
    inline FlowTemplateFilter& WithName(FlowTemplateFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValue() const{ return m_value; }

    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search.</p>
     */
    inline void SetValue(const Aws::Vector<Aws::String>& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search.</p>
     */
    inline void SetValue(Aws::Vector<Aws::String>&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search.</p>
     */
    inline FlowTemplateFilter& WithValue(const Aws::Vector<Aws::String>& value) { SetValue(value); return *this;}

    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search.</p>
     */
    inline FlowTemplateFilter& WithValue(Aws::Vector<Aws::String>&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search.</p>
     */
    inline FlowTemplateFilter& AddValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value.push_back(value); return *this; }

    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search.</p>
     */
    inline FlowTemplateFilter& AddValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search.</p>
     */
    inline FlowTemplateFilter& AddValue(const char* value) { m_valueHasBeenSet = true; m_value.push_back(value); return *this; }

  private:

    FlowTemplateFilterName m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
