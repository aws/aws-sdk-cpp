/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/SeverityCounts.h>
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
   * <p>Contains vulnerability counts for a specific image pipeline.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImagePipelineAggregation">AWS
   * API Reference</a></p>
   */
  class ImagePipelineAggregation
  {
  public:
    AWS_IMAGEBUILDER_API ImagePipelineAggregation() = default;
    AWS_IMAGEBUILDER_API ImagePipelineAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ImagePipelineAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the image pipeline for this
     * aggregation.</p>
     */
    inline const Aws::String& GetImagePipelineArn() const { return m_imagePipelineArn; }
    inline bool ImagePipelineArnHasBeenSet() const { return m_imagePipelineArnHasBeenSet; }
    template<typename ImagePipelineArnT = Aws::String>
    void SetImagePipelineArn(ImagePipelineArnT&& value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn = std::forward<ImagePipelineArnT>(value); }
    template<typename ImagePipelineArnT = Aws::String>
    ImagePipelineAggregation& WithImagePipelineArn(ImagePipelineArnT&& value) { SetImagePipelineArn(std::forward<ImagePipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Counts by severity level for medium severity and higher level findings, plus
     * a total for all of the findings for the specified image pipeline.</p>
     */
    inline const SeverityCounts& GetSeverityCounts() const { return m_severityCounts; }
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }
    template<typename SeverityCountsT = SeverityCounts>
    void SetSeverityCounts(SeverityCountsT&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::forward<SeverityCountsT>(value); }
    template<typename SeverityCountsT = SeverityCounts>
    ImagePipelineAggregation& WithSeverityCounts(SeverityCountsT&& value) { SetSeverityCounts(std::forward<SeverityCountsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imagePipelineArn;
    bool m_imagePipelineArnHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
