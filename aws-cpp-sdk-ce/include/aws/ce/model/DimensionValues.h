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
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/Dimension.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The metadata that you can use to filter and group your results. You can use
   * <code>GetDimensionValues</code> to find specific values.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/DimensionValues">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API DimensionValues
  {
  public:
    DimensionValues();
    DimensionValues(Aws::Utils::Json::JsonView jsonValue);
    DimensionValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The names of the metadata types that you can use to filter and group your
     * results. For example, <code>AZ</code> returns a list of Availability Zones.</p>
     */
    inline const Dimension& GetKey() const{ return m_key; }

    /**
     * <p>The names of the metadata types that you can use to filter and group your
     * results. For example, <code>AZ</code> returns a list of Availability Zones.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The names of the metadata types that you can use to filter and group your
     * results. For example, <code>AZ</code> returns a list of Availability Zones.</p>
     */
    inline void SetKey(const Dimension& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The names of the metadata types that you can use to filter and group your
     * results. For example, <code>AZ</code> returns a list of Availability Zones.</p>
     */
    inline void SetKey(Dimension&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The names of the metadata types that you can use to filter and group your
     * results. For example, <code>AZ</code> returns a list of Availability Zones.</p>
     */
    inline DimensionValues& WithKey(const Dimension& value) { SetKey(value); return *this;}

    /**
     * <p>The names of the metadata types that you can use to filter and group your
     * results. For example, <code>AZ</code> returns a list of Availability Zones.</p>
     */
    inline DimensionValues& WithKey(Dimension&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p> <p>Valid
     * values for the <code>SERVICE</code> dimension are <code>Amazon Elastic Compute
     * Cloud - Compute</code>, <code>Amazon Elasticsearch Service</code>, <code>Amazon
     * ElastiCache</code>, <code>Amazon Redshift</code>, and <code>Amazon Relational
     * Database Service</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p> <p>Valid
     * values for the <code>SERVICE</code> dimension are <code>Amazon Elastic Compute
     * Cloud - Compute</code>, <code>Amazon Elasticsearch Service</code>, <code>Amazon
     * ElastiCache</code>, <code>Amazon Redshift</code>, and <code>Amazon Relational
     * Database Service</code>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p> <p>Valid
     * values for the <code>SERVICE</code> dimension are <code>Amazon Elastic Compute
     * Cloud - Compute</code>, <code>Amazon Elasticsearch Service</code>, <code>Amazon
     * ElastiCache</code>, <code>Amazon Redshift</code>, and <code>Amazon Relational
     * Database Service</code>.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p> <p>Valid
     * values for the <code>SERVICE</code> dimension are <code>Amazon Elastic Compute
     * Cloud - Compute</code>, <code>Amazon Elasticsearch Service</code>, <code>Amazon
     * ElastiCache</code>, <code>Amazon Redshift</code>, and <code>Amazon Relational
     * Database Service</code>.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p> <p>Valid
     * values for the <code>SERVICE</code> dimension are <code>Amazon Elastic Compute
     * Cloud - Compute</code>, <code>Amazon Elasticsearch Service</code>, <code>Amazon
     * ElastiCache</code>, <code>Amazon Redshift</code>, and <code>Amazon Relational
     * Database Service</code>.</p>
     */
    inline DimensionValues& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p> <p>Valid
     * values for the <code>SERVICE</code> dimension are <code>Amazon Elastic Compute
     * Cloud - Compute</code>, <code>Amazon Elasticsearch Service</code>, <code>Amazon
     * ElastiCache</code>, <code>Amazon Redshift</code>, and <code>Amazon Relational
     * Database Service</code>.</p>
     */
    inline DimensionValues& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p> <p>Valid
     * values for the <code>SERVICE</code> dimension are <code>Amazon Elastic Compute
     * Cloud - Compute</code>, <code>Amazon Elasticsearch Service</code>, <code>Amazon
     * ElastiCache</code>, <code>Amazon Redshift</code>, and <code>Amazon Relational
     * Database Service</code>.</p>
     */
    inline DimensionValues& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p> <p>Valid
     * values for the <code>SERVICE</code> dimension are <code>Amazon Elastic Compute
     * Cloud - Compute</code>, <code>Amazon Elasticsearch Service</code>, <code>Amazon
     * ElastiCache</code>, <code>Amazon Redshift</code>, and <code>Amazon Relational
     * Database Service</code>.</p>
     */
    inline DimensionValues& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The metadata values that you can use to filter and group your results. You
     * can use <code>GetDimensionValues</code> to find specific values.</p> <p>Valid
     * values for the <code>SERVICE</code> dimension are <code>Amazon Elastic Compute
     * Cloud - Compute</code>, <code>Amazon Elasticsearch Service</code>, <code>Amazon
     * ElastiCache</code>, <code>Amazon Redshift</code>, and <code>Amazon Relational
     * Database Service</code>.</p>
     */
    inline DimensionValues& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Dimension m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
