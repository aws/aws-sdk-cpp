/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/GreengrassConfiguration.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p> Configuration information for a Amazon Lookout for Vision model packaging
   * job. For more information, see <a>StartModelPackagingJob</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ModelPackagingConfiguration">AWS
   * API Reference</a></p>
   */
  class ModelPackagingConfiguration
  {
  public:
    AWS_LOOKOUTFORVISION_API ModelPackagingConfiguration() = default;
    AWS_LOOKOUTFORVISION_API ModelPackagingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API ModelPackagingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Configuration information for the AWS IoT Greengrass component in a model
     * packaging job. </p>
     */
    inline const GreengrassConfiguration& GetGreengrass() const { return m_greengrass; }
    inline bool GreengrassHasBeenSet() const { return m_greengrassHasBeenSet; }
    template<typename GreengrassT = GreengrassConfiguration>
    void SetGreengrass(GreengrassT&& value) { m_greengrassHasBeenSet = true; m_greengrass = std::forward<GreengrassT>(value); }
    template<typename GreengrassT = GreengrassConfiguration>
    ModelPackagingConfiguration& WithGreengrass(GreengrassT&& value) { SetGreengrass(std::forward<GreengrassT>(value)); return *this;}
    ///@}
  private:

    GreengrassConfiguration m_greengrass;
    bool m_greengrassHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
