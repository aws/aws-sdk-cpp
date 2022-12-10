/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A custom SageMaker image. For more information, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-byoi.html">Bring
   * your own SageMaker image</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CustomImage">AWS
   * API Reference</a></p>
   */
  class CustomImage
  {
  public:
    AWS_SAGEMAKER_API CustomImage();
    AWS_SAGEMAKER_API CustomImage(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CustomImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the CustomImage. Must be unique to your account.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The name of the CustomImage. Must be unique to your account.</p>
     */
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }

    /**
     * <p>The name of the CustomImage. Must be unique to your account.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The name of the CustomImage. Must be unique to your account.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }

    /**
     * <p>The name of the CustomImage. Must be unique to your account.</p>
     */
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }

    /**
     * <p>The name of the CustomImage. Must be unique to your account.</p>
     */
    inline CustomImage& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The name of the CustomImage. Must be unique to your account.</p>
     */
    inline CustomImage& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the CustomImage. Must be unique to your account.</p>
     */
    inline CustomImage& WithImageName(const char* value) { SetImageName(value); return *this;}


    /**
     * <p>The version number of the CustomImage.</p>
     */
    inline int GetImageVersionNumber() const{ return m_imageVersionNumber; }

    /**
     * <p>The version number of the CustomImage.</p>
     */
    inline bool ImageVersionNumberHasBeenSet() const { return m_imageVersionNumberHasBeenSet; }

    /**
     * <p>The version number of the CustomImage.</p>
     */
    inline void SetImageVersionNumber(int value) { m_imageVersionNumberHasBeenSet = true; m_imageVersionNumber = value; }

    /**
     * <p>The version number of the CustomImage.</p>
     */
    inline CustomImage& WithImageVersionNumber(int value) { SetImageVersionNumber(value); return *this;}


    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline const Aws::String& GetAppImageConfigName() const{ return m_appImageConfigName; }

    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline bool AppImageConfigNameHasBeenSet() const { return m_appImageConfigNameHasBeenSet; }

    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline void SetAppImageConfigName(const Aws::String& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = value; }

    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline void SetAppImageConfigName(Aws::String&& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = std::move(value); }

    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline void SetAppImageConfigName(const char* value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName.assign(value); }

    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline CustomImage& WithAppImageConfigName(const Aws::String& value) { SetAppImageConfigName(value); return *this;}

    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline CustomImage& WithAppImageConfigName(Aws::String&& value) { SetAppImageConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline CustomImage& WithAppImageConfigName(const char* value) { SetAppImageConfigName(value); return *this;}

  private:

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    int m_imageVersionNumber;
    bool m_imageVersionNumberHasBeenSet = false;

    Aws::String m_appImageConfigName;
    bool m_appImageConfigNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
