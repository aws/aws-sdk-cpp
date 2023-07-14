﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kafka/model/ConfigurationRevision.h>
#include <aws/kafka/model/ConfigurationState.h>
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
namespace Kafka
{
namespace Model
{
  class AWS_KAFKA_API CreateConfigurationResult
  {
  public:
    CreateConfigurationResult();
    CreateConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline CreateConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline CreateConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline CreateConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline CreateConfigurationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline CreateConfigurationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline const ConfigurationRevision& GetLatestRevision() const{ return m_latestRevision; }

    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline void SetLatestRevision(const ConfigurationRevision& value) { m_latestRevision = value; }

    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline void SetLatestRevision(ConfigurationRevision&& value) { m_latestRevision = std::move(value); }

    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline CreateConfigurationResult& WithLatestRevision(const ConfigurationRevision& value) { SetLatestRevision(value); return *this;}

    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline CreateConfigurationResult& WithLatestRevision(ConfigurationRevision&& value) { SetLatestRevision(std::move(value)); return *this;}


    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline CreateConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline CreateConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline CreateConfigurationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline const ConfigurationState& GetState() const{ return m_state; }

    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline void SetState(const ConfigurationState& value) { m_state = value; }

    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline void SetState(ConfigurationState&& value) { m_state = std::move(value); }

    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline CreateConfigurationResult& WithState(const ConfigurationState& value) { SetState(value); return *this;}

    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline CreateConfigurationResult& WithState(ConfigurationState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    ConfigurationRevision m_latestRevision;

    Aws::String m_name;

    ConfigurationState m_state;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
