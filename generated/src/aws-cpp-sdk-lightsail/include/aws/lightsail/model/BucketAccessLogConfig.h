﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the access log configuration for a bucket in the Amazon Lightsail
   * object storage service.</p> <p>For more information about bucket access logs,
   * see <a
   * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-bucket-access-logs">Logging
   * bucket requests using access logging in Amazon Lightsail</a> in the <i>Amazon
   * Lightsail Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/BucketAccessLogConfig">AWS
   * API Reference</a></p>
   */
  class BucketAccessLogConfig
  {
  public:
    AWS_LIGHTSAIL_API BucketAccessLogConfig();
    AWS_LIGHTSAIL_API BucketAccessLogConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API BucketAccessLogConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A Boolean value that indicates whether bucket access logging is enabled for
     * the bucket.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline BucketAccessLogConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bucket where the access logs are saved. The destination can
     * be a Lightsail bucket in the same account, and in the same Amazon Web Services
     * Region as the source bucket.</p>  <p>This parameter is required when
     * enabling the access log for a bucket, and should be omitted when disabling the
     * access log.</p> 
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }
    inline BucketAccessLogConfig& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline BucketAccessLogConfig& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline BucketAccessLogConfig& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional object prefix for the bucket access log.</p> <p>The prefix is an
     * optional addition to the object key that organizes your access log files in the
     * destination bucket. For example, if you specify a <code>logs/</code> prefix,
     * then each log object will begin with the <code>logs/</code> prefix in its key
     * (for example, <code>logs/2021-11-01-21-32-16-E568B2907131C0C0</code>).</p>
     *  <p>This parameter can be optionally specified when enabling the access
     * log for a bucket, and should be omitted when disabling the access log.</p>
     * 
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline BucketAccessLogConfig& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline BucketAccessLogConfig& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline BucketAccessLogConfig& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
