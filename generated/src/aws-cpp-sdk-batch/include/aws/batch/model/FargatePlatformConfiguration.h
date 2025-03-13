/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>The platform configuration for jobs that are running on Fargate resources.
   * Jobs that run on Amazon EC2 resources must not specify this
   * parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/FargatePlatformConfiguration">AWS
   * API Reference</a></p>
   */
  class FargatePlatformConfiguration
  {
  public:
    AWS_BATCH_API FargatePlatformConfiguration() = default;
    AWS_BATCH_API FargatePlatformConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API FargatePlatformConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Fargate platform version where the jobs are running. A platform version
     * is specified only for jobs that are running on Fargate resources. If one isn't
     * specified, the <code>LATEST</code> platform version is used by default. This
     * uses a recent, approved version of the Fargate platform for compute resources.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    template<typename PlatformVersionT = Aws::String>
    void SetPlatformVersion(PlatformVersionT&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::forward<PlatformVersionT>(value); }
    template<typename PlatformVersionT = Aws::String>
    FargatePlatformConfiguration& WithPlatformVersion(PlatformVersionT&& value) { SetPlatformVersion(std::forward<PlatformVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
