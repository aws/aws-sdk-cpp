/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TrunkInterfaceAssociation.h>
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
  class DescribeTrunkInterfaceAssociationsResponse
  {
  public:
    AWS_EC2_API DescribeTrunkInterfaceAssociationsResponse();
    AWS_EC2_API DescribeTrunkInterfaceAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTrunkInterfaceAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the trunk associations.</p>
     */
    inline const Aws::Vector<TrunkInterfaceAssociation>& GetInterfaceAssociations() const{ return m_interfaceAssociations; }
    inline void SetInterfaceAssociations(const Aws::Vector<TrunkInterfaceAssociation>& value) { m_interfaceAssociations = value; }
    inline void SetInterfaceAssociations(Aws::Vector<TrunkInterfaceAssociation>&& value) { m_interfaceAssociations = std::move(value); }
    inline DescribeTrunkInterfaceAssociationsResponse& WithInterfaceAssociations(const Aws::Vector<TrunkInterfaceAssociation>& value) { SetInterfaceAssociations(value); return *this;}
    inline DescribeTrunkInterfaceAssociationsResponse& WithInterfaceAssociations(Aws::Vector<TrunkInterfaceAssociation>&& value) { SetInterfaceAssociations(std::move(value)); return *this;}
    inline DescribeTrunkInterfaceAssociationsResponse& AddInterfaceAssociations(const TrunkInterfaceAssociation& value) { m_interfaceAssociations.push_back(value); return *this; }
    inline DescribeTrunkInterfaceAssociationsResponse& AddInterfaceAssociations(TrunkInterfaceAssociation&& value) { m_interfaceAssociations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeTrunkInterfaceAssociationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeTrunkInterfaceAssociationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeTrunkInterfaceAssociationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeTrunkInterfaceAssociationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeTrunkInterfaceAssociationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrunkInterfaceAssociation> m_interfaceAssociations;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
