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
    AWS_KMS_API RotationsListEntry();
    AWS_KMS_API RotationsListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API RotationsListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier of the key.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }
    inline RotationsListEntry& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline RotationsListEntry& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline RotationsListEntry& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time that the key material rotation completed. Formatted as Unix
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetRotationDate() const{ return m_rotationDate; }
    inline bool RotationDateHasBeenSet() const { return m_rotationDateHasBeenSet; }
    inline void SetRotationDate(const Aws::Utils::DateTime& value) { m_rotationDateHasBeenSet = true; m_rotationDate = value; }
    inline void SetRotationDate(Aws::Utils::DateTime&& value) { m_rotationDateHasBeenSet = true; m_rotationDate = std::move(value); }
    inline RotationsListEntry& WithRotationDate(const Aws::Utils::DateTime& value) { SetRotationDate(value); return *this;}
    inline RotationsListEntry& WithRotationDate(Aws::Utils::DateTime&& value) { SetRotationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies whether the key material rotation was a scheduled <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html#rotating-keys-enable-disable">automatic
     * rotation</a> or an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html#rotating-keys-on-demand">on-demand
     * rotation</a>.</p>
     */
    inline const RotationType& GetRotationType() const{ return m_rotationType; }
    inline bool RotationTypeHasBeenSet() const { return m_rotationTypeHasBeenSet; }
    inline void SetRotationType(const RotationType& value) { m_rotationTypeHasBeenSet = true; m_rotationType = value; }
    inline void SetRotationType(RotationType&& value) { m_rotationTypeHasBeenSet = true; m_rotationType = std::move(value); }
    inline RotationsListEntry& WithRotationType(const RotationType& value) { SetRotationType(value); return *this;}
    inline RotationsListEntry& WithRotationType(RotationType&& value) { SetRotationType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Utils::DateTime m_rotationDate;
    bool m_rotationDateHasBeenSet = false;

    RotationType m_rotationType;
    bool m_rotationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
