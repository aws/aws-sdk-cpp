/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/model/Extensions.h>
#include <aws/acm-pca/model/ASN1Subject.h>
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
namespace ACMPCA
{
namespace Model
{

  /**
   * <p>Contains X.509 certificate information to be placed in an issued certificate.
   * An <code>APIPassthrough</code> or <code>APICSRPassthrough</code> template
   * variant must be selected, or else this parameter is ignored. </p> <p>If
   * conflicting or duplicate certificate information is supplied from other sources,
   * Amazon Web Services Private CA applies <a
   * href="https://docs.aws.amazon.com/privateca/latest/userguide/UsingTemplates.html#template-order-of-operations">order
   * of operation rules</a> to determine what information is used.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ApiPassthrough">AWS
   * API Reference</a></p>
   */
  class ApiPassthrough
  {
  public:
    AWS_ACMPCA_API ApiPassthrough() = default;
    AWS_ACMPCA_API ApiPassthrough(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API ApiPassthrough& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies X.509 extension information for a certificate.</p>
     */
    inline const Extensions& GetExtensions() const { return m_extensions; }
    inline bool ExtensionsHasBeenSet() const { return m_extensionsHasBeenSet; }
    template<typename ExtensionsT = Extensions>
    void SetExtensions(ExtensionsT&& value) { m_extensionsHasBeenSet = true; m_extensions = std::forward<ExtensionsT>(value); }
    template<typename ExtensionsT = Extensions>
    ApiPassthrough& WithExtensions(ExtensionsT&& value) { SetExtensions(std::forward<ExtensionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ASN1Subject& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = ASN1Subject>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = ASN1Subject>
    ApiPassthrough& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}
  private:

    Extensions m_extensions;
    bool m_extensionsHasBeenSet = false;

    ASN1Subject m_subject;
    bool m_subjectHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
