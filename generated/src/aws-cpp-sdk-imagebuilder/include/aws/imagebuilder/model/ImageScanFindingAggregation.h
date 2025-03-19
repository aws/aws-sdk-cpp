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
    AWS_IMAGEBUILDER_API ImageScanFindingAggregation() = default;
    AWS_IMAGEBUILDER_API ImageScanFindingAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ImageScanFindingAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns an object that contains severity counts based on an account ID.</p>
     */
    inline const AccountAggregation& GetAccountAggregation() const { return m_accountAggregation; }
    inline bool AccountAggregationHasBeenSet() const { return m_accountAggregationHasBeenSet; }
    template<typename AccountAggregationT = AccountAggregation>
    void SetAccountAggregation(AccountAggregationT&& value) { m_accountAggregationHasBeenSet = true; m_accountAggregation = std::forward<AccountAggregationT>(value); }
    template<typename AccountAggregationT = AccountAggregation>
    ImageScanFindingAggregation& WithAccountAggregation(AccountAggregationT&& value) { SetAccountAggregation(std::forward<AccountAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an object that contains severity counts based on the Amazon Resource
     * Name (ARN) for a specific image.</p>
     */
    inline const ImageAggregation& GetImageAggregation() const { return m_imageAggregation; }
    inline bool ImageAggregationHasBeenSet() const { return m_imageAggregationHasBeenSet; }
    template<typename ImageAggregationT = ImageAggregation>
    void SetImageAggregation(ImageAggregationT&& value) { m_imageAggregationHasBeenSet = true; m_imageAggregation = std::forward<ImageAggregationT>(value); }
    template<typename ImageAggregationT = ImageAggregation>
    ImageScanFindingAggregation& WithImageAggregation(ImageAggregationT&& value) { SetImageAggregation(std::forward<ImageAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an object that contains severity counts based on an image pipeline
     * ARN.</p>
     */
    inline const ImagePipelineAggregation& GetImagePipelineAggregation() const { return m_imagePipelineAggregation; }
    inline bool ImagePipelineAggregationHasBeenSet() const { return m_imagePipelineAggregationHasBeenSet; }
    template<typename ImagePipelineAggregationT = ImagePipelineAggregation>
    void SetImagePipelineAggregation(ImagePipelineAggregationT&& value) { m_imagePipelineAggregationHasBeenSet = true; m_imagePipelineAggregation = std::forward<ImagePipelineAggregationT>(value); }
    template<typename ImagePipelineAggregationT = ImagePipelineAggregation>
    ImageScanFindingAggregation& WithImagePipelineAggregation(ImagePipelineAggregationT&& value) { SetImagePipelineAggregation(std::forward<ImagePipelineAggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an object that contains severity counts based on vulnerability
     * ID.</p>
     */
    inline const VulnerabilityIdAggregation& GetVulnerabilityIdAggregation() const { return m_vulnerabilityIdAggregation; }
    inline bool VulnerabilityIdAggregationHasBeenSet() const { return m_vulnerabilityIdAggregationHasBeenSet; }
    template<typename VulnerabilityIdAggregationT = VulnerabilityIdAggregation>
    void SetVulnerabilityIdAggregation(VulnerabilityIdAggregationT&& value) { m_vulnerabilityIdAggregationHasBeenSet = true; m_vulnerabilityIdAggregation = std::forward<VulnerabilityIdAggregationT>(value); }
    template<typename VulnerabilityIdAggregationT = VulnerabilityIdAggregation>
    ImageScanFindingAggregation& WithVulnerabilityIdAggregation(VulnerabilityIdAggregationT&& value) { SetVulnerabilityIdAggregation(std::forward<VulnerabilityIdAggregationT>(value)); return *this;}
    ///@}
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
