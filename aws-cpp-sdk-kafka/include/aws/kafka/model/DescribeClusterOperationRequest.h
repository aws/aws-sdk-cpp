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
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   */
  class AWS_KAFKA_API DescribeClusterOperationRequest : public KafkaRequest
  {
  public:
    DescribeClusterOperationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusterOperation"; }

    Aws::String SerializePayload() const override;


    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the MSK
     * cluster operation.</p>
         
     */
    inline const Aws::String& GetClusterOperationArn() const{ return m_clusterOperationArn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the MSK
     * cluster operation.</p>
         
     */
    inline bool ClusterOperationArnHasBeenSet() const { return m_clusterOperationArnHasBeenSet; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the MSK
     * cluster operation.</p>
         
     */
    inline void SetClusterOperationArn(const Aws::String& value) { m_clusterOperationArnHasBeenSet = true; m_clusterOperationArn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the MSK
     * cluster operation.</p>
         
     */
    inline void SetClusterOperationArn(Aws::String&& value) { m_clusterOperationArnHasBeenSet = true; m_clusterOperationArn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the MSK
     * cluster operation.</p>
         
     */
    inline void SetClusterOperationArn(const char* value) { m_clusterOperationArnHasBeenSet = true; m_clusterOperationArn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the MSK
     * cluster operation.</p>
         
     */
    inline DescribeClusterOperationRequest& WithClusterOperationArn(const Aws::String& value) { SetClusterOperationArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the MSK
     * cluster operation.</p>
         
     */
    inline DescribeClusterOperationRequest& WithClusterOperationArn(Aws::String&& value) { SetClusterOperationArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies the MSK
     * cluster operation.</p>
         
     */
    inline DescribeClusterOperationRequest& WithClusterOperationArn(const char* value) { SetClusterOperationArn(value); return *this;}

  private:

    Aws::String m_clusterOperationArn;
    bool m_clusterOperationArnHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
