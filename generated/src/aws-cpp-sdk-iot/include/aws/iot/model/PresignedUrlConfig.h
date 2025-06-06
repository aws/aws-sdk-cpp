﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PresignedUrlConfig
  {
  public:
    AWS_IOT_API PresignedUrlConfig() = default;
    AWS_IOT_API PresignedUrlConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API PresignedUrlConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of an IAM role that grants permission to download files from the S3
     * bucket where the job data/updates are stored. The role must also grant
     * permission for IoT to download the files.</p>  <p>For information
     * about addressing the confused deputy problem, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/cross-service-confused-deputy-prevention.html">cross-service
     * confused deputy prevention</a> in the <i>Amazon Web Services IoT Core developer
     * guide</i>.</p> 
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    PresignedUrlConfig& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long (in seconds) pre-signed URLs are valid. Valid values are 60 - 3600,
     * the default value is 3600 seconds. Pre-signed URLs are generated when Jobs
     * receives an MQTT request for the job document.</p>
     */
    inline long long GetExpiresInSec() const { return m_expiresInSec; }
    inline bool ExpiresInSecHasBeenSet() const { return m_expiresInSecHasBeenSet; }
    inline void SetExpiresInSec(long long value) { m_expiresInSecHasBeenSet = true; m_expiresInSec = value; }
    inline PresignedUrlConfig& WithExpiresInSec(long long value) { SetExpiresInSec(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    long long m_expiresInSec{0};
    bool m_expiresInSecHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
