﻿/*
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
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/Resolver.h>
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
namespace AppSync
{
namespace Model
{
  class AWS_APPSYNC_API ListResolversResult
  {
  public:
    ListResolversResult();
    ListResolversResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListResolversResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>Resolver</code> objects.</p>
     */
    inline const Aws::Vector<Resolver>& GetResolvers() const{ return m_resolvers; }

    /**
     * <p>The <code>Resolver</code> objects.</p>
     */
    inline void SetResolvers(const Aws::Vector<Resolver>& value) { m_resolvers = value; }

    /**
     * <p>The <code>Resolver</code> objects.</p>
     */
    inline void SetResolvers(Aws::Vector<Resolver>&& value) { m_resolvers = std::move(value); }

    /**
     * <p>The <code>Resolver</code> objects.</p>
     */
    inline ListResolversResult& WithResolvers(const Aws::Vector<Resolver>& value) { SetResolvers(value); return *this;}

    /**
     * <p>The <code>Resolver</code> objects.</p>
     */
    inline ListResolversResult& WithResolvers(Aws::Vector<Resolver>&& value) { SetResolvers(std::move(value)); return *this;}

    /**
     * <p>The <code>Resolver</code> objects.</p>
     */
    inline ListResolversResult& AddResolvers(const Resolver& value) { m_resolvers.push_back(value); return *this; }

    /**
     * <p>The <code>Resolver</code> objects.</p>
     */
    inline ListResolversResult& AddResolvers(Resolver&& value) { m_resolvers.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline ListResolversResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline ListResolversResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline ListResolversResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Resolver> m_resolvers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
