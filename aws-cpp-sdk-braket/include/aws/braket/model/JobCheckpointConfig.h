﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>Contains information about the output locations for job checkpoint
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/JobCheckpointConfig">AWS
   * API Reference</a></p>
   */
  class AWS_BRAKET_API JobCheckpointConfig
  {
  public:
    JobCheckpointConfig();
    JobCheckpointConfig(Aws::Utils::Json::JsonView jsonValue);
    JobCheckpointConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>(Optional) The local directory where checkpoints are written. The default
     * directory is <code>/opt/braket/checkpoints/</code>.</p>
     */
    inline const Aws::String& GetLocalPath() const{ return m_localPath; }

    /**
     * <p>(Optional) The local directory where checkpoints are written. The default
     * directory is <code>/opt/braket/checkpoints/</code>.</p>
     */
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }

    /**
     * <p>(Optional) The local directory where checkpoints are written. The default
     * directory is <code>/opt/braket/checkpoints/</code>.</p>
     */
    inline void SetLocalPath(const Aws::String& value) { m_localPathHasBeenSet = true; m_localPath = value; }

    /**
     * <p>(Optional) The local directory where checkpoints are written. The default
     * directory is <code>/opt/braket/checkpoints/</code>.</p>
     */
    inline void SetLocalPath(Aws::String&& value) { m_localPathHasBeenSet = true; m_localPath = std::move(value); }

    /**
     * <p>(Optional) The local directory where checkpoints are written. The default
     * directory is <code>/opt/braket/checkpoints/</code>.</p>
     */
    inline void SetLocalPath(const char* value) { m_localPathHasBeenSet = true; m_localPath.assign(value); }

    /**
     * <p>(Optional) The local directory where checkpoints are written. The default
     * directory is <code>/opt/braket/checkpoints/</code>.</p>
     */
    inline JobCheckpointConfig& WithLocalPath(const Aws::String& value) { SetLocalPath(value); return *this;}

    /**
     * <p>(Optional) The local directory where checkpoints are written. The default
     * directory is <code>/opt/braket/checkpoints/</code>.</p>
     */
    inline JobCheckpointConfig& WithLocalPath(Aws::String&& value) { SetLocalPath(std::move(value)); return *this;}

    /**
     * <p>(Optional) The local directory where checkpoints are written. The default
     * directory is <code>/opt/braket/checkpoints/</code>.</p>
     */
    inline JobCheckpointConfig& WithLocalPath(const char* value) { SetLocalPath(value); return *this;}


    /**
     * <p>Identifies the S3 path where you want Amazon Braket to store checkpoints. For
     * example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>Identifies the S3 path where you want Amazon Braket to store checkpoints. For
     * example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>Identifies the S3 path where you want Amazon Braket to store checkpoints. For
     * example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>Identifies the S3 path where you want Amazon Braket to store checkpoints. For
     * example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>Identifies the S3 path where you want Amazon Braket to store checkpoints. For
     * example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>Identifies the S3 path where you want Amazon Braket to store checkpoints. For
     * example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline JobCheckpointConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>Identifies the S3 path where you want Amazon Braket to store checkpoints. For
     * example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline JobCheckpointConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>Identifies the S3 path where you want Amazon Braket to store checkpoints. For
     * example, <code>s3://bucket-name/key-name-prefix</code>.</p>
     */
    inline JobCheckpointConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

  private:

    Aws::String m_localPath;
    bool m_localPathHasBeenSet;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
