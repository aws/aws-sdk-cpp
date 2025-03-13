/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   */
  class GetSpeakerSearchTaskRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API GetSpeakerSearchTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSpeakerSearchTask"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    GetSpeakerSearchTaskRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline const Aws::String& GetSpeakerSearchTaskId() const { return m_speakerSearchTaskId; }
    inline bool SpeakerSearchTaskIdHasBeenSet() const { return m_speakerSearchTaskIdHasBeenSet; }
    template<typename SpeakerSearchTaskIdT = Aws::String>
    void SetSpeakerSearchTaskId(SpeakerSearchTaskIdT&& value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId = std::forward<SpeakerSearchTaskIdT>(value); }
    template<typename SpeakerSearchTaskIdT = Aws::String>
    GetSpeakerSearchTaskRequest& WithSpeakerSearchTaskId(SpeakerSearchTaskIdT&& value) { SetSpeakerSearchTaskId(std::forward<SpeakerSearchTaskIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_speakerSearchTaskId;
    bool m_speakerSearchTaskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
