/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SuccessfulInstanceCreditSpecificationItem.h>
#include <aws/ec2/model/UnsuccessfulInstanceCreditSpecificationItem.h>
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
  class ModifyInstanceCreditSpecificationResponse
  {
  public:
    AWS_EC2_API ModifyInstanceCreditSpecificationResponse() = default;
    AWS_EC2_API ModifyInstanceCreditSpecificationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyInstanceCreditSpecificationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the instances whose credit option for CPU usage was
     * successfully modified.</p>
     */
    inline const Aws::Vector<SuccessfulInstanceCreditSpecificationItem>& GetSuccessfulInstanceCreditSpecifications() const { return m_successfulInstanceCreditSpecifications; }
    template<typename SuccessfulInstanceCreditSpecificationsT = Aws::Vector<SuccessfulInstanceCreditSpecificationItem>>
    void SetSuccessfulInstanceCreditSpecifications(SuccessfulInstanceCreditSpecificationsT&& value) { m_successfulInstanceCreditSpecificationsHasBeenSet = true; m_successfulInstanceCreditSpecifications = std::forward<SuccessfulInstanceCreditSpecificationsT>(value); }
    template<typename SuccessfulInstanceCreditSpecificationsT = Aws::Vector<SuccessfulInstanceCreditSpecificationItem>>
    ModifyInstanceCreditSpecificationResponse& WithSuccessfulInstanceCreditSpecifications(SuccessfulInstanceCreditSpecificationsT&& value) { SetSuccessfulInstanceCreditSpecifications(std::forward<SuccessfulInstanceCreditSpecificationsT>(value)); return *this;}
    template<typename SuccessfulInstanceCreditSpecificationsT = SuccessfulInstanceCreditSpecificationItem>
    ModifyInstanceCreditSpecificationResponse& AddSuccessfulInstanceCreditSpecifications(SuccessfulInstanceCreditSpecificationsT&& value) { m_successfulInstanceCreditSpecificationsHasBeenSet = true; m_successfulInstanceCreditSpecifications.emplace_back(std::forward<SuccessfulInstanceCreditSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the instances whose credit option for CPU usage was not
     * modified.</p>
     */
    inline const Aws::Vector<UnsuccessfulInstanceCreditSpecificationItem>& GetUnsuccessfulInstanceCreditSpecifications() const { return m_unsuccessfulInstanceCreditSpecifications; }
    template<typename UnsuccessfulInstanceCreditSpecificationsT = Aws::Vector<UnsuccessfulInstanceCreditSpecificationItem>>
    void SetUnsuccessfulInstanceCreditSpecifications(UnsuccessfulInstanceCreditSpecificationsT&& value) { m_unsuccessfulInstanceCreditSpecificationsHasBeenSet = true; m_unsuccessfulInstanceCreditSpecifications = std::forward<UnsuccessfulInstanceCreditSpecificationsT>(value); }
    template<typename UnsuccessfulInstanceCreditSpecificationsT = Aws::Vector<UnsuccessfulInstanceCreditSpecificationItem>>
    ModifyInstanceCreditSpecificationResponse& WithUnsuccessfulInstanceCreditSpecifications(UnsuccessfulInstanceCreditSpecificationsT&& value) { SetUnsuccessfulInstanceCreditSpecifications(std::forward<UnsuccessfulInstanceCreditSpecificationsT>(value)); return *this;}
    template<typename UnsuccessfulInstanceCreditSpecificationsT = UnsuccessfulInstanceCreditSpecificationItem>
    ModifyInstanceCreditSpecificationResponse& AddUnsuccessfulInstanceCreditSpecifications(UnsuccessfulInstanceCreditSpecificationsT&& value) { m_unsuccessfulInstanceCreditSpecificationsHasBeenSet = true; m_unsuccessfulInstanceCreditSpecifications.emplace_back(std::forward<UnsuccessfulInstanceCreditSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyInstanceCreditSpecificationResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SuccessfulInstanceCreditSpecificationItem> m_successfulInstanceCreditSpecifications;
    bool m_successfulInstanceCreditSpecificationsHasBeenSet = false;

    Aws::Vector<UnsuccessfulInstanceCreditSpecificationItem> m_unsuccessfulInstanceCreditSpecifications;
    bool m_unsuccessfulInstanceCreditSpecificationsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
