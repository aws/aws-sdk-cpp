/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis-video-archived-media/model/ImageSelectorType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kinesis-video-archived-media/model/Format.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/kinesis-video-archived-media/model/FormatConfigKey.h>
#include <utility>

namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace Model
{

  /**
   */
  class GetImagesRequest : public KinesisVideoArchivedMediaRequest
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetImagesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetImages"; }

    AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the stream from which to retrieve the images. You must specify
     * either the <code>StreamName</code> or the <code>StreamARN</code>.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    GetImagesRequest& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the stream from which to retrieve the
     * images. You must specify either the <code>StreamName</code> or the
     * <code>StreamARN</code>.</p>
     */
    inline const Aws::String& GetStreamARN() const { return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    template<typename StreamARNT = Aws::String>
    void SetStreamARN(StreamARNT&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::forward<StreamARNT>(value); }
    template<typename StreamARNT = Aws::String>
    GetImagesRequest& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin of the Server or Producer timestamps to use to generate the
     * images.</p>
     */
    inline ImageSelectorType GetImageSelectorType() const { return m_imageSelectorType; }
    inline bool ImageSelectorTypeHasBeenSet() const { return m_imageSelectorTypeHasBeenSet; }
    inline void SetImageSelectorType(ImageSelectorType value) { m_imageSelectorTypeHasBeenSet = true; m_imageSelectorType = value; }
    inline GetImagesRequest& WithImageSelectorType(ImageSelectorType value) { SetImageSelectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The starting point from which the images should be generated. This
     * <code>StartTimestamp</code> must be within an inclusive range of timestamps for
     * an image to be returned.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    void SetStartTimestamp(StartTimestampT&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::forward<StartTimestampT>(value); }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    GetImagesRequest& WithStartTimestamp(StartTimestampT&& value) { SetStartTimestamp(std::forward<StartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end timestamp for the range of images to be generated. If the time range
     * between <code>StartTimestamp</code> and <code>EndTimestamp</code> is more than
     * 300 seconds above <code>StartTimestamp</code>, you will receive an
     * <code>IllegalArgumentException</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimestamp() const { return m_endTimestamp; }
    inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
    template<typename EndTimestampT = Aws::Utils::DateTime>
    void SetEndTimestamp(EndTimestampT&& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = std::forward<EndTimestampT>(value); }
    template<typename EndTimestampT = Aws::Utils::DateTime>
    GetImagesRequest& WithEndTimestamp(EndTimestampT&& value) { SetEndTimestamp(std::forward<EndTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time interval in milliseconds (ms) at which the images need to be
     * generated from the stream. The minimum value that can be provided is 200 ms (5
     * images per second). If the timestamp range is less than the sampling interval,
     * the image from the <code>startTimestamp</code> will be returned if available.
     * </p>
     */
    inline int GetSamplingInterval() const { return m_samplingInterval; }
    inline bool SamplingIntervalHasBeenSet() const { return m_samplingIntervalHasBeenSet; }
    inline void SetSamplingInterval(int value) { m_samplingIntervalHasBeenSet = true; m_samplingInterval = value; }
    inline GetImagesRequest& WithSamplingInterval(int value) { SetSamplingInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format that will be used to encode the image.</p>
     */
    inline Format GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(Format value) { m_formatHasBeenSet = true; m_format = value; }
    inline GetImagesRequest& WithFormat(Format value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of a key-value pair structure that contains extra parameters that
     * can be applied when the image is generated. The <code>FormatConfig</code> key is
     * the <code>JPEGQuality</code>, which indicates the JPEG quality key to be used to
     * generate the image. The <code>FormatConfig</code> value accepts ints from 1 to
     * 100. If the value is 1, the image will be generated with less quality and the
     * best compression. If the value is 100, the image will be generated with the best
     * quality and less compression. If no value is provided, the default value of the
     * <code>JPEGQuality</code> key will be set to 80.</p>
     */
    inline const Aws::Map<FormatConfigKey, Aws::String>& GetFormatConfig() const { return m_formatConfig; }
    inline bool FormatConfigHasBeenSet() const { return m_formatConfigHasBeenSet; }
    template<typename FormatConfigT = Aws::Map<FormatConfigKey, Aws::String>>
    void SetFormatConfig(FormatConfigT&& value) { m_formatConfigHasBeenSet = true; m_formatConfig = std::forward<FormatConfigT>(value); }
    template<typename FormatConfigT = Aws::Map<FormatConfigKey, Aws::String>>
    GetImagesRequest& WithFormatConfig(FormatConfigT&& value) { SetFormatConfig(std::forward<FormatConfigT>(value)); return *this;}
    inline GetImagesRequest& AddFormatConfig(FormatConfigKey key, Aws::String value) {
      m_formatConfigHasBeenSet = true; m_formatConfig.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The width of the output image that is used in conjunction with the
     * <code>HeightPixels</code> parameter. When both <code>WidthPixels</code> and
     * <code>HeightPixels</code> parameters are provided, the image will be stretched
     * to fit the specified aspect ratio. If only the <code>WidthPixels</code>
     * parameter is provided or if only the <code>HeightPixels</code> is provided, a
     * <code>ValidationException</code> will be thrown. If neither parameter is
     * provided, the original image size from the stream will be returned.</p>
     */
    inline int GetWidthPixels() const { return m_widthPixels; }
    inline bool WidthPixelsHasBeenSet() const { return m_widthPixelsHasBeenSet; }
    inline void SetWidthPixels(int value) { m_widthPixelsHasBeenSet = true; m_widthPixels = value; }
    inline GetImagesRequest& WithWidthPixels(int value) { SetWidthPixels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The height of the output image that is used in conjunction with the
     * <code>WidthPixels</code> parameter. When both <code>HeightPixels</code> and
     * <code>WidthPixels</code> parameters are provided, the image will be stretched to
     * fit the specified aspect ratio. If only the <code>HeightPixels</code> parameter
     * is provided, its original aspect ratio will be used to calculate the
     * <code>WidthPixels</code> ratio. If neither parameter is provided, the original
     * image size will be returned.</p>
     */
    inline int GetHeightPixels() const { return m_heightPixels; }
    inline bool HeightPixelsHasBeenSet() const { return m_heightPixelsHasBeenSet; }
    inline void SetHeightPixels(int value) { m_heightPixelsHasBeenSet = true; m_heightPixels = value; }
    inline GetImagesRequest& WithHeightPixels(int value) { SetHeightPixels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of images to be returned by the API. </p>  <p>The
     * default limit is 25 images per API response. Providing a <code>MaxResults</code>
     * greater than this value will result in a page size of 25. Any additional results
     * will be paginated. </p> 
     */
    inline long long GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(long long value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetImagesRequest& WithMaxResults(long long value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that specifies where to start paginating the next set of Images. This
     * is the <code>GetImages:NextToken</code> from a previously truncated
     * response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetImagesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    ImageSelectorType m_imageSelectorType{ImageSelectorType::NOT_SET};
    bool m_imageSelectorTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp{};
    bool m_startTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_endTimestamp{};
    bool m_endTimestampHasBeenSet = false;

    int m_samplingInterval{0};
    bool m_samplingIntervalHasBeenSet = false;

    Format m_format{Format::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::Map<FormatConfigKey, Aws::String> m_formatConfig;
    bool m_formatConfigHasBeenSet = false;

    int m_widthPixels{0};
    bool m_widthPixelsHasBeenSet = false;

    int m_heightPixels{0};
    bool m_heightPixelsHasBeenSet = false;

    long long m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
