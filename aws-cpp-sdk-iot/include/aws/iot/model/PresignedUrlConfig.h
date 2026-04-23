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
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Configuration for pre-signed S3 URLs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/PresignedUrlConfig">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API PresignedUrlConfig
  {
  public:
    PresignedUrlConfig();
    PresignedUrlConfig(Aws::Utils::Json::JsonView jsonValue);
    PresignedUrlConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of an IAM role that grants grants permission to download files from
     * the S3 bucket where the job data/updates are stored. The role must also grant
     * permission for IoT to download the files.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of an IAM role that grants grants permission to download files from
     * the S3 bucket where the job data/updates are stored. The role must also grant
     * permission for IoT to download the files.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM role that grants grants permission to download files from
     * the S3 bucket where the job data/updates are stored. The role must also grant
     * permission for IoT to download the files.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of an IAM role that grants grants permission to download files from
     * the S3 bucket where the job data/updates are stored. The role must also grant
     * permission for IoT to download the files.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role that grants grants permission to download files from
     * the S3 bucket where the job data/updates are stored. The role must also grant
     * permission for IoT to download the files.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role that grants grants permission to download files from
     * the S3 bucket where the job data/updates are stored. The role must also grant
     * permission for IoT to download the files.</p>
     */
    inline PresignedUrlConfig& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role that grants grants permission to download files from
     * the S3 bucket where the job data/updates are stored. The role must also grant
     * permission for IoT to download the files.</p>
     */
    inline PresignedUrlConfig& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role that grants grants permission to download files from
     * the S3 bucket where the job data/updates are stored. The role must also grant
     * permission for IoT to download the files.</p>
     */
    inline PresignedUrlConfig& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>How long (in seconds) pre-signed URLs are valid. Valid values are 60 - 3600,
     * the default value is 3600 seconds. Pre-signed URLs are generated when Jobs
     * receives an MQTT request for the job document.</p>
     */
    inline long long GetExpiresInSec() const{ return m_expiresInSec; }

    /**
     * <p>How long (in seconds) pre-signed URLs are valid. Valid values are 60 - 3600,
     * the default value is 3600 seconds. Pre-signed URLs are generated when Jobs
     * receives an MQTT request for the job document.</p>
     */
    inline bool ExpiresInSecHasBeenSet() const { return m_expiresInSecHasBeenSet; }

    /**
     * <p>How long (in seconds) pre-signed URLs are valid. Valid values are 60 - 3600,
     * the default value is 3600 seconds. Pre-signed URLs are generated when Jobs
     * receives an MQTT request for the job document.</p>
     */
    inline void SetExpiresInSec(long long value) { m_expiresInSecHasBeenSet = true; m_expiresInSec = value; }

    /**
     * <p>How long (in seconds) pre-signed URLs are valid. Valid values are 60 - 3600,
     * the default value is 3600 seconds. Pre-signed URLs are generated when Jobs
     * receives an MQTT request for the job document.</p>
     */
    inline PresignedUrlConfig& WithExpiresInSec(long long value) { SetExpiresInSec(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    long long m_expiresInSec;
    bool m_expiresInSecHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
