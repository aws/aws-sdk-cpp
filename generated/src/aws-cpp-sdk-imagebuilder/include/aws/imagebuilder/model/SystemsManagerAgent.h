/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Contains settings for the Systems Manager agent on your build
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/SystemsManagerAgent">AWS
   * API Reference</a></p>
   */
  class SystemsManagerAgent
  {
  public:
    AWS_IMAGEBUILDER_API SystemsManagerAgent();
    AWS_IMAGEBUILDER_API SystemsManagerAgent(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API SystemsManagerAgent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Controls whether the Systems Manager agent is removed from your final build
     * image, prior to creating the new AMI. If this is set to true, then the agent is
     * removed from the final image. If it's set to false, then the agent is left in,
     * so that it is included in the new AMI. The default value is false.</p>
     */
    inline bool GetUninstallAfterBuild() const{ return m_uninstallAfterBuild; }

    /**
     * <p>Controls whether the Systems Manager agent is removed from your final build
     * image, prior to creating the new AMI. If this is set to true, then the agent is
     * removed from the final image. If it's set to false, then the agent is left in,
     * so that it is included in the new AMI. The default value is false.</p>
     */
    inline bool UninstallAfterBuildHasBeenSet() const { return m_uninstallAfterBuildHasBeenSet; }

    /**
     * <p>Controls whether the Systems Manager agent is removed from your final build
     * image, prior to creating the new AMI. If this is set to true, then the agent is
     * removed from the final image. If it's set to false, then the agent is left in,
     * so that it is included in the new AMI. The default value is false.</p>
     */
    inline void SetUninstallAfterBuild(bool value) { m_uninstallAfterBuildHasBeenSet = true; m_uninstallAfterBuild = value; }

    /**
     * <p>Controls whether the Systems Manager agent is removed from your final build
     * image, prior to creating the new AMI. If this is set to true, then the agent is
     * removed from the final image. If it's set to false, then the agent is left in,
     * so that it is included in the new AMI. The default value is false.</p>
     */
    inline SystemsManagerAgent& WithUninstallAfterBuild(bool value) { SetUninstallAfterBuild(value); return *this;}

  private:

    bool m_uninstallAfterBuild;
    bool m_uninstallAfterBuildHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
