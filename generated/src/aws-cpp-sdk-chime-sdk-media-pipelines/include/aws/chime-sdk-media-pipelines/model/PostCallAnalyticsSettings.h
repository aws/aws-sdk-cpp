/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/ContentRedactionOutput.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>Allows you to specify additional settings for your Call Analytics post-call
   * request, including output locations for your redacted transcript, which IAM role
   * to use, and which encryption key to use.</p> <p> <code>DataAccessRoleArn</code>
   * and <code>OutputLocation</code> are required fields.</p> <p>
   * <code>PostCallAnalyticsSettings</code> provides the same insights as a Call
   * Analytics post-call transcription. For more information, refer to <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-post-call.html">Post-call
   * analytics with real-time transcriptions</a> in the <i>Amazon Transcribe
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/PostCallAnalyticsSettings">AWS
   * API Reference</a></p>
   */
  class PostCallAnalyticsSettings
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API PostCallAnalyticsSettings() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API PostCallAnalyticsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API PostCallAnalyticsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of the Amazon S3 bucket that contains the post-call data.</p>
     */
    inline const Aws::String& GetOutputLocation() const { return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    template<typename OutputLocationT = Aws::String>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = Aws::String>
    PostCallAnalyticsSettings& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role used by Amazon Web Services Transcribe to upload your
     * post call analysis. For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-post-call.html">Post-call
     * analytics with real-time transcriptions</a> in the <i>Amazon Transcribe
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    PostCallAnalyticsSettings& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content redaction output settings for a post-call analysis task.</p>
     */
    inline ContentRedactionOutput GetContentRedactionOutput() const { return m_contentRedactionOutput; }
    inline bool ContentRedactionOutputHasBeenSet() const { return m_contentRedactionOutputHasBeenSet; }
    inline void SetContentRedactionOutput(ContentRedactionOutput value) { m_contentRedactionOutputHasBeenSet = true; m_contentRedactionOutput = value; }
    inline PostCallAnalyticsSettings& WithContentRedactionOutput(ContentRedactionOutput value) { SetContentRedactionOutput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS (Key Management Service) key used to encrypt the
     * output.</p>
     */
    inline const Aws::String& GetOutputEncryptionKMSKeyId() const { return m_outputEncryptionKMSKeyId; }
    inline bool OutputEncryptionKMSKeyIdHasBeenSet() const { return m_outputEncryptionKMSKeyIdHasBeenSet; }
    template<typename OutputEncryptionKMSKeyIdT = Aws::String>
    void SetOutputEncryptionKMSKeyId(OutputEncryptionKMSKeyIdT&& value) { m_outputEncryptionKMSKeyIdHasBeenSet = true; m_outputEncryptionKMSKeyId = std::forward<OutputEncryptionKMSKeyIdT>(value); }
    template<typename OutputEncryptionKMSKeyIdT = Aws::String>
    PostCallAnalyticsSettings& WithOutputEncryptionKMSKeyId(OutputEncryptionKMSKeyIdT&& value) { SetOutputEncryptionKMSKeyId(std::forward<OutputEncryptionKMSKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    ContentRedactionOutput m_contentRedactionOutput{ContentRedactionOutput::NOT_SET};
    bool m_contentRedactionOutputHasBeenSet = false;

    Aws::String m_outputEncryptionKMSKeyId;
    bool m_outputEncryptionKMSKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
