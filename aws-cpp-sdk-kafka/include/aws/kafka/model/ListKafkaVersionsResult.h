/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListKafkaVersionsResult
  {
  public:
    AWS_KAFKA_API ListKafkaVersionsResult();
    AWS_KAFKA_API ListKafkaVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListKafkaVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
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
