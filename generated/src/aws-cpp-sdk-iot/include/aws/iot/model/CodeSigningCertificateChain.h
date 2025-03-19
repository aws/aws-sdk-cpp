/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes the certificate chain being used when code signing a
   * file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CodeSigningCertificateChain">AWS
   * API Reference</a></p>
   */
  class CodeSigningCertificateChain
  {
  public:
    AWS_IOT_API CodeSigningCertificateChain() = default;
    AWS_IOT_API CodeSigningCertificateChain(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CodeSigningCertificateChain& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the certificate.</p>
     */
    inline const Aws::String& GetCertificateName() const { return m_certificateName; }
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }
    template<typename CertificateNameT = Aws::String>
    void SetCertificateName(CertificateNameT&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::forward<CertificateNameT>(value); }
    template<typename CertificateNameT = Aws::String>
    CodeSigningCertificateChain& WithCertificateName(CertificateNameT&& value) { SetCertificateName(std::forward<CertificateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A base64 encoded binary representation of the code signing certificate
     * chain.</p>
     */
    inline const Aws::String& GetInlineDocument() const { return m_inlineDocument; }
    inline bool InlineDocumentHasBeenSet() const { return m_inlineDocumentHasBeenSet; }
    template<typename InlineDocumentT = Aws::String>
    void SetInlineDocument(InlineDocumentT&& value) { m_inlineDocumentHasBeenSet = true; m_inlineDocument = std::forward<InlineDocumentT>(value); }
    template<typename InlineDocumentT = Aws::String>
    CodeSigningCertificateChain& WithInlineDocument(InlineDocumentT&& value) { SetInlineDocument(std::forward<InlineDocumentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet = false;

    Aws::String m_inlineDocument;
    bool m_inlineDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
