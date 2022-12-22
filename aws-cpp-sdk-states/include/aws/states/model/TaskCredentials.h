/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about the credentials that Step Functions uses for a
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/TaskCredentials">AWS
   * API Reference</a></p>
   */
  class TaskCredentials
  {
  public:
    AWS_SFN_API TaskCredentials();
    AWS_SFN_API TaskCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API TaskCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of an IAM role that Step Functions assumes for the task. The role can
     * allow cross-account access to resources.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of an IAM role that Step Functions assumes for the task. The role can
     * allow cross-account access to resources.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM role that Step Functions assumes for the task. The role can
     * allow cross-account access to resources.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of an IAM role that Step Functions assumes for the task. The role can
     * allow cross-account access to resources.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role that Step Functions assumes for the task. The role can
     * allow cross-account access to resources.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role that Step Functions assumes for the task. The role can
     * allow cross-account access to resources.</p>
     */
    inline TaskCredentials& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role that Step Functions assumes for the task. The role can
     * allow cross-account access to resources.</p>
     */
    inline TaskCredentials& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role that Step Functions assumes for the task. The role can
     * allow cross-account access to resources.</p>
     */
    inline TaskCredentials& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
