/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsFilter.h>
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
   * <p>One or more aggregators for viewing counts of OpsData using different
   * dimensions such as <code>Source</code>, <code>CreatedTime</code>, or
   * <code>Source and CreatedTime</code>, to name a few.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsAggregator">AWS
   * API Reference</a></p>
   */
  class OpsAggregator
  {
  public:
    AWS_SSM_API OpsAggregator();
    AWS_SSM_API OpsAggregator(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsAggregator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Either a <code>Range</code> or <code>Count</code> aggregator for limiting an
     * OpsData summary.</p>
     */
    inline const Aws::String& GetAggregatorType() const{ return m_aggregatorType; }

    /**
     * <p>Either a <code>Range</code> or <code>Count</code> aggregator for limiting an
     * OpsData summary.</p>
     */
    inline bool AggregatorTypeHasBeenSet() const { return m_aggregatorTypeHasBeenSet; }

    /**
     * <p>Either a <code>Range</code> or <code>Count</code> aggregator for limiting an
     * OpsData summary.</p>
     */
    inline void SetAggregatorType(const Aws::String& value) { m_aggregatorTypeHasBeenSet = true; m_aggregatorType = value; }

    /**
     * <p>Either a <code>Range</code> or <code>Count</code> aggregator for limiting an
     * OpsData summary.</p>
     */
    inline void SetAggregatorType(Aws::String&& value) { m_aggregatorTypeHasBeenSet = true; m_aggregatorType = std::move(value); }

    /**
     * <p>Either a <code>Range</code> or <code>Count</code> aggregator for limiting an
     * OpsData summary.</p>
     */
    inline void SetAggregatorType(const char* value) { m_aggregatorTypeHasBeenSet = true; m_aggregatorType.assign(value); }

    /**
     * <p>Either a <code>Range</code> or <code>Count</code> aggregator for limiting an
     * OpsData summary.</p>
     */
    inline OpsAggregator& WithAggregatorType(const Aws::String& value) { SetAggregatorType(value); return *this;}

    /**
     * <p>Either a <code>Range</code> or <code>Count</code> aggregator for limiting an
     * OpsData summary.</p>
     */
    inline OpsAggregator& WithAggregatorType(Aws::String&& value) { SetAggregatorType(std::move(value)); return *this;}

    /**
     * <p>Either a <code>Range</code> or <code>Count</code> aggregator for limiting an
     * OpsData summary.</p>
     */
    inline OpsAggregator& WithAggregatorType(const char* value) { SetAggregatorType(value); return *this;}


    /**
     * <p>The data type name to use for viewing counts of OpsData.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The data type name to use for viewing counts of OpsData.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The data type name to use for viewing counts of OpsData.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The data type name to use for viewing counts of OpsData.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The data type name to use for viewing counts of OpsData.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The data type name to use for viewing counts of OpsData.</p>
     */
    inline OpsAggregator& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The data type name to use for viewing counts of OpsData.</p>
     */
    inline OpsAggregator& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The data type name to use for viewing counts of OpsData.</p>
     */
    inline OpsAggregator& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The name of an OpsData attribute on which to limit the count of OpsData.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of an OpsData attribute on which to limit the count of OpsData.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of an OpsData attribute on which to limit the count of OpsData.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of an OpsData attribute on which to limit the count of OpsData.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of an OpsData attribute on which to limit the count of OpsData.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of an OpsData attribute on which to limit the count of OpsData.</p>
     */
    inline OpsAggregator& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of an OpsData attribute on which to limit the count of OpsData.</p>
     */
    inline OpsAggregator& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of an OpsData attribute on which to limit the count of OpsData.</p>
     */
    inline OpsAggregator& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The aggregator value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The aggregator value.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The aggregator value.</p>
     */
    inline void SetValues(const Aws::Map<Aws::String, Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The aggregator value.</p>
     */
    inline void SetValues(Aws::Map<Aws::String, Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The aggregator value.</p>
     */
    inline OpsAggregator& WithValues(const Aws::Map<Aws::String, Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The aggregator value.</p>
     */
    inline OpsAggregator& WithValues(Aws::Map<Aws::String, Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The aggregator value.</p>
     */
    inline OpsAggregator& AddValues(const Aws::String& key, const Aws::String& value) { m_valuesHasBeenSet = true; m_values.emplace(key, value); return *this; }

    /**
     * <p>The aggregator value.</p>
     */
    inline OpsAggregator& AddValues(Aws::String&& key, const Aws::String& value) { m_valuesHasBeenSet = true; m_values.emplace(std::move(key), value); return *this; }

    /**
     * <p>The aggregator value.</p>
     */
    inline OpsAggregator& AddValues(const Aws::String& key, Aws::String&& value) { m_valuesHasBeenSet = true; m_values.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The aggregator value.</p>
     */
    inline OpsAggregator& AddValues(Aws::String&& key, Aws::String&& value) { m_valuesHasBeenSet = true; m_values.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The aggregator value.</p>
     */
    inline OpsAggregator& AddValues(const char* key, Aws::String&& value) { m_valuesHasBeenSet = true; m_values.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The aggregator value.</p>
     */
    inline OpsAggregator& AddValues(Aws::String&& key, const char* value) { m_valuesHasBeenSet = true; m_values.emplace(std::move(key), value); return *this; }

    /**
     * <p>The aggregator value.</p>
     */
    inline OpsAggregator& AddValues(const char* key, const char* value) { m_valuesHasBeenSet = true; m_values.emplace(key, value); return *this; }


    /**
     * <p>The aggregator filters.</p>
     */
    inline const Aws::Vector<OpsFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The aggregator filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The aggregator filters.</p>
     */
    inline void SetFilters(const Aws::Vector<OpsFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The aggregator filters.</p>
     */
    inline void SetFilters(Aws::Vector<OpsFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The aggregator filters.</p>
     */
    inline OpsAggregator& WithFilters(const Aws::Vector<OpsFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The aggregator filters.</p>
     */
    inline OpsAggregator& WithFilters(Aws::Vector<OpsFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The aggregator filters.</p>
     */
    inline OpsAggregator& AddFilters(const OpsFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The aggregator filters.</p>
     */
    inline OpsAggregator& AddFilters(OpsFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>A nested aggregator for viewing counts of OpsData.</p>
     */
    inline const Aws::Vector<OpsAggregator>& GetAggregators() const{ return m_aggregators; }

    /**
     * <p>A nested aggregator for viewing counts of OpsData.</p>
     */
    inline bool AggregatorsHasBeenSet() const { return m_aggregatorsHasBeenSet; }

    /**
     * <p>A nested aggregator for viewing counts of OpsData.</p>
     */
    inline void SetAggregators(const Aws::Vector<OpsAggregator>& value) { m_aggregatorsHasBeenSet = true; m_aggregators = value; }

    /**
     * <p>A nested aggregator for viewing counts of OpsData.</p>
     */
    inline void SetAggregators(Aws::Vector<OpsAggregator>&& value) { m_aggregatorsHasBeenSet = true; m_aggregators = std::move(value); }

    /**
     * <p>A nested aggregator for viewing counts of OpsData.</p>
     */
    inline OpsAggregator& WithAggregators(const Aws::Vector<OpsAggregator>& value) { SetAggregators(value); return *this;}

    /**
     * <p>A nested aggregator for viewing counts of OpsData.</p>
     */
    inline OpsAggregator& WithAggregators(Aws::Vector<OpsAggregator>&& value) { SetAggregators(std::move(value)); return *this;}

    /**
     * <p>A nested aggregator for viewing counts of OpsData.</p>
     */
    inline OpsAggregator& AddAggregators(const OpsAggregator& value) { m_aggregatorsHasBeenSet = true; m_aggregators.push_back(value); return *this; }

    /**
     * <p>A nested aggregator for viewing counts of OpsData.</p>
     */
    inline OpsAggregator& AddAggregators(OpsAggregator&& value) { m_aggregatorsHasBeenSet = true; m_aggregators.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_aggregatorType;
    bool m_aggregatorTypeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<OpsFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<OpsAggregator> m_aggregators;
    bool m_aggregatorsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
