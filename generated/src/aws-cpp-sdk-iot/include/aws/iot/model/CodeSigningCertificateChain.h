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
    AWS_IOT_API CodeSigningCertificateChain();
    AWS_IOT_API CodeSigningCertificateChain(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CodeSigningCertificateChain& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the certificate.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }
    inline CodeSigningCertificateChain& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}
    inline CodeSigningCertificateChain& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}
    inline CodeSigningCertificateChain& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A base64 encoded binary representation of the code signing certificate
     * chain.</p>
     */
    inline const Aws::String& GetInlineDocument() const{ return m_inlineDocument; }
    inline bool InlineDocumentHasBeenSet() const { return m_inlineDocumentHasBeenSet; }
    inline void SetInlineDocument(const Aws::String& value) { m_inlineDocumentHasBeenSet = true; m_inlineDocument = value; }
    inline void SetInlineDocument(Aws::String&& value) { m_inlineDocumentHasBeenSet = true; m_inlineDocument = std::move(value); }
    inline void SetInlineDocument(const char* value) { m_inlineDocumentHasBeenSet = true; m_inlineDocument.assign(value); }
    inline CodeSigningCertificateChain& WithInlineDocument(const Aws::String& value) { SetInlineDocument(value); return *this;}
    inline CodeSigningCertificateChain& WithInlineDocument(Aws::String&& value) { SetInlineDocument(std::move(value)); return *this;}
    inline CodeSigningCertificateChain& WithInlineDocument(const char* value) { SetInlineDocument(value); return *this;}
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
