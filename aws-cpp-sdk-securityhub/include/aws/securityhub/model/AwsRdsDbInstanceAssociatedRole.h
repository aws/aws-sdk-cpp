/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>An IAM role associated with the DB instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbInstanceAssociatedRole">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbInstanceAssociatedRole
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbInstanceAssociatedRole();
    AWS_SECURITYHUB_API AwsRdsDbInstanceAssociatedRole(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbInstanceAssociatedRole& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the IAM role that is associated with the DB instance.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that is associated with the DB instance.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that is associated with the DB instance.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that is associated with the DB instance.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that is associated with the DB instance.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that is associated with the DB instance.</p>
     */
    inline AwsRdsDbInstanceAssociatedRole& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that is associated with the DB instance.</p>
     */
    inline AwsRdsDbInstanceAssociatedRole& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that is associated with the DB instance.</p>
     */
    inline AwsRdsDbInstanceAssociatedRole& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The name of the feature associated with the IAM role.</p>
     */
    inline const Aws::String& GetFeatureName() const{ return m_featureName; }

    /**
     * <p>The name of the feature associated with the IAM role.</p>
     */
    inline bool FeatureNameHasBeenSet() const { return m_featureNameHasBeenSet; }

    /**
     * <p>The name of the feature associated with the IAM role.</p>
     */
    inline void SetFeatureName(const Aws::String& value) { m_featureNameHasBeenSet = true; m_featureName = value; }

    /**
     * <p>The name of the feature associated with the IAM role.</p>
     */
    inline void SetFeatureName(Aws::String&& value) { m_featureNameHasBeenSet = true; m_featureName = std::move(value); }

    /**
     * <p>The name of the feature associated with the IAM role.</p>
     */
    inline void SetFeatureName(const char* value) { m_featureNameHasBeenSet = true; m_featureName.assign(value); }

    /**
     * <p>The name of the feature associated with the IAM role.</p>
     */
    inline AwsRdsDbInstanceAssociatedRole& WithFeatureName(const Aws::String& value) { SetFeatureName(value); return *this;}

    /**
     * <p>The name of the feature associated with the IAM role.</p>
     */
    inline AwsRdsDbInstanceAssociatedRole& WithFeatureName(Aws::String&& value) { SetFeatureName(std::move(value)); return *this;}

    /**
     * <p>The name of the feature associated with the IAM role.</p>
     */
    inline AwsRdsDbInstanceAssociatedRole& WithFeatureName(const char* value) { SetFeatureName(value); return *this;}


    /**
     * <p>Describes the state of the association between the IAM role and the DB
     * instance. The <code>Status</code> property returns one of the following
     * values:</p> <ul> <li> <p> <code>ACTIVE</code> - The IAM role ARN is associated
     * with the DB instance and can be used to access other Amazon Web Services
     * services on your behalf.</p> </li> <li> <p> <code>PENDING</code> - The IAM role
     * ARN is being associated with the DB instance.</p> </li> <li> <p>
     * <code>INVALID</code> - The IAM role ARN is associated with the DB instance. But
     * the DB instance is unable to assume the IAM role in order to access other Amazon
     * Web Services services on your behalf. </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Describes the state of the association between the IAM role and the DB
     * instance. The <code>Status</code> property returns one of the following
     * values:</p> <ul> <li> <p> <code>ACTIVE</code> - The IAM role ARN is associated
     * with the DB instance and can be used to access other Amazon Web Services
     * services on your behalf.</p> </li> <li> <p> <code>PENDING</code> - The IAM role
     * ARN is being associated with the DB instance.</p> </li> <li> <p>
     * <code>INVALID</code> - The IAM role ARN is associated with the DB instance. But
     * the DB instance is unable to assume the IAM role in order to access other Amazon
     * Web Services services on your behalf. </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Describes the state of the association between the IAM role and the DB
     * instance. The <code>Status</code> property returns one of the following
     * values:</p> <ul> <li> <p> <code>ACTIVE</code> - The IAM role ARN is associated
     * with the DB instance and can be used to access other Amazon Web Services
     * services on your behalf.</p> </li> <li> <p> <code>PENDING</code> - The IAM role
     * ARN is being associated with the DB instance.</p> </li> <li> <p>
     * <code>INVALID</code> - The IAM role ARN is associated with the DB instance. But
     * the DB instance is unable to assume the IAM role in order to access other Amazon
     * Web Services services on your behalf. </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Describes the state of the association between the IAM role and the DB
     * instance. The <code>Status</code> property returns one of the following
     * values:</p> <ul> <li> <p> <code>ACTIVE</code> - The IAM role ARN is associated
     * with the DB instance and can be used to access other Amazon Web Services
     * services on your behalf.</p> </li> <li> <p> <code>PENDING</code> - The IAM role
     * ARN is being associated with the DB instance.</p> </li> <li> <p>
     * <code>INVALID</code> - The IAM role ARN is associated with the DB instance. But
     * the DB instance is unable to assume the IAM role in order to access other Amazon
     * Web Services services on your behalf. </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Describes the state of the association between the IAM role and the DB
     * instance. The <code>Status</code> property returns one of the following
     * values:</p> <ul> <li> <p> <code>ACTIVE</code> - The IAM role ARN is associated
     * with the DB instance and can be used to access other Amazon Web Services
     * services on your behalf.</p> </li> <li> <p> <code>PENDING</code> - The IAM role
     * ARN is being associated with the DB instance.</p> </li> <li> <p>
     * <code>INVALID</code> - The IAM role ARN is associated with the DB instance. But
     * the DB instance is unable to assume the IAM role in order to access other Amazon
     * Web Services services on your behalf. </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Describes the state of the association between the IAM role and the DB
     * instance. The <code>Status</code> property returns one of the following
     * values:</p> <ul> <li> <p> <code>ACTIVE</code> - The IAM role ARN is associated
     * with the DB instance and can be used to access other Amazon Web Services
     * services on your behalf.</p> </li> <li> <p> <code>PENDING</code> - The IAM role
     * ARN is being associated with the DB instance.</p> </li> <li> <p>
     * <code>INVALID</code> - The IAM role ARN is associated with the DB instance. But
     * the DB instance is unable to assume the IAM role in order to access other Amazon
     * Web Services services on your behalf. </p> </li> </ul>
     */
    inline AwsRdsDbInstanceAssociatedRole& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Describes the state of the association between the IAM role and the DB
     * instance. The <code>Status</code> property returns one of the following
     * values:</p> <ul> <li> <p> <code>ACTIVE</code> - The IAM role ARN is associated
     * with the DB instance and can be used to access other Amazon Web Services
     * services on your behalf.</p> </li> <li> <p> <code>PENDING</code> - The IAM role
     * ARN is being associated with the DB instance.</p> </li> <li> <p>
     * <code>INVALID</code> - The IAM role ARN is associated with the DB instance. But
     * the DB instance is unable to assume the IAM role in order to access other Amazon
     * Web Services services on your behalf. </p> </li> </ul>
     */
    inline AwsRdsDbInstanceAssociatedRole& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Describes the state of the association between the IAM role and the DB
     * instance. The <code>Status</code> property returns one of the following
     * values:</p> <ul> <li> <p> <code>ACTIVE</code> - The IAM role ARN is associated
     * with the DB instance and can be used to access other Amazon Web Services
     * services on your behalf.</p> </li> <li> <p> <code>PENDING</code> - The IAM role
     * ARN is being associated with the DB instance.</p> </li> <li> <p>
     * <code>INVALID</code> - The IAM role ARN is associated with the DB instance. But
     * the DB instance is unable to assume the IAM role in order to access other Amazon
     * Web Services services on your behalf. </p> </li> </ul>
     */
    inline AwsRdsDbInstanceAssociatedRole& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_featureName;
    bool m_featureNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
