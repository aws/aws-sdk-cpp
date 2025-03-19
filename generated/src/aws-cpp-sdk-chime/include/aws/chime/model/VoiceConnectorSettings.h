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
    AWS_CHIME_API VoiceConnectorSettings() = default;
    AWS_CHIME_API VoiceConnectorSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API VoiceConnectorSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket designated for call detail record storage.</p>
     */
    inline const Aws::String& GetCdrBucket() const { return m_cdrBucket; }
    inline bool CdrBucketHasBeenSet() const { return m_cdrBucketHasBeenSet; }
    template<typename CdrBucketT = Aws::String>
    void SetCdrBucket(CdrBucketT&& value) { m_cdrBucketHasBeenSet = true; m_cdrBucket = std::forward<CdrBucketT>(value); }
    template<typename CdrBucketT = Aws::String>
    VoiceConnectorSettings& WithCdrBucket(CdrBucketT&& value) { SetCdrBucket(std::forward<CdrBucketT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cdrBucket;
    bool m_cdrBucketHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
