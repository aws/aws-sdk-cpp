/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes resources needed to authenticate access to some source
   * repositories. The specific resource depends on the repository
   * provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/AuthenticationConfiguration">AWS
   * API Reference</a></p>
   */
  class AuthenticationConfiguration
  {
  public:
    AWS_APPRUNNER_API AuthenticationConfiguration();
    AWS_APPRUNNER_API AuthenticationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API AuthenticationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner connection that enables the
     * App Runner service to connect to a source repository. It's required for GitHub
     * code repositories.</p>
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner connection that enables the
     * App Runner service to connect to a source repository. It's required for GitHub
     * code repositories.</p>
     */
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner connection that enables the
     * App Runner service to connect to a source repository. It's required for GitHub
     * code repositories.</p>
     */
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner connection that enables the
     * App Runner service to connect to a source repository. It's required for GitHub
     * code repositories.</p>
     */
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner connection that enables the
     * App Runner service to connect to a source repository. It's required for GitHub
     * code repositories.</p>
     */
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner connection that enables the
     * App Runner service to connect to a source repository. It's required for GitHub
     * code repositories.</p>
     */
    inline AuthenticationConfiguration& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner connection that enables the
     * App Runner service to connect to a source repository. It's required for GitHub
     * code repositories.</p>
     */
    inline AuthenticationConfiguration& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner connection that enables the
     * App Runner service to connect to a source repository. It's required for GitHub
     * code repositories.</p>
     */
    inline AuthenticationConfiguration& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants the App Runner
     * service access to a source repository. It's required for ECR image repositories
     * (but not for ECR Public repositories).</p>
     */
    inline const Aws::String& GetAccessRoleArn() const{ return m_accessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants the App Runner
     * service access to a source repository. It's required for ECR image repositories
     * (but not for ECR Public repositories).</p>
     */
    inline bool AccessRoleArnHasBeenSet() const { return m_accessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants the App Runner
     * service access to a source repository. It's required for ECR image repositories
     * (but not for ECR Public repositories).</p>
     */
    inline void SetAccessRoleArn(const Aws::String& value) { m_accessRoleArnHasBeenSet = true; m_accessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants the App Runner
     * service access to a source repository. It's required for ECR image repositories
     * (but not for ECR Public repositories).</p>
     */
    inline void SetAccessRoleArn(Aws::String&& value) { m_accessRoleArnHasBeenSet = true; m_accessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants the App Runner
     * service access to a source repository. It's required for ECR image repositories
     * (but not for ECR Public repositories).</p>
     */
    inline void SetAccessRoleArn(const char* value) { m_accessRoleArnHasBeenSet = true; m_accessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants the App Runner
     * service access to a source repository. It's required for ECR image repositories
     * (but not for ECR Public repositories).</p>
     */
    inline AuthenticationConfiguration& WithAccessRoleArn(const Aws::String& value) { SetAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants the App Runner
     * service access to a source repository. It's required for ECR image repositories
     * (but not for ECR Public repositories).</p>
     */
    inline AuthenticationConfiguration& WithAccessRoleArn(Aws::String&& value) { SetAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants the App Runner
     * service access to a source repository. It's required for ECR image repositories
     * (but not for ECR Public repositories).</p>
     */
    inline AuthenticationConfiguration& WithAccessRoleArn(const char* value) { SetAccessRoleArn(value); return *this;}

  private:

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    Aws::String m_accessRoleArn;
    bool m_accessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
