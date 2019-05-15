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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API RemoveRoleFromDBInstanceRequest : public RDSRequest
  {
  public:
    RemoveRoleFromDBInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveRoleFromDBInstance"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB instance to disassociate the IAM role from.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The name of the DB instance to disassociate the IAM role from.</p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The name of the DB instance to disassociate the IAM role from.</p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The name of the DB instance to disassociate the IAM role from.</p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The name of the DB instance to disassociate the IAM role from.</p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The name of the DB instance to disassociate the IAM role from.</p>
     */
    inline RemoveRoleFromDBInstanceRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The name of the DB instance to disassociate the IAM role from.</p>
     */
    inline RemoveRoleFromDBInstanceRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the DB instance to disassociate the IAM role from.</p>
     */
    inline RemoveRoleFromDBInstanceRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the DB
     * instance, for example
     * <code>arn:aws:iam::123456789012:role/AccessRole</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the DB
     * instance, for example
     * <code>arn:aws:iam::123456789012:role/AccessRole</code>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the DB
     * instance, for example
     * <code>arn:aws:iam::123456789012:role/AccessRole</code>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the DB
     * instance, for example
     * <code>arn:aws:iam::123456789012:role/AccessRole</code>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the DB
     * instance, for example
     * <code>arn:aws:iam::123456789012:role/AccessRole</code>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the DB
     * instance, for example
     * <code>arn:aws:iam::123456789012:role/AccessRole</code>.</p>
     */
    inline RemoveRoleFromDBInstanceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the DB
     * instance, for example
     * <code>arn:aws:iam::123456789012:role/AccessRole</code>.</p>
     */
    inline RemoveRoleFromDBInstanceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the DB
     * instance, for example
     * <code>arn:aws:iam::123456789012:role/AccessRole</code>.</p>
     */
    inline RemoveRoleFromDBInstanceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The name of the feature for the DB instance that the IAM role is to be
     * disassociated from. For the list of supported feature names, see
     * <code>DBEngineVersion</code>. </p>
     */
    inline const Aws::String& GetFeatureName() const{ return m_featureName; }

    /**
     * <p>The name of the feature for the DB instance that the IAM role is to be
     * disassociated from. For the list of supported feature names, see
     * <code>DBEngineVersion</code>. </p>
     */
    inline bool FeatureNameHasBeenSet() const { return m_featureNameHasBeenSet; }

    /**
     * <p>The name of the feature for the DB instance that the IAM role is to be
     * disassociated from. For the list of supported feature names, see
     * <code>DBEngineVersion</code>. </p>
     */
    inline void SetFeatureName(const Aws::String& value) { m_featureNameHasBeenSet = true; m_featureName = value; }

    /**
     * <p>The name of the feature for the DB instance that the IAM role is to be
     * disassociated from. For the list of supported feature names, see
     * <code>DBEngineVersion</code>. </p>
     */
    inline void SetFeatureName(Aws::String&& value) { m_featureNameHasBeenSet = true; m_featureName = std::move(value); }

    /**
     * <p>The name of the feature for the DB instance that the IAM role is to be
     * disassociated from. For the list of supported feature names, see
     * <code>DBEngineVersion</code>. </p>
     */
    inline void SetFeatureName(const char* value) { m_featureNameHasBeenSet = true; m_featureName.assign(value); }

    /**
     * <p>The name of the feature for the DB instance that the IAM role is to be
     * disassociated from. For the list of supported feature names, see
     * <code>DBEngineVersion</code>. </p>
     */
    inline RemoveRoleFromDBInstanceRequest& WithFeatureName(const Aws::String& value) { SetFeatureName(value); return *this;}

    /**
     * <p>The name of the feature for the DB instance that the IAM role is to be
     * disassociated from. For the list of supported feature names, see
     * <code>DBEngineVersion</code>. </p>
     */
    inline RemoveRoleFromDBInstanceRequest& WithFeatureName(Aws::String&& value) { SetFeatureName(std::move(value)); return *this;}

    /**
     * <p>The name of the feature for the DB instance that the IAM role is to be
     * disassociated from. For the list of supported feature names, see
     * <code>DBEngineVersion</code>. </p>
     */
    inline RemoveRoleFromDBInstanceRequest& WithFeatureName(const char* value) { SetFeatureName(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_featureName;
    bool m_featureNameHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
