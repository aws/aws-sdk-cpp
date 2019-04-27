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
  class AWS_IAM_API CreateServiceSpecificCredentialResult
  {
  public:
    CreateServiceSpecificCredentialResult();
    CreateServiceSpecificCredentialResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateServiceSpecificCredentialResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A structure that contains information about the newly created
     * service-specific credential.</p> <important> <p>This is the only time that the
     * password for this credential set is available. It cannot be recovered later.
     * Instead, you must reset the password with
     * <a>ResetServiceSpecificCredential</a>.</p> </important>
     */
    inline const ServiceSpecificCredential& GetServiceSpecificCredential() const{ return m_serviceSpecificCredential; }

    /**
     * <p>A structure that contains information about the newly created
     * service-specific credential.</p> <important> <p>This is the only time that the
     * password for this credential set is available. It cannot be recovered later.
     * Instead, you must reset the password with
     * <a>ResetServiceSpecificCredential</a>.</p> </important>
     */
    inline void SetServiceSpecificCredential(const ServiceSpecificCredential& value) { m_serviceSpecificCredential = value; }

    /**
     * <p>A structure that contains information about the newly created
     * service-specific credential.</p> <important> <p>This is the only time that the
     * password for this credential set is available. It cannot be recovered later.
     * Instead, you must reset the password with
     * <a>ResetServiceSpecificCredential</a>.</p> </important>
     */
    inline void SetServiceSpecificCredential(ServiceSpecificCredential&& value) { m_serviceSpecificCredential = std::move(value); }

    /**
     * <p>A structure that contains information about the newly created
     * service-specific credential.</p> <important> <p>This is the only time that the
     * password for this credential set is available. It cannot be recovered later.
     * Instead, you must reset the password with
     * <a>ResetServiceSpecificCredential</a>.</p> </important>
     */
    inline CreateServiceSpecificCredentialResult& WithServiceSpecificCredential(const ServiceSpecificCredential& value) { SetServiceSpecificCredential(value); return *this;}

    /**
     * <p>A structure that contains information about the newly created
     * service-specific credential.</p> <important> <p>This is the only time that the
     * password for this credential set is available. It cannot be recovered later.
     * Instead, you must reset the password with
     * <a>ResetServiceSpecificCredential</a>.</p> </important>
     */
    inline CreateServiceSpecificCredentialResult& WithServiceSpecificCredential(ServiceSpecificCredential&& value) { SetServiceSpecificCredential(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateServiceSpecificCredentialResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateServiceSpecificCredentialResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ServiceSpecificCredential m_serviceSpecificCredential;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
