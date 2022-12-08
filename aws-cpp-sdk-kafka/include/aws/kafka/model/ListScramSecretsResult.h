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
    AWS_KAFKA_API ListScramSecretsResult();
    AWS_KAFKA_API ListScramSecretsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListScramSecretsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>Paginated results marker.</p>
         
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * 
            <p>Paginated results marker.</p>
         
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * 
            <p>Paginated results marker.</p>
         
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * 
            <p>Paginated results marker.</p>
         
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * 
            <p>Paginated results marker.</p>
         
     */
    inline ListScramSecretsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * 
            <p>Paginated results marker.</p>
         
     */
    inline ListScramSecretsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * 
            <p>Paginated results marker.</p>
         
     */
    inline ListScramSecretsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * 
            <p>The list of scram secrets associated with the cluster.</p>
     
     *    
     */
    inline const Aws::Vector<Aws::String>& GetSecretArnList() const{ return m_secretArnList; }

    /**
     * 
            <p>The list of scram secrets associated with the cluster.</p>
     
     *    
     */
    inline void SetSecretArnList(const Aws::Vector<Aws::String>& value) { m_secretArnList = value; }

    /**
     * 
            <p>The list of scram secrets associated with the cluster.</p>
     
     *    
     */
    inline void SetSecretArnList(Aws::Vector<Aws::String>&& value) { m_secretArnList = std::move(value); }

    /**
     * 
            <p>The list of scram secrets associated with the cluster.</p>
     
     *    
     */
    inline ListScramSecretsResult& WithSecretArnList(const Aws::Vector<Aws::String>& value) { SetSecretArnList(value); return *this;}

    /**
     * 
            <p>The list of scram secrets associated with the cluster.</p>
     
     *    
     */
    inline ListScramSecretsResult& WithSecretArnList(Aws::Vector<Aws::String>&& value) { SetSecretArnList(std::move(value)); return *this;}

    /**
     * 
            <p>The list of scram secrets associated with the cluster.</p>
     
     *    
     */
    inline ListScramSecretsResult& AddSecretArnList(const Aws::String& value) { m_secretArnList.push_back(value); return *this; }

    /**
     * 
            <p>The list of scram secrets associated with the cluster.</p>
     
     *    
     */
    inline ListScramSecretsResult& AddSecretArnList(Aws::String&& value) { m_secretArnList.push_back(std::move(value)); return *this; }

    /**
     * 
            <p>The list of scram secrets associated with the cluster.</p>
     
     *    
     */
    inline ListScramSecretsResult& AddSecretArnList(const char* value) { m_secretArnList.push_back(value); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_secretArnList;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
