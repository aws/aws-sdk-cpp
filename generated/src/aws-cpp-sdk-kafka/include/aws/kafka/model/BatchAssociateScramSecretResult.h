/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/model/UnprocessedScramSecret.h>
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
  class BatchAssociateScramSecretResult
  {
  public:
    AWS_KAFKA_API BatchAssociateScramSecretResult() = default;
    AWS_KAFKA_API BatchAssociateScramSecretResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API BatchAssociateScramSecretResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    BatchAssociateScramSecretResult& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>List of errors when associating secrets to cluster.</p>
        
     * 
     */
    inline const Aws::Vector<UnprocessedScramSecret>& GetUnprocessedScramSecrets() const { return m_unprocessedScramSecrets; }
    template<typename UnprocessedScramSecretsT = Aws::Vector<UnprocessedScramSecret>>
    void SetUnprocessedScramSecrets(UnprocessedScramSecretsT&& value) { m_unprocessedScramSecretsHasBeenSet = true; m_unprocessedScramSecrets = std::forward<UnprocessedScramSecretsT>(value); }
    template<typename UnprocessedScramSecretsT = Aws::Vector<UnprocessedScramSecret>>
    BatchAssociateScramSecretResult& WithUnprocessedScramSecrets(UnprocessedScramSecretsT&& value) { SetUnprocessedScramSecrets(std::forward<UnprocessedScramSecretsT>(value)); return *this;}
    template<typename UnprocessedScramSecretsT = UnprocessedScramSecret>
    BatchAssociateScramSecretResult& AddUnprocessedScramSecrets(UnprocessedScramSecretsT&& value) { m_unprocessedScramSecretsHasBeenSet = true; m_unprocessedScramSecrets.emplace_back(std::forward<UnprocessedScramSecretsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchAssociateScramSecretResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::Vector<UnprocessedScramSecret> m_unprocessedScramSecrets;
    bool m_unprocessedScramSecretsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
