/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/CertificateExport.h>
#include <aws/acm/model/ValidationMethod.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {

/**
 * <p>Structure that contains options for your certificate. You can use this
 * structure to change the domain validation method or specify whether to export
 * your certificate.</p> <p>All public certificates are recorded in a certificate
 * transparency log. For general information, see <a
 * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-concepts.html#concept-transparency">Certificate
 * Transparency Logging</a>.</p> <p>You can export public ACM certificates to use
 * with Amazon Web Services services as well as outside Amazon Web Services Cloud.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-exportable-certificates.html">Certificate
 * Manager exportable public certificate</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/CertificateOptions">AWS
 * API Reference</a></p>
 */
class CertificateOptions {
 public:
  AWS_ACM_API CertificateOptions() = default;
  AWS_ACM_API CertificateOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API CertificateOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>You can opt in to allow the export of your certificates by specifying
   * <code>ENABLED</code>. You cannot update the value of <code>Export</code> after
   * the the certificate is created.</p>
   */
  inline CertificateExport GetExport() const { return m_export; }
  inline bool ExportHasBeenSet() const { return m_exportHasBeenSet; }
  inline void SetExport(CertificateExport value) {
    m_exportHasBeenSet = true;
    m_export = value;
  }
  inline CertificateOptions& WithExport(CertificateExport value) {
    SetExport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain validation method for the certificate. To migrate from email to
   * DNS validation, specify <code>DNS</code>.</p>
   */
  inline ValidationMethod GetValidationMethod() const { return m_validationMethod; }
  inline bool ValidationMethodHasBeenSet() const { return m_validationMethodHasBeenSet; }
  inline void SetValidationMethod(ValidationMethod value) {
    m_validationMethodHasBeenSet = true;
    m_validationMethod = value;
  }
  inline CertificateOptions& WithValidationMethod(ValidationMethod value) {
    SetValidationMethod(value);
    return *this;
  }
  ///@}
 private:
  CertificateExport m_export{CertificateExport::NOT_SET};

  ValidationMethod m_validationMethod{ValidationMethod::NOT_SET};
  bool m_exportHasBeenSet = false;
  bool m_validationMethodHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
