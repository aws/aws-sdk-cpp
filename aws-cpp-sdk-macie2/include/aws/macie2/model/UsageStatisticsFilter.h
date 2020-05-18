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
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/UsageStatisticsFilterKey.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies criteria for filtering the results of a query for account quotas
   * and usage data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UsageStatisticsFilter">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API UsageStatisticsFilter
  {
  public:
    UsageStatisticsFilter();
    UsageStatisticsFilter(Aws::Utils::Json::JsonView jsonValue);
    UsageStatisticsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field to use to filter the results. The only supported value is
     * accountId.</p>
     */
    inline const UsageStatisticsFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The field to use to filter the results. The only supported value is
     * accountId.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The field to use to filter the results. The only supported value is
     * accountId.</p>
     */
    inline void SetKey(const UsageStatisticsFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The field to use to filter the results. The only supported value is
     * accountId.</p>
     */
    inline void SetKey(UsageStatisticsFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The field to use to filter the results. The only supported value is
     * accountId.</p>
     */
    inline UsageStatisticsFilter& WithKey(const UsageStatisticsFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The field to use to filter the results. The only supported value is
     * accountId.</p>
     */
    inline UsageStatisticsFilter& WithKey(UsageStatisticsFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>An array that lists the AWS account ID for each account to include in the
     * results.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>An array that lists the AWS account ID for each account to include in the
     * results.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>An array that lists the AWS account ID for each account to include in the
     * results.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>An array that lists the AWS account ID for each account to include in the
     * results.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>An array that lists the AWS account ID for each account to include in the
     * results.</p>
     */
    inline UsageStatisticsFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>An array that lists the AWS account ID for each account to include in the
     * results.</p>
     */
    inline UsageStatisticsFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>An array that lists the AWS account ID for each account to include in the
     * results.</p>
     */
    inline UsageStatisticsFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>An array that lists the AWS account ID for each account to include in the
     * results.</p>
     */
    inline UsageStatisticsFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that lists the AWS account ID for each account to include in the
     * results.</p>
     */
    inline UsageStatisticsFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    UsageStatisticsFilterKey m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
