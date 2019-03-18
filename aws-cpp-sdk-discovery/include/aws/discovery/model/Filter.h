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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p>A filter that can use conditional operators.</p> <p>For more information
   * about filters, see <a
   * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html">Querying
   * Discovered Configuration Items</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/Filter">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API Filter
  {
  public:
    Filter();
    Filter(Aws::Utils::Json::JsonView jsonValue);
    Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline Filter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline Filter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline Filter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A string value on which to filter. For example, if you choose the
     * <code>destinationServer.osVersion</code> filter name, you could specify
     * <code>Ubuntu</code> for the value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>A string value on which to filter. For example, if you choose the
     * <code>destinationServer.osVersion</code> filter name, you could specify
     * <code>Ubuntu</code> for the value.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>A string value on which to filter. For example, if you choose the
     * <code>destinationServer.osVersion</code> filter name, you could specify
     * <code>Ubuntu</code> for the value.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>A string value on which to filter. For example, if you choose the
     * <code>destinationServer.osVersion</code> filter name, you could specify
     * <code>Ubuntu</code> for the value.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>A string value on which to filter. For example, if you choose the
     * <code>destinationServer.osVersion</code> filter name, you could specify
     * <code>Ubuntu</code> for the value.</p>
     */
    inline Filter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>A string value on which to filter. For example, if you choose the
     * <code>destinationServer.osVersion</code> filter name, you could specify
     * <code>Ubuntu</code> for the value.</p>
     */
    inline Filter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>A string value on which to filter. For example, if you choose the
     * <code>destinationServer.osVersion</code> filter name, you could specify
     * <code>Ubuntu</code> for the value.</p>
     */
    inline Filter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>A string value on which to filter. For example, if you choose the
     * <code>destinationServer.osVersion</code> filter name, you could specify
     * <code>Ubuntu</code> for the value.</p>
     */
    inline Filter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>A string value on which to filter. For example, if you choose the
     * <code>destinationServer.osVersion</code> filter name, you could specify
     * <code>Ubuntu</code> for the value.</p>
     */
    inline Filter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>A conditional operator. The following operators are valid: EQUALS,
     * NOT_EQUALS, CONTAINS, NOT_CONTAINS. If you specify multiple filters, the system
     * utilizes all filters as though concatenated by <i>AND</i>. If you specify
     * multiple values for a particular filter, the system differentiates the values
     * using <i>OR</i>. Calling either <i>DescribeConfigurations</i> or
     * <i>ListConfigurations</i> returns attributes of matching configuration
     * items.</p>
     */
    inline const Aws::String& GetCondition() const{ return m_condition; }

    /**
     * <p>A conditional operator. The following operators are valid: EQUALS,
     * NOT_EQUALS, CONTAINS, NOT_CONTAINS. If you specify multiple filters, the system
     * utilizes all filters as though concatenated by <i>AND</i>. If you specify
     * multiple values for a particular filter, the system differentiates the values
     * using <i>OR</i>. Calling either <i>DescribeConfigurations</i> or
     * <i>ListConfigurations</i> returns attributes of matching configuration
     * items.</p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>A conditional operator. The following operators are valid: EQUALS,
     * NOT_EQUALS, CONTAINS, NOT_CONTAINS. If you specify multiple filters, the system
     * utilizes all filters as though concatenated by <i>AND</i>. If you specify
     * multiple values for a particular filter, the system differentiates the values
     * using <i>OR</i>. Calling either <i>DescribeConfigurations</i> or
     * <i>ListConfigurations</i> returns attributes of matching configuration
     * items.</p>
     */
    inline void SetCondition(const Aws::String& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>A conditional operator. The following operators are valid: EQUALS,
     * NOT_EQUALS, CONTAINS, NOT_CONTAINS. If you specify multiple filters, the system
     * utilizes all filters as though concatenated by <i>AND</i>. If you specify
     * multiple values for a particular filter, the system differentiates the values
     * using <i>OR</i>. Calling either <i>DescribeConfigurations</i> or
     * <i>ListConfigurations</i> returns attributes of matching configuration
     * items.</p>
     */
    inline void SetCondition(Aws::String&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>A conditional operator. The following operators are valid: EQUALS,
     * NOT_EQUALS, CONTAINS, NOT_CONTAINS. If you specify multiple filters, the system
     * utilizes all filters as though concatenated by <i>AND</i>. If you specify
     * multiple values for a particular filter, the system differentiates the values
     * using <i>OR</i>. Calling either <i>DescribeConfigurations</i> or
     * <i>ListConfigurations</i> returns attributes of matching configuration
     * items.</p>
     */
    inline void SetCondition(const char* value) { m_conditionHasBeenSet = true; m_condition.assign(value); }

    /**
     * <p>A conditional operator. The following operators are valid: EQUALS,
     * NOT_EQUALS, CONTAINS, NOT_CONTAINS. If you specify multiple filters, the system
     * utilizes all filters as though concatenated by <i>AND</i>. If you specify
     * multiple values for a particular filter, the system differentiates the values
     * using <i>OR</i>. Calling either <i>DescribeConfigurations</i> or
     * <i>ListConfigurations</i> returns attributes of matching configuration
     * items.</p>
     */
    inline Filter& WithCondition(const Aws::String& value) { SetCondition(value); return *this;}

    /**
     * <p>A conditional operator. The following operators are valid: EQUALS,
     * NOT_EQUALS, CONTAINS, NOT_CONTAINS. If you specify multiple filters, the system
     * utilizes all filters as though concatenated by <i>AND</i>. If you specify
     * multiple values for a particular filter, the system differentiates the values
     * using <i>OR</i>. Calling either <i>DescribeConfigurations</i> or
     * <i>ListConfigurations</i> returns attributes of matching configuration
     * items.</p>
     */
    inline Filter& WithCondition(Aws::String&& value) { SetCondition(std::move(value)); return *this;}

    /**
     * <p>A conditional operator. The following operators are valid: EQUALS,
     * NOT_EQUALS, CONTAINS, NOT_CONTAINS. If you specify multiple filters, the system
     * utilizes all filters as though concatenated by <i>AND</i>. If you specify
     * multiple values for a particular filter, the system differentiates the values
     * using <i>OR</i>. Calling either <i>DescribeConfigurations</i> or
     * <i>ListConfigurations</i> returns attributes of matching configuration
     * items.</p>
     */
    inline Filter& WithCondition(const char* value) { SetCondition(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;

    Aws::String m_condition;
    bool m_conditionHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
