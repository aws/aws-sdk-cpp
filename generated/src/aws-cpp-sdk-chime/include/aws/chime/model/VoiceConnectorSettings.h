/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The Amazon Chime Voice Connector settings. Includes any Amazon S3 buckets
   * designated for storing call detail records.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/VoiceConnectorSettings">AWS
   * API Reference</a></p>
   */
  class VoiceConnectorSettings
  {
  public:
    AWS_CHIME_API VoiceConnectorSettings();
    AWS_CHIME_API VoiceConnectorSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API VoiceConnectorSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket designated for call detail record storage.</p>
     */
    inline const Aws::String& GetCdrBucket() const{ return m_cdrBucket; }

    /**
     * <p>The Amazon S3 bucket designated for call detail record storage.</p>
     */
    inline bool CdrBucketHasBeenSet() const { return m_cdrBucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket designated for call detail record storage.</p>
     */
    inline void SetCdrBucket(const Aws::String& value) { m_cdrBucketHasBeenSet = true; m_cdrBucket = value; }

    /**
     * <p>The Amazon S3 bucket designated for call detail record storage.</p>
     */
    inline void SetCdrBucket(Aws::String&& value) { m_cdrBucketHasBeenSet = true; m_cdrBucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket designated for call detail record storage.</p>
     */
    inline void SetCdrBucket(const char* value) { m_cdrBucketHasBeenSet = true; m_cdrBucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket designated for call detail record storage.</p>
     */
    inline VoiceConnectorSettings& WithCdrBucket(const Aws::String& value) { SetCdrBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket designated for call detail record storage.</p>
     */
    inline VoiceConnectorSettings& WithCdrBucket(Aws::String&& value) { SetCdrBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket designated for call detail record storage.</p>
     */
    inline VoiceConnectorSettings& WithCdrBucket(const char* value) { SetCdrBucket(value); return *this;}

  private:

    Aws::String m_cdrBucket;
    bool m_cdrBucketHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
