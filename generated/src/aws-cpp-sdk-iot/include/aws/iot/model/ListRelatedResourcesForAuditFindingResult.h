/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/RelatedResource.h>
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
namespace IoT
{
namespace Model
{
  class ListRelatedResourcesForAuditFindingResult
  {
  public:
    AWS_IOT_API ListRelatedResourcesForAuditFindingResult();
    AWS_IOT_API ListRelatedResourcesForAuditFindingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListRelatedResourcesForAuditFindingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The related resources.</p>
     */
    inline const Aws::Vector<RelatedResource>& GetRelatedResources() const{ return m_relatedResources; }

    /**
     * <p>The related resources.</p>
     */
    inline void SetRelatedResources(const Aws::Vector<RelatedResource>& value) { m_relatedResources = value; }

    /**
     * <p>The related resources.</p>
     */
    inline void SetRelatedResources(Aws::Vector<RelatedResource>&& value) { m_relatedResources = std::move(value); }

    /**
     * <p>The related resources.</p>
     */
    inline ListRelatedResourcesForAuditFindingResult& WithRelatedResources(const Aws::Vector<RelatedResource>& value) { SetRelatedResources(value); return *this;}

    /**
     * <p>The related resources.</p>
     */
    inline ListRelatedResourcesForAuditFindingResult& WithRelatedResources(Aws::Vector<RelatedResource>&& value) { SetRelatedResources(std::move(value)); return *this;}

    /**
     * <p>The related resources.</p>
     */
    inline ListRelatedResourcesForAuditFindingResult& AddRelatedResources(const RelatedResource& value) { m_relatedResources.push_back(value); return *this; }

    /**
     * <p>The related resources.</p>
     */
    inline ListRelatedResourcesForAuditFindingResult& AddRelatedResources(RelatedResource&& value) { m_relatedResources.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> for the first API call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> for the first API call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> for the first API call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> for the first API call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> for the first API call.</p>
     */
    inline ListRelatedResourcesForAuditFindingResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> for the first API call.</p>
     */
    inline ListRelatedResourcesForAuditFindingResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> for the first API call.</p>
     */
    inline ListRelatedResourcesForAuditFindingResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RelatedResource> m_relatedResources;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
