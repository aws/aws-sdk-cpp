/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>

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
   * <p>Configuration information for pre-signed URLs. Valid when
   * <code>protocols</code> contains HTTP.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AwsJobPresignedUrlConfig">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API AwsJobPresignedUrlConfig
  {
  public:
    AwsJobPresignedUrlConfig();
    AwsJobPresignedUrlConfig(Aws::Utils::Json::JsonView jsonValue);
    AwsJobPresignedUrlConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>How long (in seconds) pre-signed URLs are valid. Valid values are 60 - 3600,
     * the default value is 1800 seconds. Pre-signed URLs are generated when a request
     * for the job document is received.</p>
     */
    inline long long GetExpiresInSec() const{ return m_expiresInSec; }

    /**
     * <p>How long (in seconds) pre-signed URLs are valid. Valid values are 60 - 3600,
     * the default value is 1800 seconds. Pre-signed URLs are generated when a request
     * for the job document is received.</p>
     */
    inline bool ExpiresInSecHasBeenSet() const { return m_expiresInSecHasBeenSet; }

    /**
     * <p>How long (in seconds) pre-signed URLs are valid. Valid values are 60 - 3600,
     * the default value is 1800 seconds. Pre-signed URLs are generated when a request
     * for the job document is received.</p>
     */
    inline void SetExpiresInSec(long long value) { m_expiresInSecHasBeenSet = true; m_expiresInSec = value; }

    /**
     * <p>How long (in seconds) pre-signed URLs are valid. Valid values are 60 - 3600,
     * the default value is 1800 seconds. Pre-signed URLs are generated when a request
     * for the job document is received.</p>
     */
    inline AwsJobPresignedUrlConfig& WithExpiresInSec(long long value) { SetExpiresInSec(value); return *this;}

  private:

    long long m_expiresInSec;
    bool m_expiresInSecHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
