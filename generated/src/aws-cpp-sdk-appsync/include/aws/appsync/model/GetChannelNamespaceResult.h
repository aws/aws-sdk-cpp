/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/ChannelNamespace.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetChannelNamespaceResult
  {
  public:
    AWS_APPSYNC_API GetChannelNamespaceResult() = default;
    AWS_APPSYNC_API GetChannelNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API GetChannelNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>ChannelNamespace</code> object.</p>
     */
    inline const ChannelNamespace& GetChannelNamespace() const { return m_channelNamespace; }
    template<typename ChannelNamespaceT = ChannelNamespace>
    void SetChannelNamespace(ChannelNamespaceT&& value) { m_channelNamespaceHasBeenSet = true; m_channelNamespace = std::forward<ChannelNamespaceT>(value); }
    template<typename ChannelNamespaceT = ChannelNamespace>
    GetChannelNamespaceResult& WithChannelNamespace(ChannelNamespaceT&& value) { SetChannelNamespace(std::forward<ChannelNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetChannelNamespaceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ChannelNamespace m_channelNamespace;
    bool m_channelNamespaceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
