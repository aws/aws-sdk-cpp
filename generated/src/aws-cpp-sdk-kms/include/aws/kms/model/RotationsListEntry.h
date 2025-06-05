/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/ImportState.h>
#include <aws/kms/model/KeyMaterialState.h>
#include <aws/kms/model/ExpirationModelType.h>
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
   * <p>Each entry contains information about one of the key materials associated
   * with a KMS key.</p><p><h3>See Also:</h3>   <a
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
     * <p>Unique identifier of the key material. </p>
     */
    inline const Aws::String& GetKeyMaterialId() const { return m_keyMaterialId; }
    inline bool KeyMaterialIdHasBeenSet() const { return m_keyMaterialIdHasBeenSet; }
    template<typename KeyMaterialIdT = Aws::String>
    void SetKeyMaterialId(KeyMaterialIdT&& value) { m_keyMaterialIdHasBeenSet = true; m_keyMaterialId = std::forward<KeyMaterialIdT>(value); }
    template<typename KeyMaterialIdT = Aws::String>
    RotationsListEntry& WithKeyMaterialId(KeyMaterialIdT&& value) { SetKeyMaterialId(std::forward<KeyMaterialIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-specified description of the key material. This field is only present
     * for symmetric encryption KMS keys with <code>EXTERNAL</code> origin.</p>
     */
    inline const Aws::String& GetKeyMaterialDescription() const { return m_keyMaterialDescription; }
    inline bool KeyMaterialDescriptionHasBeenSet() const { return m_keyMaterialDescriptionHasBeenSet; }
    template<typename KeyMaterialDescriptionT = Aws::String>
    void SetKeyMaterialDescription(KeyMaterialDescriptionT&& value) { m_keyMaterialDescriptionHasBeenSet = true; m_keyMaterialDescription = std::forward<KeyMaterialDescriptionT>(value); }
    template<typename KeyMaterialDescriptionT = Aws::String>
    RotationsListEntry& WithKeyMaterialDescription(KeyMaterialDescriptionT&& value) { SetKeyMaterialDescription(std::forward<KeyMaterialDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the key material is currently imported into KMS. It has two
     * possible values: <code>IMPORTED</code> or <code>PENDING_IMPORT</code>. This
     * field is only present for symmetric encryption KMS keys with
     * <code>EXTERNAL</code> origin.</p>
     */
    inline ImportState GetImportState() const { return m_importState; }
    inline bool ImportStateHasBeenSet() const { return m_importStateHasBeenSet; }
    inline void SetImportState(ImportState value) { m_importStateHasBeenSet = true; m_importState = value; }
    inline RotationsListEntry& WithImportState(ImportState value) { SetImportState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>There are three possible values for this field: <code>CURRENT</code>,
     * <code>NON_CURRENT</code> and <code>PENDING_ROTATION</code>. KMS uses
     * <code>CURRENT</code> key material for both encryption and decryption and
     * <code>NON_CURRENT</code> key material only for decryption.
     * <code>PENDING_ROTATION</code> identifies key material that has been imported for
     * on-demand key rotation but the rotation hasn't completed. Key material in
     * <code>PENDING_ROTATION</code> is not permanently associated with the KMS key.
     * You can delete this key material and import different key material in its place.
     * The <code>PENDING_ROTATION</code> value is only used in symmetric encryption
     * keys with imported key material. The other values, <code>CURRENT</code> and
     * <code>NON_CURRENT</code>, are used for all KMS keys that support automatic or
     * on-demand key rotation.</p>
     */
    inline KeyMaterialState GetKeyMaterialState() const { return m_keyMaterialState; }
    inline bool KeyMaterialStateHasBeenSet() const { return m_keyMaterialStateHasBeenSet; }
    inline void SetKeyMaterialState(KeyMaterialState value) { m_keyMaterialStateHasBeenSet = true; m_keyMaterialState = value; }
    inline RotationsListEntry& WithKeyMaterialState(KeyMaterialState value) { SetKeyMaterialState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the key material is configured to automatically expire. There
     * are two possible values for this field: <code>KEY_MATERIAL_EXPIRES</code> and
     * <code>KEY_MATERIAL_DOES_NOT_EXPIRE</code>. For any key material that expires,
     * the expiration date and time is indicated in <code>ValidTo</code>. This field is
     * only present for symmetric encryption KMS keys with <code>EXTERNAL</code>
     * origin.</p>
     */
    inline ExpirationModelType GetExpirationModel() const { return m_expirationModel; }
    inline bool ExpirationModelHasBeenSet() const { return m_expirationModelHasBeenSet; }
    inline void SetExpirationModel(ExpirationModelType value) { m_expirationModelHasBeenSet = true; m_expirationModel = value; }
    inline RotationsListEntry& WithExpirationModel(ExpirationModelType value) { SetExpirationModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time at which the key material expires. This field is only present
     * for symmetric encryption KMS keys with <code>EXTERNAL</code> origin in rotation
     * list entries with an <code>ExpirationModel</code> value of
     * <code>KEY_MATERIAL_EXPIRES</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetValidTo() const { return m_validTo; }
    inline bool ValidToHasBeenSet() const { return m_validToHasBeenSet; }
    template<typename ValidToT = Aws::Utils::DateTime>
    void SetValidTo(ValidToT&& value) { m_validToHasBeenSet = true; m_validTo = std::forward<ValidToT>(value); }
    template<typename ValidToT = Aws::Utils::DateTime>
    RotationsListEntry& WithValidTo(ValidToT&& value) { SetValidTo(std::forward<ValidToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time that the key material rotation completed. Formatted as Unix
     * time. This field is not present for the first key material or an imported key
     * material in <code>PENDING_ROTATION</code> state.</p>
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
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotating-keys-enable-disable.html">automatic
     * rotation</a> or an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotating-keys-on-demand.html">on-demand
     * rotation</a>. This field is not present for the first key material or an
     * imported key material in <code>PENDING_ROTATION</code> state.</p>
     */
    inline RotationType GetRotationType() const { return m_rotationType; }
    inline bool RotationTypeHasBeenSet() const { return m_rotationTypeHasBeenSet; }
    inline void SetRotationType(RotationType value) { m_rotationTypeHasBeenSet = true; m_rotationType = value; }
    inline RotationsListEntry& WithRotationType(RotationType value) { SetRotationType(value); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_keyMaterialId;
    bool m_keyMaterialIdHasBeenSet = false;

    Aws::String m_keyMaterialDescription;
    bool m_keyMaterialDescriptionHasBeenSet = false;

    ImportState m_importState{ImportState::NOT_SET};
    bool m_importStateHasBeenSet = false;

    KeyMaterialState m_keyMaterialState{KeyMaterialState::NOT_SET};
    bool m_keyMaterialStateHasBeenSet = false;

    ExpirationModelType m_expirationModel{ExpirationModelType::NOT_SET};
    bool m_expirationModelHasBeenSet = false;

    Aws::Utils::DateTime m_validTo{};
    bool m_validToHasBeenSet = false;

    Aws::Utils::DateTime m_rotationDate{};
    bool m_rotationDateHasBeenSet = false;

    RotationType m_rotationType{RotationType::NOT_SET};
    bool m_rotationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
