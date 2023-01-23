/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/model/ImageConfigurationInput.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/WorkerTypeSpecificationInput">AWS
   * API Reference</a></p>
   */
  class WorkerTypeSpecificationInput
  {
  public:
    AWS_EMRSERVERLESS_API WorkerTypeSpecificationInput();
    AWS_EMRSERVERLESS_API WorkerTypeSpecificationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API WorkerTypeSpecificationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The image configuration for a worker type.</p>
     */
    inline const ImageConfigurationInput& GetImageConfiguration() const{ return m_imageConfiguration; }

    /**
     * <p>The image configuration for a worker type.</p>
     */
    inline bool ImageConfigurationHasBeenSet() const { return m_imageConfigurationHasBeenSet; }

    /**
     * <p>The image configuration for a worker type.</p>
     */
    inline void SetImageConfiguration(const ImageConfigurationInput& value) { m_imageConfigurationHasBeenSet = true; m_imageConfiguration = value; }

    /**
     * <p>The image configuration for a worker type.</p>
     */
    inline void SetImageConfiguration(ImageConfigurationInput&& value) { m_imageConfigurationHasBeenSet = true; m_imageConfiguration = std::move(value); }

    /**
     * <p>The image configuration for a worker type.</p>
     */
    inline WorkerTypeSpecificationInput& WithImageConfiguration(const ImageConfigurationInput& value) { SetImageConfiguration(value); return *this;}

    /**
     * <p>The image configuration for a worker type.</p>
     */
    inline WorkerTypeSpecificationInput& WithImageConfiguration(ImageConfigurationInput&& value) { SetImageConfiguration(std::move(value)); return *this;}

  private:

    ImageConfigurationInput m_imageConfiguration;
    bool m_imageConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
