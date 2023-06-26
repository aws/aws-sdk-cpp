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
  class BatchDisassociateScramSecretResult
  {
  public:
    AWS_KAFKA_API BatchDisassociateScramSecretResult();
    AWS_KAFKA_API BatchDisassociateScramSecretResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API BatchDisassociateScramSecretResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline void SetClusterArn(const char* value) { m_clusterArn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline BatchDisassociateScramSecretResult& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline BatchDisassociateScramSecretResult& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline BatchDisassociateScramSecretResult& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * 
            <p>List of errors when disassociating secrets to cluster.</p>
     
     *    
     */
    inline const Aws::Vector<UnprocessedScramSecret>& GetUnprocessedScramSecrets() const{ return m_unprocessedScramSecrets; }

    /**
     * 
            <p>List of errors when disassociating secrets to cluster.</p>
     
     *    
     */
    inline void SetUnprocessedScramSecrets(const Aws::Vector<UnprocessedScramSecret>& value) { m_unprocessedScramSecrets = value; }

    /**
     * 
            <p>List of errors when disassociating secrets to cluster.</p>
     
     *    
     */
    inline void SetUnprocessedScramSecrets(Aws::Vector<UnprocessedScramSecret>&& value) { m_unprocessedScramSecrets = std::move(value); }

    /**
     * 
            <p>List of errors when disassociating secrets to cluster.</p>
     
     *    
     */
    inline BatchDisassociateScramSecretResult& WithUnprocessedScramSecrets(const Aws::Vector<UnprocessedScramSecret>& value) { SetUnprocessedScramSecrets(value); return *this;}

    /**
     * 
            <p>List of errors when disassociating secrets to cluster.</p>
     
     *    
     */
    inline BatchDisassociateScramSecretResult& WithUnprocessedScramSecrets(Aws::Vector<UnprocessedScramSecret>&& value) { SetUnprocessedScramSecrets(std::move(value)); return *this;}

    /**
     * 
            <p>List of errors when disassociating secrets to cluster.</p>
     
     *    
     */
    inline BatchDisassociateScramSecretResult& AddUnprocessedScramSecrets(const UnprocessedScramSecret& value) { m_unprocessedScramSecrets.push_back(value); return *this; }

    /**
     * 
            <p>List of errors when disassociating secrets to cluster.</p>
     
     *    
     */
    inline BatchDisassociateScramSecretResult& AddUnprocessedScramSecrets(UnprocessedScramSecret&& value) { m_unprocessedScramSecrets.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchDisassociateScramSecretResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchDisassociateScramSecretResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchDisassociateScramSecretResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_clusterArn;

    Aws::Vector<UnprocessedScramSecret> m_unprocessedScramSecrets;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
