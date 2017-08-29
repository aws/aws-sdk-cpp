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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/ServiceSpecificCredential.h>
#include <aws/iam/model/ResponseMetadata.h>
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
namespace IAM
{
namespace Model
{
  class AWS_IAM_API ResetServiceSpecificCredentialResult
  {
  public:
    ResetServiceSpecificCredentialResult();
    ResetServiceSpecificCredentialResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ResetServiceSpecificCredentialResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A structure with details about the updated service-specific credential,
     * including the new password.</p> <important> <p>This is the <b>only</b> time that
     * you can access the password. You cannot recover the password later, but you can
     * reset it again.</p> </important>
     */
    inline const ServiceSpecificCredential& GetServiceSpecificCredential() const{ return m_serviceSpecificCredential; }

    /**
     * <p>A structure with details about the updated service-specific credential,
     * including the new password.</p> <important> <p>This is the <b>only</b> time that
     * you can access the password. You cannot recover the password later, but you can
     * reset it again.</p> </important>
     */
    inline void SetServiceSpecificCredential(const ServiceSpecificCredential& value) { m_serviceSpecificCredential = value; }

    /**
     * <p>A structure with details about the updated service-specific credential,
     * including the new password.</p> <important> <p>This is the <b>only</b> time that
     * you can access the password. You cannot recover the password later, but you can
     * reset it again.</p> </important>
     */
    inline void SetServiceSpecificCredential(ServiceSpecificCredential&& value) { m_serviceSpecificCredential = std::move(value); }

    /**
     * <p>A structure with details about the updated service-specific credential,
     * including the new password.</p> <important> <p>This is the <b>only</b> time that
     * you can access the password. You cannot recover the password later, but you can
     * reset it again.</p> </important>
     */
    inline ResetServiceSpecificCredentialResult& WithServiceSpecificCredential(const ServiceSpecificCredential& value) { SetServiceSpecificCredential(value); return *this;}

    /**
     * <p>A structure with details about the updated service-specific credential,
     * including the new password.</p> <important> <p>This is the <b>only</b> time that
     * you can access the password. You cannot recover the password later, but you can
     * reset it again.</p> </important>
     */
    inline ResetServiceSpecificCredentialResult& WithServiceSpecificCredential(ServiceSpecificCredential&& value) { SetServiceSpecificCredential(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ResetServiceSpecificCredentialResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ResetServiceSpecificCredentialResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ServiceSpecificCredential m_serviceSpecificCredential;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
