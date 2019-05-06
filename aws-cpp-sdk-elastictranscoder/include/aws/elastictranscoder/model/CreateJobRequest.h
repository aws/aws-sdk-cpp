/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_ELASTICTRANSCODER_API CreateJobRequest : public ElasticTranscoderRequest
  {
  public:
    CreateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files.</p>
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * <p>The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files.</p>
     */
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }

    /**
     * <p>The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files.</p>
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p>The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files.</p>
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }

    /**
     * <p>The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files.</p>
     */
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }

    /**
     * <p>The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files.</p>
     */
    inline CreateJobRequest& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files.</p>
     */
    inline CreateJobRequest& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}

    /**
     * <p>The <code>Id</code> of the pipeline that you want Elastic Transcoder to use
     * for transcoding. The pipeline determines several settings, including the Amazon
     * S3 bucket from which Elastic Transcoder gets the files to transcode and the
     * bucket into which Elastic Transcoder puts the transcoded files.</p>
     */
    inline CreateJobRequest& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}


    /**
     * <p>A section of the request body that provides information about the file that
     * is being transcoded.</p>
     */
    inline const JobInput& GetInput() const{ return m_input; }

    /**
     * <p>A section of the request body that provides information about the file that
     * is being transcoded.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>A section of the request body that provides information about the file that
     * is being transcoded.</p>
     */
    inline void SetInput(const JobInput& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>A section of the request body that provides information about the file that
     * is being transcoded.</p>
     */
    inline void SetInput(JobInput&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>A section of the request body that provides information about the file that
     * is being transcoded.</p>
     */
    inline CreateJobRequest& WithInput(const JobInput& value) { SetInput(value); return *this;}

    /**
     * <p>A section of the request body that provides information about the file that
     * is being transcoded.</p>
     */
    inline CreateJobRequest& WithInput(JobInput&& value) { SetInput(std::move(value)); return *this;}


    /**
     * <p>A section of the request body that provides information about the files that
     * are being transcoded.</p>
     */
    inline const Aws::Vector<JobInput>& GetInputs() const{ return m_inputs; }

    /**
     * <p>A section of the request body that provides information about the files that
     * are being transcoded.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>A section of the request body that provides information about the files that
     * are being transcoded.</p>
     */
    inline void SetInputs(const Aws::Vector<JobInput>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>A section of the request body that provides information about the files that
     * are being transcoded.</p>
     */
    inline void SetInputs(Aws::Vector<JobInput>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>A section of the request body that provides information about the files that
     * are being transcoded.</p>
     */
    inline CreateJobRequest& WithInputs(const Aws::Vector<JobInput>& value) { SetInputs(value); return *this;}

    /**
     * <p>A section of the request body that provides information about the files that
     * are being transcoded.</p>
     */
    inline CreateJobRequest& WithInputs(Aws::Vector<JobInput>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>A section of the request body that provides information about the files that
     * are being transcoded.</p>
     */
    inline CreateJobRequest& AddInputs(const JobInput& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>A section of the request body that provides information about the files that
     * are being transcoded.</p>
     */
    inline CreateJobRequest& AddInputs(JobInput&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }


    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) file. We strongly recommend that you use the <code>Outputs</code>
     * syntax instead of the <code>Output</code> syntax. </p>
     */
    inline const CreateJobOutput& GetOutput() const{ return m_output; }

    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) file. We strongly recommend that you use the <code>Outputs</code>
     * syntax instead of the <code>Output</code> syntax. </p>
     */
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }

    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) file. We strongly recommend that you use the <code>Outputs</code>
     * syntax instead of the <code>Output</code> syntax. </p>
     */
    inline void SetOutput(const CreateJobOutput& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) file. We strongly recommend that you use the <code>Outputs</code>
     * syntax instead of the <code>Output</code> syntax. </p>
     */
    inline void SetOutput(CreateJobOutput&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }

    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) file. We strongly recommend that you use the <code>Outputs</code>
     * syntax instead of the <code>Output</code> syntax. </p>
     */
    inline CreateJobRequest& WithOutput(const CreateJobOutput& value) { SetOutput(value); return *this;}

    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) file. We strongly recommend that you use the <code>Outputs</code>
     * syntax instead of the <code>Output</code> syntax. </p>
     */
    inline CreateJobRequest& WithOutput(CreateJobOutput&& value) { SetOutput(std::move(value)); return *this;}


    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) files. We recommend that you use the <code>Outputs</code> syntax
     * instead of the <code>Output</code> syntax. </p>
     */
    inline const Aws::Vector<CreateJobOutput>& GetOutputs() const{ return m_outputs; }

    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) files. We recommend that you use the <code>Outputs</code> syntax
     * instead of the <code>Output</code> syntax. </p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) files. We recommend that you use the <code>Outputs</code> syntax
     * instead of the <code>Output</code> syntax. </p>
     */
    inline void SetOutputs(const Aws::Vector<CreateJobOutput>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) files. We recommend that you use the <code>Outputs</code> syntax
     * instead of the <code>Output</code> syntax. </p>
     */
    inline void SetOutputs(Aws::Vector<CreateJobOutput>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) files. We recommend that you use the <code>Outputs</code> syntax
     * instead of the <code>Output</code> syntax. </p>
     */
    inline CreateJobRequest& WithOutputs(const Aws::Vector<CreateJobOutput>& value) { SetOutputs(value); return *this;}

    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) files. We recommend that you use the <code>Outputs</code> syntax
     * instead of the <code>Output</code> syntax. </p>
     */
    inline CreateJobRequest& WithOutputs(Aws::Vector<CreateJobOutput>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) files. We recommend that you use the <code>Outputs</code> syntax
     * instead of the <code>Output</code> syntax. </p>
     */
    inline CreateJobRequest& AddOutputs(const CreateJobOutput& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p> A section of the request body that provides information about the transcoded
     * (target) files. We recommend that you use the <code>Outputs</code> syntax
     * instead of the <code>Output</code> syntax. </p>
     */
    inline CreateJobRequest& AddOutputs(CreateJobOutput&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists.</p>
     */
    inline const Aws::String& GetOutputKeyPrefix() const{ return m_outputKeyPrefix; }

    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists.</p>
     */
    inline bool OutputKeyPrefixHasBeenSet() const { return m_outputKeyPrefixHasBeenSet; }

    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists.</p>
     */
    inline void SetOutputKeyPrefix(const Aws::String& value) { m_outputKeyPrefixHasBeenSet = true; m_outputKeyPrefix = value; }

    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists.</p>
     */
    inline void SetOutputKeyPrefix(Aws::String&& value) { m_outputKeyPrefixHasBeenSet = true; m_outputKeyPrefix = std::move(value); }

    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists.</p>
     */
    inline void SetOutputKeyPrefix(const char* value) { m_outputKeyPrefixHasBeenSet = true; m_outputKeyPrefix.assign(value); }

    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists.</p>
     */
    inline CreateJobRequest& WithOutputKeyPrefix(const Aws::String& value) { SetOutputKeyPrefix(value); return *this;}

    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists.</p>
     */
    inline CreateJobRequest& WithOutputKeyPrefix(Aws::String&& value) { SetOutputKeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The value, if any, that you want Elastic Transcoder to prepend to the names
     * of all files that this job creates, including output files, thumbnails, and
     * playlists.</p>
     */
    inline CreateJobRequest& WithOutputKeyPrefix(const char* value) { SetOutputKeyPrefix(value); return *this;}


    /**
     * <p>If you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS), Playlists
     * contains information about the master playlists that you want Elastic Transcoder
     * to create.</p> <p>The maximum number of master playlists in a job is 30.</p>
     */
    inline const Aws::Vector<CreateJobPlaylist>& GetPlaylists() const{ return m_playlists; }

    /**
     * <p>If you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS), Playlists
     * contains information about the master playlists that you want Elastic Transcoder
     * to create.</p> <p>The maximum number of master playlists in a job is 30.</p>
     */
    inline bool PlaylistsHasBeenSet() const { return m_playlistsHasBeenSet; }

    /**
     * <p>If you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS), Playlists
     * contains information about the master playlists that you want Elastic Transcoder
     * to create.</p> <p>The maximum number of master playlists in a job is 30.</p>
     */
    inline void SetPlaylists(const Aws::Vector<CreateJobPlaylist>& value) { m_playlistsHasBeenSet = true; m_playlists = value; }

    /**
     * <p>If you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS), Playlists
     * contains information about the master playlists that you want Elastic Transcoder
     * to create.</p> <p>The maximum number of master playlists in a job is 30.</p>
     */
    inline void SetPlaylists(Aws::Vector<CreateJobPlaylist>&& value) { m_playlistsHasBeenSet = true; m_playlists = std::move(value); }

    /**
     * <p>If you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS), Playlists
     * contains information about the master playlists that you want Elastic Transcoder
     * to create.</p> <p>The maximum number of master playlists in a job is 30.</p>
     */
    inline CreateJobRequest& WithPlaylists(const Aws::Vector<CreateJobPlaylist>& value) { SetPlaylists(value); return *this;}

    /**
     * <p>If you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS), Playlists
     * contains information about the master playlists that you want Elastic Transcoder
     * to create.</p> <p>The maximum number of master playlists in a job is 30.</p>
     */
    inline CreateJobRequest& WithPlaylists(Aws::Vector<CreateJobPlaylist>&& value) { SetPlaylists(std::move(value)); return *this;}

    /**
     * <p>If you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS), Playlists
     * contains information about the master playlists that you want Elastic Transcoder
     * to create.</p> <p>The maximum number of master playlists in a job is 30.</p>
     */
    inline CreateJobRequest& AddPlaylists(const CreateJobPlaylist& value) { m_playlistsHasBeenSet = true; m_playlists.push_back(value); return *this; }

    /**
     * <p>If you specify a preset in <code>PresetId</code> for which the value of
     * <code>Container</code> is fmp4 (Fragmented MP4) or ts (MPEG-TS), Playlists
     * contains information about the master playlists that you want Elastic Transcoder
     * to create.</p> <p>The maximum number of master playlists in a job is 30.</p>
     */
    inline CreateJobRequest& AddPlaylists(CreateJobPlaylist&& value) { m_playlistsHasBeenSet = true; m_playlists.push_back(std::move(value)); return *this; }


    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs are returned in the same order in which you
     * specify them.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const{ return m_userMetadata; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs are returned in the same order in which you
     * specify them.</p>
     */
    inline bool UserMetadataHasBeenSet() const { return m_userMetadataHasBeenSet; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs are returned in the same order in which you
     * specify them.</p>
     */
    inline void SetUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_userMetadataHasBeenSet = true; m_userMetadata = value; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs are returned in the same order in which you
     * specify them.</p>
     */
    inline void SetUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::move(value); }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs are returned in the same order in which you
     * specify them.</p>
     */
    inline CreateJobRequest& WithUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetUserMetadata(value); return *this;}

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs are returned in the same order in which you
     * specify them.</p>
     */
    inline CreateJobRequest& WithUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetUserMetadata(std::move(value)); return *this;}

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs are returned in the same order in which you
     * specify them.</p>
     */
    inline CreateJobRequest& AddUserMetadata(const Aws::String& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs are returned in the same order in which you
     * specify them.</p>
     */
    inline CreateJobRequest& AddUserMetadata(Aws::String&& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs are returned in the same order in which you
     * specify them.</p>
     */
    inline CreateJobRequest& AddUserMetadata(const Aws::String& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs are returned in the same order in which you
     * specify them.</p>
     */
    inline CreateJobRequest& AddUserMetadata(Aws::String&& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs are returned in the same order in which you
     * specify them.</p>
     */
    inline CreateJobRequest& AddUserMetadata(const char* key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs are returned in the same order in which you
     * specify them.</p>
     */
    inline CreateJobRequest& AddUserMetadata(Aws::String&& key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>User-defined metadata that you want to associate with an Elastic Transcoder
     * job. You specify metadata in <code>key/value</code> pairs, and you can add up to
     * 10 <code>key/value</code> pairs per job. Elastic Transcoder does not guarantee
     * that <code>key/value</code> pairs are returned in the same order in which you
     * specify them.</p>
     */
    inline CreateJobRequest& AddUserMetadata(const char* key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }

  private:

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet;

    JobInput m_input;
    bool m_inputHasBeenSet;

    Aws::Vector<JobInput> m_inputs;
    bool m_inputsHasBeenSet;

    CreateJobOutput m_output;
    bool m_outputHasBeenSet;

    Aws::Vector<CreateJobOutput> m_outputs;
    bool m_outputsHasBeenSet;

    Aws::String m_outputKeyPrefix;
    bool m_outputKeyPrefixHasBeenSet;

    Aws::Vector<CreateJobPlaylist> m_playlists;
    bool m_playlistsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_userMetadata;
    bool m_userMetadataHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
