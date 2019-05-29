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
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsSecurityFindingFilters.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class AWS_SECURITYHUB_API UpdateInsightRequest : public SecurityHubRequest
  {
  public:
    UpdateInsightRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInsight"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the insight that you want to update.</p>
     */
    inline const Aws::String& GetInsightArn() const{ return m_insightArn; }

    /**
     * <p>The ARN of the insight that you want to update.</p>
     */
    inline bool InsightArnHasBeenSet() const { return m_insightArnHasBeenSet; }

    /**
     * <p>The ARN of the insight that you want to update.</p>
     */
    inline void SetInsightArn(const Aws::String& value) { m_insightArnHasBeenSet = true; m_insightArn = value; }

    /**
     * <p>The ARN of the insight that you want to update.</p>
     */
    inline void SetInsightArn(Aws::String&& value) { m_insightArnHasBeenSet = true; m_insightArn = std::move(value); }

    /**
     * <p>The ARN of the insight that you want to update.</p>
     */
    inline void SetInsightArn(const char* value) { m_insightArnHasBeenSet = true; m_insightArn.assign(value); }

    /**
     * <p>The ARN of the insight that you want to update.</p>
     */
    inline UpdateInsightRequest& WithInsightArn(const Aws::String& value) { SetInsightArn(value); return *this;}

    /**
     * <p>The ARN of the insight that you want to update.</p>
     */
    inline UpdateInsightRequest& WithInsightArn(Aws::String&& value) { SetInsightArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the insight that you want to update.</p>
     */
    inline UpdateInsightRequest& WithInsightArn(const char* value) { SetInsightArn(value); return *this;}


    /**
     * <p>The updated name for the insight.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The updated name for the insight.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The updated name for the insight.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The updated name for the insight.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The updated name for the insight.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The updated name for the insight.</p>
     */
    inline UpdateInsightRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The updated name for the insight.</p>
     */
    inline UpdateInsightRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The updated name for the insight.</p>
     */
    inline UpdateInsightRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The updated filters that define this insight.</p>
     */
    inline const AwsSecurityFindingFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>The updated filters that define this insight.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The updated filters that define this insight.</p>
     */
    inline void SetFilters(const AwsSecurityFindingFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The updated filters that define this insight.</p>
     */
    inline void SetFilters(AwsSecurityFindingFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The updated filters that define this insight.</p>
     */
    inline UpdateInsightRequest& WithFilters(const AwsSecurityFindingFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>The updated filters that define this insight.</p>
     */
    inline UpdateInsightRequest& WithFilters(AwsSecurityFindingFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The updated <code>GroupBy</code> attribute that defines this insight.</p>
     */
    inline const Aws::String& GetGroupByAttribute() const{ return m_groupByAttribute; }

    /**
     * <p>The updated <code>GroupBy</code> attribute that defines this insight.</p>
     */
    inline bool GroupByAttributeHasBeenSet() const { return m_groupByAttributeHasBeenSet; }

    /**
     * <p>The updated <code>GroupBy</code> attribute that defines this insight.</p>
     */
    inline void SetGroupByAttribute(const Aws::String& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = value; }

    /**
     * <p>The updated <code>GroupBy</code> attribute that defines this insight.</p>
     */
    inline void SetGroupByAttribute(Aws::String&& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = std::move(value); }

    /**
     * <p>The updated <code>GroupBy</code> attribute that defines this insight.</p>
     */
    inline void SetGroupByAttribute(const char* value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute.assign(value); }

    /**
     * <p>The updated <code>GroupBy</code> attribute that defines this insight.</p>
     */
    inline UpdateInsightRequest& WithGroupByAttribute(const Aws::String& value) { SetGroupByAttribute(value); return *this;}

    /**
     * <p>The updated <code>GroupBy</code> attribute that defines this insight.</p>
     */
    inline UpdateInsightRequest& WithGroupByAttribute(Aws::String&& value) { SetGroupByAttribute(std::move(value)); return *this;}

    /**
     * <p>The updated <code>GroupBy</code> attribute that defines this insight.</p>
     */
    inline UpdateInsightRequest& WithGroupByAttribute(const char* value) { SetGroupByAttribute(value); return *this;}

  private:

    Aws::String m_insightArn;
    bool m_insightArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    AwsSecurityFindingFilters m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_groupByAttribute;
    bool m_groupByAttributeHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
