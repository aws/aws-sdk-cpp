/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/NoEncryptionConfig.h>
#include <aws/firehose/model/KMSEncryptionConfig.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes the encryption for a destination in Amazon S3.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionConfiguration
  {
  public:
    AWS_FIREHOSE_API EncryptionConfiguration() = default;
    AWS_FIREHOSE_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifically override existing encryption information to ensure that no
     * encryption is used.</p>
     */
    inline NoEncryptionConfig GetNoEncryptionConfig() const { return m_noEncryptionConfig; }
    inline bool NoEncryptionConfigHasBeenSet() const { return m_noEncryptionConfigHasBeenSet; }
    inline void SetNoEncryptionConfig(NoEncryptionConfig value) { m_noEncryptionConfigHasBeenSet = true; m_noEncryptionConfig = value; }
    inline EncryptionConfiguration& WithNoEncryptionConfig(NoEncryptionConfig value) { SetNoEncryptionConfig(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption key.</p>
     */
    inline const KMSEncryptionConfig& GetKMSEncryptionConfig() const { return m_kMSEncryptionConfig; }
    inline bool KMSEncryptionConfigHasBeenSet() const { return m_kMSEncryptionConfigHasBeenSet; }
    template<typename KMSEncryptionConfigT = KMSEncryptionConfig>
    void SetKMSEncryptionConfig(KMSEncryptionConfigT&& value) { m_kMSEncryptionConfigHasBeenSet = true; m_kMSEncryptionConfig = std::forward<KMSEncryptionConfigT>(value); }
    template<typename KMSEncryptionConfigT = KMSEncryptionConfig>
    EncryptionConfiguration& WithKMSEncryptionConfig(KMSEncryptionConfigT&& value) { SetKMSEncryptionConfig(std::forward<KMSEncryptionConfigT>(value)); return *this;}
    ///@}
  private:

    NoEncryptionConfig m_noEncryptionConfig{NoEncryptionConfig::NOT_SET};
    bool m_noEncryptionConfigHasBeenSet = false;

    KMSEncryptionConfig m_kMSEncryptionConfig;
    bool m_kMSEncryptionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
