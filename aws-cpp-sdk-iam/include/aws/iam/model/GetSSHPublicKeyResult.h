﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/SSHPublicKey.h>
#include <aws/iam/model/ResponseMetadata.h>

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
namespace IAM
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a>GetSSHPublicKey</a>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetSSHPublicKeyResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API GetSSHPublicKeyResult
  {
  public:
    GetSSHPublicKeyResult();
    GetSSHPublicKeyResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetSSHPublicKeyResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A structure containing details about the SSH public key.</p>
     */
    inline const SSHPublicKey& GetSSHPublicKey() const{ return m_sSHPublicKey; }

    /**
     * <p>A structure containing details about the SSH public key.</p>
     */
    inline void SetSSHPublicKey(const SSHPublicKey& value) { m_sSHPublicKey = value; }

    /**
     * <p>A structure containing details about the SSH public key.</p>
     */
    inline void SetSSHPublicKey(SSHPublicKey&& value) { m_sSHPublicKey = value; }

    /**
     * <p>A structure containing details about the SSH public key.</p>
     */
    inline GetSSHPublicKeyResult& WithSSHPublicKey(const SSHPublicKey& value) { SetSSHPublicKey(value); return *this;}

    /**
     * <p>A structure containing details about the SSH public key.</p>
     */
    inline GetSSHPublicKeyResult& WithSSHPublicKey(SSHPublicKey&& value) { SetSSHPublicKey(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetSSHPublicKeyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetSSHPublicKeyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    SSHPublicKey m_sSHPublicKey;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws