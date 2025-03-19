/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListScramSecretsResult
  {
  public:
    AWS_KAFKA_API ListScramSecretsResult() = default;
    AWS_KAFKA_API ListScramSecretsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListScramSecretsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>Paginated results marker.</p>
         
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListScramSecretsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The list of scram secrets associated with the cluster.</p>
     
     *    
     */
    inline const Aws::Vector<Aws::String>& GetSecretArnList() const { return m_secretArnList; }
    template<typename SecretArnListT = Aws::Vector<Aws::String>>
    void SetSecretArnList(SecretArnListT&& value) { m_secretArnListHasBeenSet = true; m_secretArnList = std::forward<SecretArnListT>(value); }
    template<typename SecretArnListT = Aws::Vector<Aws::String>>
    ListScramSecretsResult& WithSecretArnList(SecretArnListT&& value) { SetSecretArnList(std::forward<SecretArnListT>(value)); return *this;}
    template<typename SecretArnListT = Aws::String>
    ListScramSecretsResult& AddSecretArnList(SecretArnListT&& value) { m_secretArnListHasBeenSet = true; m_secretArnList.emplace_back(std::forward<SecretArnListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListScramSecretsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_secretArnList;
    bool m_secretArnListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
