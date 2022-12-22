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
    AWS_LOOKOUTFORVISION_API ModelPackagingConfiguration();
    AWS_LOOKOUTFORVISION_API ModelPackagingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API ModelPackagingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Configuration information for the AWS IoT Greengrass component in a model
     * packaging job. </p>
     */
    inline const GreengrassConfiguration& GetGreengrass() const{ return m_greengrass; }

    /**
     * <p> Configuration information for the AWS IoT Greengrass component in a model
     * packaging job. </p>
     */
    inline bool GreengrassHasBeenSet() const { return m_greengrassHasBeenSet; }

    /**
     * <p> Configuration information for the AWS IoT Greengrass component in a model
     * packaging job. </p>
     */
    inline void SetGreengrass(const GreengrassConfiguration& value) { m_greengrassHasBeenSet = true; m_greengrass = value; }

    /**
     * <p> Configuration information for the AWS IoT Greengrass component in a model
     * packaging job. </p>
     */
    inline void SetGreengrass(GreengrassConfiguration&& value) { m_greengrassHasBeenSet = true; m_greengrass = std::move(value); }

    /**
     * <p> Configuration information for the AWS IoT Greengrass component in a model
     * packaging job. </p>
     */
    inline ModelPackagingConfiguration& WithGreengrass(const GreengrassConfiguration& value) { SetGreengrass(value); return *this;}

    /**
     * <p> Configuration information for the AWS IoT Greengrass component in a model
     * packaging job. </p>
     */
    inline ModelPackagingConfiguration& WithGreengrass(GreengrassConfiguration&& value) { SetGreengrass(std::move(value)); return *this;}

  private:

    GreengrassConfiguration m_greengrass;
    bool m_greengrassHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
