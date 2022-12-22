/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/KinesisVideoRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

  /**
   */
  class DeleteStreamRequest : public KinesisVideoRequest
  {
  public:
    AWS_KINESISVIDEO_API DeleteStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteStream"; }

    AWS_KINESISVIDEO_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to delete. </p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to delete. </p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to delete. </p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to delete. </p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to delete. </p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to delete. </p>
     */
    inline DeleteStreamRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to delete. </p>
     */
    inline DeleteStreamRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream that you want to delete. </p>
     */
    inline DeleteStreamRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p>Optional: The version of the stream that you want to delete. </p> <p>Specify
     * the version as a safeguard to ensure that your are deleting the correct stream.
     * To get the stream version, use the <code>DescribeStream</code> API.</p> <p>If
     * not specified, only the <code>CreationTime</code> is checked before deleting the
     * stream.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p>Optional: The version of the stream that you want to delete. </p> <p>Specify
     * the version as a safeguard to ensure that your are deleting the correct stream.
     * To get the stream version, use the <code>DescribeStream</code> API.</p> <p>If
     * not specified, only the <code>CreationTime</code> is checked before deleting the
     * stream.</p>
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * <p>Optional: The version of the stream that you want to delete. </p> <p>Specify
     * the version as a safeguard to ensure that your are deleting the correct stream.
     * To get the stream version, use the <code>DescribeStream</code> API.</p> <p>If
     * not specified, only the <code>CreationTime</code> is checked before deleting the
     * stream.</p>
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * <p>Optional: The version of the stream that you want to delete. </p> <p>Specify
     * the version as a safeguard to ensure that your are deleting the correct stream.
     * To get the stream version, use the <code>DescribeStream</code> API.</p> <p>If
     * not specified, only the <code>CreationTime</code> is checked before deleting the
     * stream.</p>
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * <p>Optional: The version of the stream that you want to delete. </p> <p>Specify
     * the version as a safeguard to ensure that your are deleting the correct stream.
     * To get the stream version, use the <code>DescribeStream</code> API.</p> <p>If
     * not specified, only the <code>CreationTime</code> is checked before deleting the
     * stream.</p>
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }

    /**
     * <p>Optional: The version of the stream that you want to delete. </p> <p>Specify
     * the version as a safeguard to ensure that your are deleting the correct stream.
     * To get the stream version, use the <code>DescribeStream</code> API.</p> <p>If
     * not specified, only the <code>CreationTime</code> is checked before deleting the
     * stream.</p>
     */
    inline DeleteStreamRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * <p>Optional: The version of the stream that you want to delete. </p> <p>Specify
     * the version as a safeguard to ensure that your are deleting the correct stream.
     * To get the stream version, use the <code>DescribeStream</code> API.</p> <p>If
     * not specified, only the <code>CreationTime</code> is checked before deleting the
     * stream.</p>
     */
    inline DeleteStreamRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * <p>Optional: The version of the stream that you want to delete. </p> <p>Specify
     * the version as a safeguard to ensure that your are deleting the correct stream.
     * To get the stream version, use the <code>DescribeStream</code> API.</p> <p>If
     * not specified, only the <code>CreationTime</code> is checked before deleting the
     * stream.</p>
     */
    inline DeleteStreamRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}

  private:

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
