/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Parameters for Amazon Athena.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AthenaParameters">AWS
   * API Reference</a></p>
   */
  class AthenaParameters
  {
  public:
    AWS_QUICKSIGHT_API AthenaParameters();
    AWS_QUICKSIGHT_API AthenaParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AthenaParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }

    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }

    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }

    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }

    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }

    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline AthenaParameters& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}

    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline AthenaParameters& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}

    /**
     * <p>The workgroup that Amazon Athena uses.</p>
     */
    inline AthenaParameters& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}


    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific Athena data source. For example, say an account administrator has
     * turned off all Athena access with an account-wide role. The administrator can
     * then use <code>RoleArn</code> to bypass the account-wide role and allow Athena
     * access for the single Athena data source that is specified in the structure,
     * even if the account-wide role forbidding Athena access is still active.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific Athena data source. For example, say an account administrator has
     * turned off all Athena access with an account-wide role. The administrator can
     * then use <code>RoleArn</code> to bypass the account-wide role and allow Athena
     * access for the single Athena data source that is specified in the structure,
     * even if the account-wide role forbidding Athena access is still active.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific Athena data source. For example, say an account administrator has
     * turned off all Athena access with an account-wide role. The administrator can
     * then use <code>RoleArn</code> to bypass the account-wide role and allow Athena
     * access for the single Athena data source that is specified in the structure,
     * even if the account-wide role forbidding Athena access is still active.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific Athena data source. For example, say an account administrator has
     * turned off all Athena access with an account-wide role. The administrator can
     * then use <code>RoleArn</code> to bypass the account-wide role and allow Athena
     * access for the single Athena data source that is specified in the structure,
     * even if the account-wide role forbidding Athena access is still active.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific Athena data source. For example, say an account administrator has
     * turned off all Athena access with an account-wide role. The administrator can
     * then use <code>RoleArn</code> to bypass the account-wide role and allow Athena
     * access for the single Athena data source that is specified in the structure,
     * even if the account-wide role forbidding Athena access is still active.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific Athena data source. For example, say an account administrator has
     * turned off all Athena access with an account-wide role. The administrator can
     * then use <code>RoleArn</code> to bypass the account-wide role and allow Athena
     * access for the single Athena data source that is specified in the structure,
     * even if the account-wide role forbidding Athena access is still active.</p>
     */
    inline AthenaParameters& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific Athena data source. For example, say an account administrator has
     * turned off all Athena access with an account-wide role. The administrator can
     * then use <code>RoleArn</code> to bypass the account-wide role and allow Athena
     * access for the single Athena data source that is specified in the structure,
     * even if the account-wide role forbidding Athena access is still active.</p>
     */
    inline AthenaParameters& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
     * specific Athena data source. For example, say an account administrator has
     * turned off all Athena access with an account-wide role. The administrator can
     * then use <code>RoleArn</code> to bypass the account-wide role and allow Athena
     * access for the single Athena data source that is specified in the structure,
     * even if the account-wide role forbidding Athena access is still active.</p>
     */
    inline AthenaParameters& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
