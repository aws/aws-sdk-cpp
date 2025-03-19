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
    AWS_ELASTICTRANSCODER_API Job() = default;
    AWS_ELASTICTRANSCODER_API Job(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier that Elastic Transcoder assigned to the job. You use this
     * value to get settings for the job or to delete the job.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Job& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Job& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files. </p>
     */
    inline const Aws::String& GetPipelineId() const { return m_pipelineId; }
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }
    template<typename PipelineIdT = Aws::String>
    void SetPipelineId(PipelineIdT&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::forward<PipelineIdT>(value); }
    template<typename PipelineIdT = Aws::String>
    Job& WithPipelineId(PipelineIdT&& value) { SetPipelineId(std::forward<PipelineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A section of the request or response body that provides information about the
     * file that is being transcoded.</p>
     */
    inline const JobInput& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = JobInput>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = JobInput>
    Job& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the files that you're transcoding. If you specified
     * multiple files for this job, Elastic Transcoder stitches the files together to
     * make one output.</p>
     */
    inline const Aws::Vector<JobInput>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<JobInput>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<JobInput>>
    Job& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = JobInput>
    Job& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
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
    inline const JobOutput& GetOutput() const { return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    template<typename OutputT = JobOutput>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = JobOutput>
    Job& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
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
    inline const Aws::Vector<JobOutput>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<JobOutput>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<JobOutput>>
    Job& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = JobOutput>
    Job& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists. We recommend that you add a / or some other delimiter to the end of
     * the <code>OutputKeyPrefix</code>.</p>
     */
    inline const Aws::String& GetOutputKeyPrefix() const { return m_outputKeyPrefix; }
    inline bool OutputKeyPrefixHasBeenSet() const { return m_outputKeyPrefixHasBeenSet; }
    template<typename OutputKeyPrefixT = Aws::String>
    void SetOutputKeyPrefix(OutputKeyPrefixT&& value) { m_outputKeyPrefixHasBeenSet = true; m_outputKeyPrefix = std::forward<OutputKeyPrefixT>(value); }
    template<typename OutputKeyPrefixT = Aws::String>
    Job& WithOutputKeyPrefix(OutputKeyPrefixT&& value) { SetOutputKeyPrefix(std::forward<OutputKeyPrefixT>(value)); return *this;}
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
    inline const Aws::Vector<Playlist>& GetPlaylists() const { return m_playlists; }
    inline bool PlaylistsHasBeenSet() const { return m_playlistsHasBeenSet; }
    template<typename PlaylistsT = Aws::Vector<Playlist>>
    void SetPlaylists(PlaylistsT&& value) { m_playlistsHasBeenSet = true; m_playlists = std::forward<PlaylistsT>(value); }
    template<typename PlaylistsT = Aws::Vector<Playlist>>
    Job& WithPlaylists(PlaylistsT&& value) { SetPlaylists(std::forward<PlaylistsT>(value)); return *this;}
    template<typename PlaylistsT = Playlist>
    Job& AddPlaylists(PlaylistsT&& value) { m_playlistsHasBeenSet = true; m_playlists.emplace_back(std::forward<PlaylistsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The status of the job: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Job& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const { return m_userMetadata; }
    inline bool UserMetadataHasBeenSet() const { return m_userMetadataHasBeenSet; }
    template<typename UserMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetUserMetadata(UserMetadataT&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::forward<UserMetadataT>(value); }
    template<typename UserMetadataT = Aws::Map<Aws::String, Aws::String>>
    Job& WithUserMetadata(UserMetadataT&& value) { SetUserMetadata(std::forward<UserMetadataT>(value)); return *this;}
    template<typename UserMetadataKeyT = Aws::String, typename UserMetadataValueT = Aws::String>
    Job& AddUserMetadata(UserMetadataKeyT&& key, UserMetadataValueT&& value) {
      m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::forward<UserMetadataKeyT>(key), std::forward<UserMetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Details about the timing of a job.</p>
     */
    inline const Timing& GetTiming() const { return m_timing; }
    inline bool TimingHasBeenSet() const { return m_timingHasBeenSet; }
    template<typename TimingT = Timing>
    void SetTiming(TimingT&& value) { m_timingHasBeenSet = true; m_timing = std::forward<TimingT>(value); }
    template<typename TimingT = Timing>
    Job& WithTiming(TimingT&& value) { SetTiming(std::forward<TimingT>(value)); return *this;}
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
