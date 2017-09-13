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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/ResourceServerType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  class AWS_COGNITOIDENTITYPROVIDER_API ListResourceServersResult
  {
  public:
    ListResourceServersResult();
    ListResourceServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListResourceServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The resource servers.</p>
     */
    inline const Aws::Vector<ResourceServerType>& GetResourceServers() const{ return m_resourceServers; }

    /**
     * <p>The resource servers.</p>
     */
    inline void SetResourceServers(const Aws::Vector<ResourceServerType>& value) { m_resourceServers = value; }

    /**
     * <p>The resource servers.</p>
     */
    inline void SetResourceServers(Aws::Vector<ResourceServerType>&& value) { m_resourceServers = std::move(value); }

    /**
     * <p>The resource servers.</p>
     */
    inline ListResourceServersResult& WithResourceServers(const Aws::Vector<ResourceServerType>& value) { SetResourceServers(value); return *this;}

    /**
     * <p>The resource servers.</p>
     */
    inline ListResourceServersResult& WithResourceServers(Aws::Vector<ResourceServerType>&& value) { SetResourceServers(std::move(value)); return *this;}

    /**
     * <p>The resource servers.</p>
     */
    inline ListResourceServersResult& AddResourceServers(const ResourceServerType& value) { m_resourceServers.push_back(value); return *this; }

    /**
     * <p>The resource servers.</p>
     */
    inline ListResourceServersResult& AddResourceServers(ResourceServerType&& value) { m_resourceServers.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token.</p>
     */
    inline ListResourceServersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token.</p>
     */
    inline ListResourceServersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token.</p>
     */
    inline ListResourceServersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ResourceServerType> m_resourceServers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
