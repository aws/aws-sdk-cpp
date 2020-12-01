/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/NotificationChannel.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class AWS_DEVOPSGURU_API ListNotificationChannelsResult
  {
  public:
    ListNotificationChannelsResult();
    ListNotificationChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListNotificationChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<NotificationChannel>& GetChannels() const{ return m_channels; }

    
    inline void SetChannels(const Aws::Vector<NotificationChannel>& value) { m_channels = value; }

    
    inline void SetChannels(Aws::Vector<NotificationChannel>&& value) { m_channels = std::move(value); }

    
    inline ListNotificationChannelsResult& WithChannels(const Aws::Vector<NotificationChannel>& value) { SetChannels(value); return *this;}

    
    inline ListNotificationChannelsResult& WithChannels(Aws::Vector<NotificationChannel>&& value) { SetChannels(std::move(value)); return *this;}

    
    inline ListNotificationChannelsResult& AddChannels(const NotificationChannel& value) { m_channels.push_back(value); return *this; }

    
    inline ListNotificationChannelsResult& AddChannels(NotificationChannel&& value) { m_channels.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListNotificationChannelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListNotificationChannelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListNotificationChannelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<NotificationChannel> m_channels;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
