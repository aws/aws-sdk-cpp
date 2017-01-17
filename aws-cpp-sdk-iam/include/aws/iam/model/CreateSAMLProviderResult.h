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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains the response to a successful <a>CreateSAMLProvider</a> request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateSAMLProviderResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API CreateSAMLProviderResult
  {
  public:
    CreateSAMLProviderResult();
    CreateSAMLProviderResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateSAMLProviderResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The Amazon Resource Name (ARN) of the new SAML provider resource in IAM.</p>
     */
    inline const Aws::String& GetSAMLProviderArn() const{ return m_sAMLProviderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new SAML provider resource in IAM.</p>
     */
    inline void SetSAMLProviderArn(const Aws::String& value) { m_sAMLProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new SAML provider resource in IAM.</p>
     */
    inline void SetSAMLProviderArn(Aws::String&& value) { m_sAMLProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new SAML provider resource in IAM.</p>
     */
    inline void SetSAMLProviderArn(const char* value) { m_sAMLProviderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new SAML provider resource in IAM.</p>
     */
    inline CreateSAMLProviderResult& WithSAMLProviderArn(const Aws::String& value) { SetSAMLProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new SAML provider resource in IAM.</p>
     */
    inline CreateSAMLProviderResult& WithSAMLProviderArn(Aws::String&& value) { SetSAMLProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new SAML provider resource in IAM.</p>
     */
    inline CreateSAMLProviderResult& WithSAMLProviderArn(const char* value) { SetSAMLProviderArn(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CreateSAMLProviderResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateSAMLProviderResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_sAMLProviderArn;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws