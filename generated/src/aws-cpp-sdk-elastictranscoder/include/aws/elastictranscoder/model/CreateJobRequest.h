/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/ElasticTranscoderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/JobInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastictranscoder/model/CreateJobOutput.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/elastictranscoder/model/CreateJobPlaylist.h>
#include <utility>

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The <code>CreateJobRequest</code> structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreateJobRequest">AWS
   * API Reference</a></p>
   */
  class CreateJobRequest : public ElasticTranscoderRequest
  {
  public:
    AWS_ELASTICTRANSCODER_API CreateJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    AWS_ELASTICTRANSCODER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files.</p>
     */
    inline const Aws::String& GetPipelineId() const { return m_pipelineId; }
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }
    template<typename PipelineIdT = Aws::String>
    void SetPipelineId(PipelineIdT&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::forward<PipelineIdT>(value); }
    template<typename PipelineIdT = Aws::String>
    CreateJobRequest& WithPipelineId(PipelineIdT&& value) { SetPipelineId(std::forward<PipelineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A section of the request body that provides information about the file that
     * is being transcoded.</p>
     */
    inline const JobInput& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = JobInput>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = JobInput>
    CreateJobRequest& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A section of the request body that provides information about the files that
     * are being transcoded.</p>
     */
    inline const Aws::Vector<JobInput>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<JobInput>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<JobInput>>
    CreateJobRequest& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = JobInput>
    CreateJobRequest& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) file. We strongly recommend that you use the <code>Outputs</code>
     * syntax instead of the <code>Output</code> syntax. </p>
     */
    inline const CreateJobOutput& GetOutput() const { return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    template<typename OutputT = CreateJobOutput>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = CreateJobOutput>
    CreateJobRequest& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) files. We recommend that you use the <code>Outputs</code> syntax
     * instead of the <code>Output</code> syntax. </p>
     */
    inline const Aws::Vector<CreateJobOutput>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<CreateJobOutput>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<CreateJobOutput>>
    CreateJobRequest& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = CreateJobOutput>
    CreateJobRequest& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists.</p>
     */
    inline const Aws::String& GetOutputKeyPrefix() const { return m_outputKeyPrefix; }
    inline bool OutputKeyPrefixHasBeenSet() const { return m_outputKeyPrefixHasBeenSet; }
    template<typename OutputKeyPrefixT = Aws::String>
    void SetOutputKeyPrefix(OutputKeyPrefixT&& value) { m_outputKeyPrefixHasBeenSet = true; m_outputKeyPrefix = std::forward<OutputKeyPrefixT>(value); }
    template<typename OutputKeyPrefixT = Aws::String>
    CreateJobRequest& WithOutputKeyPrefix(OutputKeyPrefixT&& value) { SetOutputKeyPrefix(std::forward<OutputKeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS), Playlists
     * contains information about the master playlists that you want Elastic Transcoder
     * to create.</p> <p>The maximum number of master playlists in a job is 30.</p>
     */
    inline const Aws::Vector<CreateJobPlaylist>& GetPlaylists() const { return m_playlists; }
    inline bool PlaylistsHasBeenSet() const { return m_playlistsHasBeenSet; }
    template<typename PlaylistsT = Aws::Vector<CreateJobPlaylist>>
    void SetPlaylists(PlaylistsT&& value) { m_playlistsHasBeenSet = true; m_playlists = std::forward<PlaylistsT>(value); }
    template<typename PlaylistsT = Aws::Vector<CreateJobPlaylist>>
    CreateJobRequest& WithPlaylists(PlaylistsT&& value) { SetPlaylists(std::forward<PlaylistsT>(value)); return *this;}
    template<typename PlaylistsT = CreateJobPlaylist>
    CreateJobRequest& AddPlaylists(PlaylistsT&& value) { m_playlistsHasBeenSet = true; m_playlists.emplace_back(std::forward<PlaylistsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs are returned in the same order in which you
     * specify them.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const { return m_userMetadata; }
    inline bool UserMetadataHasBeenSet() const { return m_userMetadataHasBeenSet; }
    template<typename UserMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetUserMetadata(UserMetadataT&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::forward<UserMetadataT>(value); }
    template<typename UserMetadataT = Aws::Map<Aws::String, Aws::String>>
    CreateJobRequest& WithUserMetadata(UserMetadataT&& value) { SetUserMetadata(std::forward<UserMetadataT>(value)); return *this;}
    template<typename UserMetadataKeyT = Aws::String, typename UserMetadataValueT = Aws::String>
    CreateJobRequest& AddUserMetadata(UserMetadataKeyT&& key, UserMetadataValueT&& value) {
      m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::forward<UserMetadataKeyT>(key), std::forward<UserMetadataValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet = false;

    JobInput m_input;
    bool m_inputHasBeenSet = false;

    Aws::Vector<JobInput> m_inputs;
    bool m_inputsHasBeenSet = false;

    CreateJobOutput m_output;
    bool m_outputHasBeenSet = false;

    Aws::Vector<CreateJobOutput> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_outputKeyPrefix;
    bool m_outputKeyPrefixHasBeenSet = false;

    Aws::Vector<CreateJobPlaylist> m_playlists;
    bool m_playlistsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_userMetadata;
    bool m_userMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
