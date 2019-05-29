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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/InsightResultValue.h>
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
   * <p>The insight results returned by the <code>GetInsightResults</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/InsightResults">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API InsightResults
  {
  public:
    InsightResults();
    InsightResults(Aws::Utils::Json::JsonView jsonValue);
    InsightResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the insight whose results are returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline const Aws::String& GetInsightArn() const{ return m_insightArn; }

    /**
     * <p>The ARN of the insight whose results are returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline bool InsightArnHasBeenSet() const { return m_insightArnHasBeenSet; }

    /**
     * <p>The ARN of the insight whose results are returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline void SetInsightArn(const Aws::String& value) { m_insightArnHasBeenSet = true; m_insightArn = value; }

    /**
     * <p>The ARN of the insight whose results are returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline void SetInsightArn(Aws::String&& value) { m_insightArnHasBeenSet = true; m_insightArn = std::move(value); }

    /**
     * <p>The ARN of the insight whose results are returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline void SetInsightArn(const char* value) { m_insightArnHasBeenSet = true; m_insightArn.assign(value); }

    /**
     * <p>The ARN of the insight whose results are returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline InsightResults& WithInsightArn(const Aws::String& value) { SetInsightArn(value); return *this;}

    /**
     * <p>The ARN of the insight whose results are returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline InsightResults& WithInsightArn(Aws::String&& value) { SetInsightArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the insight whose results are returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline InsightResults& WithInsightArn(const char* value) { SetInsightArn(value); return *this;}


    /**
     * <p>The attribute that the findings are grouped by for the insight whose results
     * are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline const Aws::String& GetGroupByAttribute() const{ return m_groupByAttribute; }

    /**
     * <p>The attribute that the findings are grouped by for the insight whose results
     * are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline bool GroupByAttributeHasBeenSet() const { return m_groupByAttributeHasBeenSet; }

    /**
     * <p>The attribute that the findings are grouped by for the insight whose results
     * are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline void SetGroupByAttribute(const Aws::String& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = value; }

    /**
     * <p>The attribute that the findings are grouped by for the insight whose results
     * are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline void SetGroupByAttribute(Aws::String&& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = std::move(value); }

    /**
     * <p>The attribute that the findings are grouped by for the insight whose results
     * are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline void SetGroupByAttribute(const char* value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute.assign(value); }

    /**
     * <p>The attribute that the findings are grouped by for the insight whose results
     * are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline InsightResults& WithGroupByAttribute(const Aws::String& value) { SetGroupByAttribute(value); return *this;}

    /**
     * <p>The attribute that the findings are grouped by for the insight whose results
     * are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline InsightResults& WithGroupByAttribute(Aws::String&& value) { SetGroupByAttribute(std::move(value)); return *this;}

    /**
     * <p>The attribute that the findings are grouped by for the insight whose results
     * are returned by the <code>GetInsightResults</code> operation.</p>
     */
    inline InsightResults& WithGroupByAttribute(const char* value) { SetGroupByAttribute(value); return *this;}


    /**
     * <p>The list of insight result values returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline const Aws::Vector<InsightResultValue>& GetResultValues() const{ return m_resultValues; }

    /**
     * <p>The list of insight result values returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline bool ResultValuesHasBeenSet() const { return m_resultValuesHasBeenSet; }

    /**
     * <p>The list of insight result values returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline void SetResultValues(const Aws::Vector<InsightResultValue>& value) { m_resultValuesHasBeenSet = true; m_resultValues = value; }

    /**
     * <p>The list of insight result values returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline void SetResultValues(Aws::Vector<InsightResultValue>&& value) { m_resultValuesHasBeenSet = true; m_resultValues = std::move(value); }

    /**
     * <p>The list of insight result values returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline InsightResults& WithResultValues(const Aws::Vector<InsightResultValue>& value) { SetResultValues(value); return *this;}

    /**
     * <p>The list of insight result values returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline InsightResults& WithResultValues(Aws::Vector<InsightResultValue>&& value) { SetResultValues(std::move(value)); return *this;}

    /**
     * <p>The list of insight result values returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline InsightResults& AddResultValues(const InsightResultValue& value) { m_resultValuesHasBeenSet = true; m_resultValues.push_back(value); return *this; }

    /**
     * <p>The list of insight result values returned by the
     * <code>GetInsightResults</code> operation.</p>
     */
    inline InsightResults& AddResultValues(InsightResultValue&& value) { m_resultValuesHasBeenSet = true; m_resultValues.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_insightArn;
    bool m_insightArnHasBeenSet;

    Aws::String m_groupByAttribute;
    bool m_groupByAttributeHasBeenSet;

    Aws::Vector<InsightResultValue> m_resultValues;
    bool m_resultValuesHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
