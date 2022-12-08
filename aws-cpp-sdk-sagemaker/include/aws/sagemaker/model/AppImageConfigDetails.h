/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/KernelGatewayImageConfig.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The configuration for running a SageMaker image as a KernelGateway
   * app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AppImageConfigDetails">AWS
   * API Reference</a></p>
   */
  class AppImageConfigDetails
  {
  public:
    AWS_SAGEMAKER_API AppImageConfigDetails();
    AWS_SAGEMAKER_API AppImageConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AppImageConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the AppImageConfig.</p>
     */
    inline const Aws::String& GetAppImageConfigArn() const{ return m_appImageConfigArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AppImageConfig.</p>
     */
    inline bool AppImageConfigArnHasBeenSet() const { return m_appImageConfigArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AppImageConfig.</p>
     */
    inline void SetAppImageConfigArn(const Aws::String& value) { m_appImageConfigArnHasBeenSet = true; m_appImageConfigArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AppImageConfig.</p>
     */
    inline void SetAppImageConfigArn(Aws::String&& value) { m_appImageConfigArnHasBeenSet = true; m_appImageConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AppImageConfig.</p>
     */
    inline void SetAppImageConfigArn(const char* value) { m_appImageConfigArnHasBeenSet = true; m_appImageConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AppImageConfig.</p>
     */
    inline AppImageConfigDetails& WithAppImageConfigArn(const Aws::String& value) { SetAppImageConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AppImageConfig.</p>
     */
    inline AppImageConfigDetails& WithAppImageConfigArn(Aws::String&& value) { SetAppImageConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AppImageConfig.</p>
     */
    inline AppImageConfigDetails& WithAppImageConfigArn(const char* value) { SetAppImageConfigArn(value); return *this;}


    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline const Aws::String& GetAppImageConfigName() const{ return m_appImageConfigName; }

    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline bool AppImageConfigNameHasBeenSet() const { return m_appImageConfigNameHasBeenSet; }

    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline void SetAppImageConfigName(const Aws::String& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = value; }

    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline void SetAppImageConfigName(Aws::String&& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = std::move(value); }

    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline void SetAppImageConfigName(const char* value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName.assign(value); }

    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline AppImageConfigDetails& WithAppImageConfigName(const Aws::String& value) { SetAppImageConfigName(value); return *this;}

    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline AppImageConfigDetails& WithAppImageConfigName(Aws::String&& value) { SetAppImageConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline AppImageConfigDetails& WithAppImageConfigName(const char* value) { SetAppImageConfigName(value); return *this;}


    /**
     * <p>When the AppImageConfig was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the AppImageConfig was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the AppImageConfig was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the AppImageConfig was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the AppImageConfig was created.</p>
     */
    inline AppImageConfigDetails& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the AppImageConfig was created.</p>
     */
    inline AppImageConfigDetails& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>When the AppImageConfig was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the AppImageConfig was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>When the AppImageConfig was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>When the AppImageConfig was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the AppImageConfig was last modified.</p>
     */
    inline AppImageConfigDetails& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the AppImageConfig was last modified.</p>
     */
    inline AppImageConfigDetails& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The configuration for the file system and kernels in the SageMaker image.</p>
     */
    inline const KernelGatewayImageConfig& GetKernelGatewayImageConfig() const{ return m_kernelGatewayImageConfig; }

    /**
     * <p>The configuration for the file system and kernels in the SageMaker image.</p>
     */
    inline bool KernelGatewayImageConfigHasBeenSet() const { return m_kernelGatewayImageConfigHasBeenSet; }

    /**
     * <p>The configuration for the file system and kernels in the SageMaker image.</p>
     */
    inline void SetKernelGatewayImageConfig(const KernelGatewayImageConfig& value) { m_kernelGatewayImageConfigHasBeenSet = true; m_kernelGatewayImageConfig = value; }

    /**
     * <p>The configuration for the file system and kernels in the SageMaker image.</p>
     */
    inline void SetKernelGatewayImageConfig(KernelGatewayImageConfig&& value) { m_kernelGatewayImageConfigHasBeenSet = true; m_kernelGatewayImageConfig = std::move(value); }

    /**
     * <p>The configuration for the file system and kernels in the SageMaker image.</p>
     */
    inline AppImageConfigDetails& WithKernelGatewayImageConfig(const KernelGatewayImageConfig& value) { SetKernelGatewayImageConfig(value); return *this;}

    /**
     * <p>The configuration for the file system and kernels in the SageMaker image.</p>
     */
    inline AppImageConfigDetails& WithKernelGatewayImageConfig(KernelGatewayImageConfig&& value) { SetKernelGatewayImageConfig(std::move(value)); return *this;}

  private:

    Aws::String m_appImageConfigArn;
    bool m_appImageConfigArnHasBeenSet = false;

    Aws::String m_appImageConfigName;
    bool m_appImageConfigNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    KernelGatewayImageConfig m_kernelGatewayImageConfig;
    bool m_kernelGatewayImageConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
