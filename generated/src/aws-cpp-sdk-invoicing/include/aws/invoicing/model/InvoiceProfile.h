/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/model/ReceiverAddress.h>
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
namespace Invoicing
{
namespace Model
{

  /**
   * <p> Contains high-level information about the invoice receiver. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/InvoiceProfile">AWS
   * API Reference</a></p>
   */
  class InvoiceProfile
  {
  public:
    AWS_INVOICING_API InvoiceProfile();
    AWS_INVOICING_API InvoiceProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API InvoiceProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The account ID the invoice profile is generated for. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline InvoiceProfile& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline InvoiceProfile& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline InvoiceProfile& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the person receiving the invoice profile. </p>
     */
    inline const Aws::String& GetReceiverName() const{ return m_receiverName; }
    inline bool ReceiverNameHasBeenSet() const { return m_receiverNameHasBeenSet; }
    inline void SetReceiverName(const Aws::String& value) { m_receiverNameHasBeenSet = true; m_receiverName = value; }
    inline void SetReceiverName(Aws::String&& value) { m_receiverNameHasBeenSet = true; m_receiverName = std::move(value); }
    inline void SetReceiverName(const char* value) { m_receiverNameHasBeenSet = true; m_receiverName.assign(value); }
    inline InvoiceProfile& WithReceiverName(const Aws::String& value) { SetReceiverName(value); return *this;}
    inline InvoiceProfile& WithReceiverName(Aws::String&& value) { SetReceiverName(std::move(value)); return *this;}
    inline InvoiceProfile& WithReceiverName(const char* value) { SetReceiverName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address of the receiver that will be printed on the invoice. </p>
     */
    inline const ReceiverAddress& GetReceiverAddress() const{ return m_receiverAddress; }
    inline bool ReceiverAddressHasBeenSet() const { return m_receiverAddressHasBeenSet; }
    inline void SetReceiverAddress(const ReceiverAddress& value) { m_receiverAddressHasBeenSet = true; m_receiverAddress = value; }
    inline void SetReceiverAddress(ReceiverAddress&& value) { m_receiverAddressHasBeenSet = true; m_receiverAddress = std::move(value); }
    inline InvoiceProfile& WithReceiverAddress(const ReceiverAddress& value) { SetReceiverAddress(value); return *this;}
    inline InvoiceProfile& WithReceiverAddress(ReceiverAddress&& value) { SetReceiverAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address for the invoice profile receiver. </p>
     */
    inline const Aws::String& GetReceiverEmail() const{ return m_receiverEmail; }
    inline bool ReceiverEmailHasBeenSet() const { return m_receiverEmailHasBeenSet; }
    inline void SetReceiverEmail(const Aws::String& value) { m_receiverEmailHasBeenSet = true; m_receiverEmail = value; }
    inline void SetReceiverEmail(Aws::String&& value) { m_receiverEmailHasBeenSet = true; m_receiverEmail = std::move(value); }
    inline void SetReceiverEmail(const char* value) { m_receiverEmailHasBeenSet = true; m_receiverEmail.assign(value); }
    inline InvoiceProfile& WithReceiverEmail(const Aws::String& value) { SetReceiverEmail(value); return *this;}
    inline InvoiceProfile& WithReceiverEmail(Aws::String&& value) { SetReceiverEmail(std::move(value)); return *this;}
    inline InvoiceProfile& WithReceiverEmail(const char* value) { SetReceiverEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> This specifies the issuing entity of the invoice. </p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }
    inline InvoiceProfile& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}
    inline InvoiceProfile& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}
    inline InvoiceProfile& WithIssuer(const char* value) { SetIssuer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Your Tax Registration Number (TRN) information. </p>
     */
    inline const Aws::String& GetTaxRegistrationNumber() const{ return m_taxRegistrationNumber; }
    inline bool TaxRegistrationNumberHasBeenSet() const { return m_taxRegistrationNumberHasBeenSet; }
    inline void SetTaxRegistrationNumber(const Aws::String& value) { m_taxRegistrationNumberHasBeenSet = true; m_taxRegistrationNumber = value; }
    inline void SetTaxRegistrationNumber(Aws::String&& value) { m_taxRegistrationNumberHasBeenSet = true; m_taxRegistrationNumber = std::move(value); }
    inline void SetTaxRegistrationNumber(const char* value) { m_taxRegistrationNumberHasBeenSet = true; m_taxRegistrationNumber.assign(value); }
    inline InvoiceProfile& WithTaxRegistrationNumber(const Aws::String& value) { SetTaxRegistrationNumber(value); return *this;}
    inline InvoiceProfile& WithTaxRegistrationNumber(Aws::String&& value) { SetTaxRegistrationNumber(std::move(value)); return *this;}
    inline InvoiceProfile& WithTaxRegistrationNumber(const char* value) { SetTaxRegistrationNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_receiverName;
    bool m_receiverNameHasBeenSet = false;

    ReceiverAddress m_receiverAddress;
    bool m_receiverAddressHasBeenSet = false;

    Aws::String m_receiverEmail;
    bool m_receiverEmailHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_taxRegistrationNumber;
    bool m_taxRegistrationNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Invoicing
} // namespace Aws
