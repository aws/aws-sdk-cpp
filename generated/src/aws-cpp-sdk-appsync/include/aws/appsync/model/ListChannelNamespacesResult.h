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
    AWS_APPSYNC_API ListChannelNamespacesResult() = default;
    AWS_APPSYNC_API ListChannelNamespacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API ListChannelNamespacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>ChannelNamespace</code> objects.</p>
     */
    inline const Aws::Vector<ChannelNamespace>& GetChannelNamespaces() const { return m_channelNamespaces; }
    template<typename ChannelNamespacesT = Aws::Vector<ChannelNamespace>>
    void SetChannelNamespaces(ChannelNamespacesT&& value) { m_channelNamespacesHasBeenSet = true; m_channelNamespaces = std::forward<ChannelNamespacesT>(value); }
    template<typename ChannelNamespacesT = Aws::Vector<ChannelNamespace>>
    ListChannelNamespacesResult& WithChannelNamespaces(ChannelNamespacesT&& value) { SetChannelNamespaces(std::forward<ChannelNamespacesT>(value)); return *this;}
    template<typename ChannelNamespacesT = ChannelNamespace>
    ListChannelNamespacesResult& AddChannelNamespaces(ChannelNamespacesT&& value) { m_channelNamespacesHasBeenSet = true; m_channelNamespaces.emplace_back(std::forward<ChannelNamespacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListChannelNamespacesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListChannelNamespacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ChannelNamespace> m_channelNamespaces;
    bool m_channelNamespacesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
