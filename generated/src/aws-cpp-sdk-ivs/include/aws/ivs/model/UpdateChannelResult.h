/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/Channel.h>
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
namespace IVS
{
namespace Model
{
  class UpdateChannelResult
  {
  public:
    AWS_IVS_API UpdateChannelResult();
    AWS_IVS_API UpdateChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API UpdateChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Object specifying the updated channel.</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }

    /**
     * <p>Object specifying the updated channel.</p>
     */
    inline void SetChannel(const Channel& value) { m_channel = value; }

    /**
     * <p>Object specifying the updated channel.</p>
     */
    inline void SetChannel(Channel&& value) { m_channel = std::move(value); }

    /**
     * <p>Object specifying the updated channel.</p>
     */
    inline UpdateChannelResult& WithChannel(const Channel& value) { SetChannel(value); return *this;}

    /**
     * <p>Object specifying the updated channel.</p>
     */
    inline UpdateChannelResult& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Channel m_channel;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
