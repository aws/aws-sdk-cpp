﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ComplianceSummaryItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class AWS_SSM_API ListComplianceSummariesResult
  {
  public:
    ListComplianceSummariesResult();
    ListComplianceSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListComplianceSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of compliant and non-compliant summary counts based on compliance
     * types. For example, this call returns State Manager associations, patches, or
     * custom compliance types according to the filter criteria that you specified.</p>
     */
    inline const Aws::Vector<ComplianceSummaryItem>& GetComplianceSummaryItems() const{ return m_complianceSummaryItems; }

    /**
     * <p>A list of compliant and non-compliant summary counts based on compliance
     * types. For example, this call returns State Manager associations, patches, or
     * custom compliance types according to the filter criteria that you specified.</p>
     */
    inline void SetComplianceSummaryItems(const Aws::Vector<ComplianceSummaryItem>& value) { m_complianceSummaryItems = value; }

    /**
     * <p>A list of compliant and non-compliant summary counts based on compliance
     * types. For example, this call returns State Manager associations, patches, or
     * custom compliance types according to the filter criteria that you specified.</p>
     */
    inline void SetComplianceSummaryItems(Aws::Vector<ComplianceSummaryItem>&& value) { m_complianceSummaryItems = std::move(value); }

    /**
     * <p>A list of compliant and non-compliant summary counts based on compliance
     * types. For example, this call returns State Manager associations, patches, or
     * custom compliance types according to the filter criteria that you specified.</p>
     */
    inline ListComplianceSummariesResult& WithComplianceSummaryItems(const Aws::Vector<ComplianceSummaryItem>& value) { SetComplianceSummaryItems(value); return *this;}

    /**
     * <p>A list of compliant and non-compliant summary counts based on compliance
     * types. For example, this call returns State Manager associations, patches, or
     * custom compliance types according to the filter criteria that you specified.</p>
     */
    inline ListComplianceSummariesResult& WithComplianceSummaryItems(Aws::Vector<ComplianceSummaryItem>&& value) { SetComplianceSummaryItems(std::move(value)); return *this;}

    /**
     * <p>A list of compliant and non-compliant summary counts based on compliance
     * types. For example, this call returns State Manager associations, patches, or
     * custom compliance types according to the filter criteria that you specified.</p>
     */
    inline ListComplianceSummariesResult& AddComplianceSummaryItems(const ComplianceSummaryItem& value) { m_complianceSummaryItems.push_back(value); return *this; }

    /**
     * <p>A list of compliant and non-compliant summary counts based on compliance
     * types. For example, this call returns State Manager associations, patches, or
     * custom compliance types according to the filter criteria that you specified.</p>
     */
    inline ListComplianceSummariesResult& AddComplianceSummaryItems(ComplianceSummaryItem&& value) { m_complianceSummaryItems.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListComplianceSummariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListComplianceSummariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline ListComplianceSummariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ComplianceSummaryItem> m_complianceSummaryItems;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
