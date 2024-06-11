﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/Channel.h>
#include <aws/iotanalytics/model/ChannelStatistics.h>
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
namespace IoTAnalytics
{
namespace Model
{
  class DescribeChannelResult
  {
  public:
    AWS_IOTANALYTICS_API DescribeChannelResult();
    AWS_IOTANALYTICS_API DescribeChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API DescribeChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains information about the channel.</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }
    inline void SetChannel(const Channel& value) { m_channel = value; }
    inline void SetChannel(Channel&& value) { m_channel = std::move(value); }
    inline DescribeChannelResult& WithChannel(const Channel& value) { SetChannel(value); return *this;}
    inline DescribeChannelResult& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Statistics about the channel. Included if the <code>includeStatistics</code>
     * parameter is set to <code>true</code> in the request.</p>
     */
    inline const ChannelStatistics& GetStatistics() const{ return m_statistics; }
    inline void SetStatistics(const ChannelStatistics& value) { m_statistics = value; }
    inline void SetStatistics(ChannelStatistics&& value) { m_statistics = std::move(value); }
    inline DescribeChannelResult& WithStatistics(const ChannelStatistics& value) { SetStatistics(value); return *this;}
    inline DescribeChannelResult& WithStatistics(ChannelStatistics&& value) { SetStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Channel m_channel;

    ChannelStatistics m_statistics;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
