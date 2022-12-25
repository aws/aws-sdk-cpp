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
   * <p>An IAM role that the cluster can use to access other Amazon Web Services
   * services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterIamRole">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterIamRole
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterIamRole();
    AWS_SECURITYHUB_API AwsRedshiftClusterIamRole(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterIamRole& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the IAM role's association with the cluster.</p> <p>Valid
     * values: <code>in-sync</code> | <code>adding</code> | <code>removing</code> </p>
     */
    inline const Aws::String& GetApplyStatus() const{ return m_applyStatus; }

    /**
     * <p>The status of the IAM role's association with the cluster.</p> <p>Valid
     * values: <code>in-sync</code> | <code>adding</code> | <code>removing</code> </p>
     */
    inline bool ApplyStatusHasBeenSet() const { return m_applyStatusHasBeenSet; }

    /**
     * <p>The status of the IAM role's association with the cluster.</p> <p>Valid
     * values: <code>in-sync</code> | <code>adding</code> | <code>removing</code> </p>
     */
    inline void SetApplyStatus(const Aws::String& value) { m_applyStatusHasBeenSet = true; m_applyStatus = value; }

    /**
     * <p>The status of the IAM role's association with the cluster.</p> <p>Valid
     * values: <code>in-sync</code> | <code>adding</code> | <code>removing</code> </p>
     */
    inline void SetApplyStatus(Aws::String&& value) { m_applyStatusHasBeenSet = true; m_applyStatus = std::move(value); }

    /**
     * <p>The status of the IAM role's association with the cluster.</p> <p>Valid
     * values: <code>in-sync</code> | <code>adding</code> | <code>removing</code> </p>
     */
    inline void SetApplyStatus(const char* value) { m_applyStatusHasBeenSet = true; m_applyStatus.assign(value); }

    /**
     * <p>The status of the IAM role's association with the cluster.</p> <p>Valid
     * values: <code>in-sync</code> | <code>adding</code> | <code>removing</code> </p>
     */
    inline AwsRedshiftClusterIamRole& WithApplyStatus(const Aws::String& value) { SetApplyStatus(value); return *this;}

    /**
     * <p>The status of the IAM role's association with the cluster.</p> <p>Valid
     * values: <code>in-sync</code> | <code>adding</code> | <code>removing</code> </p>
     */
    inline AwsRedshiftClusterIamRole& WithApplyStatus(Aws::String&& value) { SetApplyStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the IAM role's association with the cluster.</p> <p>Valid
     * values: <code>in-sync</code> | <code>adding</code> | <code>removing</code> </p>
     */
    inline AwsRedshiftClusterIamRole& WithApplyStatus(const char* value) { SetApplyStatus(value); return *this;}


    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline AwsRedshiftClusterIamRole& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline AwsRedshiftClusterIamRole& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline AwsRedshiftClusterIamRole& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}

  private:

    Aws::String m_applyStatus;
    bool m_applyStatusHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
