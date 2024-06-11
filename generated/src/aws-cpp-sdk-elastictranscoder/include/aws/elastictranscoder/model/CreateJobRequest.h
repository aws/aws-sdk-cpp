﻿/**
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
    AWS_ELASTICTRANSCODER_API CreateJobRequest();

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
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }
    inline CreateJobRequest& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}
    inline CreateJobRequest& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}
    inline CreateJobRequest& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A section of the request body that provides information about the file that
     * is being transcoded.</p>
     */
    inline const JobInput& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const JobInput& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(JobInput&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline CreateJobRequest& WithInput(const JobInput& value) { SetInput(value); return *this;}
    inline CreateJobRequest& WithInput(JobInput&& value) { SetInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A section of the request body that provides information about the files that
     * are being transcoded.</p>
     */
    inline const Aws::Vector<JobInput>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<JobInput>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<JobInput>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline CreateJobRequest& WithInputs(const Aws::Vector<JobInput>& value) { SetInputs(value); return *this;}
    inline CreateJobRequest& WithInputs(Aws::Vector<JobInput>&& value) { SetInputs(std::move(value)); return *this;}
    inline CreateJobRequest& AddInputs(const JobInput& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline CreateJobRequest& AddInputs(JobInput&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) file. We strongly recommend that you use the <code>Outputs</code>
     * syntax instead of the <code>Output</code> syntax. </p>
     */
    inline const CreateJobOutput& GetOutput() const{ return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(const CreateJobOutput& value) { m_outputHasBeenSet = true; m_output = value; }
    inline void SetOutput(CreateJobOutput&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }
    inline CreateJobRequest& WithOutput(const CreateJobOutput& value) { SetOutput(value); return *this;}
    inline CreateJobRequest& WithOutput(CreateJobOutput&& value) { SetOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) files. We recommend that you use the <code>Outputs</code> syntax
     * instead of the <code>Output</code> syntax. </p>
     */
    inline const Aws::Vector<CreateJobOutput>& GetOutputs() const{ return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    inline void SetOutputs(const Aws::Vector<CreateJobOutput>& value) { m_outputsHasBeenSet = true; m_outputs = value; }
    inline void SetOutputs(Aws::Vector<CreateJobOutput>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }
    inline CreateJobRequest& WithOutputs(const Aws::Vector<CreateJobOutput>& value) { SetOutputs(value); return *this;}
    inline CreateJobRequest& WithOutputs(Aws::Vector<CreateJobOutput>&& value) { SetOutputs(std::move(value)); return *this;}
    inline CreateJobRequest& AddOutputs(const CreateJobOutput& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }
    inline CreateJobRequest& AddOutputs(CreateJobOutput&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists.</p>
     */
    inline const Aws::String& GetOutputKeyPrefix() const{ return m_outputKeyPrefix; }
    inline bool OutputKeyPrefixHasBeenSet() const { return m_outputKeyPrefixHasBeenSet; }
    inline void SetOutputKeyPrefix(const Aws::String& value) { m_outputKeyPrefixHasBeenSet = true; m_outputKeyPrefix = value; }
    inline void SetOutputKeyPrefix(Aws::String&& value) { m_outputKeyPrefixHasBeenSet = true; m_outputKeyPrefix = std::move(value); }
    inline void SetOutputKeyPrefix(const char* value) { m_outputKeyPrefixHasBeenSet = true; m_outputKeyPrefix.assign(value); }
    inline CreateJobRequest& WithOutputKeyPrefix(const Aws::String& value) { SetOutputKeyPrefix(value); return *this;}
    inline CreateJobRequest& WithOutputKeyPrefix(Aws::String&& value) { SetOutputKeyPrefix(std::move(value)); return *this;}
    inline CreateJobRequest& WithOutputKeyPrefix(const char* value) { SetOutputKeyPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS), Playlists
     * contains information about the master playlists that you want Elastic Transcoder
     * to create.</p> <p>The maximum number of master playlists in a job is 30.</p>
     */
    inline const Aws::Vector<CreateJobPlaylist>& GetPlaylists() const{ return m_playlists; }
    inline bool PlaylistsHasBeenSet() const { return m_playlistsHasBeenSet; }
    inline void SetPlaylists(const Aws::Vector<CreateJobPlaylist>& value) { m_playlistsHasBeenSet = true; m_playlists = value; }
    inline void SetPlaylists(Aws::Vector<CreateJobPlaylist>&& value) { m_playlistsHasBeenSet = true; m_playlists = std::move(value); }
    inline CreateJobRequest& WithPlaylists(const Aws::Vector<CreateJobPlaylist>& value) { SetPlaylists(value); return *this;}
    inline CreateJobRequest& WithPlaylists(Aws::Vector<CreateJobPlaylist>&& value) { SetPlaylists(std::move(value)); return *this;}
    inline CreateJobRequest& AddPlaylists(const CreateJobPlaylist& value) { m_playlistsHasBeenSet = true; m_playlists.push_back(value); return *this; }
    inline CreateJobRequest& AddPlaylists(CreateJobPlaylist&& value) { m_playlistsHasBeenSet = true; m_playlists.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs are returned in the same order in which you
     * specify them.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const{ return m_userMetadata; }
    inline bool UserMetadataHasBeenSet() const { return m_userMetadataHasBeenSet; }
    inline void SetUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_userMetadataHasBeenSet = true; m_userMetadata = value; }
    inline void SetUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::move(value); }
    inline CreateJobRequest& WithUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetUserMetadata(value); return *this;}
    inline CreateJobRequest& WithUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetUserMetadata(std::move(value)); return *this;}
    inline CreateJobRequest& AddUserMetadata(const Aws::String& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }
    inline CreateJobRequest& AddUserMetadata(Aws::String&& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }
    inline CreateJobRequest& AddUserMetadata(const Aws::String& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }
    inline CreateJobRequest& AddUserMetadata(Aws::String&& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateJobRequest& AddUserMetadata(const char* key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }
    inline CreateJobRequest& AddUserMetadata(Aws::String&& key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }
    inline CreateJobRequest& AddUserMetadata(const char* key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }
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
