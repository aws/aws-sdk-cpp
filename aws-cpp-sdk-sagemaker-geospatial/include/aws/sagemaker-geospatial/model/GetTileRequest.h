/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-geospatial/model/OutputType.h>
#include <aws/sagemaker-geospatial/model/TargetOptions.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   */
  class GetTileRequest : public SageMakerGeospatialRequest
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API GetTileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTile"; }

    AWS_SAGEMAKERGEOSPATIAL_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKERGEOSPATIAL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the tile operation.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tile operation.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tile operation.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tile operation.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the tile operation.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the tile operation.</p>
     */
    inline GetTileRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the tile operation.</p>
     */
    inline GetTileRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the tile operation.</p>
     */
    inline GetTileRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The particular assets or bands to tile.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageAssets() const{ return m_imageAssets; }

    /**
     * <p>The particular assets or bands to tile.</p>
     */
    inline bool ImageAssetsHasBeenSet() const { return m_imageAssetsHasBeenSet; }

    /**
     * <p>The particular assets or bands to tile.</p>
     */
    inline void SetImageAssets(const Aws::Vector<Aws::String>& value) { m_imageAssetsHasBeenSet = true; m_imageAssets = value; }

    /**
     * <p>The particular assets or bands to tile.</p>
     */
    inline void SetImageAssets(Aws::Vector<Aws::String>&& value) { m_imageAssetsHasBeenSet = true; m_imageAssets = std::move(value); }

    /**
     * <p>The particular assets or bands to tile.</p>
     */
    inline GetTileRequest& WithImageAssets(const Aws::Vector<Aws::String>& value) { SetImageAssets(value); return *this;}

    /**
     * <p>The particular assets or bands to tile.</p>
     */
    inline GetTileRequest& WithImageAssets(Aws::Vector<Aws::String>&& value) { SetImageAssets(std::move(value)); return *this;}

    /**
     * <p>The particular assets or bands to tile.</p>
     */
    inline GetTileRequest& AddImageAssets(const Aws::String& value) { m_imageAssetsHasBeenSet = true; m_imageAssets.push_back(value); return *this; }

    /**
     * <p>The particular assets or bands to tile.</p>
     */
    inline GetTileRequest& AddImageAssets(Aws::String&& value) { m_imageAssetsHasBeenSet = true; m_imageAssets.push_back(std::move(value)); return *this; }

    /**
     * <p>The particular assets or bands to tile.</p>
     */
    inline GetTileRequest& AddImageAssets(const char* value) { m_imageAssetsHasBeenSet = true; m_imageAssets.push_back(value); return *this; }


    /**
     * <p>Determines whether or not to return a valid data mask.</p>
     */
    inline bool GetImageMask() const{ return m_imageMask; }

    /**
     * <p>Determines whether or not to return a valid data mask.</p>
     */
    inline bool ImageMaskHasBeenSet() const { return m_imageMaskHasBeenSet; }

    /**
     * <p>Determines whether or not to return a valid data mask.</p>
     */
    inline void SetImageMask(bool value) { m_imageMaskHasBeenSet = true; m_imageMask = value; }

    /**
     * <p>Determines whether or not to return a valid data mask.</p>
     */
    inline GetTileRequest& WithImageMask(bool value) { SetImageMask(value); return *this;}


    /**
     * <p>The output data type of the tile operation.</p>
     */
    inline const OutputType& GetOutputDataType() const{ return m_outputDataType; }

    /**
     * <p>The output data type of the tile operation.</p>
     */
    inline bool OutputDataTypeHasBeenSet() const { return m_outputDataTypeHasBeenSet; }

    /**
     * <p>The output data type of the tile operation.</p>
     */
    inline void SetOutputDataType(const OutputType& value) { m_outputDataTypeHasBeenSet = true; m_outputDataType = value; }

    /**
     * <p>The output data type of the tile operation.</p>
     */
    inline void SetOutputDataType(OutputType&& value) { m_outputDataTypeHasBeenSet = true; m_outputDataType = std::move(value); }

    /**
     * <p>The output data type of the tile operation.</p>
     */
    inline GetTileRequest& WithOutputDataType(const OutputType& value) { SetOutputDataType(value); return *this;}

    /**
     * <p>The output data type of the tile operation.</p>
     */
    inline GetTileRequest& WithOutputDataType(OutputType&& value) { SetOutputDataType(std::move(value)); return *this;}


    /**
     * <p>The data format of the output tile. The formats include .npy, .png and
     * .jpg.</p>
     */
    inline const Aws::String& GetOutputFormat() const{ return m_outputFormat; }

    /**
     * <p>The data format of the output tile. The formats include .npy, .png and
     * .jpg.</p>
     */
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }

    /**
     * <p>The data format of the output tile. The formats include .npy, .png and
     * .jpg.</p>
     */
    inline void SetOutputFormat(const Aws::String& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }

    /**
     * <p>The data format of the output tile. The formats include .npy, .png and
     * .jpg.</p>
     */
    inline void SetOutputFormat(Aws::String&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }

    /**
     * <p>The data format of the output tile. The formats include .npy, .png and
     * .jpg.</p>
     */
    inline void SetOutputFormat(const char* value) { m_outputFormatHasBeenSet = true; m_outputFormat.assign(value); }

    /**
     * <p>The data format of the output tile. The formats include .npy, .png and
     * .jpg.</p>
     */
    inline GetTileRequest& WithOutputFormat(const Aws::String& value) { SetOutputFormat(value); return *this;}

    /**
     * <p>The data format of the output tile. The formats include .npy, .png and
     * .jpg.</p>
     */
    inline GetTileRequest& WithOutputFormat(Aws::String&& value) { SetOutputFormat(std::move(value)); return *this;}

    /**
     * <p>The data format of the output tile. The formats include .npy, .png and
     * .jpg.</p>
     */
    inline GetTileRequest& WithOutputFormat(const char* value) { SetOutputFormat(value); return *this;}


    /**
     * <p>Property filters for the imagery to tile.</p>
     */
    inline const Aws::String& GetPropertyFilters() const{ return m_propertyFilters; }

    /**
     * <p>Property filters for the imagery to tile.</p>
     */
    inline bool PropertyFiltersHasBeenSet() const { return m_propertyFiltersHasBeenSet; }

    /**
     * <p>Property filters for the imagery to tile.</p>
     */
    inline void SetPropertyFilters(const Aws::String& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = value; }

    /**
     * <p>Property filters for the imagery to tile.</p>
     */
    inline void SetPropertyFilters(Aws::String&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = std::move(value); }

    /**
     * <p>Property filters for the imagery to tile.</p>
     */
    inline void SetPropertyFilters(const char* value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters.assign(value); }

    /**
     * <p>Property filters for the imagery to tile.</p>
     */
    inline GetTileRequest& WithPropertyFilters(const Aws::String& value) { SetPropertyFilters(value); return *this;}

    /**
     * <p>Property filters for the imagery to tile.</p>
     */
    inline GetTileRequest& WithPropertyFilters(Aws::String&& value) { SetPropertyFilters(std::move(value)); return *this;}

    /**
     * <p>Property filters for the imagery to tile.</p>
     */
    inline GetTileRequest& WithPropertyFilters(const char* value) { SetPropertyFilters(value); return *this;}


    /**
     * <p>Determines what part of the Earth Observation job to tile. 'INPUT' or
     * 'OUTPUT' are the valid options.</p>
     */
    inline const TargetOptions& GetTarget() const{ return m_target; }

    /**
     * <p>Determines what part of the Earth Observation job to tile. 'INPUT' or
     * 'OUTPUT' are the valid options.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>Determines what part of the Earth Observation job to tile. 'INPUT' or
     * 'OUTPUT' are the valid options.</p>
     */
    inline void SetTarget(const TargetOptions& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>Determines what part of the Earth Observation job to tile. 'INPUT' or
     * 'OUTPUT' are the valid options.</p>
     */
    inline void SetTarget(TargetOptions&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>Determines what part of the Earth Observation job to tile. 'INPUT' or
     * 'OUTPUT' are the valid options.</p>
     */
    inline GetTileRequest& WithTarget(const TargetOptions& value) { SetTarget(value); return *this;}

    /**
     * <p>Determines what part of the Earth Observation job to tile. 'INPUT' or
     * 'OUTPUT' are the valid options.</p>
     */
    inline GetTileRequest& WithTarget(TargetOptions&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>Time range filter applied to imagery to find the images to tile.</p>
     */
    inline const Aws::String& GetTimeRangeFilter() const{ return m_timeRangeFilter; }

    /**
     * <p>Time range filter applied to imagery to find the images to tile.</p>
     */
    inline bool TimeRangeFilterHasBeenSet() const { return m_timeRangeFilterHasBeenSet; }

    /**
     * <p>Time range filter applied to imagery to find the images to tile.</p>
     */
    inline void SetTimeRangeFilter(const Aws::String& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = value; }

    /**
     * <p>Time range filter applied to imagery to find the images to tile.</p>
     */
    inline void SetTimeRangeFilter(Aws::String&& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = std::move(value); }

    /**
     * <p>Time range filter applied to imagery to find the images to tile.</p>
     */
    inline void SetTimeRangeFilter(const char* value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter.assign(value); }

    /**
     * <p>Time range filter applied to imagery to find the images to tile.</p>
     */
    inline GetTileRequest& WithTimeRangeFilter(const Aws::String& value) { SetTimeRangeFilter(value); return *this;}

    /**
     * <p>Time range filter applied to imagery to find the images to tile.</p>
     */
    inline GetTileRequest& WithTimeRangeFilter(Aws::String&& value) { SetTimeRangeFilter(std::move(value)); return *this;}

    /**
     * <p>Time range filter applied to imagery to find the images to tile.</p>
     */
    inline GetTileRequest& WithTimeRangeFilter(const char* value) { SetTimeRangeFilter(value); return *this;}


    /**
     * <p>The x coordinate of the tile input.</p>
     */
    inline int GetX() const{ return m_x; }

    /**
     * <p>The x coordinate of the tile input.</p>
     */
    inline bool XHasBeenSet() const { return m_xHasBeenSet; }

    /**
     * <p>The x coordinate of the tile input.</p>
     */
    inline void SetX(int value) { m_xHasBeenSet = true; m_x = value; }

    /**
     * <p>The x coordinate of the tile input.</p>
     */
    inline GetTileRequest& WithX(int value) { SetX(value); return *this;}


    /**
     * <p>The y coordinate of the tile input.</p>
     */
    inline int GetY() const{ return m_y; }

    /**
     * <p>The y coordinate of the tile input.</p>
     */
    inline bool YHasBeenSet() const { return m_yHasBeenSet; }

    /**
     * <p>The y coordinate of the tile input.</p>
     */
    inline void SetY(int value) { m_yHasBeenSet = true; m_y = value; }

    /**
     * <p>The y coordinate of the tile input.</p>
     */
    inline GetTileRequest& WithY(int value) { SetY(value); return *this;}


    /**
     * <p>The z coordinate of the tile input.</p>
     */
    inline int GetZ() const{ return m_z; }

    /**
     * <p>The z coordinate of the tile input.</p>
     */
    inline bool ZHasBeenSet() const { return m_zHasBeenSet; }

    /**
     * <p>The z coordinate of the tile input.</p>
     */
    inline void SetZ(int value) { m_zHasBeenSet = true; m_z = value; }

    /**
     * <p>The z coordinate of the tile input.</p>
     */
    inline GetTileRequest& WithZ(int value) { SetZ(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_imageAssets;
    bool m_imageAssetsHasBeenSet = false;

    bool m_imageMask;
    bool m_imageMaskHasBeenSet = false;

    OutputType m_outputDataType;
    bool m_outputDataTypeHasBeenSet = false;

    Aws::String m_outputFormat;
    bool m_outputFormatHasBeenSet = false;

    Aws::String m_propertyFilters;
    bool m_propertyFiltersHasBeenSet = false;

    TargetOptions m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_timeRangeFilter;
    bool m_timeRangeFilterHasBeenSet = false;

    int m_x;
    bool m_xHasBeenSet = false;

    int m_y;
    bool m_yHasBeenSet = false;

    int m_z;
    bool m_zHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
