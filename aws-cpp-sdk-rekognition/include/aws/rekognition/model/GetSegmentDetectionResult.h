/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/VideoJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/VideoMetadata.h>
#include <aws/rekognition/model/AudioMetadata.h>
#include <aws/rekognition/model/SegmentDetection.h>
#include <aws/rekognition/model/SegmentTypeInfo.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{
  class GetSegmentDetectionResult
  {
  public:
    AWS_REKOGNITION_API GetSegmentDetectionResult();
    AWS_REKOGNITION_API GetSegmentDetectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetSegmentDetectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Current status of the segment detection job.</p>
     */
    inline const VideoJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>Current status of the segment detection job.</p>
     */
    inline void SetJobStatus(const VideoJobStatus& value) { m_jobStatus = value; }

    /**
     * <p>Current status of the segment detection job.</p>
     */
    inline void SetJobStatus(VideoJobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>Current status of the segment detection job.</p>
     */
    inline GetSegmentDetectionResult& WithJobStatus(const VideoJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>Current status of the segment detection job.</p>
     */
    inline GetSegmentDetectionResult& WithJobStatus(VideoJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetSegmentDetectionResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetSegmentDetectionResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetSegmentDetectionResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Currently, Amazon Rekognition Video returns a single object in the
     * <code>VideoMetadata</code> array. The object contains information about the
     * video stream in the input file that Amazon Rekognition Video chose to analyze.
     * The <code>VideoMetadata</code> object includes the video codec, video format and
     * other information. Video metadata is returned in each page of information
     * returned by <code>GetSegmentDetection</code>.</p>
     */
    inline const Aws::Vector<VideoMetadata>& GetVideoMetadata() const{ return m_videoMetadata; }

    /**
     * <p>Currently, Amazon Rekognition Video returns a single object in the
     * <code>VideoMetadata</code> array. The object contains information about the
     * video stream in the input file that Amazon Rekognition Video chose to analyze.
     * The <code>VideoMetadata</code> object includes the video codec, video format and
     * other information. Video metadata is returned in each page of information
     * returned by <code>GetSegmentDetection</code>.</p>
     */
    inline void SetVideoMetadata(const Aws::Vector<VideoMetadata>& value) { m_videoMetadata = value; }

    /**
     * <p>Currently, Amazon Rekognition Video returns a single object in the
     * <code>VideoMetadata</code> array. The object contains information about the
     * video stream in the input file that Amazon Rekognition Video chose to analyze.
     * The <code>VideoMetadata</code> object includes the video codec, video format and
     * other information. Video metadata is returned in each page of information
     * returned by <code>GetSegmentDetection</code>.</p>
     */
    inline void SetVideoMetadata(Aws::Vector<VideoMetadata>&& value) { m_videoMetadata = std::move(value); }

    /**
     * <p>Currently, Amazon Rekognition Video returns a single object in the
     * <code>VideoMetadata</code> array. The object contains information about the
     * video stream in the input file that Amazon Rekognition Video chose to analyze.
     * The <code>VideoMetadata</code> object includes the video codec, video format and
     * other information. Video metadata is returned in each page of information
     * returned by <code>GetSegmentDetection</code>.</p>
     */
    inline GetSegmentDetectionResult& WithVideoMetadata(const Aws::Vector<VideoMetadata>& value) { SetVideoMetadata(value); return *this;}

    /**
     * <p>Currently, Amazon Rekognition Video returns a single object in the
     * <code>VideoMetadata</code> array. The object contains information about the
     * video stream in the input file that Amazon Rekognition Video chose to analyze.
     * The <code>VideoMetadata</code> object includes the video codec, video format and
     * other information. Video metadata is returned in each page of information
     * returned by <code>GetSegmentDetection</code>.</p>
     */
    inline GetSegmentDetectionResult& WithVideoMetadata(Aws::Vector<VideoMetadata>&& value) { SetVideoMetadata(std::move(value)); return *this;}

    /**
     * <p>Currently, Amazon Rekognition Video returns a single object in the
     * <code>VideoMetadata</code> array. The object contains information about the
     * video stream in the input file that Amazon Rekognition Video chose to analyze.
     * The <code>VideoMetadata</code> object includes the video codec, video format and
     * other information. Video metadata is returned in each page of information
     * returned by <code>GetSegmentDetection</code>.</p>
     */
    inline GetSegmentDetectionResult& AddVideoMetadata(const VideoMetadata& value) { m_videoMetadata.push_back(value); return *this; }

    /**
     * <p>Currently, Amazon Rekognition Video returns a single object in the
     * <code>VideoMetadata</code> array. The object contains information about the
     * video stream in the input file that Amazon Rekognition Video chose to analyze.
     * The <code>VideoMetadata</code> object includes the video codec, video format and
     * other information. Video metadata is returned in each page of information
     * returned by <code>GetSegmentDetection</code>.</p>
     */
    inline GetSegmentDetectionResult& AddVideoMetadata(VideoMetadata&& value) { m_videoMetadata.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of objects. There can be multiple audio streams. Each
     * <code>AudioMetadata</code> object contains metadata for a single audio stream.
     * Audio information in an <code>AudioMetadata</code> objects includes the audio
     * codec, the number of audio channels, the duration of the audio stream, and the
     * sample rate. Audio metadata is returned in each page of information returned by
     * <code>GetSegmentDetection</code>.</p>
     */
    inline const Aws::Vector<AudioMetadata>& GetAudioMetadata() const{ return m_audioMetadata; }

    /**
     * <p>An array of objects. There can be multiple audio streams. Each
     * <code>AudioMetadata</code> object contains metadata for a single audio stream.
     * Audio information in an <code>AudioMetadata</code> objects includes the audio
     * codec, the number of audio channels, the duration of the audio stream, and the
     * sample rate. Audio metadata is returned in each page of information returned by
     * <code>GetSegmentDetection</code>.</p>
     */
    inline void SetAudioMetadata(const Aws::Vector<AudioMetadata>& value) { m_audioMetadata = value; }

    /**
     * <p>An array of objects. There can be multiple audio streams. Each
     * <code>AudioMetadata</code> object contains metadata for a single audio stream.
     * Audio information in an <code>AudioMetadata</code> objects includes the audio
     * codec, the number of audio channels, the duration of the audio stream, and the
     * sample rate. Audio metadata is returned in each page of information returned by
     * <code>GetSegmentDetection</code>.</p>
     */
    inline void SetAudioMetadata(Aws::Vector<AudioMetadata>&& value) { m_audioMetadata = std::move(value); }

    /**
     * <p>An array of objects. There can be multiple audio streams. Each
     * <code>AudioMetadata</code> object contains metadata for a single audio stream.
     * Audio information in an <code>AudioMetadata</code> objects includes the audio
     * codec, the number of audio channels, the duration of the audio stream, and the
     * sample rate. Audio metadata is returned in each page of information returned by
     * <code>GetSegmentDetection</code>.</p>
     */
    inline GetSegmentDetectionResult& WithAudioMetadata(const Aws::Vector<AudioMetadata>& value) { SetAudioMetadata(value); return *this;}

    /**
     * <p>An array of objects. There can be multiple audio streams. Each
     * <code>AudioMetadata</code> object contains metadata for a single audio stream.
     * Audio information in an <code>AudioMetadata</code> objects includes the audio
     * codec, the number of audio channels, the duration of the audio stream, and the
     * sample rate. Audio metadata is returned in each page of information returned by
     * <code>GetSegmentDetection</code>.</p>
     */
    inline GetSegmentDetectionResult& WithAudioMetadata(Aws::Vector<AudioMetadata>&& value) { SetAudioMetadata(std::move(value)); return *this;}

    /**
     * <p>An array of objects. There can be multiple audio streams. Each
     * <code>AudioMetadata</code> object contains metadata for a single audio stream.
     * Audio information in an <code>AudioMetadata</code> objects includes the audio
     * codec, the number of audio channels, the duration of the audio stream, and the
     * sample rate. Audio metadata is returned in each page of information returned by
     * <code>GetSegmentDetection</code>.</p>
     */
    inline GetSegmentDetectionResult& AddAudioMetadata(const AudioMetadata& value) { m_audioMetadata.push_back(value); return *this; }

    /**
     * <p>An array of objects. There can be multiple audio streams. Each
     * <code>AudioMetadata</code> object contains metadata for a single audio stream.
     * Audio information in an <code>AudioMetadata</code> objects includes the audio
     * codec, the number of audio channels, the duration of the audio stream, and the
     * sample rate. Audio metadata is returned in each page of information returned by
     * <code>GetSegmentDetection</code>.</p>
     */
    inline GetSegmentDetectionResult& AddAudioMetadata(AudioMetadata&& value) { m_audioMetadata.push_back(std::move(value)); return *this; }


    /**
     * <p>If the previous response was incomplete (because there are more labels to
     * retrieve), Amazon Rekognition Video returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of text.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was incomplete (because there are more labels to
     * retrieve), Amazon Rekognition Video returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of text.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous response was incomplete (because there are more labels to
     * retrieve), Amazon Rekognition Video returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of text.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was incomplete (because there are more labels to
     * retrieve), Amazon Rekognition Video returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of text.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous response was incomplete (because there are more labels to
     * retrieve), Amazon Rekognition Video returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of text.</p>
     */
    inline GetSegmentDetectionResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was incomplete (because there are more labels to
     * retrieve), Amazon Rekognition Video returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of text.</p>
     */
    inline GetSegmentDetectionResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was incomplete (because there are more labels to
     * retrieve), Amazon Rekognition Video returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of text.</p>
     */
    inline GetSegmentDetectionResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of segments detected in a video. The array is sorted by the segment
     * types (TECHNICAL_CUE or SHOT) specified in the <code>SegmentTypes</code> input
     * parameter of <code>StartSegmentDetection</code>. Within each segment type the
     * array is sorted by timestamp values.</p>
     */
    inline const Aws::Vector<SegmentDetection>& GetSegments() const{ return m_segments; }

    /**
     * <p>An array of segments detected in a video. The array is sorted by the segment
     * types (TECHNICAL_CUE or SHOT) specified in the <code>SegmentTypes</code> input
     * parameter of <code>StartSegmentDetection</code>. Within each segment type the
     * array is sorted by timestamp values.</p>
     */
    inline void SetSegments(const Aws::Vector<SegmentDetection>& value) { m_segments = value; }

    /**
     * <p>An array of segments detected in a video. The array is sorted by the segment
     * types (TECHNICAL_CUE or SHOT) specified in the <code>SegmentTypes</code> input
     * parameter of <code>StartSegmentDetection</code>. Within each segment type the
     * array is sorted by timestamp values.</p>
     */
    inline void SetSegments(Aws::Vector<SegmentDetection>&& value) { m_segments = std::move(value); }

    /**
     * <p>An array of segments detected in a video. The array is sorted by the segment
     * types (TECHNICAL_CUE or SHOT) specified in the <code>SegmentTypes</code> input
     * parameter of <code>StartSegmentDetection</code>. Within each segment type the
     * array is sorted by timestamp values.</p>
     */
    inline GetSegmentDetectionResult& WithSegments(const Aws::Vector<SegmentDetection>& value) { SetSegments(value); return *this;}

    /**
     * <p>An array of segments detected in a video. The array is sorted by the segment
     * types (TECHNICAL_CUE or SHOT) specified in the <code>SegmentTypes</code> input
     * parameter of <code>StartSegmentDetection</code>. Within each segment type the
     * array is sorted by timestamp values.</p>
     */
    inline GetSegmentDetectionResult& WithSegments(Aws::Vector<SegmentDetection>&& value) { SetSegments(std::move(value)); return *this;}

    /**
     * <p>An array of segments detected in a video. The array is sorted by the segment
     * types (TECHNICAL_CUE or SHOT) specified in the <code>SegmentTypes</code> input
     * parameter of <code>StartSegmentDetection</code>. Within each segment type the
     * array is sorted by timestamp values.</p>
     */
    inline GetSegmentDetectionResult& AddSegments(const SegmentDetection& value) { m_segments.push_back(value); return *this; }

    /**
     * <p>An array of segments detected in a video. The array is sorted by the segment
     * types (TECHNICAL_CUE or SHOT) specified in the <code>SegmentTypes</code> input
     * parameter of <code>StartSegmentDetection</code>. Within each segment type the
     * array is sorted by timestamp values.</p>
     */
    inline GetSegmentDetectionResult& AddSegments(SegmentDetection&& value) { m_segments.push_back(std::move(value)); return *this; }


    /**
     * <p>An array containing the segment types requested in the call to
     * <code>StartSegmentDetection</code>. </p>
     */
    inline const Aws::Vector<SegmentTypeInfo>& GetSelectedSegmentTypes() const{ return m_selectedSegmentTypes; }

    /**
     * <p>An array containing the segment types requested in the call to
     * <code>StartSegmentDetection</code>. </p>
     */
    inline void SetSelectedSegmentTypes(const Aws::Vector<SegmentTypeInfo>& value) { m_selectedSegmentTypes = value; }

    /**
     * <p>An array containing the segment types requested in the call to
     * <code>StartSegmentDetection</code>. </p>
     */
    inline void SetSelectedSegmentTypes(Aws::Vector<SegmentTypeInfo>&& value) { m_selectedSegmentTypes = std::move(value); }

    /**
     * <p>An array containing the segment types requested in the call to
     * <code>StartSegmentDetection</code>. </p>
     */
    inline GetSegmentDetectionResult& WithSelectedSegmentTypes(const Aws::Vector<SegmentTypeInfo>& value) { SetSelectedSegmentTypes(value); return *this;}

    /**
     * <p>An array containing the segment types requested in the call to
     * <code>StartSegmentDetection</code>. </p>
     */
    inline GetSegmentDetectionResult& WithSelectedSegmentTypes(Aws::Vector<SegmentTypeInfo>&& value) { SetSelectedSegmentTypes(std::move(value)); return *this;}

    /**
     * <p>An array containing the segment types requested in the call to
     * <code>StartSegmentDetection</code>. </p>
     */
    inline GetSegmentDetectionResult& AddSelectedSegmentTypes(const SegmentTypeInfo& value) { m_selectedSegmentTypes.push_back(value); return *this; }

    /**
     * <p>An array containing the segment types requested in the call to
     * <code>StartSegmentDetection</code>. </p>
     */
    inline GetSegmentDetectionResult& AddSelectedSegmentTypes(SegmentTypeInfo&& value) { m_selectedSegmentTypes.push_back(std::move(value)); return *this; }

  private:

    VideoJobStatus m_jobStatus;

    Aws::String m_statusMessage;

    Aws::Vector<VideoMetadata> m_videoMetadata;

    Aws::Vector<AudioMetadata> m_audioMetadata;

    Aws::String m_nextToken;

    Aws::Vector<SegmentDetection> m_segments;

    Aws::Vector<SegmentTypeInfo> m_selectedSegmentTypes;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
