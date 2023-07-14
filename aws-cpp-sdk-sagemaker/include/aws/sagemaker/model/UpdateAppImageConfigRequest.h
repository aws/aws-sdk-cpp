﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/KernelGatewayImageConfig.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API UpdateAppImageConfigRequest : public SageMakerRequest
  {
  public:
    UpdateAppImageConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAppImageConfig"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the AppImageConfig to update.</p>
     */
    inline const Aws::String& GetAppImageConfigName() const{ return m_appImageConfigName; }

    /**
     * <p>The name of the AppImageConfig to update.</p>
     */
    inline bool AppImageConfigNameHasBeenSet() const { return m_appImageConfigNameHasBeenSet; }

    /**
     * <p>The name of the AppImageConfig to update.</p>
     */
    inline void SetAppImageConfigName(const Aws::String& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = value; }

    /**
     * <p>The name of the AppImageConfig to update.</p>
     */
    inline void SetAppImageConfigName(Aws::String&& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = std::move(value); }

    /**
     * <p>The name of the AppImageConfig to update.</p>
     */
    inline void SetAppImageConfigName(const char* value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName.assign(value); }

    /**
     * <p>The name of the AppImageConfig to update.</p>
     */
    inline UpdateAppImageConfigRequest& WithAppImageConfigName(const Aws::String& value) { SetAppImageConfigName(value); return *this;}

    /**
     * <p>The name of the AppImageConfig to update.</p>
     */
    inline UpdateAppImageConfigRequest& WithAppImageConfigName(Aws::String&& value) { SetAppImageConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the AppImageConfig to update.</p>
     */
    inline UpdateAppImageConfigRequest& WithAppImageConfigName(const char* value) { SetAppImageConfigName(value); return *this;}


    /**
     * <p>The new KernelGateway app to run on the image.</p>
     */
    inline const KernelGatewayImageConfig& GetKernelGatewayImageConfig() const{ return m_kernelGatewayImageConfig; }

    /**
     * <p>The new KernelGateway app to run on the image.</p>
     */
    inline bool KernelGatewayImageConfigHasBeenSet() const { return m_kernelGatewayImageConfigHasBeenSet; }

    /**
     * <p>The new KernelGateway app to run on the image.</p>
     */
    inline void SetKernelGatewayImageConfig(const KernelGatewayImageConfig& value) { m_kernelGatewayImageConfigHasBeenSet = true; m_kernelGatewayImageConfig = value; }

    /**
     * <p>The new KernelGateway app to run on the image.</p>
     */
    inline void SetKernelGatewayImageConfig(KernelGatewayImageConfig&& value) { m_kernelGatewayImageConfigHasBeenSet = true; m_kernelGatewayImageConfig = std::move(value); }

    /**
     * <p>The new KernelGateway app to run on the image.</p>
     */
    inline UpdateAppImageConfigRequest& WithKernelGatewayImageConfig(const KernelGatewayImageConfig& value) { SetKernelGatewayImageConfig(value); return *this;}

    /**
     * <p>The new KernelGateway app to run on the image.</p>
     */
    inline UpdateAppImageConfigRequest& WithKernelGatewayImageConfig(KernelGatewayImageConfig&& value) { SetKernelGatewayImageConfig(std::move(value)); return *this;}

  private:

    Aws::String m_appImageConfigName;
    bool m_appImageConfigNameHasBeenSet;

    KernelGatewayImageConfig m_kernelGatewayImageConfig;
    bool m_kernelGatewayImageConfigHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
