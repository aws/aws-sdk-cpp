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
    AWS_FIREHOSE_API EncryptionConfiguration();
    AWS_FIREHOSE_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifically override existing encryption information to ensure that no
     * encryption is used.</p>
     */
    inline const NoEncryptionConfig& GetNoEncryptionConfig() const{ return m_noEncryptionConfig; }

    /**
     * <p>Specifically override existing encryption information to ensure that no
     * encryption is used.</p>
     */
    inline bool NoEncryptionConfigHasBeenSet() const { return m_noEncryptionConfigHasBeenSet; }

    /**
     * <p>Specifically override existing encryption information to ensure that no
     * encryption is used.</p>
     */
    inline void SetNoEncryptionConfig(const NoEncryptionConfig& value) { m_noEncryptionConfigHasBeenSet = true; m_noEncryptionConfig = value; }

    /**
     * <p>Specifically override existing encryption information to ensure that no
     * encryption is used.</p>
     */
    inline void SetNoEncryptionConfig(NoEncryptionConfig&& value) { m_noEncryptionConfigHasBeenSet = true; m_noEncryptionConfig = std::move(value); }

    /**
     * <p>Specifically override existing encryption information to ensure that no
     * encryption is used.</p>
     */
    inline EncryptionConfiguration& WithNoEncryptionConfig(const NoEncryptionConfig& value) { SetNoEncryptionConfig(value); return *this;}

    /**
     * <p>Specifically override existing encryption information to ensure that no
     * encryption is used.</p>
     */
    inline EncryptionConfiguration& WithNoEncryptionConfig(NoEncryptionConfig&& value) { SetNoEncryptionConfig(std::move(value)); return *this;}


    /**
     * <p>The encryption key.</p>
     */
    inline const KMSEncryptionConfig& GetKMSEncryptionConfig() const{ return m_kMSEncryptionConfig; }

    /**
     * <p>The encryption key.</p>
     */
    inline bool KMSEncryptionConfigHasBeenSet() const { return m_kMSEncryptionConfigHasBeenSet; }

    /**
     * <p>The encryption key.</p>
     */
    inline void SetKMSEncryptionConfig(const KMSEncryptionConfig& value) { m_kMSEncryptionConfigHasBeenSet = true; m_kMSEncryptionConfig = value; }

    /**
     * <p>The encryption key.</p>
     */
    inline void SetKMSEncryptionConfig(KMSEncryptionConfig&& value) { m_kMSEncryptionConfigHasBeenSet = true; m_kMSEncryptionConfig = std::move(value); }

    /**
     * <p>The encryption key.</p>
     */
    inline EncryptionConfiguration& WithKMSEncryptionConfig(const KMSEncryptionConfig& value) { SetKMSEncryptionConfig(value); return *this;}

    /**
     * <p>The encryption key.</p>
     */
    inline EncryptionConfiguration& WithKMSEncryptionConfig(KMSEncryptionConfig&& value) { SetKMSEncryptionConfig(std::move(value)); return *this;}

  private:

    NoEncryptionConfig m_noEncryptionConfig;
    bool m_noEncryptionConfigHasBeenSet = false;

    KMSEncryptionConfig m_kMSEncryptionConfig;
    bool m_kMSEncryptionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
