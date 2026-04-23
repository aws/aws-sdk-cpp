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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p> A revision for an AWS Lambda or Amazon ECS deployment that is a
   * YAML-formatted or JSON-formatted string. For AWS Lambda and Amazon ECS
   * deployments, the revision is the same as the AppSpec file. This method replaces
   * the deprecated <code>RawString</code> data type. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/AppSpecContent">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API AppSpecContent
  {
  public:
    AppSpecContent();
    AppSpecContent(Aws::Utils::Json::JsonView jsonValue);
    AppSpecContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The YAML-formatted or JSON-formatted revision string. </p> <p> For an AWS
     * Lambda deployment, the content includes a Lambda function name, the alias for
     * its original version, and the alias for its replacement version. The deployment
     * shifts traffic from the original version of the Lambda function to the
     * replacement version. </p> <p> For an Amazon ECS deployment, the content includes
     * the task name, information about the load balancer that serves traffic to the
     * container, and more. </p> <p> For both types of deployments, the content can
     * specify Lambda functions that run at specified hooks, such as
     * <code>BeforeInstall</code>, during a deployment. </p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p> The YAML-formatted or JSON-formatted revision string. </p> <p> For an AWS
     * Lambda deployment, the content includes a Lambda function name, the alias for
     * its original version, and the alias for its replacement version. The deployment
     * shifts traffic from the original version of the Lambda function to the
     * replacement version. </p> <p> For an Amazon ECS deployment, the content includes
     * the task name, information about the load balancer that serves traffic to the
     * container, and more. </p> <p> For both types of deployments, the content can
     * specify Lambda functions that run at specified hooks, such as
     * <code>BeforeInstall</code>, during a deployment. </p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p> The YAML-formatted or JSON-formatted revision string. </p> <p> For an AWS
     * Lambda deployment, the content includes a Lambda function name, the alias for
     * its original version, and the alias for its replacement version. The deployment
     * shifts traffic from the original version of the Lambda function to the
     * replacement version. </p> <p> For an Amazon ECS deployment, the content includes
     * the task name, information about the load balancer that serves traffic to the
     * container, and more. </p> <p> For both types of deployments, the content can
     * specify Lambda functions that run at specified hooks, such as
     * <code>BeforeInstall</code>, during a deployment. </p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p> The YAML-formatted or JSON-formatted revision string. </p> <p> For an AWS
     * Lambda deployment, the content includes a Lambda function name, the alias for
     * its original version, and the alias for its replacement version. The deployment
     * shifts traffic from the original version of the Lambda function to the
     * replacement version. </p> <p> For an Amazon ECS deployment, the content includes
     * the task name, information about the load balancer that serves traffic to the
     * container, and more. </p> <p> For both types of deployments, the content can
     * specify Lambda functions that run at specified hooks, such as
     * <code>BeforeInstall</code>, during a deployment. </p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p> The YAML-formatted or JSON-formatted revision string. </p> <p> For an AWS
     * Lambda deployment, the content includes a Lambda function name, the alias for
     * its original version, and the alias for its replacement version. The deployment
     * shifts traffic from the original version of the Lambda function to the
     * replacement version. </p> <p> For an Amazon ECS deployment, the content includes
     * the task name, information about the load balancer that serves traffic to the
     * container, and more. </p> <p> For both types of deployments, the content can
     * specify Lambda functions that run at specified hooks, such as
     * <code>BeforeInstall</code>, during a deployment. </p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p> The YAML-formatted or JSON-formatted revision string. </p> <p> For an AWS
     * Lambda deployment, the content includes a Lambda function name, the alias for
     * its original version, and the alias for its replacement version. The deployment
     * shifts traffic from the original version of the Lambda function to the
     * replacement version. </p> <p> For an Amazon ECS deployment, the content includes
     * the task name, information about the load balancer that serves traffic to the
     * container, and more. </p> <p> For both types of deployments, the content can
     * specify Lambda functions that run at specified hooks, such as
     * <code>BeforeInstall</code>, during a deployment. </p>
     */
    inline AppSpecContent& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p> The YAML-formatted or JSON-formatted revision string. </p> <p> For an AWS
     * Lambda deployment, the content includes a Lambda function name, the alias for
     * its original version, and the alias for its replacement version. The deployment
     * shifts traffic from the original version of the Lambda function to the
     * replacement version. </p> <p> For an Amazon ECS deployment, the content includes
     * the task name, information about the load balancer that serves traffic to the
     * container, and more. </p> <p> For both types of deployments, the content can
     * specify Lambda functions that run at specified hooks, such as
     * <code>BeforeInstall</code>, during a deployment. </p>
     */
    inline AppSpecContent& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p> The YAML-formatted or JSON-formatted revision string. </p> <p> For an AWS
     * Lambda deployment, the content includes a Lambda function name, the alias for
     * its original version, and the alias for its replacement version. The deployment
     * shifts traffic from the original version of the Lambda function to the
     * replacement version. </p> <p> For an Amazon ECS deployment, the content includes
     * the task name, information about the load balancer that serves traffic to the
     * container, and more. </p> <p> For both types of deployments, the content can
     * specify Lambda functions that run at specified hooks, such as
     * <code>BeforeInstall</code>, during a deployment. </p>
     */
    inline AppSpecContent& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p> The SHA256 hash value of the revision content. </p>
     */
    inline const Aws::String& GetSha256() const{ return m_sha256; }

    /**
     * <p> The SHA256 hash value of the revision content. </p>
     */
    inline bool Sha256HasBeenSet() const { return m_sha256HasBeenSet; }

    /**
     * <p> The SHA256 hash value of the revision content. </p>
     */
    inline void SetSha256(const Aws::String& value) { m_sha256HasBeenSet = true; m_sha256 = value; }

    /**
     * <p> The SHA256 hash value of the revision content. </p>
     */
    inline void SetSha256(Aws::String&& value) { m_sha256HasBeenSet = true; m_sha256 = std::move(value); }

    /**
     * <p> The SHA256 hash value of the revision content. </p>
     */
    inline void SetSha256(const char* value) { m_sha256HasBeenSet = true; m_sha256.assign(value); }

    /**
     * <p> The SHA256 hash value of the revision content. </p>
     */
    inline AppSpecContent& WithSha256(const Aws::String& value) { SetSha256(value); return *this;}

    /**
     * <p> The SHA256 hash value of the revision content. </p>
     */
    inline AppSpecContent& WithSha256(Aws::String&& value) { SetSha256(std::move(value)); return *this;}

    /**
     * <p> The SHA256 hash value of the revision content. </p>
     */
    inline AppSpecContent& WithSha256(const char* value) { SetSha256(value); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet;

    Aws::String m_sha256;
    bool m_sha256HasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
