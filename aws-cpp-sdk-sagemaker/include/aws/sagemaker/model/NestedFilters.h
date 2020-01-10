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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Filter.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Defines a list of <code>NestedFilters</code> objects. To satisfy the
   * conditions specified in the <code>NestedFilters</code> call, a resource must
   * satisfy the conditions of all of the filters.</p> <p>For example, you could
   * define a <code>NestedFilters</code> using the training job's
   * <code>InputDataConfig</code> property to filter on <code>Channel</code> objects.
   * </p> <p>A <code>NestedFilters</code> object contains multiple filters. For
   * example, to find all training jobs whose name contains <code>train</code> and
   * that have <code>cat/data</code> in their <code>S3Uri</code> (specified in
   * <code>InputDataConfig</code>), you need to create a <code>NestedFilters</code>
   * object that specifies the <code>InputDataConfig</code> property with the
   * following <code>Filter</code> objects:</p> <ul> <li> <p>
   * <code>'{Name:"InputDataConfig.ChannelName", "Operator":"EQUALS",
   * "Value":"train"}',</code> </p> </li> <li> <p>
   * <code>'{Name:"InputDataConfig.DataSource.S3DataSource.S3Uri",
   * "Operator":"CONTAINS", "Value":"cat/data"}'</code> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/NestedFilters">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API NestedFilters
  {
  public:
    NestedFilters();
    NestedFilters(Aws::Utils::Json::JsonView jsonValue);
    NestedFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the property to use in the nested filters. The value must match a
     * listed property name, such as <code>InputDataConfig</code>.</p>
     */
    inline const Aws::String& GetNestedPropertyName() const{ return m_nestedPropertyName; }

    /**
     * <p>The name of the property to use in the nested filters. The value must match a
     * listed property name, such as <code>InputDataConfig</code>.</p>
     */
    inline bool NestedPropertyNameHasBeenSet() const { return m_nestedPropertyNameHasBeenSet; }

    /**
     * <p>The name of the property to use in the nested filters. The value must match a
     * listed property name, such as <code>InputDataConfig</code>.</p>
     */
    inline void SetNestedPropertyName(const Aws::String& value) { m_nestedPropertyNameHasBeenSet = true; m_nestedPropertyName = value; }

    /**
     * <p>The name of the property to use in the nested filters. The value must match a
     * listed property name, such as <code>InputDataConfig</code>.</p>
     */
    inline void SetNestedPropertyName(Aws::String&& value) { m_nestedPropertyNameHasBeenSet = true; m_nestedPropertyName = std::move(value); }

    /**
     * <p>The name of the property to use in the nested filters. The value must match a
     * listed property name, such as <code>InputDataConfig</code>.</p>
     */
    inline void SetNestedPropertyName(const char* value) { m_nestedPropertyNameHasBeenSet = true; m_nestedPropertyName.assign(value); }

    /**
     * <p>The name of the property to use in the nested filters. The value must match a
     * listed property name, such as <code>InputDataConfig</code>.</p>
     */
    inline NestedFilters& WithNestedPropertyName(const Aws::String& value) { SetNestedPropertyName(value); return *this;}

    /**
     * <p>The name of the property to use in the nested filters. The value must match a
     * listed property name, such as <code>InputDataConfig</code>.</p>
     */
    inline NestedFilters& WithNestedPropertyName(Aws::String&& value) { SetNestedPropertyName(std::move(value)); return *this;}

    /**
     * <p>The name of the property to use in the nested filters. The value must match a
     * listed property name, such as <code>InputDataConfig</code>.</p>
     */
    inline NestedFilters& WithNestedPropertyName(const char* value) { SetNestedPropertyName(value); return *this;}


    /**
     * <p>A list of filters. Each filter acts on a property. Filters must contain at
     * least one <code>Filters</code> value. For example, a <code>NestedFilters</code>
     * call might include a filter on the <code>PropertyName</code> parameter of the
     * <code>InputDataConfig</code> property:
     * <code>InputDataConfig.DataSource.S3DataSource.S3Uri</code>.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A list of filters. Each filter acts on a property. Filters must contain at
     * least one <code>Filters</code> value. For example, a <code>NestedFilters</code>
     * call might include a filter on the <code>PropertyName</code> parameter of the
     * <code>InputDataConfig</code> property:
     * <code>InputDataConfig.DataSource.S3DataSource.S3Uri</code>.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A list of filters. Each filter acts on a property. Filters must contain at
     * least one <code>Filters</code> value. For example, a <code>NestedFilters</code>
     * call might include a filter on the <code>PropertyName</code> parameter of the
     * <code>InputDataConfig</code> property:
     * <code>InputDataConfig.DataSource.S3DataSource.S3Uri</code>.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A list of filters. Each filter acts on a property. Filters must contain at
     * least one <code>Filters</code> value. For example, a <code>NestedFilters</code>
     * call might include a filter on the <code>PropertyName</code> parameter of the
     * <code>InputDataConfig</code> property:
     * <code>InputDataConfig.DataSource.S3DataSource.S3Uri</code>.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A list of filters. Each filter acts on a property. Filters must contain at
     * least one <code>Filters</code> value. For example, a <code>NestedFilters</code>
     * call might include a filter on the <code>PropertyName</code> parameter of the
     * <code>InputDataConfig</code> property:
     * <code>InputDataConfig.DataSource.S3DataSource.S3Uri</code>.</p>
     */
    inline NestedFilters& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A list of filters. Each filter acts on a property. Filters must contain at
     * least one <code>Filters</code> value. For example, a <code>NestedFilters</code>
     * call might include a filter on the <code>PropertyName</code> parameter of the
     * <code>InputDataConfig</code> property:
     * <code>InputDataConfig.DataSource.S3DataSource.S3Uri</code>.</p>
     */
    inline NestedFilters& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A list of filters. Each filter acts on a property. Filters must contain at
     * least one <code>Filters</code> value. For example, a <code>NestedFilters</code>
     * call might include a filter on the <code>PropertyName</code> parameter of the
     * <code>InputDataConfig</code> property:
     * <code>InputDataConfig.DataSource.S3DataSource.S3Uri</code>.</p>
     */
    inline NestedFilters& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A list of filters. Each filter acts on a property. Filters must contain at
     * least one <code>Filters</code> value. For example, a <code>NestedFilters</code>
     * call might include a filter on the <code>PropertyName</code> parameter of the
     * <code>InputDataConfig</code> property:
     * <code>InputDataConfig.DataSource.S3DataSource.S3Uri</code>.</p>
     */
    inline NestedFilters& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nestedPropertyName;
    bool m_nestedPropertyNameHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
