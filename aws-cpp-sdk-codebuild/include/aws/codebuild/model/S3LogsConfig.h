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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/LogsConfigStatusType.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p> Information about S3 logs for a build project. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/S3LogsConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API S3LogsConfig
  {
  public:
    S3LogsConfig();
    S3LogsConfig(Aws::Utils::Json::JsonView jsonValue);
    S3LogsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current status of the S3 build logs. Valid values are:</p> <ul> <li> <p>
     * <code>ENABLED</code>: S3 build logs are enabled for this build project.</p>
     * </li> <li> <p> <code>DISABLED</code>: S3 build logs are not enabled for this
     * build project.</p> </li> </ul>
     */
    inline const LogsConfigStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the S3 build logs. Valid values are:</p> <ul> <li> <p>
     * <code>ENABLED</code>: S3 build logs are enabled for this build project.</p>
     * </li> <li> <p> <code>DISABLED</code>: S3 build logs are not enabled for this
     * build project.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the S3 build logs. Valid values are:</p> <ul> <li> <p>
     * <code>ENABLED</code>: S3 build logs are enabled for this build project.</p>
     * </li> <li> <p> <code>DISABLED</code>: S3 build logs are not enabled for this
     * build project.</p> </li> </ul>
     */
    inline void SetStatus(const LogsConfigStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the S3 build logs. Valid values are:</p> <ul> <li> <p>
     * <code>ENABLED</code>: S3 build logs are enabled for this build project.</p>
     * </li> <li> <p> <code>DISABLED</code>: S3 build logs are not enabled for this
     * build project.</p> </li> </ul>
     */
    inline void SetStatus(LogsConfigStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the S3 build logs. Valid values are:</p> <ul> <li> <p>
     * <code>ENABLED</code>: S3 build logs are enabled for this build project.</p>
     * </li> <li> <p> <code>DISABLED</code>: S3 build logs are not enabled for this
     * build project.</p> </li> </ul>
     */
    inline S3LogsConfig& WithStatus(const LogsConfigStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the S3 build logs. Valid values are:</p> <ul> <li> <p>
     * <code>ENABLED</code>: S3 build logs are enabled for this build project.</p>
     * </li> <li> <p> <code>DISABLED</code>: S3 build logs are not enabled for this
     * build project.</p> </li> </ul>
     */
    inline S3LogsConfig& WithStatus(LogsConfigStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The ARN of an S3 bucket and the path prefix for S3 logs. If your Amazon S3
     * bucket name is <code>my-bucket</code>, and your path prefix is
     * <code>build-log</code>, then acceptable formats are
     * <code>my-bucket/build-log</code> or
     * <code>arn:aws:s3:::my-bucket/build-log</code>. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p> The ARN of an S3 bucket and the path prefix for S3 logs. If your Amazon S3
     * bucket name is <code>my-bucket</code>, and your path prefix is
     * <code>build-log</code>, then acceptable formats are
     * <code>my-bucket/build-log</code> or
     * <code>arn:aws:s3:::my-bucket/build-log</code>. </p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p> The ARN of an S3 bucket and the path prefix for S3 logs. If your Amazon S3
     * bucket name is <code>my-bucket</code>, and your path prefix is
     * <code>build-log</code>, then acceptable formats are
     * <code>my-bucket/build-log</code> or
     * <code>arn:aws:s3:::my-bucket/build-log</code>. </p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p> The ARN of an S3 bucket and the path prefix for S3 logs. If your Amazon S3
     * bucket name is <code>my-bucket</code>, and your path prefix is
     * <code>build-log</code>, then acceptable formats are
     * <code>my-bucket/build-log</code> or
     * <code>arn:aws:s3:::my-bucket/build-log</code>. </p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p> The ARN of an S3 bucket and the path prefix for S3 logs. If your Amazon S3
     * bucket name is <code>my-bucket</code>, and your path prefix is
     * <code>build-log</code>, then acceptable formats are
     * <code>my-bucket/build-log</code> or
     * <code>arn:aws:s3:::my-bucket/build-log</code>. </p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p> The ARN of an S3 bucket and the path prefix for S3 logs. If your Amazon S3
     * bucket name is <code>my-bucket</code>, and your path prefix is
     * <code>build-log</code>, then acceptable formats are
     * <code>my-bucket/build-log</code> or
     * <code>arn:aws:s3:::my-bucket/build-log</code>. </p>
     */
    inline S3LogsConfig& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p> The ARN of an S3 bucket and the path prefix for S3 logs. If your Amazon S3
     * bucket name is <code>my-bucket</code>, and your path prefix is
     * <code>build-log</code>, then acceptable formats are
     * <code>my-bucket/build-log</code> or
     * <code>arn:aws:s3:::my-bucket/build-log</code>. </p>
     */
    inline S3LogsConfig& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p> The ARN of an S3 bucket and the path prefix for S3 logs. If your Amazon S3
     * bucket name is <code>my-bucket</code>, and your path prefix is
     * <code>build-log</code>, then acceptable formats are
     * <code>my-bucket/build-log</code> or
     * <code>arn:aws:s3:::my-bucket/build-log</code>. </p>
     */
    inline S3LogsConfig& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p> Set to true if you do not want your S3 build log output encrypted. By
     * default S3 build logs are encrypted. </p>
     */
    inline bool GetEncryptionDisabled() const{ return m_encryptionDisabled; }

    /**
     * <p> Set to true if you do not want your S3 build log output encrypted. By
     * default S3 build logs are encrypted. </p>
     */
    inline bool EncryptionDisabledHasBeenSet() const { return m_encryptionDisabledHasBeenSet; }

    /**
     * <p> Set to true if you do not want your S3 build log output encrypted. By
     * default S3 build logs are encrypted. </p>
     */
    inline void SetEncryptionDisabled(bool value) { m_encryptionDisabledHasBeenSet = true; m_encryptionDisabled = value; }

    /**
     * <p> Set to true if you do not want your S3 build log output encrypted. By
     * default S3 build logs are encrypted. </p>
     */
    inline S3LogsConfig& WithEncryptionDisabled(bool value) { SetEncryptionDisabled(value); return *this;}

  private:

    LogsConfigStatusType m_status;
    bool m_statusHasBeenSet;

    Aws::String m_location;
    bool m_locationHasBeenSet;

    bool m_encryptionDisabled;
    bool m_encryptionDisabledHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
