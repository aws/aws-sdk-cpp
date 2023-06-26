/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/RoleType.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> The wrapper that contains the Audit Manager role information of the current
   * user. This includes the role type and IAM Amazon Resource Name (ARN).
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/Role">AWS
   * API Reference</a></p>
   */
  class Role
  {
  public:
    AWS_AUDITMANAGER_API Role();
    AWS_AUDITMANAGER_API Role(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Role& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The type of customer persona. </p>  <p>In
     * <code>CreateAssessment</code>, <code>roleType</code> can only be
     * <code>PROCESS_OWNER</code>. </p> <p>In <code>UpdateSettings</code>,
     * <code>roleType</code> can only be <code>PROCESS_OWNER</code>.</p> <p>In
     * <code>BatchCreateDelegationByAssessment</code>, <code>roleType</code> can only
     * be <code>RESOURCE_OWNER</code>.</p> 
     */
    inline const RoleType& GetRoleType() const{ return m_roleType; }

    /**
     * <p> The type of customer persona. </p>  <p>In
     * <code>CreateAssessment</code>, <code>roleType</code> can only be
     * <code>PROCESS_OWNER</code>. </p> <p>In <code>UpdateSettings</code>,
     * <code>roleType</code> can only be <code>PROCESS_OWNER</code>.</p> <p>In
     * <code>BatchCreateDelegationByAssessment</code>, <code>roleType</code> can only
     * be <code>RESOURCE_OWNER</code>.</p> 
     */
    inline bool RoleTypeHasBeenSet() const { return m_roleTypeHasBeenSet; }

    /**
     * <p> The type of customer persona. </p>  <p>In
     * <code>CreateAssessment</code>, <code>roleType</code> can only be
     * <code>PROCESS_OWNER</code>. </p> <p>In <code>UpdateSettings</code>,
     * <code>roleType</code> can only be <code>PROCESS_OWNER</code>.</p> <p>In
     * <code>BatchCreateDelegationByAssessment</code>, <code>roleType</code> can only
     * be <code>RESOURCE_OWNER</code>.</p> 
     */
    inline void SetRoleType(const RoleType& value) { m_roleTypeHasBeenSet = true; m_roleType = value; }

    /**
     * <p> The type of customer persona. </p>  <p>In
     * <code>CreateAssessment</code>, <code>roleType</code> can only be
     * <code>PROCESS_OWNER</code>. </p> <p>In <code>UpdateSettings</code>,
     * <code>roleType</code> can only be <code>PROCESS_OWNER</code>.</p> <p>In
     * <code>BatchCreateDelegationByAssessment</code>, <code>roleType</code> can only
     * be <code>RESOURCE_OWNER</code>.</p> 
     */
    inline void SetRoleType(RoleType&& value) { m_roleTypeHasBeenSet = true; m_roleType = std::move(value); }

    /**
     * <p> The type of customer persona. </p>  <p>In
     * <code>CreateAssessment</code>, <code>roleType</code> can only be
     * <code>PROCESS_OWNER</code>. </p> <p>In <code>UpdateSettings</code>,
     * <code>roleType</code> can only be <code>PROCESS_OWNER</code>.</p> <p>In
     * <code>BatchCreateDelegationByAssessment</code>, <code>roleType</code> can only
     * be <code>RESOURCE_OWNER</code>.</p> 
     */
    inline Role& WithRoleType(const RoleType& value) { SetRoleType(value); return *this;}

    /**
     * <p> The type of customer persona. </p>  <p>In
     * <code>CreateAssessment</code>, <code>roleType</code> can only be
     * <code>PROCESS_OWNER</code>. </p> <p>In <code>UpdateSettings</code>,
     * <code>roleType</code> can only be <code>PROCESS_OWNER</code>.</p> <p>In
     * <code>BatchCreateDelegationByAssessment</code>, <code>roleType</code> can only
     * be <code>RESOURCE_OWNER</code>.</p> 
     */
    inline Role& WithRoleType(RoleType&& value) { SetRoleType(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline Role& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline Role& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline Role& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    RoleType m_roleType;
    bool m_roleTypeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
