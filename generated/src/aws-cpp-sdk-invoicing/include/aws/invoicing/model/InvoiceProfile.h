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
    AWS_INVOICING_API InvoiceProfile() = default;
    AWS_INVOICING_API InvoiceProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API InvoiceProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The account ID the invoice profile is generated for. </p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    InvoiceProfile& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the person receiving the invoice profile. </p>
     */
    inline const Aws::String& GetReceiverName() const { return m_receiverName; }
    inline bool ReceiverNameHasBeenSet() const { return m_receiverNameHasBeenSet; }
    template<typename ReceiverNameT = Aws::String>
    void SetReceiverName(ReceiverNameT&& value) { m_receiverNameHasBeenSet = true; m_receiverName = std::forward<ReceiverNameT>(value); }
    template<typename ReceiverNameT = Aws::String>
    InvoiceProfile& WithReceiverName(ReceiverNameT&& value) { SetReceiverName(std::forward<ReceiverNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address of the receiver that will be printed on the invoice. </p>
     */
    inline const ReceiverAddress& GetReceiverAddress() const { return m_receiverAddress; }
    inline bool ReceiverAddressHasBeenSet() const { return m_receiverAddressHasBeenSet; }
    template<typename ReceiverAddressT = ReceiverAddress>
    void SetReceiverAddress(ReceiverAddressT&& value) { m_receiverAddressHasBeenSet = true; m_receiverAddress = std::forward<ReceiverAddressT>(value); }
    template<typename ReceiverAddressT = ReceiverAddress>
    InvoiceProfile& WithReceiverAddress(ReceiverAddressT&& value) { SetReceiverAddress(std::forward<ReceiverAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address for the invoice profile receiver. </p>
     */
    inline const Aws::String& GetReceiverEmail() const { return m_receiverEmail; }
    inline bool ReceiverEmailHasBeenSet() const { return m_receiverEmailHasBeenSet; }
    template<typename ReceiverEmailT = Aws::String>
    void SetReceiverEmail(ReceiverEmailT&& value) { m_receiverEmailHasBeenSet = true; m_receiverEmail = std::forward<ReceiverEmailT>(value); }
    template<typename ReceiverEmailT = Aws::String>
    InvoiceProfile& WithReceiverEmail(ReceiverEmailT&& value) { SetReceiverEmail(std::forward<ReceiverEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> This specifies the issuing entity of the invoice. </p>
     */
    inline const Aws::String& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = Aws::String>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Aws::String>
    InvoiceProfile& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Your Tax Registration Number (TRN) information. </p>
     */
    inline const Aws::String& GetTaxRegistrationNumber() const { return m_taxRegistrationNumber; }
    inline bool TaxRegistrationNumberHasBeenSet() const { return m_taxRegistrationNumberHasBeenSet; }
    template<typename TaxRegistrationNumberT = Aws::String>
    void SetTaxRegistrationNumber(TaxRegistrationNumberT&& value) { m_taxRegistrationNumberHasBeenSet = true; m_taxRegistrationNumber = std::forward<TaxRegistrationNumberT>(value); }
    template<typename TaxRegistrationNumberT = Aws::String>
    InvoiceProfile& WithTaxRegistrationNumber(TaxRegistrationNumberT&& value) { SetTaxRegistrationNumber(std::forward<TaxRegistrationNumberT>(value)); return *this;}
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
