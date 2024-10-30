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
  class CreateChannelNamespaceResult
  {
  public:
    AWS_APPSYNC_API CreateChannelNamespaceResult();
    AWS_APPSYNC_API CreateChannelNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API CreateChannelNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>ChannelNamespace</code> object.</p>
     */
    inline const ChannelNamespace& GetChannelNamespace() const{ return m_channelNamespace; }
    inline void SetChannelNamespace(const ChannelNamespace& value) { m_channelNamespace = value; }
    inline void SetChannelNamespace(ChannelNamespace&& value) { m_channelNamespace = std::move(value); }
    inline CreateChannelNamespaceResult& WithChannelNamespace(const ChannelNamespace& value) { SetChannelNamespace(value); return *this;}
    inline CreateChannelNamespaceResult& WithChannelNamespace(ChannelNamespace&& value) { SetChannelNamespace(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateChannelNamespaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateChannelNamespaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateChannelNamespaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ChannelNamespace m_channelNamespace;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
