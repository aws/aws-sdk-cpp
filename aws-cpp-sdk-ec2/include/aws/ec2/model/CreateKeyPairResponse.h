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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Describes a key pair.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/KeyPair">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API CreateKeyPairResponse
  {
  public:
    CreateKeyPairResponse();
    CreateKeyPairResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateKeyPairResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The SHA-1 digest of the DER encoded private key.</p>
     */
    inline const Aws::String& GetKeyFingerprint() const{ return m_keyFingerprint; }

    /**
     * <p>The SHA-1 digest of the DER encoded private key.</p>
     */
    inline void SetKeyFingerprint(const Aws::String& value) { m_keyFingerprint = value; }

    /**
     * <p>The SHA-1 digest of the DER encoded private key.</p>
     */
    inline void SetKeyFingerprint(Aws::String&& value) { m_keyFingerprint = std::move(value); }

    /**
     * <p>The SHA-1 digest of the DER encoded private key.</p>
     */
    inline void SetKeyFingerprint(const char* value) { m_keyFingerprint.assign(value); }

    /**
     * <p>The SHA-1 digest of the DER encoded private key.</p>
     */
    inline CreateKeyPairResponse& WithKeyFingerprint(const Aws::String& value) { SetKeyFingerprint(value); return *this;}

    /**
     * <p>The SHA-1 digest of the DER encoded private key.</p>
     */
    inline CreateKeyPairResponse& WithKeyFingerprint(Aws::String&& value) { SetKeyFingerprint(std::move(value)); return *this;}

    /**
     * <p>The SHA-1 digest of the DER encoded private key.</p>
     */
    inline CreateKeyPairResponse& WithKeyFingerprint(const char* value) { SetKeyFingerprint(value); return *this;}


    /**
     * <p>An unencrypted PEM encoded RSA private key.</p>
     */
    inline const Aws::String& GetKeyMaterial() const{ return m_keyMaterial; }

    /**
     * <p>An unencrypted PEM encoded RSA private key.</p>
     */
    inline void SetKeyMaterial(const Aws::String& value) { m_keyMaterial = value; }

    /**
     * <p>An unencrypted PEM encoded RSA private key.</p>
     */
    inline void SetKeyMaterial(Aws::String&& value) { m_keyMaterial = std::move(value); }

    /**
     * <p>An unencrypted PEM encoded RSA private key.</p>
     */
    inline void SetKeyMaterial(const char* value) { m_keyMaterial.assign(value); }

    /**
     * <p>An unencrypted PEM encoded RSA private key.</p>
     */
    inline CreateKeyPairResponse& WithKeyMaterial(const Aws::String& value) { SetKeyMaterial(value); return *this;}

    /**
     * <p>An unencrypted PEM encoded RSA private key.</p>
     */
    inline CreateKeyPairResponse& WithKeyMaterial(Aws::String&& value) { SetKeyMaterial(std::move(value)); return *this;}

    /**
     * <p>An unencrypted PEM encoded RSA private key.</p>
     */
    inline CreateKeyPairResponse& WithKeyMaterial(const char* value) { SetKeyMaterial(value); return *this;}


    /**
     * <p>The name of the key pair.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the key pair.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyName = value; }

    /**
     * <p>The name of the key pair.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyName = std::move(value); }

    /**
     * <p>The name of the key pair.</p>
     */
    inline void SetKeyName(const char* value) { m_keyName.assign(value); }

    /**
     * <p>The name of the key pair.</p>
     */
    inline CreateKeyPairResponse& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline CreateKeyPairResponse& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the key pair.</p>
     */
    inline CreateKeyPairResponse& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateKeyPairResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateKeyPairResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_keyFingerprint;

    Aws::String m_keyMaterial;

    Aws::String m_keyName;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
