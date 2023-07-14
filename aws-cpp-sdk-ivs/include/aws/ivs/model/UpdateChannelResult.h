﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/Channel.h>
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
  class AWS_IVS_API UpdateChannelResult
  {
  public:
    UpdateChannelResult();
    UpdateChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Channel& GetChannel() const{ return m_channel; }

    
    inline void SetChannel(const Channel& value) { m_channel = value; }

    
    inline void SetChannel(Channel&& value) { m_channel = std::move(value); }

    
    inline UpdateChannelResult& WithChannel(const Channel& value) { SetChannel(value); return *this;}

    
    inline UpdateChannelResult& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}

  private:

    Channel m_channel;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
