/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kms/model/RotationType.h>
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
namespace KMS
{
namespace Model
{

  /**
   * <p>Contains information about completed key material rotations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/RotationsListEntry">AWS
   * API Reference</a></p>
   */
  class RotationsListEntry
  {
  public:
    AWS_KMS_API RotationsListEntry() = default;
    AWS_KMS_API RotationsListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API RotationsListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier of the key.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    RotationsListEntry& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time that the key material rotation completed. Formatted as Unix
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetRotationDate() const { return m_rotationDate; }
    inline bool RotationDateHasBeenSet() const { return m_rotationDateHasBeenSet; }
    template<typename RotationDateT = Aws::Utils::DateTime>
    void SetRotationDate(RotationDateT&& value) { m_rotationDateHasBeenSet = true; m_rotationDate = std::forward<RotationDateT>(value); }
    template<typename RotationDateT = Aws::Utils::DateTime>
    RotationsListEntry& WithRotationDate(RotationDateT&& value) { SetRotationDate(std::forward<RotationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies whether the key material rotation was a scheduled <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html#rotating-keys-enable-disable">automatic
     * rotation</a> or an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html#rotating-keys-on-demand">on-demand
     * rotation</a>.</p>
     */
    inline RotationType GetRotationType() const { return m_rotationType; }
    inline bool RotationTypeHasBeenSet() const { return m_rotationTypeHasBeenSet; }
    inline void SetRotationType(RotationType value) { m_rotationTypeHasBeenSet = true; m_rotationType = value; }
    inline RotationsListEntry& WithRotationType(RotationType value) { SetRotationType(value); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Utils::DateTime m_rotationDate{};
    bool m_rotationDateHasBeenSet = false;

    RotationType m_rotationType{RotationType::NOT_SET};
    bool m_rotationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
