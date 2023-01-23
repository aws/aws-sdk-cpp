/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class GetConformancePackComplianceSummaryRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API GetConformancePackComplianceSummaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConformancePackComplianceSummary"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Names of conformance packs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConformancePackNames() const{ return m_conformancePackNames; }

    /**
     * <p>Names of conformance packs.</p>
     */
    inline bool ConformancePackNamesHasBeenSet() const { return m_conformancePackNamesHasBeenSet; }

    /**
     * <p>Names of conformance packs.</p>
     */
    inline void SetConformancePackNames(const Aws::Vector<Aws::String>& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames = value; }

    /**
     * <p>Names of conformance packs.</p>
     */
    inline void SetConformancePackNames(Aws::Vector<Aws::String>&& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames = std::move(value); }

    /**
     * <p>Names of conformance packs.</p>
     */
    inline GetConformancePackComplianceSummaryRequest& WithConformancePackNames(const Aws::Vector<Aws::String>& value) { SetConformancePackNames(value); return *this;}

    /**
     * <p>Names of conformance packs.</p>
     */
    inline GetConformancePackComplianceSummaryRequest& WithConformancePackNames(Aws::Vector<Aws::String>&& value) { SetConformancePackNames(std::move(value)); return *this;}

    /**
     * <p>Names of conformance packs.</p>
     */
    inline GetConformancePackComplianceSummaryRequest& AddConformancePackNames(const Aws::String& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames.push_back(value); return *this; }

    /**
     * <p>Names of conformance packs.</p>
     */
    inline GetConformancePackComplianceSummaryRequest& AddConformancePackNames(Aws::String&& value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames.push_back(std::move(value)); return *this; }

    /**
     * <p>Names of conformance packs.</p>
     */
    inline GetConformancePackComplianceSummaryRequest& AddConformancePackNames(const char* value) { m_conformancePackNamesHasBeenSet = true; m_conformancePackNames.push_back(value); return *this; }


    /**
     * <p>The maximum number of conformance packs returned on each page.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of conformance packs returned on each page.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of conformance packs returned on each page.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of conformance packs returned on each page.</p>
     */
    inline GetConformancePackComplianceSummaryRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline GetConformancePackComplianceSummaryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline GetConformancePackComplianceSummaryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline GetConformancePackComplianceSummaryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_conformancePackNames;
    bool m_conformancePackNamesHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
