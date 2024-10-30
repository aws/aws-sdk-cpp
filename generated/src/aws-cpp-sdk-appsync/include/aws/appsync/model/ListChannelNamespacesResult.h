/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/ChannelNamespace.h>
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
  class ListChannelNamespacesResult
  {
  public:
    AWS_APPSYNC_API ListChannelNamespacesResult();
    AWS_APPSYNC_API ListChannelNamespacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API ListChannelNamespacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>ChannelNamespace</code> objects.</p>
     */
    inline const Aws::Vector<ChannelNamespace>& GetChannelNamespaces() const{ return m_channelNamespaces; }
    inline void SetChannelNamespaces(const Aws::Vector<ChannelNamespace>& value) { m_channelNamespaces = value; }
    inline void SetChannelNamespaces(Aws::Vector<ChannelNamespace>&& value) { m_channelNamespaces = std::move(value); }
    inline ListChannelNamespacesResult& WithChannelNamespaces(const Aws::Vector<ChannelNamespace>& value) { SetChannelNamespaces(value); return *this;}
    inline ListChannelNamespacesResult& WithChannelNamespaces(Aws::Vector<ChannelNamespace>&& value) { SetChannelNamespaces(std::move(value)); return *this;}
    inline ListChannelNamespacesResult& AddChannelNamespaces(const ChannelNamespace& value) { m_channelNamespaces.push_back(value); return *this; }
    inline ListChannelNamespacesResult& AddChannelNamespaces(ChannelNamespace&& value) { m_channelNamespaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListChannelNamespacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListChannelNamespacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListChannelNamespacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListChannelNamespacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListChannelNamespacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListChannelNamespacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ChannelNamespace> m_channelNamespaces;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
