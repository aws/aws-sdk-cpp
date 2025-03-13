/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-sync/model/StreamingStatus.h>
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
namespace CognitoSync
{
namespace Model
{

  /**
   * Configuration options for configure Cognito streams.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/CognitoStreams">AWS
   * API Reference</a></p>
   */
  class CognitoStreams
  {
  public:
    AWS_COGNITOSYNC_API CognitoStreams() = default;
    AWS_COGNITOSYNC_API CognitoStreams(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOSYNC_API CognitoStreams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The name of the Cognito stream to receive updates. This stream must be in the
     * developers account and in the same region as the identity pool.
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    CognitoStreams& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the role Amazon Cognito can assume in order to publish to the stream.
     * This role must grant access to Amazon Cognito (cognito-sync) to invoke PutRecord
     * on your Cognito stream.
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CognitoStreams& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Status of the Cognito streams. Valid values are: <p>ENABLED - Streaming of
     * updates to identity pool is enabled.</p> <p>DISABLED - Streaming of updates to
     * identity pool is disabled. Bulk publish will also fail if StreamingStatus is
     * DISABLED.</p>
     */
    inline StreamingStatus GetStreamingStatus() const { return m_streamingStatus; }
    inline bool StreamingStatusHasBeenSet() const { return m_streamingStatusHasBeenSet; }
    inline void SetStreamingStatus(StreamingStatus value) { m_streamingStatusHasBeenSet = true; m_streamingStatus = value; }
    inline CognitoStreams& WithStreamingStatus(StreamingStatus value) { SetStreamingStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    StreamingStatus m_streamingStatus{StreamingStatus::NOT_SET};
    bool m_streamingStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
