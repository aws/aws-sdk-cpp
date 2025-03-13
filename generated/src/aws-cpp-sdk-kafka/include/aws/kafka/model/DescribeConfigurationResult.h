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
    AWS_KAFKA_API DescribeConfigurationResult() = default;
    AWS_KAFKA_API DescribeConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API DescribeConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeConfigurationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeConfigurationResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeConfigurationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The versions of Apache Kafka with which you can use this MSK
     * configuration.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetKafkaVersions() const { return m_kafkaVersions; }
    template<typename KafkaVersionsT = Aws::Vector<Aws::String>>
    void SetKafkaVersions(KafkaVersionsT&& value) { m_kafkaVersionsHasBeenSet = true; m_kafkaVersions = std::forward<KafkaVersionsT>(value); }
    template<typename KafkaVersionsT = Aws::Vector<Aws::String>>
    DescribeConfigurationResult& WithKafkaVersions(KafkaVersionsT&& value) { SetKafkaVersions(std::forward<KafkaVersionsT>(value)); return *this;}
    template<typename KafkaVersionsT = Aws::String>
    DescribeConfigurationResult& AddKafkaVersions(KafkaVersionsT&& value) { m_kafkaVersionsHasBeenSet = true; m_kafkaVersions.emplace_back(std::forward<KafkaVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline const ConfigurationRevision& GetLatestRevision() const { return m_latestRevision; }
    template<typename LatestRevisionT = ConfigurationRevision>
    void SetLatestRevision(LatestRevisionT&& value) { m_latestRevisionHasBeenSet = true; m_latestRevision = std::forward<LatestRevisionT>(value); }
    template<typename LatestRevisionT = ConfigurationRevision>
    DescribeConfigurationResult& WithLatestRevision(LatestRevisionT&& value) { SetLatestRevision(std::forward<LatestRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeConfigurationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The state of the configuration. The possible states are ACTIVE,
     * DELETING, and DELETE_FAILED. </p>
         
     */
    inline ConfigurationState GetState() const { return m_state; }
    inline void SetState(ConfigurationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DescribeConfigurationResult& WithState(ConfigurationState value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_kafkaVersions;
    bool m_kafkaVersionsHasBeenSet = false;

    ConfigurationRevision m_latestRevision;
    bool m_latestRevisionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ConfigurationState m_state{ConfigurationState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
