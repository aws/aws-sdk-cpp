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
   * <p>An IAM role that is associated with the Amazon RDS DB cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbClusterAssociatedRole">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbClusterAssociatedRole
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbClusterAssociatedRole();
    AWS_SECURITYHUB_API AwsRdsDbClusterAssociatedRole(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbClusterAssociatedRole& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline AwsRdsDbClusterAssociatedRole& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline AwsRdsDbClusterAssociatedRole& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline AwsRdsDbClusterAssociatedRole& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The status of the association between the IAM role and the DB cluster. Valid
     * values are as follows:</p> <ul> <li> <p> <code>ACTIVE</code> </p> </li> <li> <p>
     * <code>INVALID</code> </p> </li> <li> <p> <code>PENDING</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the association between the IAM role and the DB cluster. Valid
     * values are as follows:</p> <ul> <li> <p> <code>ACTIVE</code> </p> </li> <li> <p>
     * <code>INVALID</code> </p> </li> <li> <p> <code>PENDING</code> </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the association between the IAM role and the DB cluster. Valid
     * values are as follows:</p> <ul> <li> <p> <code>ACTIVE</code> </p> </li> <li> <p>
     * <code>INVALID</code> </p> </li> <li> <p> <code>PENDING</code> </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the association between the IAM role and the DB cluster. Valid
     * values are as follows:</p> <ul> <li> <p> <code>ACTIVE</code> </p> </li> <li> <p>
     * <code>INVALID</code> </p> </li> <li> <p> <code>PENDING</code> </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the association between the IAM role and the DB cluster. Valid
     * values are as follows:</p> <ul> <li> <p> <code>ACTIVE</code> </p> </li> <li> <p>
     * <code>INVALID</code> </p> </li> <li> <p> <code>PENDING</code> </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the association between the IAM role and the DB cluster. Valid
     * values are as follows:</p> <ul> <li> <p> <code>ACTIVE</code> </p> </li> <li> <p>
     * <code>INVALID</code> </p> </li> <li> <p> <code>PENDING</code> </p> </li> </ul>
     */
    inline AwsRdsDbClusterAssociatedRole& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the association between the IAM role and the DB cluster. Valid
     * values are as follows:</p> <ul> <li> <p> <code>ACTIVE</code> </p> </li> <li> <p>
     * <code>INVALID</code> </p> </li> <li> <p> <code>PENDING</code> </p> </li> </ul>
     */
    inline AwsRdsDbClusterAssociatedRole& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the association between the IAM role and the DB cluster. Valid
     * values are as follows:</p> <ul> <li> <p> <code>ACTIVE</code> </p> </li> <li> <p>
     * <code>INVALID</code> </p> </li> <li> <p> <code>PENDING</code> </p> </li> </ul>
     */
    inline AwsRdsDbClusterAssociatedRole& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
