/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>

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
namespace ACMPCA
{
namespace Model
{

  /**
   * <p>Defines one or more purposes for which the key contained in the certificate
   * can be used. Default value for each option is false.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/KeyUsage">AWS
   * API Reference</a></p>
   */
  class KeyUsage
  {
  public:
    AWS_ACMPCA_API KeyUsage();
    AWS_ACMPCA_API KeyUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API KeyUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Key can be used for digital signing.</p>
     */
    inline bool GetDigitalSignature() const{ return m_digitalSignature; }

    /**
     * <p> Key can be used for digital signing.</p>
     */
    inline bool DigitalSignatureHasBeenSet() const { return m_digitalSignatureHasBeenSet; }

    /**
     * <p> Key can be used for digital signing.</p>
     */
    inline void SetDigitalSignature(bool value) { m_digitalSignatureHasBeenSet = true; m_digitalSignature = value; }

    /**
     * <p> Key can be used for digital signing.</p>
     */
    inline KeyUsage& WithDigitalSignature(bool value) { SetDigitalSignature(value); return *this;}


    /**
     * <p>Key can be used for non-repudiation.</p>
     */
    inline bool GetNonRepudiation() const{ return m_nonRepudiation; }

    /**
     * <p>Key can be used for non-repudiation.</p>
     */
    inline bool NonRepudiationHasBeenSet() const { return m_nonRepudiationHasBeenSet; }

    /**
     * <p>Key can be used for non-repudiation.</p>
     */
    inline void SetNonRepudiation(bool value) { m_nonRepudiationHasBeenSet = true; m_nonRepudiation = value; }

    /**
     * <p>Key can be used for non-repudiation.</p>
     */
    inline KeyUsage& WithNonRepudiation(bool value) { SetNonRepudiation(value); return *this;}


    /**
     * <p>Key can be used to encipher data.</p>
     */
    inline bool GetKeyEncipherment() const{ return m_keyEncipherment; }

    /**
     * <p>Key can be used to encipher data.</p>
     */
    inline bool KeyEnciphermentHasBeenSet() const { return m_keyEnciphermentHasBeenSet; }

    /**
     * <p>Key can be used to encipher data.</p>
     */
    inline void SetKeyEncipherment(bool value) { m_keyEnciphermentHasBeenSet = true; m_keyEncipherment = value; }

    /**
     * <p>Key can be used to encipher data.</p>
     */
    inline KeyUsage& WithKeyEncipherment(bool value) { SetKeyEncipherment(value); return *this;}


    /**
     * <p>Key can be used to decipher data.</p>
     */
    inline bool GetDataEncipherment() const{ return m_dataEncipherment; }

    /**
     * <p>Key can be used to decipher data.</p>
     */
    inline bool DataEnciphermentHasBeenSet() const { return m_dataEnciphermentHasBeenSet; }

    /**
     * <p>Key can be used to decipher data.</p>
     */
    inline void SetDataEncipherment(bool value) { m_dataEnciphermentHasBeenSet = true; m_dataEncipherment = value; }

    /**
     * <p>Key can be used to decipher data.</p>
     */
    inline KeyUsage& WithDataEncipherment(bool value) { SetDataEncipherment(value); return *this;}


    /**
     * <p>Key can be used in a key-agreement protocol.</p>
     */
    inline bool GetKeyAgreement() const{ return m_keyAgreement; }

    /**
     * <p>Key can be used in a key-agreement protocol.</p>
     */
    inline bool KeyAgreementHasBeenSet() const { return m_keyAgreementHasBeenSet; }

    /**
     * <p>Key can be used in a key-agreement protocol.</p>
     */
    inline void SetKeyAgreement(bool value) { m_keyAgreementHasBeenSet = true; m_keyAgreement = value; }

    /**
     * <p>Key can be used in a key-agreement protocol.</p>
     */
    inline KeyUsage& WithKeyAgreement(bool value) { SetKeyAgreement(value); return *this;}


    /**
     * <p>Key can be used to sign certificates.</p>
     */
    inline bool GetKeyCertSign() const{ return m_keyCertSign; }

    /**
     * <p>Key can be used to sign certificates.</p>
     */
    inline bool KeyCertSignHasBeenSet() const { return m_keyCertSignHasBeenSet; }

    /**
     * <p>Key can be used to sign certificates.</p>
     */
    inline void SetKeyCertSign(bool value) { m_keyCertSignHasBeenSet = true; m_keyCertSign = value; }

    /**
     * <p>Key can be used to sign certificates.</p>
     */
    inline KeyUsage& WithKeyCertSign(bool value) { SetKeyCertSign(value); return *this;}


    /**
     * <p>Key can be used to sign CRLs.</p>
     */
    inline bool GetCRLSign() const{ return m_cRLSign; }

    /**
     * <p>Key can be used to sign CRLs.</p>
     */
    inline bool CRLSignHasBeenSet() const { return m_cRLSignHasBeenSet; }

    /**
     * <p>Key can be used to sign CRLs.</p>
     */
    inline void SetCRLSign(bool value) { m_cRLSignHasBeenSet = true; m_cRLSign = value; }

    /**
     * <p>Key can be used to sign CRLs.</p>
     */
    inline KeyUsage& WithCRLSign(bool value) { SetCRLSign(value); return *this;}


    /**
     * <p>Key can be used only to encipher data.</p>
     */
    inline bool GetEncipherOnly() const{ return m_encipherOnly; }

    /**
     * <p>Key can be used only to encipher data.</p>
     */
    inline bool EncipherOnlyHasBeenSet() const { return m_encipherOnlyHasBeenSet; }

    /**
     * <p>Key can be used only to encipher data.</p>
     */
    inline void SetEncipherOnly(bool value) { m_encipherOnlyHasBeenSet = true; m_encipherOnly = value; }

    /**
     * <p>Key can be used only to encipher data.</p>
     */
    inline KeyUsage& WithEncipherOnly(bool value) { SetEncipherOnly(value); return *this;}


    /**
     * <p>Key can be used only to decipher data.</p>
     */
    inline bool GetDecipherOnly() const{ return m_decipherOnly; }

    /**
     * <p>Key can be used only to decipher data.</p>
     */
    inline bool DecipherOnlyHasBeenSet() const { return m_decipherOnlyHasBeenSet; }

    /**
     * <p>Key can be used only to decipher data.</p>
     */
    inline void SetDecipherOnly(bool value) { m_decipherOnlyHasBeenSet = true; m_decipherOnly = value; }

    /**
     * <p>Key can be used only to decipher data.</p>
     */
    inline KeyUsage& WithDecipherOnly(bool value) { SetDecipherOnly(value); return *this;}

  private:

    bool m_digitalSignature;
    bool m_digitalSignatureHasBeenSet = false;

    bool m_nonRepudiation;
    bool m_nonRepudiationHasBeenSet = false;

    bool m_keyEncipherment;
    bool m_keyEnciphermentHasBeenSet = false;

    bool m_dataEncipherment;
    bool m_dataEnciphermentHasBeenSet = false;

    bool m_keyAgreement;
    bool m_keyAgreementHasBeenSet = false;

    bool m_keyCertSign;
    bool m_keyCertSignHasBeenSet = false;

    bool m_cRLSign;
    bool m_cRLSignHasBeenSet = false;

    bool m_encipherOnly;
    bool m_encipherOnlyHasBeenSet = false;

    bool m_decipherOnly;
    bool m_decipherOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
