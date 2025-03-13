/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/GreengrassOutputDetails.h>
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
   * <p> Information about the output from a model packaging job. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ModelPackagingOutputDetails">AWS
   * API Reference</a></p>
   */
  class ModelPackagingOutputDetails
  {
  public:
    AWS_LOOKOUTFORVISION_API ModelPackagingOutputDetails() = default;
    AWS_LOOKOUTFORVISION_API ModelPackagingOutputDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API ModelPackagingOutputDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Information about the AWS IoT Greengrass component in a model packaging job.
     * </p>
     */
    inline const GreengrassOutputDetails& GetGreengrass() const { return m_greengrass; }
    inline bool GreengrassHasBeenSet() const { return m_greengrassHasBeenSet; }
    template<typename GreengrassT = GreengrassOutputDetails>
    void SetGreengrass(GreengrassT&& value) { m_greengrassHasBeenSet = true; m_greengrass = std::forward<GreengrassT>(value); }
    template<typename GreengrassT = GreengrassOutputDetails>
    ModelPackagingOutputDetails& WithGreengrass(GreengrassT&& value) { SetGreengrass(std::forward<GreengrassT>(value)); return *this;}
    ///@}
  private:

    GreengrassOutputDetails m_greengrass;
    bool m_greengrassHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
