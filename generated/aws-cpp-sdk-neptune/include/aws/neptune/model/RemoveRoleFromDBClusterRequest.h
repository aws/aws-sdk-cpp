﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class AWS_NEPTUNE_API RemoveRoleFromDBClusterRequest : public NeptuneRequest
  {
  public:
    RemoveRoleFromDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveRoleFromDBCluster"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB cluster to disassociate the IAM role from.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The name of the DB cluster to disassociate the IAM role from.</p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The name of the DB cluster to disassociate the IAM role from.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The name of the DB cluster to disassociate the IAM role from.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The name of the DB cluster to disassociate the IAM role from.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The name of the DB cluster to disassociate the IAM role from.</p>
     */
    inline RemoveRoleFromDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The name of the DB cluster to disassociate the IAM role from.</p>
     */
    inline RemoveRoleFromDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster to disassociate the IAM role from.</p>
     */
    inline RemoveRoleFromDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the DB
     * cluster, for example
     * <code>arn:aws:iam::123456789012:role/NeptuneAccessRole</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the DB
     * cluster, for example
     * <code>arn:aws:iam::123456789012:role/NeptuneAccessRole</code>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the DB
     * cluster, for example
     * <code>arn:aws:iam::123456789012:role/NeptuneAccessRole</code>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the DB
     * cluster, for example
     * <code>arn:aws:iam::123456789012:role/NeptuneAccessRole</code>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the DB
     * cluster, for example
     * <code>arn:aws:iam::123456789012:role/NeptuneAccessRole</code>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the DB
     * cluster, for example
     * <code>arn:aws:iam::123456789012:role/NeptuneAccessRole</code>.</p>
     */
    inline RemoveRoleFromDBClusterRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the DB
     * cluster, for example
     * <code>arn:aws:iam::123456789012:role/NeptuneAccessRole</code>.</p>
     */
    inline RemoveRoleFromDBClusterRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the DB
     * cluster, for example
     * <code>arn:aws:iam::123456789012:role/NeptuneAccessRole</code>.</p>
     */
    inline RemoveRoleFromDBClusterRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The name of the feature for the DB cluster that the IAM role is to be
     * disassociated from. For the list of supported feature names, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/api-other-apis.html#DescribeDBEngineVersions">DescribeDBEngineVersions</a>.</p>
     */
    inline const Aws::String& GetFeatureName() const{ return m_featureName; }

    /**
     * <p>The name of the feature for the DB cluster that the IAM role is to be
     * disassociated from. For the list of supported feature names, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/api-other-apis.html#DescribeDBEngineVersions">DescribeDBEngineVersions</a>.</p>
     */
    inline bool FeatureNameHasBeenSet() const { return m_featureNameHasBeenSet; }

    /**
     * <p>The name of the feature for the DB cluster that the IAM role is to be
     * disassociated from. For the list of supported feature names, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/api-other-apis.html#DescribeDBEngineVersions">DescribeDBEngineVersions</a>.</p>
     */
    inline void SetFeatureName(const Aws::String& value) { m_featureNameHasBeenSet = true; m_featureName = value; }

    /**
     * <p>The name of the feature for the DB cluster that the IAM role is to be
     * disassociated from. For the list of supported feature names, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/api-other-apis.html#DescribeDBEngineVersions">DescribeDBEngineVersions</a>.</p>
     */
    inline void SetFeatureName(Aws::String&& value) { m_featureNameHasBeenSet = true; m_featureName = std::move(value); }

    /**
     * <p>The name of the feature for the DB cluster that the IAM role is to be
     * disassociated from. For the list of supported feature names, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/api-other-apis.html#DescribeDBEngineVersions">DescribeDBEngineVersions</a>.</p>
     */
    inline void SetFeatureName(const char* value) { m_featureNameHasBeenSet = true; m_featureName.assign(value); }

    /**
     * <p>The name of the feature for the DB cluster that the IAM role is to be
     * disassociated from. For the list of supported feature names, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/api-other-apis.html#DescribeDBEngineVersions">DescribeDBEngineVersions</a>.</p>
     */
    inline RemoveRoleFromDBClusterRequest& WithFeatureName(const Aws::String& value) { SetFeatureName(value); return *this;}

    /**
     * <p>The name of the feature for the DB cluster that the IAM role is to be
     * disassociated from. For the list of supported feature names, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/api-other-apis.html#DescribeDBEngineVersions">DescribeDBEngineVersions</a>.</p>
     */
    inline RemoveRoleFromDBClusterRequest& WithFeatureName(Aws::String&& value) { SetFeatureName(std::move(value)); return *this;}

    /**
     * <p>The name of the feature for the DB cluster that the IAM role is to be
     * disassociated from. For the list of supported feature names, see <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/api-other-apis.html#DescribeDBEngineVersions">DescribeDBEngineVersions</a>.</p>
     */
    inline RemoveRoleFromDBClusterRequest& WithFeatureName(const char* value) { SetFeatureName(value); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_featureName;
    bool m_featureNameHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
