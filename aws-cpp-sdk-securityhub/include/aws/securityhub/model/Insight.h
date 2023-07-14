﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsSecurityFindingFilters.h>
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
   * <p>Contains information about a Security Hub insight.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Insight">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API Insight
  {
  public:
    Insight();
    Insight(Aws::Utils::Json::JsonView jsonValue);
    Insight& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline const Aws::String& GetInsightArn() const{ return m_insightArn; }

    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline bool InsightArnHasBeenSet() const { return m_insightArnHasBeenSet; }

    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline void SetInsightArn(const Aws::String& value) { m_insightArnHasBeenSet = true; m_insightArn = value; }

    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline void SetInsightArn(Aws::String&& value) { m_insightArnHasBeenSet = true; m_insightArn = std::move(value); }

    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline void SetInsightArn(const char* value) { m_insightArnHasBeenSet = true; m_insightArn.assign(value); }

    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline Insight& WithInsightArn(const Aws::String& value) { SetInsightArn(value); return *this;}

    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline Insight& WithInsightArn(Aws::String&& value) { SetInsightArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline Insight& WithInsightArn(const char* value) { SetInsightArn(value); return *this;}


    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline Insight& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline Insight& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline Insight& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>One or more attributes used to filter the findings included in the insight.
     * The insight only includes findings that match the criteria defined in the
     * filters.</p>
     */
    inline const AwsSecurityFindingFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more attributes used to filter the findings included in the insight.
     * The insight only includes findings that match the criteria defined in the
     * filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more attributes used to filter the findings included in the insight.
     * The insight only includes findings that match the criteria defined in the
     * filters.</p>
     */
    inline void SetFilters(const AwsSecurityFindingFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more attributes used to filter the findings included in the insight.
     * The insight only includes findings that match the criteria defined in the
     * filters.</p>
     */
    inline void SetFilters(AwsSecurityFindingFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more attributes used to filter the findings included in the insight.
     * The insight only includes findings that match the criteria defined in the
     * filters.</p>
     */
    inline Insight& WithFilters(const AwsSecurityFindingFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more attributes used to filter the findings included in the insight.
     * The insight only includes findings that match the criteria defined in the
     * filters.</p>
     */
    inline Insight& WithFilters(AwsSecurityFindingFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The grouping attribute for the insight's findings. Indicates how to group the
     * matching findings, and identifies the type of item that the insight applies to.
     * For example, if an insight is grouped by resource identifier, then the insight
     * produces a list of resource identifiers.</p>
     */
    inline const Aws::String& GetGroupByAttribute() const{ return m_groupByAttribute; }

    /**
     * <p>The grouping attribute for the insight's findings. Indicates how to group the
     * matching findings, and identifies the type of item that the insight applies to.
     * For example, if an insight is grouped by resource identifier, then the insight
     * produces a list of resource identifiers.</p>
     */
    inline bool GroupByAttributeHasBeenSet() const { return m_groupByAttributeHasBeenSet; }

    /**
     * <p>The grouping attribute for the insight's findings. Indicates how to group the
     * matching findings, and identifies the type of item that the insight applies to.
     * For example, if an insight is grouped by resource identifier, then the insight
     * produces a list of resource identifiers.</p>
     */
    inline void SetGroupByAttribute(const Aws::String& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = value; }

    /**
     * <p>The grouping attribute for the insight's findings. Indicates how to group the
     * matching findings, and identifies the type of item that the insight applies to.
     * For example, if an insight is grouped by resource identifier, then the insight
     * produces a list of resource identifiers.</p>
     */
    inline void SetGroupByAttribute(Aws::String&& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = std::move(value); }

    /**
     * <p>The grouping attribute for the insight's findings. Indicates how to group the
     * matching findings, and identifies the type of item that the insight applies to.
     * For example, if an insight is grouped by resource identifier, then the insight
     * produces a list of resource identifiers.</p>
     */
    inline void SetGroupByAttribute(const char* value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute.assign(value); }

    /**
     * <p>The grouping attribute for the insight's findings. Indicates how to group the
     * matching findings, and identifies the type of item that the insight applies to.
     * For example, if an insight is grouped by resource identifier, then the insight
     * produces a list of resource identifiers.</p>
     */
    inline Insight& WithGroupByAttribute(const Aws::String& value) { SetGroupByAttribute(value); return *this;}

    /**
     * <p>The grouping attribute for the insight's findings. Indicates how to group the
     * matching findings, and identifies the type of item that the insight applies to.
     * For example, if an insight is grouped by resource identifier, then the insight
     * produces a list of resource identifiers.</p>
     */
    inline Insight& WithGroupByAttribute(Aws::String&& value) { SetGroupByAttribute(std::move(value)); return *this;}

    /**
     * <p>The grouping attribute for the insight's findings. Indicates how to group the
     * matching findings, and identifies the type of item that the insight applies to.
     * For example, if an insight is grouped by resource identifier, then the insight
     * produces a list of resource identifiers.</p>
     */
    inline Insight& WithGroupByAttribute(const char* value) { SetGroupByAttribute(value); return *this;}

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
