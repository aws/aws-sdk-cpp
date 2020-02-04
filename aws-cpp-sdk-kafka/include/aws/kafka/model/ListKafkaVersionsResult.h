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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/KafkaVersion.h>
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
  class AWS_KAFKA_API ListKafkaVersionsResult
  {
  public:
    ListKafkaVersionsResult();
    ListKafkaVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListKafkaVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<KafkaVersion>& GetKafkaVersions() const{ return m_kafkaVersions; }

    
    inline void SetKafkaVersions(const Aws::Vector<KafkaVersion>& value) { m_kafkaVersions = value; }

    
    inline void SetKafkaVersions(Aws::Vector<KafkaVersion>&& value) { m_kafkaVersions = std::move(value); }

    
    inline ListKafkaVersionsResult& WithKafkaVersions(const Aws::Vector<KafkaVersion>& value) { SetKafkaVersions(value); return *this;}

    
    inline ListKafkaVersionsResult& WithKafkaVersions(Aws::Vector<KafkaVersion>&& value) { SetKafkaVersions(std::move(value)); return *this;}

    
    inline ListKafkaVersionsResult& AddKafkaVersions(const KafkaVersion& value) { m_kafkaVersions.push_back(value); return *this; }

    
    inline ListKafkaVersionsResult& AddKafkaVersions(KafkaVersion&& value) { m_kafkaVersions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListKafkaVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListKafkaVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListKafkaVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<KafkaVersion> m_kafkaVersions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
