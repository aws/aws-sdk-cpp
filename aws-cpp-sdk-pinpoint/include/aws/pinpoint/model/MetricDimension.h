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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Custom metric dimension<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/MetricDimension">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API MetricDimension
  {
  public:
    MetricDimension();
    MetricDimension(Aws::Utils::Json::JsonView jsonValue);
    MetricDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The operator that you're using to compare metric values. Possible values:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, or EQUAL
     */
    inline const Aws::String& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * The operator that you're using to compare metric values. Possible values:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, or EQUAL
     */
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    /**
     * The operator that you're using to compare metric values. Possible values:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, or EQUAL
     */
    inline void SetComparisonOperator(const Aws::String& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * The operator that you're using to compare metric values. Possible values:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, or EQUAL
     */
    inline void SetComparisonOperator(Aws::String&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * The operator that you're using to compare metric values. Possible values:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, or EQUAL
     */
    inline void SetComparisonOperator(const char* value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator.assign(value); }

    /**
     * The operator that you're using to compare metric values. Possible values:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, or EQUAL
     */
    inline MetricDimension& WithComparisonOperator(const Aws::String& value) { SetComparisonOperator(value); return *this;}

    /**
     * The operator that you're using to compare metric values. Possible values:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, or EQUAL
     */
    inline MetricDimension& WithComparisonOperator(Aws::String&& value) { SetComparisonOperator(std::move(value)); return *this;}

    /**
     * The operator that you're using to compare metric values. Possible values:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, or EQUAL
     */
    inline MetricDimension& WithComparisonOperator(const char* value) { SetComparisonOperator(value); return *this;}


    /**
     * The value to be compared.
     */
    inline double GetValue() const{ return m_value; }

    /**
     * The value to be compared.
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * The value to be compared.
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * The value to be compared.
     */
    inline MetricDimension& WithValue(double value) { SetValue(value); return *this;}

  private:

    Aws::String m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
