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
    AWS_EC2_API ModifyVpcEndpointServicePermissionsResponse();
    AWS_EC2_API ModifyVpcEndpointServicePermissionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyVpcEndpointServicePermissionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the added principals.</p>
     */
    inline const Aws::Vector<AddedPrincipal>& GetAddedPrincipals() const{ return m_addedPrincipals; }

    /**
     * <p>Information about the added principals.</p>
     */
    inline void SetAddedPrincipals(const Aws::Vector<AddedPrincipal>& value) { m_addedPrincipals = value; }

    /**
     * <p>Information about the added principals.</p>
     */
    inline void SetAddedPrincipals(Aws::Vector<AddedPrincipal>&& value) { m_addedPrincipals = std::move(value); }

    /**
     * <p>Information about the added principals.</p>
     */
    inline ModifyVpcEndpointServicePermissionsResponse& WithAddedPrincipals(const Aws::Vector<AddedPrincipal>& value) { SetAddedPrincipals(value); return *this;}

    /**
     * <p>Information about the added principals.</p>
     */
    inline ModifyVpcEndpointServicePermissionsResponse& WithAddedPrincipals(Aws::Vector<AddedPrincipal>&& value) { SetAddedPrincipals(std::move(value)); return *this;}

    /**
     * <p>Information about the added principals.</p>
     */
    inline ModifyVpcEndpointServicePermissionsResponse& AddAddedPrincipals(const AddedPrincipal& value) { m_addedPrincipals.push_back(value); return *this; }

    /**
     * <p>Information about the added principals.</p>
     */
    inline ModifyVpcEndpointServicePermissionsResponse& AddAddedPrincipals(AddedPrincipal&& value) { m_addedPrincipals.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an
     * error.</p>
     */
    inline bool GetReturnValue() const{ return m_returnValue; }

    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an
     * error.</p>
     */
    inline void SetReturnValue(bool value) { m_returnValue = value; }

    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an
     * error.</p>
     */
    inline ModifyVpcEndpointServicePermissionsResponse& WithReturnValue(bool value) { SetReturnValue(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyVpcEndpointServicePermissionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyVpcEndpointServicePermissionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<AddedPrincipal> m_addedPrincipals;

    bool m_returnValue;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
