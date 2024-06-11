/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeConfigurationResult
  {
  public:
    AWS_KAFKA_API DescribeConfigurationResult();
    AWS_KAFKA_API DescribeConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API DescribeConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribeConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeConfigurationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeConfigurationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeConfigurationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeConfigurationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeConfigurationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The versions of Apache Kafka with which you can use this MSK
     * configuration.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetKafkaVersions() const{ return m_kafkaVersions; }
    inline void SetKafkaVersions(const Aws::Vector<Aws::String>& value) { m_kafkaVersions = value; }
    inline void SetKafkaVersions(Aws::Vector<Aws::String>&& value) { m_kafkaVersions = std::move(value); }
    inline DescribeConfigurationResult& WithKafkaVersions(const Aws::Vector<Aws::String>& value) { SetKafkaVersions(value); return *this;}
    inline DescribeConfigurationResult& WithKafkaVersions(Aws::Vector<Aws::String>&& value) { SetKafkaVersions(std::move(value)); return *this;}
    inline DescribeConfigurationResult& AddKafkaVersions(const Aws::String& value) { m_kafkaVersions.push_back(value); return *this; }
    inline DescribeConfigurationResult& AddKafkaVersions(Aws::String&& value) { m_kafkaVersions.push_back(std::move(value)); return *this; }
    inline DescribeConfigurationResult& AddKafkaVersions(const char* value) { m_kafkaVersions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline const ConfigurationRevision& GetLatestRevision() const{ return m_latestRevision; }
    inline void SetLatestRevision(const ConfigurationRevision& value) { m_latestRevision = value; }
    inline void SetLatestRevision(ConfigurationRevision&& value) { m_latestRevision = std::move(value); }
    inline DescribeConfigurationResult& WithLatestRevision(const ConfigurationRevision& value) { SetLatestRevision(value); return *this;}
    inline DescribeConfigurationResult& WithLatestRevision(ConfigurationRevision&& value) { SetLatestRevision(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeConfigurationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline const ConfigurationState& GetState() const{ return m_state; }
    inline void SetState(const ConfigurationState& value) { m_state = value; }
    inline void SetState(ConfigurationState&& value) { m_state = std::move(value); }
    inline DescribeConfigurationResult& WithState(const ConfigurationState& value) { SetState(value); return *this;}
    inline DescribeConfigurationResult& WithState(ConfigurationState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_description;

    Aws::Vector<Aws::String> m_kafkaVersions;

    ConfigurationRevision m_latestRevision;

    Aws::String m_name;

    ConfigurationState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
