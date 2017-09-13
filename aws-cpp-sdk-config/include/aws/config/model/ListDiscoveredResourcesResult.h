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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ResourceIdentifier.h>
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
namespace ConfigService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListDiscoveredResourcesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API ListDiscoveredResourcesResult
  {
  public:
    ListDiscoveredResourcesResult();
    ListDiscoveredResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDiscoveredResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details that identify a resource that is discovered by AWS Config,
     * including the resource type, ID, and (if available) the custom resource
     * name.</p>
     */
    inline const Aws::Vector<ResourceIdentifier>& GetResourceIdentifiers() const{ return m_resourceIdentifiers; }

    /**
     * <p>The details that identify a resource that is discovered by AWS Config,
     * including the resource type, ID, and (if available) the custom resource
     * name.</p>
     */
    inline void SetResourceIdentifiers(const Aws::Vector<ResourceIdentifier>& value) { m_resourceIdentifiers = value; }

    /**
     * <p>The details that identify a resource that is discovered by AWS Config,
     * including the resource type, ID, and (if available) the custom resource
     * name.</p>
     */
    inline void SetResourceIdentifiers(Aws::Vector<ResourceIdentifier>&& value) { m_resourceIdentifiers = std::move(value); }

    /**
     * <p>The details that identify a resource that is discovered by AWS Config,
     * including the resource type, ID, and (if available) the custom resource
     * name.</p>
     */
    inline ListDiscoveredResourcesResult& WithResourceIdentifiers(const Aws::Vector<ResourceIdentifier>& value) { SetResourceIdentifiers(value); return *this;}

    /**
     * <p>The details that identify a resource that is discovered by AWS Config,
     * including the resource type, ID, and (if available) the custom resource
     * name.</p>
     */
    inline ListDiscoveredResourcesResult& WithResourceIdentifiers(Aws::Vector<ResourceIdentifier>&& value) { SetResourceIdentifiers(std::move(value)); return *this;}

    /**
     * <p>The details that identify a resource that is discovered by AWS Config,
     * including the resource type, ID, and (if available) the custom resource
     * name.</p>
     */
    inline ListDiscoveredResourcesResult& AddResourceIdentifiers(const ResourceIdentifier& value) { m_resourceIdentifiers.push_back(value); return *this; }

    /**
     * <p>The details that identify a resource that is discovered by AWS Config,
     * including the resource type, ID, and (if available) the custom resource
     * name.</p>
     */
    inline ListDiscoveredResourcesResult& AddResourceIdentifiers(ResourceIdentifier&& value) { m_resourceIdentifiers.push_back(std::move(value)); return *this; }


    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline ListDiscoveredResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline ListDiscoveredResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline ListDiscoveredResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ResourceIdentifier> m_resourceIdentifiers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
