/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SuccessfulQueuedPurchaseDeletion.h>
#include <aws/ec2/model/FailedQueuedPurchaseDeletion.h>
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
  class DeleteQueuedReservedInstancesResponse
  {
  public:
    AWS_EC2_API DeleteQueuedReservedInstancesResponse() = default;
    AWS_EC2_API DeleteQueuedReservedInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteQueuedReservedInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the queued purchases that were successfully deleted.</p>
     */
    inline const Aws::Vector<SuccessfulQueuedPurchaseDeletion>& GetSuccessfulQueuedPurchaseDeletions() const { return m_successfulQueuedPurchaseDeletions; }
    template<typename SuccessfulQueuedPurchaseDeletionsT = Aws::Vector<SuccessfulQueuedPurchaseDeletion>>
    void SetSuccessfulQueuedPurchaseDeletions(SuccessfulQueuedPurchaseDeletionsT&& value) { m_successfulQueuedPurchaseDeletionsHasBeenSet = true; m_successfulQueuedPurchaseDeletions = std::forward<SuccessfulQueuedPurchaseDeletionsT>(value); }
    template<typename SuccessfulQueuedPurchaseDeletionsT = Aws::Vector<SuccessfulQueuedPurchaseDeletion>>
    DeleteQueuedReservedInstancesResponse& WithSuccessfulQueuedPurchaseDeletions(SuccessfulQueuedPurchaseDeletionsT&& value) { SetSuccessfulQueuedPurchaseDeletions(std::forward<SuccessfulQueuedPurchaseDeletionsT>(value)); return *this;}
    template<typename SuccessfulQueuedPurchaseDeletionsT = SuccessfulQueuedPurchaseDeletion>
    DeleteQueuedReservedInstancesResponse& AddSuccessfulQueuedPurchaseDeletions(SuccessfulQueuedPurchaseDeletionsT&& value) { m_successfulQueuedPurchaseDeletionsHasBeenSet = true; m_successfulQueuedPurchaseDeletions.emplace_back(std::forward<SuccessfulQueuedPurchaseDeletionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the queued purchases that could not be deleted.</p>
     */
    inline const Aws::Vector<FailedQueuedPurchaseDeletion>& GetFailedQueuedPurchaseDeletions() const { return m_failedQueuedPurchaseDeletions; }
    template<typename FailedQueuedPurchaseDeletionsT = Aws::Vector<FailedQueuedPurchaseDeletion>>
    void SetFailedQueuedPurchaseDeletions(FailedQueuedPurchaseDeletionsT&& value) { m_failedQueuedPurchaseDeletionsHasBeenSet = true; m_failedQueuedPurchaseDeletions = std::forward<FailedQueuedPurchaseDeletionsT>(value); }
    template<typename FailedQueuedPurchaseDeletionsT = Aws::Vector<FailedQueuedPurchaseDeletion>>
    DeleteQueuedReservedInstancesResponse& WithFailedQueuedPurchaseDeletions(FailedQueuedPurchaseDeletionsT&& value) { SetFailedQueuedPurchaseDeletions(std::forward<FailedQueuedPurchaseDeletionsT>(value)); return *this;}
    template<typename FailedQueuedPurchaseDeletionsT = FailedQueuedPurchaseDeletion>
    DeleteQueuedReservedInstancesResponse& AddFailedQueuedPurchaseDeletions(FailedQueuedPurchaseDeletionsT&& value) { m_failedQueuedPurchaseDeletionsHasBeenSet = true; m_failedQueuedPurchaseDeletions.emplace_back(std::forward<FailedQueuedPurchaseDeletionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteQueuedReservedInstancesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SuccessfulQueuedPurchaseDeletion> m_successfulQueuedPurchaseDeletions;
    bool m_successfulQueuedPurchaseDeletionsHasBeenSet = false;

    Aws::Vector<FailedQueuedPurchaseDeletion> m_failedQueuedPurchaseDeletions;
    bool m_failedQueuedPurchaseDeletionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
