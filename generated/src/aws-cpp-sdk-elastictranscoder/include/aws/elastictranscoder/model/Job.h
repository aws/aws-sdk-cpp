/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/JobInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastictranscoder/model/JobOutput.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/elastictranscoder/model/Timing.h>
#include <aws/elastictranscoder/model/Playlist.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>A section of the response body that provides information about the job that
   * is created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/Job">AWS
   * API Reference</a></p>
   */
  class Job
  {
  public:
    AWS_ELASTICTRANSCODER_API Job();
    AWS_ELASTICTRANSCODER_API Job(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier that Elastic Transcoder assigned to the job. You use this
     * value to get settings for the job or to delete the job.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Job& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Job& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Job& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Job& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Job& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Job& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files. </p>
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }
    inline Job& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}
    inline Job& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}
    inline Job& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A section of the request or response body that provides information about the
     * file that is being transcoded.</p>
     */
    inline const JobInput& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const JobInput& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(JobInput&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline Job& WithInput(const JobInput& value) { SetInput(value); return *this;}
    inline Job& WithInput(JobInput&& value) { SetInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the files that you're transcoding. If you specified
     * multiple files for this job, Elastic Transcoder stitches the files together to
     * make one output.</p>
     */
    inline const Aws::Vector<JobInput>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<JobInput>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<JobInput>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline Job& WithInputs(const Aws::Vector<JobInput>& value) { SetInputs(value); return *this;}
    inline Job& WithInputs(Aws::Vector<JobInput>&& value) { SetInputs(std::move(value)); return *this;}
    inline Job& AddInputs(const JobInput& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline Job& AddInputs(JobInput&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you specified one output for a job, information about that output. If you
     * specified multiple outputs for a job, the Output object lists information about
     * the first output. This duplicates the information that is listed for the first
     * output in the Outputs object.</p>  <p>Outputs recommended
     * instead.</p>  <p>A section of the request or response body that
     * provides information about the transcoded (target) file. </p>
     */
    inline const JobOutput& GetOutput() const{ return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(const JobOutput& value) { m_outputHasBeenSet = true; m_output = value; }
    inline void SetOutput(JobOutput&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }
    inline Job& WithOutput(const JobOutput& value) { SetOutput(value); return *this;}
    inline Job& WithOutput(JobOutput&& value) { SetOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the output files. We recommend that you use the
     * <code>Outputs</code> syntax for all jobs, even when you want Elastic Transcoder
     * to transcode a file into only one format. Do not use both the
     * <code>Outputs</code> and <code>Output</code> syntaxes in the same request. You
     * can create a maximum of 30 outputs per job. </p> <p>If you specify more than one
     * output for a job, Elastic Transcoder creates the files for each output in the
     * order in which you specify them in the job.</p>
     */
    inline const Aws::Vector<JobOutput>& GetOutputs() const{ return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    inline void SetOutputs(const Aws::Vector<JobOutput>& value) { m_outputsHasBeenSet = true; m_outputs = value; }
    inline void SetOutputs(Aws::Vector<JobOutput>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }
    inline Job& WithOutputs(const Aws::Vector<JobOutput>& value) { SetOutputs(value); return *this;}
    inline Job& WithOutputs(Aws::Vector<JobOutput>&& value) { SetOutputs(std::move(value)); return *this;}
    inline Job& AddOutputs(const JobOutput& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }
    inline Job& AddOutputs(JobOutput&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists. We recommend that you add a / or some other delimiter to the end of
     * the <code>OutputKeyPrefix</code>.</p>
     */
    inline const Aws::String& GetOutputKeyPrefix() const{ return m_outputKeyPrefix; }
    inline bool OutputKeyPrefixHasBeenSet() const { return m_outputKeyPrefixHasBeenSet; }
    inline void SetOutputKeyPrefix(const Aws::String& value) { m_outputKeyPrefixHasBeenSet = true; m_outputKeyPrefix = value; }
    inline void SetOutputKeyPrefix(Aws::String&& value) { m_outputKeyPrefixHasBeenSet = true; m_outputKeyPrefix = std::move(value); }
    inline void SetOutputKeyPrefix(const char* value) { m_outputKeyPrefixHasBeenSet = true; m_outputKeyPrefix.assign(value); }
    inline Job& WithOutputKeyPrefix(const Aws::String& value) { SetOutputKeyPrefix(value); return *this;}
    inline Job& WithOutputKeyPrefix(Aws::String&& value) { SetOutputKeyPrefix(std::move(value)); return *this;}
    inline Job& WithOutputKeyPrefix(const char* value) { SetOutputKeyPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     *  <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS),
     * <code>Playlists</code> contains information about the master playlists that you
     * want Elastic Transcoder to create.</p> <p>The maximum number of master playlists
     * in a job is 30.</p>
     */
    inline const Aws::Vector<Playlist>& GetPlaylists() const{ return m_playlists; }
    inline bool PlaylistsHasBeenSet() const { return m_playlistsHasBeenSet; }
    inline void SetPlaylists(const Aws::Vector<Playlist>& value) { m_playlistsHasBeenSet = true; m_playlists = value; }
    inline void SetPlaylists(Aws::Vector<Playlist>&& value) { m_playlistsHasBeenSet = true; m_playlists = std::move(value); }
    inline Job& WithPlaylists(const Aws::Vector<Playlist>& value) { SetPlaylists(value); return *this;}
    inline Job& WithPlaylists(Aws::Vector<Playlist>&& value) { SetPlaylists(std::move(value)); return *this;}
    inline Job& AddPlaylists(const Playlist& value) { m_playlistsHasBeenSet = true; m_playlists.push_back(value); return *this; }
    inline Job& AddPlaylists(Playlist&& value) { m_playlistsHasBeenSet = true; m_playlists.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The status of the job: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Job& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Job& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Job& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs are returned in the same order in which you
     * specify them.</p> <p>Metadata <code>keys</code> and <code>values</code> must use
     * characters from the following list:</p> <ul> <li> <p> <code>0-9</code> </p>
     * </li> <li> <p> <code>A-Z</code> and <code>a-z</code> </p> </li> <li> <p>
     * <code>Space</code> </p> </li> <li> <p>The following symbols:
     * <code>_.:/=+-%@</code> </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const{ return m_userMetadata; }
    inline bool UserMetadataHasBeenSet() const { return m_userMetadataHasBeenSet; }
    inline void SetUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_userMetadataHasBeenSet = true; m_userMetadata = value; }
    inline void SetUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::move(value); }
    inline Job& WithUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetUserMetadata(value); return *this;}
    inline Job& WithUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetUserMetadata(std::move(value)); return *this;}
    inline Job& AddUserMetadata(const Aws::String& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }
    inline Job& AddUserMetadata(Aws::String&& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }
    inline Job& AddUserMetadata(const Aws::String& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }
    inline Job& AddUserMetadata(Aws::String&& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline Job& AddUserMetadata(const char* key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }
    inline Job& AddUserMetadata(Aws::String&& key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }
    inline Job& AddUserMetadata(const char* key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details about the timing of a job.</p>
     */
    inline const Timing& GetTiming() const{ return m_timing; }
    inline bool TimingHasBeenSet() const { return m_timingHasBeenSet; }
    inline void SetTiming(const Timing& value) { m_timingHasBeenSet = true; m_timing = value; }
    inline void SetTiming(Timing&& value) { m_timingHasBeenSet = true; m_timing = std::move(value); }
    inline Job& WithTiming(const Timing& value) { SetTiming(value); return *this;}
    inline Job& WithTiming(Timing&& value) { SetTiming(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet = false;

    JobInput m_input;
    bool m_inputHasBeenSet = false;

    Aws::Vector<JobInput> m_inputs;
    bool m_inputsHasBeenSet = false;

    JobOutput m_output;
    bool m_outputHasBeenSet = false;

    Aws::Vector<JobOutput> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_outputKeyPrefix;
    bool m_outputKeyPrefixHasBeenSet = false;

    Aws::Vector<Playlist> m_playlists;
    bool m_playlistsHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_userMetadata;
    bool m_userMetadataHasBeenSet = false;

    Timing m_timing;
    bool m_timingHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
