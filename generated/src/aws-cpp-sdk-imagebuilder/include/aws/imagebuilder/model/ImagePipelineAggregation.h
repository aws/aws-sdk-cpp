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
    AWS_IMAGEBUILDER_API ImagePipelineAggregation();
    AWS_IMAGEBUILDER_API ImagePipelineAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ImagePipelineAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the image pipeline for this
     * aggregation.</p>
     */
    inline const Aws::String& GetImagePipelineArn() const{ return m_imagePipelineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the image pipeline for this
     * aggregation.</p>
     */
    inline bool ImagePipelineArnHasBeenSet() const { return m_imagePipelineArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the image pipeline for this
     * aggregation.</p>
     */
    inline void SetImagePipelineArn(const Aws::String& value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the image pipeline for this
     * aggregation.</p>
     */
    inline void SetImagePipelineArn(Aws::String&& value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the image pipeline for this
     * aggregation.</p>
     */
    inline void SetImagePipelineArn(const char* value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the image pipeline for this
     * aggregation.</p>
     */
    inline ImagePipelineAggregation& WithImagePipelineArn(const Aws::String& value) { SetImagePipelineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the image pipeline for this
     * aggregation.</p>
     */
    inline ImagePipelineAggregation& WithImagePipelineArn(Aws::String&& value) { SetImagePipelineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the image pipeline for this
     * aggregation.</p>
     */
    inline ImagePipelineAggregation& WithImagePipelineArn(const char* value) { SetImagePipelineArn(value); return *this;}


    /**
     * <p>Counts by severity level for medium severity and higher level findings, plus
     * a total for all of the findings for the specified image pipeline.</p>
     */
    inline const SeverityCounts& GetSeverityCounts() const{ return m_severityCounts; }

    /**
     * <p>Counts by severity level for medium severity and higher level findings, plus
     * a total for all of the findings for the specified image pipeline.</p>
     */
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }

    /**
     * <p>Counts by severity level for medium severity and higher level findings, plus
     * a total for all of the findings for the specified image pipeline.</p>
     */
    inline void SetSeverityCounts(const SeverityCounts& value) { m_severityCountsHasBeenSet = true; m_severityCounts = value; }

    /**
     * <p>Counts by severity level for medium severity and higher level findings, plus
     * a total for all of the findings for the specified image pipeline.</p>
     */
    inline void SetSeverityCounts(SeverityCounts&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::move(value); }

    /**
     * <p>Counts by severity level for medium severity and higher level findings, plus
     * a total for all of the findings for the specified image pipeline.</p>
     */
    inline ImagePipelineAggregation& WithSeverityCounts(const SeverityCounts& value) { SetSeverityCounts(value); return *this;}

    /**
     * <p>Counts by severity level for medium severity and higher level findings, plus
     * a total for all of the findings for the specified image pipeline.</p>
     */
    inline ImagePipelineAggregation& WithSeverityCounts(SeverityCounts&& value) { SetSeverityCounts(std::move(value)); return *this;}

  private:

    Aws::String m_imagePipelineArn;
    bool m_imagePipelineArnHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
