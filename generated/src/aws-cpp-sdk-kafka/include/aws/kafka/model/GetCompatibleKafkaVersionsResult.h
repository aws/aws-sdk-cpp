/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/CompatibleKafkaVersion.h>
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
  class GetCompatibleKafkaVersionsResult
  {
  public:
    AWS_KAFKA_API GetCompatibleKafkaVersionsResult() = default;
    AWS_KAFKA_API GetCompatibleKafkaVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API GetCompatibleKafkaVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>A list of CompatibleKafkaVersion objects.</p>
            
     */
    inline const Aws::Vector<CompatibleKafkaVersion>& GetCompatibleKafkaVersions() const { return m_compatibleKafkaVersions; }
    template<typename CompatibleKafkaVersionsT = Aws::Vector<CompatibleKafkaVersion>>
    void SetCompatibleKafkaVersions(CompatibleKafkaVersionsT&& value) { m_compatibleKafkaVersionsHasBeenSet = true; m_compatibleKafkaVersions = std::forward<CompatibleKafkaVersionsT>(value); }
    template<typename CompatibleKafkaVersionsT = Aws::Vector<CompatibleKafkaVersion>>
    GetCompatibleKafkaVersionsResult& WithCompatibleKafkaVersions(CompatibleKafkaVersionsT&& value) { SetCompatibleKafkaVersions(std::forward<CompatibleKafkaVersionsT>(value)); return *this;}
    template<typename CompatibleKafkaVersionsT = CompatibleKafkaVersion>
    GetCompatibleKafkaVersionsResult& AddCompatibleKafkaVersions(CompatibleKafkaVersionsT&& value) { m_compatibleKafkaVersionsHasBeenSet = true; m_compatibleKafkaVersions.emplace_back(std::forward<CompatibleKafkaVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCompatibleKafkaVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CompatibleKafkaVersion> m_compatibleKafkaVersions;
    bool m_compatibleKafkaVersionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
