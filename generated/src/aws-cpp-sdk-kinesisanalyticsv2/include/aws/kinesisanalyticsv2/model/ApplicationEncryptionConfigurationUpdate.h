/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/KeyType.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes configuration updates to encryption at rest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationEncryptionConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class ApplicationEncryptionConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationEncryptionConfigurationUpdate() = default;
    AWS_KINESISANALYTICSV2_API ApplicationEncryptionConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationEncryptionConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key ARN, key ID, alias ARN, or alias name of the KMS key to be used for
     * encryption at rest.</p>
     */
    inline const Aws::String& GetKeyIdUpdate() const { return m_keyIdUpdate; }
    inline bool KeyIdUpdateHasBeenSet() const { return m_keyIdUpdateHasBeenSet; }
    template<typename KeyIdUpdateT = Aws::String>
    void SetKeyIdUpdate(KeyIdUpdateT&& value) { m_keyIdUpdateHasBeenSet = true; m_keyIdUpdate = std::forward<KeyIdUpdateT>(value); }
    template<typename KeyIdUpdateT = Aws::String>
    ApplicationEncryptionConfigurationUpdate& WithKeyIdUpdate(KeyIdUpdateT&& value) { SetKeyIdUpdate(std::forward<KeyIdUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of key to be used for encryption at rest.</p>
     */
    inline KeyType GetKeyTypeUpdate() const { return m_keyTypeUpdate; }
    inline bool KeyTypeUpdateHasBeenSet() const { return m_keyTypeUpdateHasBeenSet; }
    inline void SetKeyTypeUpdate(KeyType value) { m_keyTypeUpdateHasBeenSet = true; m_keyTypeUpdate = value; }
    inline ApplicationEncryptionConfigurationUpdate& WithKeyTypeUpdate(KeyType value) { SetKeyTypeUpdate(value); return *this;}
    ///@}
  private:

    Aws::String m_keyIdUpdate;
    bool m_keyIdUpdateHasBeenSet = false;

    KeyType m_keyTypeUpdate{KeyType::NOT_SET};
    bool m_keyTypeUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
