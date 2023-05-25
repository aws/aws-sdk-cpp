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
    AWS_EC2_API DeleteFleetsResponse();
    AWS_EC2_API DeleteFleetsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteFleetsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the EC2 Fleets that are successfully deleted.</p>
     */
    inline const Aws::Vector<DeleteFleetSuccessItem>& GetSuccessfulFleetDeletions() const{ return m_successfulFleetDeletions; }

    /**
     * <p>Information about the EC2 Fleets that are successfully deleted.</p>
     */
    inline void SetSuccessfulFleetDeletions(const Aws::Vector<DeleteFleetSuccessItem>& value) { m_successfulFleetDeletions = value; }

    /**
     * <p>Information about the EC2 Fleets that are successfully deleted.</p>
     */
    inline void SetSuccessfulFleetDeletions(Aws::Vector<DeleteFleetSuccessItem>&& value) { m_successfulFleetDeletions = std::move(value); }

    /**
     * <p>Information about the EC2 Fleets that are successfully deleted.</p>
     */
    inline DeleteFleetsResponse& WithSuccessfulFleetDeletions(const Aws::Vector<DeleteFleetSuccessItem>& value) { SetSuccessfulFleetDeletions(value); return *this;}

    /**
     * <p>Information about the EC2 Fleets that are successfully deleted.</p>
     */
    inline DeleteFleetsResponse& WithSuccessfulFleetDeletions(Aws::Vector<DeleteFleetSuccessItem>&& value) { SetSuccessfulFleetDeletions(std::move(value)); return *this;}

    /**
     * <p>Information about the EC2 Fleets that are successfully deleted.</p>
     */
    inline DeleteFleetsResponse& AddSuccessfulFleetDeletions(const DeleteFleetSuccessItem& value) { m_successfulFleetDeletions.push_back(value); return *this; }

    /**
     * <p>Information about the EC2 Fleets that are successfully deleted.</p>
     */
    inline DeleteFleetsResponse& AddSuccessfulFleetDeletions(DeleteFleetSuccessItem&& value) { m_successfulFleetDeletions.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the EC2 Fleets that are not successfully deleted.</p>
     */
    inline const Aws::Vector<DeleteFleetErrorItem>& GetUnsuccessfulFleetDeletions() const{ return m_unsuccessfulFleetDeletions; }

    /**
     * <p>Information about the EC2 Fleets that are not successfully deleted.</p>
     */
    inline void SetUnsuccessfulFleetDeletions(const Aws::Vector<DeleteFleetErrorItem>& value) { m_unsuccessfulFleetDeletions = value; }

    /**
     * <p>Information about the EC2 Fleets that are not successfully deleted.</p>
     */
    inline void SetUnsuccessfulFleetDeletions(Aws::Vector<DeleteFleetErrorItem>&& value) { m_unsuccessfulFleetDeletions = std::move(value); }

    /**
     * <p>Information about the EC2 Fleets that are not successfully deleted.</p>
     */
    inline DeleteFleetsResponse& WithUnsuccessfulFleetDeletions(const Aws::Vector<DeleteFleetErrorItem>& value) { SetUnsuccessfulFleetDeletions(value); return *this;}

    /**
     * <p>Information about the EC2 Fleets that are not successfully deleted.</p>
     */
    inline DeleteFleetsResponse& WithUnsuccessfulFleetDeletions(Aws::Vector<DeleteFleetErrorItem>&& value) { SetUnsuccessfulFleetDeletions(std::move(value)); return *this;}

    /**
     * <p>Information about the EC2 Fleets that are not successfully deleted.</p>
     */
    inline DeleteFleetsResponse& AddUnsuccessfulFleetDeletions(const DeleteFleetErrorItem& value) { m_unsuccessfulFleetDeletions.push_back(value); return *this; }

    /**
     * <p>Information about the EC2 Fleets that are not successfully deleted.</p>
     */
    inline DeleteFleetsResponse& AddUnsuccessfulFleetDeletions(DeleteFleetErrorItem&& value) { m_unsuccessfulFleetDeletions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteFleetsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteFleetsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DeleteFleetSuccessItem> m_successfulFleetDeletions;

    Aws::Vector<DeleteFleetErrorItem> m_unsuccessfulFleetDeletions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
