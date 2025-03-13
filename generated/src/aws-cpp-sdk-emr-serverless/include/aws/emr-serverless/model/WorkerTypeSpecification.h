/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/model/ImageConfiguration.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The specifications for a worker type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/WorkerTypeSpecification">AWS
   * API Reference</a></p>
   */
  class WorkerTypeSpecification
  {
  public:
    AWS_EMRSERVERLESS_API WorkerTypeSpecification() = default;
    AWS_EMRSERVERLESS_API WorkerTypeSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API WorkerTypeSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The image configuration for a worker type.</p>
     */
    inline const ImageConfiguration& GetImageConfiguration() const { return m_imageConfiguration; }
    inline bool ImageConfigurationHasBeenSet() const { return m_imageConfigurationHasBeenSet; }
    template<typename ImageConfigurationT = ImageConfiguration>
    void SetImageConfiguration(ImageConfigurationT&& value) { m_imageConfigurationHasBeenSet = true; m_imageConfiguration = std::forward<ImageConfigurationT>(value); }
    template<typename ImageConfigurationT = ImageConfiguration>
    WorkerTypeSpecification& WithImageConfiguration(ImageConfigurationT&& value) { SetImageConfiguration(std::forward<ImageConfigurationT>(value)); return *this;}
    ///@}
  private:

    ImageConfiguration m_imageConfiguration;
    bool m_imageConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
