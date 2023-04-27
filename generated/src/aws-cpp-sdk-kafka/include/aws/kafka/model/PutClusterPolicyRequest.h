/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PutClusterPolicyRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API PutClusterPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutClusterPolicy"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline PutClusterPolicyRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline PutClusterPolicyRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline PutClusterPolicyRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * 
            <p>The policy version.</p>
         
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * 
            <p>The policy version.</p>
         
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * 
            <p>The policy version.</p>
         
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * 
            <p>The policy version.</p>
         
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * 
            <p>The policy version.</p>
         
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }

    /**
     * 
            <p>The policy version.</p>
         
     */
    inline PutClusterPolicyRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * 
            <p>The policy version.</p>
         
     */
    inline PutClusterPolicyRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * 
            <p>The policy version.</p>
         
     */
    inline PutClusterPolicyRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}


    /**
     * 
            <p>The policy.</p>
         
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * 
            <p>The policy.</p>
         
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * 
            <p>The policy.</p>
         
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * 
            <p>The policy.</p>
         
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * 
            <p>The policy.</p>
         
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * 
            <p>The policy.</p>
         
     */
    inline PutClusterPolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * 
            <p>The policy.</p>
         
     */
    inline PutClusterPolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * 
            <p>The policy.</p>
         
     */
    inline PutClusterPolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
