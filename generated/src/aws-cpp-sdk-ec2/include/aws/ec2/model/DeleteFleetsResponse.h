/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/DeleteFleetSuccessItem.h>
#include <aws/ec2/model/DeleteFleetErrorItem.h>
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
  class DeleteFleetsResponse
  {
  public:
    AWS_EC2_API DeleteFleetsResponse() = default;
    AWS_EC2_API DeleteFleetsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteFleetsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the EC2 Fleets that are successfully deleted.</p>
     */
    inline const Aws::Vector<DeleteFleetSuccessItem>& GetSuccessfulFleetDeletions() const { return m_successfulFleetDeletions; }
    template<typename SuccessfulFleetDeletionsT = Aws::Vector<DeleteFleetSuccessItem>>
    void SetSuccessfulFleetDeletions(SuccessfulFleetDeletionsT&& value) { m_successfulFleetDeletionsHasBeenSet = true; m_successfulFleetDeletions = std::forward<SuccessfulFleetDeletionsT>(value); }
    template<typename SuccessfulFleetDeletionsT = Aws::Vector<DeleteFleetSuccessItem>>
    DeleteFleetsResponse& WithSuccessfulFleetDeletions(SuccessfulFleetDeletionsT&& value) { SetSuccessfulFleetDeletions(std::forward<SuccessfulFleetDeletionsT>(value)); return *this;}
    template<typename SuccessfulFleetDeletionsT = DeleteFleetSuccessItem>
    DeleteFleetsResponse& AddSuccessfulFleetDeletions(SuccessfulFleetDeletionsT&& value) { m_successfulFleetDeletionsHasBeenSet = true; m_successfulFleetDeletions.emplace_back(std::forward<SuccessfulFleetDeletionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the EC2 Fleets that are not successfully deleted.</p>
     */
    inline const Aws::Vector<DeleteFleetErrorItem>& GetUnsuccessfulFleetDeletions() const { return m_unsuccessfulFleetDeletions; }
    template<typename UnsuccessfulFleetDeletionsT = Aws::Vector<DeleteFleetErrorItem>>
    void SetUnsuccessfulFleetDeletions(UnsuccessfulFleetDeletionsT&& value) { m_unsuccessfulFleetDeletionsHasBeenSet = true; m_unsuccessfulFleetDeletions = std::forward<UnsuccessfulFleetDeletionsT>(value); }
    template<typename UnsuccessfulFleetDeletionsT = Aws::Vector<DeleteFleetErrorItem>>
    DeleteFleetsResponse& WithUnsuccessfulFleetDeletions(UnsuccessfulFleetDeletionsT&& value) { SetUnsuccessfulFleetDeletions(std::forward<UnsuccessfulFleetDeletionsT>(value)); return *this;}
    template<typename UnsuccessfulFleetDeletionsT = DeleteFleetErrorItem>
    DeleteFleetsResponse& AddUnsuccessfulFleetDeletions(UnsuccessfulFleetDeletionsT&& value) { m_unsuccessfulFleetDeletionsHasBeenSet = true; m_unsuccessfulFleetDeletions.emplace_back(std::forward<UnsuccessfulFleetDeletionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteFleetsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeleteFleetSuccessItem> m_successfulFleetDeletions;
    bool m_successfulFleetDeletionsHasBeenSet = false;

    Aws::Vector<DeleteFleetErrorItem> m_unsuccessfulFleetDeletions;
    bool m_unsuccessfulFleetDeletionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
