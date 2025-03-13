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
    AWS_EC2_API DescribeTrunkInterfaceAssociationsResponse() = default;
    AWS_EC2_API DescribeTrunkInterfaceAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTrunkInterfaceAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the trunk associations.</p>
     */
    inline const Aws::Vector<TrunkInterfaceAssociation>& GetInterfaceAssociations() const { return m_interfaceAssociations; }
    template<typename InterfaceAssociationsT = Aws::Vector<TrunkInterfaceAssociation>>
    void SetInterfaceAssociations(InterfaceAssociationsT&& value) { m_interfaceAssociationsHasBeenSet = true; m_interfaceAssociations = std::forward<InterfaceAssociationsT>(value); }
    template<typename InterfaceAssociationsT = Aws::Vector<TrunkInterfaceAssociation>>
    DescribeTrunkInterfaceAssociationsResponse& WithInterfaceAssociations(InterfaceAssociationsT&& value) { SetInterfaceAssociations(std::forward<InterfaceAssociationsT>(value)); return *this;}
    template<typename InterfaceAssociationsT = TrunkInterfaceAssociation>
    DescribeTrunkInterfaceAssociationsResponse& AddInterfaceAssociations(InterfaceAssociationsT&& value) { m_interfaceAssociationsHasBeenSet = true; m_interfaceAssociations.emplace_back(std::forward<InterfaceAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeTrunkInterfaceAssociationsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTrunkInterfaceAssociationsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrunkInterfaceAssociation> m_interfaceAssociations;
    bool m_interfaceAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
