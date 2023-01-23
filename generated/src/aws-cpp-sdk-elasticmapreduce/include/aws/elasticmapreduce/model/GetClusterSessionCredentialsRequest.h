/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class GetClusterSessionCredentialsRequest : public EMRRequest
  {
  public:
    AWS_EMR_API GetClusterSessionCredentialsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetClusterSessionCredentials"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline GetClusterSessionCredentialsRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline GetClusterSessionCredentialsRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline GetClusterSessionCredentialsRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the runtime role for interactive workload
     * submission on the cluster. The runtime role can be a cross-account IAM role. The
     * runtime role ARN is a combination of account ID, role name, and role type using
     * the following format:
     * <code>arn:partition:service:region:account:resource</code>.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the runtime role for interactive workload
     * submission on the cluster. The runtime role can be a cross-account IAM role. The
     * runtime role ARN is a combination of account ID, role name, and role type using
     * the following format:
     * <code>arn:partition:service:region:account:resource</code>.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the runtime role for interactive workload
     * submission on the cluster. The runtime role can be a cross-account IAM role. The
     * runtime role ARN is a combination of account ID, role name, and role type using
     * the following format:
     * <code>arn:partition:service:region:account:resource</code>.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the runtime role for interactive workload
     * submission on the cluster. The runtime role can be a cross-account IAM role. The
     * runtime role ARN is a combination of account ID, role name, and role type using
     * the following format:
     * <code>arn:partition:service:region:account:resource</code>.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the runtime role for interactive workload
     * submission on the cluster. The runtime role can be a cross-account IAM role. The
     * runtime role ARN is a combination of account ID, role name, and role type using
     * the following format:
     * <code>arn:partition:service:region:account:resource</code>.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the runtime role for interactive workload
     * submission on the cluster. The runtime role can be a cross-account IAM role. The
     * runtime role ARN is a combination of account ID, role name, and role type using
     * the following format:
     * <code>arn:partition:service:region:account:resource</code>.</p>
     */
    inline GetClusterSessionCredentialsRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the runtime role for interactive workload
     * submission on the cluster. The runtime role can be a cross-account IAM role. The
     * runtime role ARN is a combination of account ID, role name, and role type using
     * the following format:
     * <code>arn:partition:service:region:account:resource</code>.</p>
     */
    inline GetClusterSessionCredentialsRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the runtime role for interactive workload
     * submission on the cluster. The runtime role can be a cross-account IAM role. The
     * runtime role ARN is a combination of account ID, role name, and role type using
     * the following format:
     * <code>arn:partition:service:region:account:resource</code>.</p>
     */
    inline GetClusterSessionCredentialsRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
