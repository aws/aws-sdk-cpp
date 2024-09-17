/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
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
namespace CloudFormation
{
namespace Model
{
  class RegisterTypeResult
  {
  public:
    AWS_CLOUDFORMATION_API RegisterTypeResult();
    AWS_CLOUDFORMATION_API RegisterTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API RegisterTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The identifier for this registration request.</p> <p>Use this registration
     * token when calling <a>DescribeTypeRegistration</a>, which returns information
     * about the status and IDs of the extension registration.</p>
     */
    inline const Aws::String& GetRegistrationToken() const{ return m_registrationToken; }
    inline void SetRegistrationToken(const Aws::String& value) { m_registrationToken = value; }
    inline void SetRegistrationToken(Aws::String&& value) { m_registrationToken = std::move(value); }
    inline void SetRegistrationToken(const char* value) { m_registrationToken.assign(value); }
    inline RegisterTypeResult& WithRegistrationToken(const Aws::String& value) { SetRegistrationToken(value); return *this;}
    inline RegisterTypeResult& WithRegistrationToken(Aws::String&& value) { SetRegistrationToken(std::move(value)); return *this;}
    inline RegisterTypeResult& WithRegistrationToken(const char* value) { SetRegistrationToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline RegisterTypeResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline RegisterTypeResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_registrationToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
