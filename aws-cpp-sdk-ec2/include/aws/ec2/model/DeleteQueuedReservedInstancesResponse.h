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
    AWS_EC2_API DeleteQueuedReservedInstancesResponse();
    AWS_EC2_API DeleteQueuedReservedInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteQueuedReservedInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the queued purchases that were successfully deleted.</p>
     */
    inline const Aws::Vector<SuccessfulQueuedPurchaseDeletion>& GetSuccessfulQueuedPurchaseDeletions() const{ return m_successfulQueuedPurchaseDeletions; }

    /**
     * <p>Information about the queued purchases that were successfully deleted.</p>
     */
    inline void SetSuccessfulQueuedPurchaseDeletions(const Aws::Vector<SuccessfulQueuedPurchaseDeletion>& value) { m_successfulQueuedPurchaseDeletions = value; }

    /**
     * <p>Information about the queued purchases that were successfully deleted.</p>
     */
    inline void SetSuccessfulQueuedPurchaseDeletions(Aws::Vector<SuccessfulQueuedPurchaseDeletion>&& value) { m_successfulQueuedPurchaseDeletions = std::move(value); }

    /**
     * <p>Information about the queued purchases that were successfully deleted.</p>
     */
    inline DeleteQueuedReservedInstancesResponse& WithSuccessfulQueuedPurchaseDeletions(const Aws::Vector<SuccessfulQueuedPurchaseDeletion>& value) { SetSuccessfulQueuedPurchaseDeletions(value); return *this;}

    /**
     * <p>Information about the queued purchases that were successfully deleted.</p>
     */
    inline DeleteQueuedReservedInstancesResponse& WithSuccessfulQueuedPurchaseDeletions(Aws::Vector<SuccessfulQueuedPurchaseDeletion>&& value) { SetSuccessfulQueuedPurchaseDeletions(std::move(value)); return *this;}

    /**
     * <p>Information about the queued purchases that were successfully deleted.</p>
     */
    inline DeleteQueuedReservedInstancesResponse& AddSuccessfulQueuedPurchaseDeletions(const SuccessfulQueuedPurchaseDeletion& value) { m_successfulQueuedPurchaseDeletions.push_back(value); return *this; }

    /**
     * <p>Information about the queued purchases that were successfully deleted.</p>
     */
    inline DeleteQueuedReservedInstancesResponse& AddSuccessfulQueuedPurchaseDeletions(SuccessfulQueuedPurchaseDeletion&& value) { m_successfulQueuedPurchaseDeletions.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the queued purchases that could not be deleted.</p>
     */
    inline const Aws::Vector<FailedQueuedPurchaseDeletion>& GetFailedQueuedPurchaseDeletions() const{ return m_failedQueuedPurchaseDeletions; }

    /**
     * <p>Information about the queued purchases that could not be deleted.</p>
     */
    inline void SetFailedQueuedPurchaseDeletions(const Aws::Vector<FailedQueuedPurchaseDeletion>& value) { m_failedQueuedPurchaseDeletions = value; }

    /**
     * <p>Information about the queued purchases that could not be deleted.</p>
     */
    inline void SetFailedQueuedPurchaseDeletions(Aws::Vector<FailedQueuedPurchaseDeletion>&& value) { m_failedQueuedPurchaseDeletions = std::move(value); }

    /**
     * <p>Information about the queued purchases that could not be deleted.</p>
     */
    inline DeleteQueuedReservedInstancesResponse& WithFailedQueuedPurchaseDeletions(const Aws::Vector<FailedQueuedPurchaseDeletion>& value) { SetFailedQueuedPurchaseDeletions(value); return *this;}

    /**
     * <p>Information about the queued purchases that could not be deleted.</p>
     */
    inline DeleteQueuedReservedInstancesResponse& WithFailedQueuedPurchaseDeletions(Aws::Vector<FailedQueuedPurchaseDeletion>&& value) { SetFailedQueuedPurchaseDeletions(std::move(value)); return *this;}

    /**
     * <p>Information about the queued purchases that could not be deleted.</p>
     */
    inline DeleteQueuedReservedInstancesResponse& AddFailedQueuedPurchaseDeletions(const FailedQueuedPurchaseDeletion& value) { m_failedQueuedPurchaseDeletions.push_back(value); return *this; }

    /**
     * <p>Information about the queued purchases that could not be deleted.</p>
     */
    inline DeleteQueuedReservedInstancesResponse& AddFailedQueuedPurchaseDeletions(FailedQueuedPurchaseDeletion&& value) { m_failedQueuedPurchaseDeletions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteQueuedReservedInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteQueuedReservedInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<SuccessfulQueuedPurchaseDeletion> m_successfulQueuedPurchaseDeletions;

    Aws::Vector<FailedQueuedPurchaseDeletion> m_failedQueuedPurchaseDeletions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
