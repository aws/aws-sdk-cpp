/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/PhysicalResource.h>
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
namespace ResilienceHub
{
namespace Model
{
  class ListAppVersionResourcesResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppVersionResourcesResult();
    AWS_RESILIENCEHUB_API ListAppVersionResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppVersionResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAppVersionResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAppVersionResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAppVersionResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The physical resources in the application version.</p>
     */
    inline const Aws::Vector<PhysicalResource>& GetPhysicalResources() const{ return m_physicalResources; }

    /**
     * <p>The physical resources in the application version.</p>
     */
    inline void SetPhysicalResources(const Aws::Vector<PhysicalResource>& value) { m_physicalResources = value; }

    /**
     * <p>The physical resources in the application version.</p>
     */
    inline void SetPhysicalResources(Aws::Vector<PhysicalResource>&& value) { m_physicalResources = std::move(value); }

    /**
     * <p>The physical resources in the application version.</p>
     */
    inline ListAppVersionResourcesResult& WithPhysicalResources(const Aws::Vector<PhysicalResource>& value) { SetPhysicalResources(value); return *this;}

    /**
     * <p>The physical resources in the application version.</p>
     */
    inline ListAppVersionResourcesResult& WithPhysicalResources(Aws::Vector<PhysicalResource>&& value) { SetPhysicalResources(std::move(value)); return *this;}

    /**
     * <p>The physical resources in the application version.</p>
     */
    inline ListAppVersionResourcesResult& AddPhysicalResources(const PhysicalResource& value) { m_physicalResources.push_back(value); return *this; }

    /**
     * <p>The physical resources in the application version.</p>
     */
    inline ListAppVersionResourcesResult& AddPhysicalResources(PhysicalResource&& value) { m_physicalResources.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline const Aws::String& GetResolutionId() const{ return m_resolutionId; }

    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline void SetResolutionId(const Aws::String& value) { m_resolutionId = value; }

    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline void SetResolutionId(Aws::String&& value) { m_resolutionId = std::move(value); }

    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline void SetResolutionId(const char* value) { m_resolutionId.assign(value); }

    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline ListAppVersionResourcesResult& WithResolutionId(const Aws::String& value) { SetResolutionId(value); return *this;}

    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline ListAppVersionResourcesResult& WithResolutionId(Aws::String&& value) { SetResolutionId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a specific resolution.</p>
     */
    inline ListAppVersionResourcesResult& WithResolutionId(const char* value) { SetResolutionId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<PhysicalResource> m_physicalResources;

    Aws::String m_resolutionId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
