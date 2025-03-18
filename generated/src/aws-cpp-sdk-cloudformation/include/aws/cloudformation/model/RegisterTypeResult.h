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
    AWS_CLOUDFORMATION_API RegisterTypeResult() = default;
    AWS_CLOUDFORMATION_API RegisterTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API RegisterTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The identifier for this registration request.</p> <p>Use this registration
     * token when calling <a>DescribeTypeRegistration</a>, which returns information
     * about the status and IDs of the extension registration.</p>
     */
    inline const Aws::String& GetRegistrationToken() const { return m_registrationToken; }
    template<typename RegistrationTokenT = Aws::String>
    void SetRegistrationToken(RegistrationTokenT&& value) { m_registrationTokenHasBeenSet = true; m_registrationToken = std::forward<RegistrationTokenT>(value); }
    template<typename RegistrationTokenT = Aws::String>
    RegisterTypeResult& WithRegistrationToken(RegistrationTokenT&& value) { SetRegistrationToken(std::forward<RegistrationTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    RegisterTypeResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registrationToken;
    bool m_registrationTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
