/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The insight result values returned by the <code>GetInsightResults</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/InsightResultValue">AWS
   * API Reference</a></p>
   */
  class InsightResultValue
  {
  public:
    AWS_SECURITYHUB_API InsightResultValue();
    AWS_SECURITYHUB_API InsightResultValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API InsightResultValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of the attribute that the findings are grouped by for the insight
     * whose results are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline const Aws::String& GetGroupByAttributeValue() const{ return m_groupByAttributeValue; }

    /**
     * <p>The value of the attribute that the findings are grouped by for the insight
     * whose results are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline bool GroupByAttributeValueHasBeenSet() const { return m_groupByAttributeValueHasBeenSet; }

    /**
     * <p>The value of the attribute that the findings are grouped by for the insight
     * whose results are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline void SetGroupByAttributeValue(const Aws::String& value) { m_groupByAttributeValueHasBeenSet = true; m_groupByAttributeValue = value; }

    /**
     * <p>The value of the attribute that the findings are grouped by for the insight
     * whose results are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline void SetGroupByAttributeValue(Aws::String&& value) { m_groupByAttributeValueHasBeenSet = true; m_groupByAttributeValue = std::move(value); }

    /**
     * <p>The value of the attribute that the findings are grouped by for the insight
     * whose results are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline void SetGroupByAttributeValue(const char* value) { m_groupByAttributeValueHasBeenSet = true; m_groupByAttributeValue.assign(value); }

    /**
     * <p>The value of the attribute that the findings are grouped by for the insight
     * whose results are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline InsightResultValue& WithGroupByAttributeValue(const Aws::String& value) { SetGroupByAttributeValue(value); return *this;}

    /**
     * <p>The value of the attribute that the findings are grouped by for the insight
     * whose results are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline InsightResultValue& WithGroupByAttributeValue(Aws::String&& value) { SetGroupByAttributeValue(std::move(value)); return *this;}

    /**
     * <p>The value of the attribute that the findings are grouped by for the insight
     * whose results are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline InsightResultValue& WithGroupByAttributeValue(const char* value) { SetGroupByAttributeValue(value); return *this;}


    /**
     * <p>The number of findings returned for each
     * <code>GroupByAttributeValue</code>.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of findings returned for each
     * <code>GroupByAttributeValue</code>.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of findings returned for each
     * <code>GroupByAttributeValue</code>.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of findings returned for each
     * <code>GroupByAttributeValue</code>.</p>
     */
    inline InsightResultValue& WithCount(int value) { SetCount(value); return *this;}

  private:

    Aws::String m_groupByAttributeValue;
    bool m_groupByAttributeValueHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
