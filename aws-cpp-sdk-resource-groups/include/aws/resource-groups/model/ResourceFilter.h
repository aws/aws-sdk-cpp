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
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/ResourceFilterName.h>
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
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>A filter name and value pair that is used to obtain more specific results
   * from a list of resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ResourceFilter">AWS
   * API Reference</a></p>
   */
  class AWS_RESOURCEGROUPS_API ResourceFilter
  {
  public:
    ResourceFilter();
    ResourceFilter(Aws::Utils::Json::JsonView jsonValue);
    ResourceFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline const ResourceFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline void SetName(const ResourceFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline void SetName(ResourceFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline ResourceFilter& WithName(const ResourceFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline ResourceFilter& WithName(ResourceFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>One or more filter values. Allowed filter values vary by resource filter
     * name, and are case-sensitive.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>One or more filter values. Allowed filter values vary by resource filter
     * name, and are case-sensitive.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>One or more filter values. Allowed filter values vary by resource filter
     * name, and are case-sensitive.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>One or more filter values. Allowed filter values vary by resource filter
     * name, and are case-sensitive.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>One or more filter values. Allowed filter values vary by resource filter
     * name, and are case-sensitive.</p>
     */
    inline ResourceFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>One or more filter values. Allowed filter values vary by resource filter
     * name, and are case-sensitive.</p>
     */
    inline ResourceFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>One or more filter values. Allowed filter values vary by resource filter
     * name, and are case-sensitive.</p>
     */
    inline ResourceFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>One or more filter values. Allowed filter values vary by resource filter
     * name, and are case-sensitive.</p>
     */
    inline ResourceFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more filter values. Allowed filter values vary by resource filter
     * name, and are case-sensitive.</p>
     */
    inline ResourceFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    ResourceFilterName m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
