/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/AccountAggregation.h>
#include <aws/imagebuilder/model/ImageAggregation.h>
#include <aws/imagebuilder/model/ImagePipelineAggregation.h>
#include <aws/imagebuilder/model/VulnerabilityIdAggregation.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>This returns exactly one type of aggregation, based on the filter that Image
   * Builder applies in its API action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImageScanFindingAggregation">AWS
   * API Reference</a></p>
   */
  class ImageScanFindingAggregation
  {
  public:
    AWS_IMAGEBUILDER_API ImageScanFindingAggregation();
    AWS_IMAGEBUILDER_API ImageScanFindingAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ImageScanFindingAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns an object that contains severity counts based on an account ID.</p>
     */
    inline const AccountAggregation& GetAccountAggregation() const{ return m_accountAggregation; }

    /**
     * <p>Returns an object that contains severity counts based on an account ID.</p>
     */
    inline bool AccountAggregationHasBeenSet() const { return m_accountAggregationHasBeenSet; }

    /**
     * <p>Returns an object that contains severity counts based on an account ID.</p>
     */
    inline void SetAccountAggregation(const AccountAggregation& value) { m_accountAggregationHasBeenSet = true; m_accountAggregation = value; }

    /**
     * <p>Returns an object that contains severity counts based on an account ID.</p>
     */
    inline void SetAccountAggregation(AccountAggregation&& value) { m_accountAggregationHasBeenSet = true; m_accountAggregation = std::move(value); }

    /**
     * <p>Returns an object that contains severity counts based on an account ID.</p>
     */
    inline ImageScanFindingAggregation& WithAccountAggregation(const AccountAggregation& value) { SetAccountAggregation(value); return *this;}

    /**
     * <p>Returns an object that contains severity counts based on an account ID.</p>
     */
    inline ImageScanFindingAggregation& WithAccountAggregation(AccountAggregation&& value) { SetAccountAggregation(std::move(value)); return *this;}


    /**
     * <p>Returns an object that contains severity counts based on the Amazon Resource
     * Name (ARN) for a specific image.</p>
     */
    inline const ImageAggregation& GetImageAggregation() const{ return m_imageAggregation; }

    /**
     * <p>Returns an object that contains severity counts based on the Amazon Resource
     * Name (ARN) for a specific image.</p>
     */
    inline bool ImageAggregationHasBeenSet() const { return m_imageAggregationHasBeenSet; }

    /**
     * <p>Returns an object that contains severity counts based on the Amazon Resource
     * Name (ARN) for a specific image.</p>
     */
    inline void SetImageAggregation(const ImageAggregation& value) { m_imageAggregationHasBeenSet = true; m_imageAggregation = value; }

    /**
     * <p>Returns an object that contains severity counts based on the Amazon Resource
     * Name (ARN) for a specific image.</p>
     */
    inline void SetImageAggregation(ImageAggregation&& value) { m_imageAggregationHasBeenSet = true; m_imageAggregation = std::move(value); }

    /**
     * <p>Returns an object that contains severity counts based on the Amazon Resource
     * Name (ARN) for a specific image.</p>
     */
    inline ImageScanFindingAggregation& WithImageAggregation(const ImageAggregation& value) { SetImageAggregation(value); return *this;}

    /**
     * <p>Returns an object that contains severity counts based on the Amazon Resource
     * Name (ARN) for a specific image.</p>
     */
    inline ImageScanFindingAggregation& WithImageAggregation(ImageAggregation&& value) { SetImageAggregation(std::move(value)); return *this;}


    /**
     * <p>Returns an object that contains severity counts based on an image pipeline
     * ARN.</p>
     */
    inline const ImagePipelineAggregation& GetImagePipelineAggregation() const{ return m_imagePipelineAggregation; }

    /**
     * <p>Returns an object that contains severity counts based on an image pipeline
     * ARN.</p>
     */
    inline bool ImagePipelineAggregationHasBeenSet() const { return m_imagePipelineAggregationHasBeenSet; }

    /**
     * <p>Returns an object that contains severity counts based on an image pipeline
     * ARN.</p>
     */
    inline void SetImagePipelineAggregation(const ImagePipelineAggregation& value) { m_imagePipelineAggregationHasBeenSet = true; m_imagePipelineAggregation = value; }

    /**
     * <p>Returns an object that contains severity counts based on an image pipeline
     * ARN.</p>
     */
    inline void SetImagePipelineAggregation(ImagePipelineAggregation&& value) { m_imagePipelineAggregationHasBeenSet = true; m_imagePipelineAggregation = std::move(value); }

    /**
     * <p>Returns an object that contains severity counts based on an image pipeline
     * ARN.</p>
     */
    inline ImageScanFindingAggregation& WithImagePipelineAggregation(const ImagePipelineAggregation& value) { SetImagePipelineAggregation(value); return *this;}

    /**
     * <p>Returns an object that contains severity counts based on an image pipeline
     * ARN.</p>
     */
    inline ImageScanFindingAggregation& WithImagePipelineAggregation(ImagePipelineAggregation&& value) { SetImagePipelineAggregation(std::move(value)); return *this;}


    /**
     * <p>Returns an object that contains severity counts based on vulnerability
     * ID.</p>
     */
    inline const VulnerabilityIdAggregation& GetVulnerabilityIdAggregation() const{ return m_vulnerabilityIdAggregation; }

    /**
     * <p>Returns an object that contains severity counts based on vulnerability
     * ID.</p>
     */
    inline bool VulnerabilityIdAggregationHasBeenSet() const { return m_vulnerabilityIdAggregationHasBeenSet; }

    /**
     * <p>Returns an object that contains severity counts based on vulnerability
     * ID.</p>
     */
    inline void SetVulnerabilityIdAggregation(const VulnerabilityIdAggregation& value) { m_vulnerabilityIdAggregationHasBeenSet = true; m_vulnerabilityIdAggregation = value; }

    /**
     * <p>Returns an object that contains severity counts based on vulnerability
     * ID.</p>
     */
    inline void SetVulnerabilityIdAggregation(VulnerabilityIdAggregation&& value) { m_vulnerabilityIdAggregationHasBeenSet = true; m_vulnerabilityIdAggregation = std::move(value); }

    /**
     * <p>Returns an object that contains severity counts based on vulnerability
     * ID.</p>
     */
    inline ImageScanFindingAggregation& WithVulnerabilityIdAggregation(const VulnerabilityIdAggregation& value) { SetVulnerabilityIdAggregation(value); return *this;}

    /**
     * <p>Returns an object that contains severity counts based on vulnerability
     * ID.</p>
     */
    inline ImageScanFindingAggregation& WithVulnerabilityIdAggregation(VulnerabilityIdAggregation&& value) { SetVulnerabilityIdAggregation(std::move(value)); return *this;}

  private:

    AccountAggregation m_accountAggregation;
    bool m_accountAggregationHasBeenSet = false;

    ImageAggregation m_imageAggregation;
    bool m_imageAggregationHasBeenSet = false;

    ImagePipelineAggregation m_imagePipelineAggregation;
    bool m_imagePipelineAggregationHasBeenSet = false;

    VulnerabilityIdAggregation m_vulnerabilityIdAggregation;
    bool m_vulnerabilityIdAggregationHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
