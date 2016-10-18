/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API RemoveRoleFromDBClusterRequest : public RDSRequest
  {
  public:
    RemoveRoleFromDBClusterRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the DB cluster to disassociate the IAM role rom.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The name of the DB cluster to disassociate the IAM role rom.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The name of the DB cluster to disassociate the IAM role rom.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The name of the DB cluster to disassociate the IAM role rom.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The name of the DB cluster to disassociate the IAM role rom.</p>
     */
    inline RemoveRoleFromDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The name of the DB cluster to disassociate the IAM role rom.</p>
     */
    inline RemoveRoleFromDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The name of the DB cluster to disassociate the IAM role rom.</p>
     */
    inline RemoveRoleFromDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the
     * Aurora DB cluster, for example
     * <code>arn:aws:iam::123456789012:role/AuroraAccessRole</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the
     * Aurora DB cluster, for example
     * <code>arn:aws:iam::123456789012:role/AuroraAccessRole</code>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the
     * Aurora DB cluster, for example
     * <code>arn:aws:iam::123456789012:role/AuroraAccessRole</code>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the
     * Aurora DB cluster, for example
     * <code>arn:aws:iam::123456789012:role/AuroraAccessRole</code>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the
     * Aurora DB cluster, for example
     * <code>arn:aws:iam::123456789012:role/AuroraAccessRole</code>.</p>
     */
    inline RemoveRoleFromDBClusterRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the
     * Aurora DB cluster, for example
     * <code>arn:aws:iam::123456789012:role/AuroraAccessRole</code>.</p>
     */
    inline RemoveRoleFromDBClusterRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to disassociate from the
     * Aurora DB cluster, for example
     * <code>arn:aws:iam::123456789012:role/AuroraAccessRole</code>.</p>
     */
    inline RemoveRoleFromDBClusterRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:
    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;
    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
