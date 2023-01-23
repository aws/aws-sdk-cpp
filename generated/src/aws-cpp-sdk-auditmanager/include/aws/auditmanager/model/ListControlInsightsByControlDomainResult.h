/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ControlInsightsMetadataItem.h>
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
namespace AuditManager
{
namespace Model
{
  class ListControlInsightsByControlDomainResult
  {
  public:
    AWS_AUDITMANAGER_API ListControlInsightsByControlDomainResult();
    AWS_AUDITMANAGER_API ListControlInsightsByControlDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListControlInsightsByControlDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The control analytics data that the
     * <code>ListControlInsightsByControlDomain</code> API returned. </p>
     */
    inline const Aws::Vector<ControlInsightsMetadataItem>& GetControlInsightsMetadata() const{ return m_controlInsightsMetadata; }

    /**
     * <p>The control analytics data that the
     * <code>ListControlInsightsByControlDomain</code> API returned. </p>
     */
    inline void SetControlInsightsMetadata(const Aws::Vector<ControlInsightsMetadataItem>& value) { m_controlInsightsMetadata = value; }

    /**
     * <p>The control analytics data that the
     * <code>ListControlInsightsByControlDomain</code> API returned. </p>
     */
    inline void SetControlInsightsMetadata(Aws::Vector<ControlInsightsMetadataItem>&& value) { m_controlInsightsMetadata = std::move(value); }

    /**
     * <p>The control analytics data that the
     * <code>ListControlInsightsByControlDomain</code> API returned. </p>
     */
    inline ListControlInsightsByControlDomainResult& WithControlInsightsMetadata(const Aws::Vector<ControlInsightsMetadataItem>& value) { SetControlInsightsMetadata(value); return *this;}

    /**
     * <p>The control analytics data that the
     * <code>ListControlInsightsByControlDomain</code> API returned. </p>
     */
    inline ListControlInsightsByControlDomainResult& WithControlInsightsMetadata(Aws::Vector<ControlInsightsMetadataItem>&& value) { SetControlInsightsMetadata(std::move(value)); return *this;}

    /**
     * <p>The control analytics data that the
     * <code>ListControlInsightsByControlDomain</code> API returned. </p>
     */
    inline ListControlInsightsByControlDomainResult& AddControlInsightsMetadata(const ControlInsightsMetadataItem& value) { m_controlInsightsMetadata.push_back(value); return *this; }

    /**
     * <p>The control analytics data that the
     * <code>ListControlInsightsByControlDomain</code> API returned. </p>
     */
    inline ListControlInsightsByControlDomainResult& AddControlInsightsMetadata(ControlInsightsMetadataItem&& value) { m_controlInsightsMetadata.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListControlInsightsByControlDomainResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListControlInsightsByControlDomainResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListControlInsightsByControlDomainResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ControlInsightsMetadataItem> m_controlInsightsMetadata;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
