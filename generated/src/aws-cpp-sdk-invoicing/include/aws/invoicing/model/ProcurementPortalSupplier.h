/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/ProcurementPortalEnv.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Invoicing {
namespace Model {

/**
 * <p>Contains metadata for a supplier configured within a procurement
 * portal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/ProcurementPortalSupplier">AWS
 * API Reference</a></p>
 */
class ProcurementPortalSupplier {
 public:
  AWS_INVOICING_API ProcurementPortalSupplier() = default;
  AWS_INVOICING_API ProcurementPortalSupplier(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API ProcurementPortalSupplier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the supplier within the procurement portal.</p>
   */
  inline const Aws::String& GetSupplierIdentifier() const { return m_supplierIdentifier; }
  inline bool SupplierIdentifierHasBeenSet() const { return m_supplierIdentifierHasBeenSet; }
  template <typename SupplierIdentifierT = Aws::String>
  void SetSupplierIdentifier(SupplierIdentifierT&& value) {
    m_supplierIdentifierHasBeenSet = true;
    m_supplierIdentifier = std::forward<SupplierIdentifierT>(value);
  }
  template <typename SupplierIdentifierT = Aws::String>
  ProcurementPortalSupplier& WithSupplierIdentifier(SupplierIdentifierT&& value) {
    SetSupplierIdentifier(std::forward<SupplierIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services seller of record associated with the supplier—the
   * Amazon Web Services legal entity that issues invoices for the account (for
   * example, <code>AWS_INC</code> or <code>AWS_EUROPE</code>).</p>
   */
  inline const Aws::String& GetSellerOfRecord() const { return m_sellerOfRecord; }
  inline bool SellerOfRecordHasBeenSet() const { return m_sellerOfRecordHasBeenSet; }
  template <typename SellerOfRecordT = Aws::String>
  void SetSellerOfRecord(SellerOfRecordT&& value) {
    m_sellerOfRecordHasBeenSet = true;
    m_sellerOfRecord = std::forward<SellerOfRecordT>(value);
  }
  template <typename SellerOfRecordT = Aws::String>
  ProcurementPortalSupplier& WithSellerOfRecord(SellerOfRecordT&& value) {
    SetSellerOfRecord(std::forward<SellerOfRecordT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The two-letter ISO 3166-1 alpha-2 country code associated with the
   * supplier.</p>
   */
  inline const Aws::String& GetCountryCode() const { return m_countryCode; }
  inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
  template <typename CountryCodeT = Aws::String>
  void SetCountryCode(CountryCodeT&& value) {
    m_countryCodeHasBeenSet = true;
    m_countryCode = std::forward<CountryCodeT>(value);
  }
  template <typename CountryCodeT = Aws::String>
  ProcurementPortalSupplier& WithCountryCode(CountryCodeT&& value) {
    SetCountryCode(std::forward<CountryCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment identifier for the supplier in the procurement portal. PROD
   * for production env, or TEST for sandbox/test env.</p>
   */
  inline ProcurementPortalEnv GetEnvironment() const { return m_environment; }
  inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
  inline void SetEnvironment(ProcurementPortalEnv value) {
    m_environmentHasBeenSet = true;
    m_environment = value;
  }
  inline ProcurementPortalSupplier& WithEnvironment(ProcurementPortalEnv value) {
    SetEnvironment(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_supplierIdentifier;

  Aws::String m_sellerOfRecord;

  Aws::String m_countryCode;

  ProcurementPortalEnv m_environment{ProcurementPortalEnv::NOT_SET};
  bool m_supplierIdentifierHasBeenSet = false;
  bool m_sellerOfRecordHasBeenSet = false;
  bool m_countryCodeHasBeenSet = false;
  bool m_environmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
