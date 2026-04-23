/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API CodeSigningCertificateChain
  {
  public:
    CodeSigningCertificateChain();
    CodeSigningCertificateChain(Aws::Utils::Json::JsonView jsonValue);
    CodeSigningCertificateChain& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the certificate.</p>
     */
    inline const Aws::String& GetCertificateName() const{ return m_certificateName; }

    /**
     * <p>The name of the certificate.</p>
     */
    inline bool CertificateNameHasBeenSet() const { return m_certificateNameHasBeenSet; }

    /**
     * <p>The name of the certificate.</p>
     */
    inline void SetCertificateName(const Aws::String& value) { m_certificateNameHasBeenSet = true; m_certificateName = value; }

    /**
     * <p>The name of the certificate.</p>
     */
    inline void SetCertificateName(Aws::String&& value) { m_certificateNameHasBeenSet = true; m_certificateName = std::move(value); }

    /**
     * <p>The name of the certificate.</p>
     */
    inline void SetCertificateName(const char* value) { m_certificateNameHasBeenSet = true; m_certificateName.assign(value); }

    /**
     * <p>The name of the certificate.</p>
     */
    inline CodeSigningCertificateChain& WithCertificateName(const Aws::String& value) { SetCertificateName(value); return *this;}

    /**
     * <p>The name of the certificate.</p>
     */
    inline CodeSigningCertificateChain& WithCertificateName(Aws::String&& value) { SetCertificateName(std::move(value)); return *this;}

    /**
     * <p>The name of the certificate.</p>
     */
    inline CodeSigningCertificateChain& WithCertificateName(const char* value) { SetCertificateName(value); return *this;}


    /**
     * <p>A base64 encoded binary representation of the code signing certificate
     * chain.</p>
     */
    inline const Aws::String& GetInlineDocument() const{ return m_inlineDocument; }

    /**
     * <p>A base64 encoded binary representation of the code signing certificate
     * chain.</p>
     */
    inline bool InlineDocumentHasBeenSet() const { return m_inlineDocumentHasBeenSet; }

    /**
     * <p>A base64 encoded binary representation of the code signing certificate
     * chain.</p>
     */
    inline void SetInlineDocument(const Aws::String& value) { m_inlineDocumentHasBeenSet = true; m_inlineDocument = value; }

    /**
     * <p>A base64 encoded binary representation of the code signing certificate
     * chain.</p>
     */
    inline void SetInlineDocument(Aws::String&& value) { m_inlineDocumentHasBeenSet = true; m_inlineDocument = std::move(value); }

    /**
     * <p>A base64 encoded binary representation of the code signing certificate
     * chain.</p>
     */
    inline void SetInlineDocument(const char* value) { m_inlineDocumentHasBeenSet = true; m_inlineDocument.assign(value); }

    /**
     * <p>A base64 encoded binary representation of the code signing certificate
     * chain.</p>
     */
    inline CodeSigningCertificateChain& WithInlineDocument(const Aws::String& value) { SetInlineDocument(value); return *this;}

    /**
     * <p>A base64 encoded binary representation of the code signing certificate
     * chain.</p>
     */
    inline CodeSigningCertificateChain& WithInlineDocument(Aws::String&& value) { SetInlineDocument(std::move(value)); return *this;}

    /**
     * <p>A base64 encoded binary representation of the code signing certificate
     * chain.</p>
     */
    inline CodeSigningCertificateChain& WithInlineDocument(const char* value) { SetInlineDocument(value); return *this;}

  private:

    Aws::String m_certificateName;
    bool m_certificateNameHasBeenSet;

    Aws::String m_inlineDocument;
    bool m_inlineDocumentHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
