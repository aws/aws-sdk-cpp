/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace imagebuilder {
namespace Model {

/**
 * <p>Contains settings for the Systems Manager agent on your build instance. This
 * setting applies to Linux and macOS build instances only. Requests that set it
 * for a recipe with a Windows base image are rejected.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/SystemsManagerAgent">AWS
 * API Reference</a></p>
 */
class SystemsManagerAgent {
 public:
  AWS_IMAGEBUILDER_API SystemsManagerAgent() = default;
  AWS_IMAGEBUILDER_API SystemsManagerAgent(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API SystemsManagerAgent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether the Systems Manager agent is removed from your final build
   * image before Image Builder creates the new AMI. If <code>true</code>, the agent
   * is removed. If <code>false</code>, the agent is kept, so that it's included in
   * the AMI. If you don't set this property, Image Builder removes the agent only if
   * Image Builder installed the agent during the build. An agent that was
   * pre-installed on the base image is kept.</p>
   */
  inline bool GetUninstallAfterBuild() const { return m_uninstallAfterBuild; }
  inline bool UninstallAfterBuildHasBeenSet() const { return m_uninstallAfterBuildHasBeenSet; }
  inline void SetUninstallAfterBuild(bool value) {
    m_uninstallAfterBuildHasBeenSet = true;
    m_uninstallAfterBuild = value;
  }
  inline SystemsManagerAgent& WithUninstallAfterBuild(bool value) {
    SetUninstallAfterBuild(value);
    return *this;
  }
  ///@}
 private:
  bool m_uninstallAfterBuild{false};
  bool m_uninstallAfterBuildHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
