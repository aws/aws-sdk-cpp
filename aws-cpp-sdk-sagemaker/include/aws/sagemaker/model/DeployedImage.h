/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Gets the Amazon EC2 Container Registry path of the docker image of the model
   * that is hosted in this <a>ProductionVariant</a>.</p> <p>If you used the
   * <code>registry/repository[:tag]</code> form to specify the image path of the
   * primary container when you created the model hosted in this
   * <code>ProductionVariant</code>, the path resolves to a path of the form
   * <code>registry/repository[@digest]</code>. A digest is a hash value that
   * identifies a specific version of an image. For information about Amazon ECR
   * paths, see <a
   * href="http://docs.aws.amazon.com//AmazonECR/latest/userguide/docker-pull-ecr-image.html">Pulling
   * an Image</a> in the <i>Amazon ECR User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeployedImage">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API DeployedImage
  {
  public:
    DeployedImage();
    DeployedImage(Aws::Utils::Json::JsonView jsonValue);
    DeployedImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The image path you specified when you created the model.</p>
     */
    inline const Aws::String& GetSpecifiedImage() const{ return m_specifiedImage; }

    /**
     * <p>The image path you specified when you created the model.</p>
     */
    inline bool SpecifiedImageHasBeenSet() const { return m_specifiedImageHasBeenSet; }

    /**
     * <p>The image path you specified when you created the model.</p>
     */
    inline void SetSpecifiedImage(const Aws::String& value) { m_specifiedImageHasBeenSet = true; m_specifiedImage = value; }

    /**
     * <p>The image path you specified when you created the model.</p>
     */
    inline void SetSpecifiedImage(Aws::String&& value) { m_specifiedImageHasBeenSet = true; m_specifiedImage = std::move(value); }

    /**
     * <p>The image path you specified when you created the model.</p>
     */
    inline void SetSpecifiedImage(const char* value) { m_specifiedImageHasBeenSet = true; m_specifiedImage.assign(value); }

    /**
     * <p>The image path you specified when you created the model.</p>
     */
    inline DeployedImage& WithSpecifiedImage(const Aws::String& value) { SetSpecifiedImage(value); return *this;}

    /**
     * <p>The image path you specified when you created the model.</p>
     */
    inline DeployedImage& WithSpecifiedImage(Aws::String&& value) { SetSpecifiedImage(std::move(value)); return *this;}

    /**
     * <p>The image path you specified when you created the model.</p>
     */
    inline DeployedImage& WithSpecifiedImage(const char* value) { SetSpecifiedImage(value); return *this;}


    /**
     * <p>The specific digest path of the image hosted in this
     * <code>ProductionVariant</code>.</p>
     */
    inline const Aws::String& GetResolvedImage() const{ return m_resolvedImage; }

    /**
     * <p>The specific digest path of the image hosted in this
     * <code>ProductionVariant</code>.</p>
     */
    inline bool ResolvedImageHasBeenSet() const { return m_resolvedImageHasBeenSet; }

    /**
     * <p>The specific digest path of the image hosted in this
     * <code>ProductionVariant</code>.</p>
     */
    inline void SetResolvedImage(const Aws::String& value) { m_resolvedImageHasBeenSet = true; m_resolvedImage = value; }

    /**
     * <p>The specific digest path of the image hosted in this
     * <code>ProductionVariant</code>.</p>
     */
    inline void SetResolvedImage(Aws::String&& value) { m_resolvedImageHasBeenSet = true; m_resolvedImage = std::move(value); }

    /**
     * <p>The specific digest path of the image hosted in this
     * <code>ProductionVariant</code>.</p>
     */
    inline void SetResolvedImage(const char* value) { m_resolvedImageHasBeenSet = true; m_resolvedImage.assign(value); }

    /**
     * <p>The specific digest path of the image hosted in this
     * <code>ProductionVariant</code>.</p>
     */
    inline DeployedImage& WithResolvedImage(const Aws::String& value) { SetResolvedImage(value); return *this;}

    /**
     * <p>The specific digest path of the image hosted in this
     * <code>ProductionVariant</code>.</p>
     */
    inline DeployedImage& WithResolvedImage(Aws::String&& value) { SetResolvedImage(std::move(value)); return *this;}

    /**
     * <p>The specific digest path of the image hosted in this
     * <code>ProductionVariant</code>.</p>
     */
    inline DeployedImage& WithResolvedImage(const char* value) { SetResolvedImage(value); return *this;}


    /**
     * <p>The date and time when the image path for the model resolved to the
     * <code>ResolvedImage</code> </p>
     */
    inline const Aws::Utils::DateTime& GetResolutionTime() const{ return m_resolutionTime; }

    /**
     * <p>The date and time when the image path for the model resolved to the
     * <code>ResolvedImage</code> </p>
     */
    inline bool ResolutionTimeHasBeenSet() const { return m_resolutionTimeHasBeenSet; }

    /**
     * <p>The date and time when the image path for the model resolved to the
     * <code>ResolvedImage</code> </p>
     */
    inline void SetResolutionTime(const Aws::Utils::DateTime& value) { m_resolutionTimeHasBeenSet = true; m_resolutionTime = value; }

    /**
     * <p>The date and time when the image path for the model resolved to the
     * <code>ResolvedImage</code> </p>
     */
    inline void SetResolutionTime(Aws::Utils::DateTime&& value) { m_resolutionTimeHasBeenSet = true; m_resolutionTime = std::move(value); }

    /**
     * <p>The date and time when the image path for the model resolved to the
     * <code>ResolvedImage</code> </p>
     */
    inline DeployedImage& WithResolutionTime(const Aws::Utils::DateTime& value) { SetResolutionTime(value); return *this;}

    /**
     * <p>The date and time when the image path for the model resolved to the
     * <code>ResolvedImage</code> </p>
     */
    inline DeployedImage& WithResolutionTime(Aws::Utils::DateTime&& value) { SetResolutionTime(std::move(value)); return *this;}

  private:

    Aws::String m_specifiedImage;
    bool m_specifiedImageHasBeenSet;

    Aws::String m_resolvedImage;
    bool m_resolvedImageHasBeenSet;

    Aws::Utils::DateTime m_resolutionTime;
    bool m_resolutionTimeHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
