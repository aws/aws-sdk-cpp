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
  class AWS_COGNITOSYNC_API CognitoStreams
  {
  public:
    CognitoStreams();
    CognitoStreams(Aws::Utils::Json::JsonView jsonValue);
    CognitoStreams& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The name of the Cognito stream to receive updates. This stream must be in the
     * developers account and in the same region as the identity pool.
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * The name of the Cognito stream to receive updates. This stream must be in the
     * developers account and in the same region as the identity pool.
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * The name of the Cognito stream to receive updates. This stream must be in the
     * developers account and in the same region as the identity pool.
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * The name of the Cognito stream to receive updates. This stream must be in the
     * developers account and in the same region as the identity pool.
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * The name of the Cognito stream to receive updates. This stream must be in the
     * developers account and in the same region as the identity pool.
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * The name of the Cognito stream to receive updates. This stream must be in the
     * developers account and in the same region as the identity pool.
     */
    inline CognitoStreams& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * The name of the Cognito stream to receive updates. This stream must be in the
     * developers account and in the same region as the identity pool.
     */
    inline CognitoStreams& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * The name of the Cognito stream to receive updates. This stream must be in the
     * developers account and in the same region as the identity pool.
     */
    inline CognitoStreams& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * The ARN of the role Amazon Cognito can assume in order to publish to the stream.
     * This role must grant access to Amazon Cognito (cognito-sync) to invoke PutRecord
     * on your Cognito stream.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The ARN of the role Amazon Cognito can assume in order to publish to the stream.
     * This role must grant access to Amazon Cognito (cognito-sync) to invoke PutRecord
     * on your Cognito stream.
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * The ARN of the role Amazon Cognito can assume in order to publish to the stream.
     * This role must grant access to Amazon Cognito (cognito-sync) to invoke PutRecord
     * on your Cognito stream.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The ARN of the role Amazon Cognito can assume in order to publish to the stream.
     * This role must grant access to Amazon Cognito (cognito-sync) to invoke PutRecord
     * on your Cognito stream.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The ARN of the role Amazon Cognito can assume in order to publish to the stream.
     * This role must grant access to Amazon Cognito (cognito-sync) to invoke PutRecord
     * on your Cognito stream.
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The ARN of the role Amazon Cognito can assume in order to publish to the stream.
     * This role must grant access to Amazon Cognito (cognito-sync) to invoke PutRecord
     * on your Cognito stream.
     */
    inline CognitoStreams& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The ARN of the role Amazon Cognito can assume in order to publish to the stream.
     * This role must grant access to Amazon Cognito (cognito-sync) to invoke PutRecord
     * on your Cognito stream.
     */
    inline CognitoStreams& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The ARN of the role Amazon Cognito can assume in order to publish to the stream.
     * This role must grant access to Amazon Cognito (cognito-sync) to invoke PutRecord
     * on your Cognito stream.
     */
    inline CognitoStreams& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * Status of the Cognito streams. Valid values are: <p>ENABLED - Streaming of
     * updates to identity pool is enabled.</p> <p>DISABLED - Streaming of updates to
     * identity pool is disabled. Bulk publish will also fail if StreamingStatus is
     * DISABLED.</p>
     */
    inline const StreamingStatus& GetStreamingStatus() const{ return m_streamingStatus; }

    /**
     * Status of the Cognito streams. Valid values are: <p>ENABLED - Streaming of
     * updates to identity pool is enabled.</p> <p>DISABLED - Streaming of updates to
     * identity pool is disabled. Bulk publish will also fail if StreamingStatus is
     * DISABLED.</p>
     */
    inline bool StreamingStatusHasBeenSet() const { return m_streamingStatusHasBeenSet; }

    /**
     * Status of the Cognito streams. Valid values are: <p>ENABLED - Streaming of
     * updates to identity pool is enabled.</p> <p>DISABLED - Streaming of updates to
     * identity pool is disabled. Bulk publish will also fail if StreamingStatus is
     * DISABLED.</p>
     */
    inline void SetStreamingStatus(const StreamingStatus& value) { m_streamingStatusHasBeenSet = true; m_streamingStatus = value; }

    /**
     * Status of the Cognito streams. Valid values are: <p>ENABLED - Streaming of
     * updates to identity pool is enabled.</p> <p>DISABLED - Streaming of updates to
     * identity pool is disabled. Bulk publish will also fail if StreamingStatus is
     * DISABLED.</p>
     */
    inline void SetStreamingStatus(StreamingStatus&& value) { m_streamingStatusHasBeenSet = true; m_streamingStatus = std::move(value); }

    /**
     * Status of the Cognito streams. Valid values are: <p>ENABLED - Streaming of
     * updates to identity pool is enabled.</p> <p>DISABLED - Streaming of updates to
     * identity pool is disabled. Bulk publish will also fail if StreamingStatus is
     * DISABLED.</p>
     */
    inline CognitoStreams& WithStreamingStatus(const StreamingStatus& value) { SetStreamingStatus(value); return *this;}

    /**
     * Status of the Cognito streams. Valid values are: <p>ENABLED - Streaming of
     * updates to identity pool is enabled.</p> <p>DISABLED - Streaming of updates to
     * identity pool is disabled. Bulk publish will also fail if StreamingStatus is
     * DISABLED.</p>
     */
    inline CognitoStreams& WithStreamingStatus(StreamingStatus&& value) { SetStreamingStatus(std::move(value)); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    StreamingStatus m_streamingStatus;
    bool m_streamingStatusHasBeenSet;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
