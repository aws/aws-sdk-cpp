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
    AWS_KAFKA_API ListKafkaVersionsResult() = default;
    AWS_KAFKA_API ListKafkaVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListKafkaVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<KafkaVersion>& GetKafkaVersions() const { return m_kafkaVersions; }
    template<typename KafkaVersionsT = Aws::Vector<KafkaVersion>>
    void SetKafkaVersions(KafkaVersionsT&& value) { m_kafkaVersionsHasBeenSet = true; m_kafkaVersions = std::forward<KafkaVersionsT>(value); }
    template<typename KafkaVersionsT = Aws::Vector<KafkaVersion>>
    ListKafkaVersionsResult& WithKafkaVersions(KafkaVersionsT&& value) { SetKafkaVersions(std::forward<KafkaVersionsT>(value)); return *this;}
    template<typename KafkaVersionsT = KafkaVersion>
    ListKafkaVersionsResult& AddKafkaVersions(KafkaVersionsT&& value) { m_kafkaVersionsHasBeenSet = true; m_kafkaVersions.emplace_back(std::forward<KafkaVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListKafkaVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListKafkaVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<KafkaVersion> m_kafkaVersions;
    bool m_kafkaVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
