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
  class StopSpeakerSearchTaskRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API StopSpeakerSearchTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopSpeakerSearchTask"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline StopSpeakerSearchTaskRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline StopSpeakerSearchTaskRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline StopSpeakerSearchTaskRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The speaker search task ID.</p>
     */
    inline const Aws::String& GetSpeakerSearchTaskId() const{ return m_speakerSearchTaskId; }

    /**
     * <p>The speaker search task ID.</p>
     */
    inline bool SpeakerSearchTaskIdHasBeenSet() const { return m_speakerSearchTaskIdHasBeenSet; }

    /**
     * <p>The speaker search task ID.</p>
     */
    inline void SetSpeakerSearchTaskId(const Aws::String& value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId = value; }

    /**
     * <p>The speaker search task ID.</p>
     */
    inline void SetSpeakerSearchTaskId(Aws::String&& value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId = std::move(value); }

    /**
     * <p>The speaker search task ID.</p>
     */
    inline void SetSpeakerSearchTaskId(const char* value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId.assign(value); }

    /**
     * <p>The speaker search task ID.</p>
     */
    inline StopSpeakerSearchTaskRequest& WithSpeakerSearchTaskId(const Aws::String& value) { SetSpeakerSearchTaskId(value); return *this;}

    /**
     * <p>The speaker search task ID.</p>
     */
    inline StopSpeakerSearchTaskRequest& WithSpeakerSearchTaskId(Aws::String&& value) { SetSpeakerSearchTaskId(std::move(value)); return *this;}

    /**
     * <p>The speaker search task ID.</p>
     */
    inline StopSpeakerSearchTaskRequest& WithSpeakerSearchTaskId(const char* value) { SetSpeakerSearchTaskId(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_speakerSearchTaskId;
    bool m_speakerSearchTaskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
