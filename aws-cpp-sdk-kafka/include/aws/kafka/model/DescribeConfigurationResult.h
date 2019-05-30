/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/model/ConfigurationRevision.h>
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
  class AWS_KAFKA_API DescribeConfigurationResult
  {
  public:
    DescribeConfigurationResult();
    DescribeConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline DescribeConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the configuration.</p>
       
     *  
     */
    inline DescribeConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline DescribeConfigurationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * 
            <p>The time when the configuration was created.</p>
         
     */
    inline DescribeConfigurationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline DescribeConfigurationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline DescribeConfigurationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * 
            <p>The description of the configuration.</p>
         
     */
    inline DescribeConfigurationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * 
            <p>The versions of Apache Kafka with which you can use this MSK
     * configuration.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetKafkaVersions() const{ return m_kafkaVersions; }

    /**
     * 
            <p>The versions of Apache Kafka with which you can use this MSK
     * configuration.</p>
         
     */
    inline void SetKafkaVersions(const Aws::Vector<Aws::String>& value) { m_kafkaVersions = value; }

    /**
     * 
            <p>The versions of Apache Kafka with which you can use this MSK
     * configuration.</p>
         
     */
    inline void SetKafkaVersions(Aws::Vector<Aws::String>&& value) { m_kafkaVersions = std::move(value); }

    /**
     * 
            <p>The versions of Apache Kafka with which you can use this MSK
     * configuration.</p>
         
     */
    inline DescribeConfigurationResult& WithKafkaVersions(const Aws::Vector<Aws::String>& value) { SetKafkaVersions(value); return *this;}

    /**
     * 
            <p>The versions of Apache Kafka with which you can use this MSK
     * configuration.</p>
         
     */
    inline DescribeConfigurationResult& WithKafkaVersions(Aws::Vector<Aws::String>&& value) { SetKafkaVersions(std::move(value)); return *this;}

    /**
     * 
            <p>The versions of Apache Kafka with which you can use this MSK
     * configuration.</p>
         
     */
    inline DescribeConfigurationResult& AddKafkaVersions(const Aws::String& value) { m_kafkaVersions.push_back(value); return *this; }

    /**
     * 
            <p>The versions of Apache Kafka with which you can use this MSK
     * configuration.</p>
         
     */
    inline DescribeConfigurationResult& AddKafkaVersions(Aws::String&& value) { m_kafkaVersions.push_back(std::move(value)); return *this; }

    /**
     * 
            <p>The versions of Apache Kafka with which you can use this MSK
     * configuration.</p>
         
     */
    inline DescribeConfigurationResult& AddKafkaVersions(const char* value) { m_kafkaVersions.push_back(value); return *this; }


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
    inline DescribeConfigurationResult& WithLatestRevision(const ConfigurationRevision& value) { SetLatestRevision(value); return *this;}

    /**
     * 
            <p>Latest revision of the configuration.</p>
         
     */
    inline DescribeConfigurationResult& WithLatestRevision(ConfigurationRevision&& value) { SetLatestRevision(std::move(value)); return *this;}


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
    inline DescribeConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline DescribeConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * 
            <p>The name of the configuration.</p>
         
     */
    inline DescribeConfigurationResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_description;

    Aws::Vector<Aws::String> m_kafkaVersions;

    ConfigurationRevision m_latestRevision;

    Aws::String m_name;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
