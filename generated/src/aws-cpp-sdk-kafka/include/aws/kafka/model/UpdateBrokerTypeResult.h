/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateBrokerTypeResult
  {
  public:
    AWS_KAFKA_API UpdateBrokerTypeResult();
    AWS_KAFKA_API UpdateBrokerTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API UpdateBrokerTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateBrokerTypeResult& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline UpdateBrokerTypeResult& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline UpdateBrokerTypeResult& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster operation.</p>
   
     *      
     */
    inline const Aws::String& GetClusterOperationArn() const{ return m_clusterOperationArn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster operation.</p>
   
     *      
     */
    inline void SetClusterOperationArn(const Aws::String& value) { m_clusterOperationArn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster operation.</p>
   
     *      
     */
    inline void SetClusterOperationArn(Aws::String&& value) { m_clusterOperationArn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster operation.</p>
   
     *      
     */
    inline void SetClusterOperationArn(const char* value) { m_clusterOperationArn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster operation.</p>
   
     *      
     */
    inline UpdateBrokerTypeResult& WithClusterOperationArn(const Aws::String& value) { SetClusterOperationArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster operation.</p>
   
     *      
     */
    inline UpdateBrokerTypeResult& WithClusterOperationArn(Aws::String&& value) { SetClusterOperationArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster operation.</p>
   
     *      
     */
    inline UpdateBrokerTypeResult& WithClusterOperationArn(const char* value) { SetClusterOperationArn(value); return *this;}

  private:

    Aws::String m_clusterArn;

    Aws::String m_clusterOperationArn;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
