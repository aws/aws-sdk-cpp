/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/ComponentVersionListItem.h>
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
namespace GreengrassV2
{
namespace Model
{
  class ListComponentVersionsResult
  {
  public:
    AWS_GREENGRASSV2_API ListComponentVersionsResult();
    AWS_GREENGRASSV2_API ListComponentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API ListComponentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of versions that exist for the component.</p>
     */
    inline const Aws::Vector<ComponentVersionListItem>& GetComponentVersions() const{ return m_componentVersions; }

    /**
     * <p>A list of versions that exist for the component.</p>
     */
    inline void SetComponentVersions(const Aws::Vector<ComponentVersionListItem>& value) { m_componentVersions = value; }

    /**
     * <p>A list of versions that exist for the component.</p>
     */
    inline void SetComponentVersions(Aws::Vector<ComponentVersionListItem>&& value) { m_componentVersions = std::move(value); }

    /**
     * <p>A list of versions that exist for the component.</p>
     */
    inline ListComponentVersionsResult& WithComponentVersions(const Aws::Vector<ComponentVersionListItem>& value) { SetComponentVersions(value); return *this;}

    /**
     * <p>A list of versions that exist for the component.</p>
     */
    inline ListComponentVersionsResult& WithComponentVersions(Aws::Vector<ComponentVersionListItem>&& value) { SetComponentVersions(std::move(value)); return *this;}

    /**
     * <p>A list of versions that exist for the component.</p>
     */
    inline ListComponentVersionsResult& AddComponentVersions(const ComponentVersionListItem& value) { m_componentVersions.push_back(value); return *this; }

    /**
     * <p>A list of versions that exist for the component.</p>
     */
    inline ListComponentVersionsResult& AddComponentVersions(ComponentVersionListItem&& value) { m_componentVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListComponentVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListComponentVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListComponentVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ComponentVersionListItem> m_componentVersions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
