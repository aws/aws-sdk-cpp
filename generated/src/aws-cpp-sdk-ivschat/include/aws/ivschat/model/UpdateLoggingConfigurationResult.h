﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ivschat/model/DestinationConfiguration.h>
#include <aws/ivschat/model/UpdateLoggingConfigurationState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ivschat
{
namespace Model
{
  class UpdateLoggingConfigurationResult
  {
  public:
    AWS_IVSCHAT_API UpdateLoggingConfigurationResult();
    AWS_IVSCHAT_API UpdateLoggingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSCHAT_API UpdateLoggingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Logging-configuration ARN, from the request (if <code>identifier</code> was
     * an ARN).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Logging-configuration ARN, from the request (if <code>identifier</code> was
     * an ARN).</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>Logging-configuration ARN, from the request (if <code>identifier</code> was
     * an ARN).</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>Logging-configuration ARN, from the request (if <code>identifier</code> was
     * an ARN).</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>Logging-configuration ARN, from the request (if <code>identifier</code> was
     * an ARN).</p>
     */
    inline UpdateLoggingConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Logging-configuration ARN, from the request (if <code>identifier</code> was
     * an ARN).</p>
     */
    inline UpdateLoggingConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Logging-configuration ARN, from the request (if <code>identifier</code> was
     * an ARN).</p>
     */
    inline UpdateLoggingConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Time when the logging configuration was created. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>Time when the logging configuration was created. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>Time when the logging configuration was created. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>Time when the logging configuration was created. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline UpdateLoggingConfigurationResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>Time when the logging configuration was created. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline UpdateLoggingConfigurationResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged, from the request. There is only one type of destination
     * (<code>cloudWatchLogs</code>, <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline const DestinationConfiguration& GetDestinationConfiguration() const{ return m_destinationConfiguration; }

    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged, from the request. There is only one type of destination
     * (<code>cloudWatchLogs</code>, <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline void SetDestinationConfiguration(const DestinationConfiguration& value) { m_destinationConfiguration = value; }

    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged, from the request. There is only one type of destination
     * (<code>cloudWatchLogs</code>, <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline void SetDestinationConfiguration(DestinationConfiguration&& value) { m_destinationConfiguration = std::move(value); }

    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged, from the request. There is only one type of destination
     * (<code>cloudWatchLogs</code>, <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline UpdateLoggingConfigurationResult& WithDestinationConfiguration(const DestinationConfiguration& value) { SetDestinationConfiguration(value); return *this;}

    /**
     * <p>A complex type that contains a destination configuration for where chat
     * content will be logged, from the request. There is only one type of destination
     * (<code>cloudWatchLogs</code>, <code>firehose</code>, or <code>s3</code>) in a
     * <code>destinationConfiguration</code>.</p>
     */
    inline UpdateLoggingConfigurationResult& WithDestinationConfiguration(DestinationConfiguration&& value) { SetDestinationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Logging-configuration ID, generated by the system. This is a relative
     * identifier, the part of the ARN that uniquely identifies the room.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Logging-configuration ID, generated by the system. This is a relative
     * identifier, the part of the ARN that uniquely identifies the room.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>Logging-configuration ID, generated by the system. This is a relative
     * identifier, the part of the ARN that uniquely identifies the room.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>Logging-configuration ID, generated by the system. This is a relative
     * identifier, the part of the ARN that uniquely identifies the room.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>Logging-configuration ID, generated by the system. This is a relative
     * identifier, the part of the ARN that uniquely identifies the room.</p>
     */
    inline UpdateLoggingConfigurationResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Logging-configuration ID, generated by the system. This is a relative
     * identifier, the part of the ARN that uniquely identifies the room.</p>
     */
    inline UpdateLoggingConfigurationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Logging-configuration ID, generated by the system. This is a relative
     * identifier, the part of the ARN that uniquely identifies the room.</p>
     */
    inline UpdateLoggingConfigurationResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Logging-configuration name, from the request (if specified).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Logging-configuration name, from the request (if specified).</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Logging-configuration name, from the request (if specified).</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Logging-configuration name, from the request (if specified).</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Logging-configuration name, from the request (if specified).</p>
     */
    inline UpdateLoggingConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Logging-configuration name, from the request (if specified).</p>
     */
    inline UpdateLoggingConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Logging-configuration name, from the request (if specified).</p>
     */
    inline UpdateLoggingConfigurationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The state of the logging configuration. When the state is
     * <code>ACTIVE</code>, the configuration is ready to log chat content.</p>
     */
    inline const UpdateLoggingConfigurationState& GetState() const{ return m_state; }

    /**
     * <p>The state of the logging configuration. When the state is
     * <code>ACTIVE</code>, the configuration is ready to log chat content.</p>
     */
    inline void SetState(const UpdateLoggingConfigurationState& value) { m_state = value; }

    /**
     * <p>The state of the logging configuration. When the state is
     * <code>ACTIVE</code>, the configuration is ready to log chat content.</p>
     */
    inline void SetState(UpdateLoggingConfigurationState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the logging configuration. When the state is
     * <code>ACTIVE</code>, the configuration is ready to log chat content.</p>
     */
    inline UpdateLoggingConfigurationResult& WithState(const UpdateLoggingConfigurationState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the logging configuration. When the state is
     * <code>ACTIVE</code>, the configuration is ready to log chat content.</p>
     */
    inline UpdateLoggingConfigurationResult& WithState(UpdateLoggingConfigurationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. </p>
     */
    inline UpdateLoggingConfigurationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. </p>
     */
    inline UpdateLoggingConfigurationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. </p>
     */
    inline UpdateLoggingConfigurationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. </p>
     */
    inline UpdateLoggingConfigurationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. </p>
     */
    inline UpdateLoggingConfigurationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. </p>
     */
    inline UpdateLoggingConfigurationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. </p>
     */
    inline UpdateLoggingConfigurationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. </p>
     */
    inline UpdateLoggingConfigurationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. </p>
     */
    inline UpdateLoggingConfigurationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>Time of the logging configuration’s last update. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>Time of the logging configuration’s last update. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>Time of the logging configuration’s last update. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>Time of the logging configuration’s last update. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline UpdateLoggingConfigurationResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>Time of the logging configuration’s last update. This is an ISO 8601
     * timestamp; <i>note that this is returned as a string</i>.</p>
     */
    inline UpdateLoggingConfigurationResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateLoggingConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateLoggingConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateLoggingConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createTime;

    DestinationConfiguration m_destinationConfiguration;

    Aws::String m_id;

    Aws::String m_name;

    UpdateLoggingConfigurationState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
