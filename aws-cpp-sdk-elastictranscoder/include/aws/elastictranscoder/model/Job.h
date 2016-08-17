/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/JobInput.h>
#include <aws/elastictranscoder/model/JobOutput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/elastictranscoder/model/Timing.h>
#include <aws/elastictranscoder/model/Playlist.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>A section of the response body that provides information about the job that
   * is created.</p>
   */
  class AWS_ELASTICTRANSCODER_API Job
  {
  public:
    Job();
    Job(const Aws::Utils::Json::JsonValue& jsonValue);
    Job& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p> The identifier that Elastic Transcoder assigned to the job. You use this
     * value to get settings for the job or to delete the job. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The identifier that Elastic Transcoder assigned to the job. You use this
     * value to get settings for the job or to delete the job. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The identifier that Elastic Transcoder assigned to the job. You use this
     * value to get settings for the job or to delete the job. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The identifier that Elastic Transcoder assigned to the job. You use this
     * value to get settings for the job or to delete the job. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The identifier that Elastic Transcoder assigned to the job. You use this
     * value to get settings for the job or to delete the job. </p>
     */
    inline Job& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The identifier that Elastic Transcoder assigned to the job. You use this
     * value to get settings for the job or to delete the job. </p>
     */
    inline Job& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p> The identifier that Elastic Transcoder assigned to the job. You use this
     * value to get settings for the job or to delete the job. </p>
     */
    inline Job& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the job.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the job.</p>
     */
    inline Job& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the job.</p>
     */
    inline Job& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the job.</p>
     */
    inline Job& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p> The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files. </p>
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * <p> The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files. </p>
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p> The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files. </p>
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p> The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files. </p>
     */
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }

    /**
     * <p> The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files. </p>
     */
    inline Job& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * <p> The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files. </p>
     */
    inline Job& WithPipelineId(Aws::String&& value) { SetPipelineId(value); return *this;}

    /**
     * <p> The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files. </p>
     */
    inline Job& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}

    /**
     * <p> A section of the request or response body that provides information about
     * the file that is being transcoded.</p>
     */
    inline const JobInput& GetInput() const{ return m_input; }

    /**
     * <p> A section of the request or response body that provides information about
     * the file that is being transcoded.</p>
     */
    inline void SetInput(const JobInput& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p> A section of the request or response body that provides information about
     * the file that is being transcoded.</p>
     */
    inline void SetInput(JobInput&& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p> A section of the request or response body that provides information about
     * the file that is being transcoded.</p>
     */
    inline Job& WithInput(const JobInput& value) { SetInput(value); return *this;}

    /**
     * <p> A section of the request or response body that provides information about
     * the file that is being transcoded.</p>
     */
    inline Job& WithInput(JobInput&& value) { SetInput(value); return *this;}

    /**
     * <p>If you specified one output for a job, information about that output. If you
     * specified multiple outputs for a job, the Output object lists information about
     * the first output. This duplicates the information that is listed for the first
     * output in the Outputs object.</p> <p><important>Outputs recommended
     * instead.</important> A section of the request or response body that provides
     * information about the transcoded (target) file. </p>
     */
    inline const JobOutput& GetOutput() const{ return m_output; }

    /**
     * <p>If you specified one output for a job, information about that output. If you
     * specified multiple outputs for a job, the Output object lists information about
     * the first output. This duplicates the information that is listed for the first
     * output in the Outputs object.</p> <p><important>Outputs recommended
     * instead.</important> A section of the request or response body that provides
     * information about the transcoded (target) file. </p>
     */
    inline void SetOutput(const JobOutput& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>If you specified one output for a job, information about that output. If you
     * specified multiple outputs for a job, the Output object lists information about
     * the first output. This duplicates the information that is listed for the first
     * output in the Outputs object.</p> <p><important>Outputs recommended
     * instead.</important> A section of the request or response body that provides
     * information about the transcoded (target) file. </p>
     */
    inline void SetOutput(JobOutput&& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>If you specified one output for a job, information about that output. If you
     * specified multiple outputs for a job, the Output object lists information about
     * the first output. This duplicates the information that is listed for the first
     * output in the Outputs object.</p> <p><important>Outputs recommended
     * instead.</important> A section of the request or response body that provides
     * information about the transcoded (target) file. </p>
     */
    inline Job& WithOutput(const JobOutput& value) { SetOutput(value); return *this;}

    /**
     * <p>If you specified one output for a job, information about that output. If you
     * specified multiple outputs for a job, the Output object lists information about
     * the first output. This duplicates the information that is listed for the first
     * output in the Outputs object.</p> <p><important>Outputs recommended
     * instead.</important> A section of the request or response body that provides
     * information about the transcoded (target) file. </p>
     */
    inline Job& WithOutput(JobOutput&& value) { SetOutput(value); return *this;}

    /**
     * <p>Information about the output files. We recommend that you use the
     * <code>Outputs</code> syntax for all jobs, even when you want Elastic Transcoder
     * to transcode a file into only one format. Do not use both the
     * <code>Outputs</code> and <code>Output</code> syntaxes in the same request. You
     * can create a maximum of 30 outputs per job. </p> <p> If you specify more than
     * one output for a job, Elastic Transcoder creates the files for each output in
     * the order in which you specify them in the job.</p>
     */
    inline const Aws::Vector<JobOutput>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>Information about the output files. We recommend that you use the
     * <code>Outputs</code> syntax for all jobs, even when you want Elastic Transcoder
     * to transcode a file into only one format. Do not use both the
     * <code>Outputs</code> and <code>Output</code> syntaxes in the same request. You
     * can create a maximum of 30 outputs per job. </p> <p> If you specify more than
     * one output for a job, Elastic Transcoder creates the files for each output in
     * the order in which you specify them in the job.</p>
     */
    inline void SetOutputs(const Aws::Vector<JobOutput>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>Information about the output files. We recommend that you use the
     * <code>Outputs</code> syntax for all jobs, even when you want Elastic Transcoder
     * to transcode a file into only one format. Do not use both the
     * <code>Outputs</code> and <code>Output</code> syntaxes in the same request. You
     * can create a maximum of 30 outputs per job. </p> <p> If you specify more than
     * one output for a job, Elastic Transcoder creates the files for each output in
     * the order in which you specify them in the job.</p>
     */
    inline void SetOutputs(Aws::Vector<JobOutput>&& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>Information about the output files. We recommend that you use the
     * <code>Outputs</code> syntax for all jobs, even when you want Elastic Transcoder
     * to transcode a file into only one format. Do not use both the
     * <code>Outputs</code> and <code>Output</code> syntaxes in the same request. You
     * can create a maximum of 30 outputs per job. </p> <p> If you specify more than
     * one output for a job, Elastic Transcoder creates the files for each output in
     * the order in which you specify them in the job.</p>
     */
    inline Job& WithOutputs(const Aws::Vector<JobOutput>& value) { SetOutputs(value); return *this;}

    /**
     * <p>Information about the output files. We recommend that you use the
     * <code>Outputs</code> syntax for all jobs, even when you want Elastic Transcoder
     * to transcode a file into only one format. Do not use both the
     * <code>Outputs</code> and <code>Output</code> syntaxes in the same request. You
     * can create a maximum of 30 outputs per job. </p> <p> If you specify more than
     * one output for a job, Elastic Transcoder creates the files for each output in
     * the order in which you specify them in the job.</p>
     */
    inline Job& WithOutputs(Aws::Vector<JobOutput>&& value) { SetOutputs(value); return *this;}

    /**
     * <p>Information about the output files. We recommend that you use the
     * <code>Outputs</code> syntax for all jobs, even when you want Elastic Transcoder
     * to transcode a file into only one format. Do not use both the
     * <code>Outputs</code> and <code>Output</code> syntaxes in the same request. You
     * can create a maximum of 30 outputs per job. </p> <p> If you specify more than
     * one output for a job, Elastic Transcoder creates the files for each output in
     * the order in which you specify them in the job.</p>
     */
    inline Job& AddOutputs(const JobOutput& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p>Information about the output files. We recommend that you use the
     * <code>Outputs</code> syntax for all jobs, even when you want Elastic Transcoder
     * to transcode a file into only one format. Do not use both the
     * <code>Outputs</code> and <code>Output</code> syntaxes in the same request. You
     * can create a maximum of 30 outputs per job. </p> <p> If you specify more than
     * one output for a job, Elastic Transcoder creates the files for each output in
     * the order in which you specify them in the job.</p>
     */
    inline Job& AddOutputs(JobOutput&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists. We recommend that you add a / or some other delimiter to the end of
     * the <code>OutputKeyPrefix</code>.</p>
     */
    inline const Aws::String& GetOutputKeyPrefix() const{ return m_outputKeyPrefix; }

    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists. We recommend that you add a / or some other delimiter to the end of
     * the <code>OutputKeyPrefix</code>.</p>
     */
    inline void SetOutputKeyPrefix(const Aws::String& value) { m_outputKeyPrefixHasBeenSet = true; m_outputKeyPrefix = value; }

    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists. We recommend that you add a / or some other delimiter to the end of
     * the <code>OutputKeyPrefix</code>.</p>
     */
    inline void SetOutputKeyPrefix(Aws::String&& value) { m_outputKeyPrefixHasBeenSet = true; m_outputKeyPrefix = value; }

    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists. We recommend that you add a / or some other delimiter to the end of
     * the <code>OutputKeyPrefix</code>.</p>
     */
    inline void SetOutputKeyPrefix(const char* value) { m_outputKeyPrefixHasBeenSet = true; m_outputKeyPrefix.assign(value); }

    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists. We recommend that you add a / or some other delimiter to the end of
     * the <code>OutputKeyPrefix</code>.</p>
     */
    inline Job& WithOutputKeyPrefix(const Aws::String& value) { SetOutputKeyPrefix(value); return *this;}

    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists. We recommend that you add a / or some other delimiter to the end of
     * the <code>OutputKeyPrefix</code>.</p>
     */
    inline Job& WithOutputKeyPrefix(Aws::String&& value) { SetOutputKeyPrefix(value); return *this;}

    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists. We recommend that you add a / or some other delimiter to the end of
     * the <code>OutputKeyPrefix</code>.</p>
     */
    inline Job& WithOutputKeyPrefix(const char* value) { SetOutputKeyPrefix(value); return *this;}

    /**
     * <p><important>Outputs in Fragmented MP4 or MPEG-TS format only.</important>If
     * you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS),
     * <code>Playlists</code> contains information about the master playlists that you
     * want Elastic Transcoder to create.</p> <p>The maximum number of master playlists
     * in a job is 30. </p>
     */
    inline const Aws::Vector<Playlist>& GetPlaylists() const{ return m_playlists; }

    /**
     * <p><important>Outputs in Fragmented MP4 or MPEG-TS format only.</important>If
     * you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS),
     * <code>Playlists</code> contains information about the master playlists that you
     * want Elastic Transcoder to create.</p> <p>The maximum number of master playlists
     * in a job is 30. </p>
     */
    inline void SetPlaylists(const Aws::Vector<Playlist>& value) { m_playlistsHasBeenSet = true; m_playlists = value; }

    /**
     * <p><important>Outputs in Fragmented MP4 or MPEG-TS format only.</important>If
     * you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS),
     * <code>Playlists</code> contains information about the master playlists that you
     * want Elastic Transcoder to create.</p> <p>The maximum number of master playlists
     * in a job is 30. </p>
     */
    inline void SetPlaylists(Aws::Vector<Playlist>&& value) { m_playlistsHasBeenSet = true; m_playlists = value; }

    /**
     * <p><important>Outputs in Fragmented MP4 or MPEG-TS format only.</important>If
     * you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS),
     * <code>Playlists</code> contains information about the master playlists that you
     * want Elastic Transcoder to create.</p> <p>The maximum number of master playlists
     * in a job is 30. </p>
     */
    inline Job& WithPlaylists(const Aws::Vector<Playlist>& value) { SetPlaylists(value); return *this;}

    /**
     * <p><important>Outputs in Fragmented MP4 or MPEG-TS format only.</important>If
     * you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS),
     * <code>Playlists</code> contains information about the master playlists that you
     * want Elastic Transcoder to create.</p> <p>The maximum number of master playlists
     * in a job is 30. </p>
     */
    inline Job& WithPlaylists(Aws::Vector<Playlist>&& value) { SetPlaylists(value); return *this;}

    /**
     * <p><important>Outputs in Fragmented MP4 or MPEG-TS format only.</important>If
     * you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS),
     * <code>Playlists</code> contains information about the master playlists that you
     * want Elastic Transcoder to create.</p> <p>The maximum number of master playlists
     * in a job is 30. </p>
     */
    inline Job& AddPlaylists(const Playlist& value) { m_playlistsHasBeenSet = true; m_playlists.push_back(value); return *this; }

    /**
     * <p><important>Outputs in Fragmented MP4 or MPEG-TS format only.</important>If
     * you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS),
     * <code>Playlists</code> contains information about the master playlists that you
     * want Elastic Transcoder to create.</p> <p>The maximum number of master playlists
     * in a job is 30. </p>
     */
    inline Job& AddPlaylists(Playlist&& value) { m_playlistsHasBeenSet = true; m_playlists.push_back(value); return *this; }

    /**
     * <p> The status of the job: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the job: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the job: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the job: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> The status of the job: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline Job& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the job: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline Job& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the job: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline Job& WithStatus(const char* value) { SetStatus(value); return *this;}

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs will be returned in the same order in which
     * you specify them.</p> <p>Metadata <code>keys</code> and <code>values</code> must
     * use characters from the following list:</p> <ul>
     * <li><p><code>0-9</code></p></li> <li><p><code>A-Z</code> and
     * <code>a-z</code></p></li> <li><p><code>Space</code></p></li> <li><p>The
     * following symbols: <code>_.:/=+-%@</code></p></li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const{ return m_userMetadata; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs will be returned in the same order in which
     * you specify them.</p> <p>Metadata <code>keys</code> and <code>values</code> must
     * use characters from the following list:</p> <ul>
     * <li><p><code>0-9</code></p></li> <li><p><code>A-Z</code> and
     * <code>a-z</code></p></li> <li><p><code>Space</code></p></li> <li><p>The
     * following symbols: <code>_.:/=+-%@</code></p></li> </ul>
     */
    inline void SetUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_userMetadataHasBeenSet = true; m_userMetadata = value; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs will be returned in the same order in which
     * you specify them.</p> <p>Metadata <code>keys</code> and <code>values</code> must
     * use characters from the following list:</p> <ul>
     * <li><p><code>0-9</code></p></li> <li><p><code>A-Z</code> and
     * <code>a-z</code></p></li> <li><p><code>Space</code></p></li> <li><p>The
     * following symbols: <code>_.:/=+-%@</code></p></li> </ul>
     */
    inline void SetUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = value; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs will be returned in the same order in which
     * you specify them.</p> <p>Metadata <code>keys</code> and <code>values</code> must
     * use characters from the following list:</p> <ul>
     * <li><p><code>0-9</code></p></li> <li><p><code>A-Z</code> and
     * <code>a-z</code></p></li> <li><p><code>Space</code></p></li> <li><p>The
     * following symbols: <code>_.:/=+-%@</code></p></li> </ul>
     */
    inline Job& WithUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetUserMetadata(value); return *this;}

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs will be returned in the same order in which
     * you specify them.</p> <p>Metadata <code>keys</code> and <code>values</code> must
     * use characters from the following list:</p> <ul>
     * <li><p><code>0-9</code></p></li> <li><p><code>A-Z</code> and
     * <code>a-z</code></p></li> <li><p><code>Space</code></p></li> <li><p>The
     * following symbols: <code>_.:/=+-%@</code></p></li> </ul>
     */
    inline Job& WithUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetUserMetadata(value); return *this;}

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs will be returned in the same order in which
     * you specify them.</p> <p>Metadata <code>keys</code> and <code>values</code> must
     * use characters from the following list:</p> <ul>
     * <li><p><code>0-9</code></p></li> <li><p><code>A-Z</code> and
     * <code>a-z</code></p></li> <li><p><code>Space</code></p></li> <li><p>The
     * following symbols: <code>_.:/=+-%@</code></p></li> </ul>
     */
    inline Job& AddUserMetadata(const Aws::String& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata[key] = value; return *this; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs will be returned in the same order in which
     * you specify them.</p> <p>Metadata <code>keys</code> and <code>values</code> must
     * use characters from the following list:</p> <ul>
     * <li><p><code>0-9</code></p></li> <li><p><code>A-Z</code> and
     * <code>a-z</code></p></li> <li><p><code>Space</code></p></li> <li><p>The
     * following symbols: <code>_.:/=+-%@</code></p></li> </ul>
     */
    inline Job& AddUserMetadata(Aws::String&& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata[key] = value; return *this; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs will be returned in the same order in which
     * you specify them.</p> <p>Metadata <code>keys</code> and <code>values</code> must
     * use characters from the following list:</p> <ul>
     * <li><p><code>0-9</code></p></li> <li><p><code>A-Z</code> and
     * <code>a-z</code></p></li> <li><p><code>Space</code></p></li> <li><p>The
     * following symbols: <code>_.:/=+-%@</code></p></li> </ul>
     */
    inline Job& AddUserMetadata(const Aws::String& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata[key] = value; return *this; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs will be returned in the same order in which
     * you specify them.</p> <p>Metadata <code>keys</code> and <code>values</code> must
     * use characters from the following list:</p> <ul>
     * <li><p><code>0-9</code></p></li> <li><p><code>A-Z</code> and
     * <code>a-z</code></p></li> <li><p><code>Space</code></p></li> <li><p>The
     * following symbols: <code>_.:/=+-%@</code></p></li> </ul>
     */
    inline Job& AddUserMetadata(Aws::String&& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata[key] = value; return *this; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs will be returned in the same order in which
     * you specify them.</p> <p>Metadata <code>keys</code> and <code>values</code> must
     * use characters from the following list:</p> <ul>
     * <li><p><code>0-9</code></p></li> <li><p><code>A-Z</code> and
     * <code>a-z</code></p></li> <li><p><code>Space</code></p></li> <li><p>The
     * following symbols: <code>_.:/=+-%@</code></p></li> </ul>
     */
    inline Job& AddUserMetadata(const char* key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata[key] = value; return *this; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs will be returned in the same order in which
     * you specify them.</p> <p>Metadata <code>keys</code> and <code>values</code> must
     * use characters from the following list:</p> <ul>
     * <li><p><code>0-9</code></p></li> <li><p><code>A-Z</code> and
     * <code>a-z</code></p></li> <li><p><code>Space</code></p></li> <li><p>The
     * following symbols: <code>_.:/=+-%@</code></p></li> </ul>
     */
    inline Job& AddUserMetadata(Aws::String&& key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata[key] = value; return *this; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs will be returned in the same order in which
     * you specify them.</p> <p>Metadata <code>keys</code> and <code>values</code> must
     * use characters from the following list:</p> <ul>
     * <li><p><code>0-9</code></p></li> <li><p><code>A-Z</code> and
     * <code>a-z</code></p></li> <li><p><code>Space</code></p></li> <li><p>The
     * following symbols: <code>_.:/=+-%@</code></p></li> </ul>
     */
    inline Job& AddUserMetadata(const char* key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata[key] = value; return *this; }

    /**
     * <p>Details about the timing of a job.</p>
     */
    inline const Timing& GetTiming() const{ return m_timing; }

    /**
     * <p>Details about the timing of a job.</p>
     */
    inline void SetTiming(const Timing& value) { m_timingHasBeenSet = true; m_timing = value; }

    /**
     * <p>Details about the timing of a job.</p>
     */
    inline void SetTiming(Timing&& value) { m_timingHasBeenSet = true; m_timing = value; }

    /**
     * <p>Details about the timing of a job.</p>
     */
    inline Job& WithTiming(const Timing& value) { SetTiming(value); return *this;}

    /**
     * <p>Details about the timing of a job.</p>
     */
    inline Job& WithTiming(Timing&& value) { SetTiming(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet;
    JobInput m_input;
    bool m_inputHasBeenSet;
    JobOutput m_output;
    bool m_outputHasBeenSet;
    Aws::Vector<JobOutput> m_outputs;
    bool m_outputsHasBeenSet;
    Aws::String m_outputKeyPrefix;
    bool m_outputKeyPrefixHasBeenSet;
    Aws::Vector<Playlist> m_playlists;
    bool m_playlistsHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_userMetadata;
    bool m_userMetadataHasBeenSet;
    Timing m_timing;
    bool m_timingHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
