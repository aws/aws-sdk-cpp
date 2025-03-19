/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p> A revision for an Lambda or Amazon ECS deployment that is a YAML-formatted
   * or JSON-formatted string. For Lambda and Amazon ECS deployments, the revision is
   * the same as the AppSpec file. This method replaces the deprecated
   * <code>RawString</code> data type. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/AppSpecContent">AWS
   * API Reference</a></p>
   */
  class AppSpecContent
  {
  public:
    AWS_CODEDEPLOY_API AppSpecContent() = default;
    AWS_CODEDEPLOY_API AppSpecContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API AppSpecContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The YAML-formatted or JSON-formatted revision string. </p> <p> For an Lambda
     * deployment, the content includes a Lambda function name, the alias for its
     * original version, and the alias for its replacement version. The deployment
     * shifts traffic from the original version of the Lambda function to the
     * replacement version. </p> <p> For an Amazon ECS deployment, the content includes
     * the task name, information about the load balancer that serves traffic to the
     * container, and more. </p> <p> For both types of deployments, the content can
     * specify Lambda functions that run at specified hooks, such as
     * <code>BeforeInstall</code>, during a deployment. </p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    AppSpecContent& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The SHA256 hash value of the revision content. </p>
     */
    inline const Aws::String& GetSha256() const { return m_sha256; }
    inline bool Sha256HasBeenSet() const { return m_sha256HasBeenSet; }
    template<typename Sha256T = Aws::String>
    void SetSha256(Sha256T&& value) { m_sha256HasBeenSet = true; m_sha256 = std::forward<Sha256T>(value); }
    template<typename Sha256T = Aws::String>
    AppSpecContent& WithSha256(Sha256T&& value) { SetSha256(std::forward<Sha256T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_sha256;
    bool m_sha256HasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
