/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/AddedPrincipal.h>
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
  class ModifyVpcEndpointServicePermissionsResponse
  {
  public:
    AWS_EC2_API ModifyVpcEndpointServicePermissionsResponse() = default;
    AWS_EC2_API ModifyVpcEndpointServicePermissionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyVpcEndpointServicePermissionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the added principals.</p>
     */
    inline const Aws::Vector<AddedPrincipal>& GetAddedPrincipals() const { return m_addedPrincipals; }
    template<typename AddedPrincipalsT = Aws::Vector<AddedPrincipal>>
    void SetAddedPrincipals(AddedPrincipalsT&& value) { m_addedPrincipalsHasBeenSet = true; m_addedPrincipals = std::forward<AddedPrincipalsT>(value); }
    template<typename AddedPrincipalsT = Aws::Vector<AddedPrincipal>>
    ModifyVpcEndpointServicePermissionsResponse& WithAddedPrincipals(AddedPrincipalsT&& value) { SetAddedPrincipals(std::forward<AddedPrincipalsT>(value)); return *this;}
    template<typename AddedPrincipalsT = AddedPrincipal>
    ModifyVpcEndpointServicePermissionsResponse& AddAddedPrincipals(AddedPrincipalsT&& value) { m_addedPrincipalsHasBeenSet = true; m_addedPrincipals.emplace_back(std::forward<AddedPrincipalsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an
     * error.</p>
     */
    inline bool GetReturnValue() const { return m_returnValue; }
    inline void SetReturnValue(bool value) { m_returnValueHasBeenSet = true; m_returnValue = value; }
    inline ModifyVpcEndpointServicePermissionsResponse& WithReturnValue(bool value) { SetReturnValue(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyVpcEndpointServicePermissionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AddedPrincipal> m_addedPrincipals;
    bool m_addedPrincipalsHasBeenSet = false;

    bool m_returnValue{false};
    bool m_returnValueHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
