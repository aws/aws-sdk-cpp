/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ScheduledInstance.h>
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
  /**
   * <p>Contains the output of PurchaseScheduledInstances.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseScheduledInstancesResult">AWS
   * API Reference</a></p>
   */
  class PurchaseScheduledInstancesResponse
  {
  public:
    AWS_EC2_API PurchaseScheduledInstancesResponse();
    AWS_EC2_API PurchaseScheduledInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API PurchaseScheduledInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Scheduled Instances.</p>
     */
    inline const Aws::Vector<ScheduledInstance>& GetScheduledInstanceSet() const{ return m_scheduledInstanceSet; }

    /**
     * <p>Information about the Scheduled Instances.</p>
     */
    inline void SetScheduledInstanceSet(const Aws::Vector<ScheduledInstance>& value) { m_scheduledInstanceSet = value; }

    /**
     * <p>Information about the Scheduled Instances.</p>
     */
    inline void SetScheduledInstanceSet(Aws::Vector<ScheduledInstance>&& value) { m_scheduledInstanceSet = std::move(value); }

    /**
     * <p>Information about the Scheduled Instances.</p>
     */
    inline PurchaseScheduledInstancesResponse& WithScheduledInstanceSet(const Aws::Vector<ScheduledInstance>& value) { SetScheduledInstanceSet(value); return *this;}

    /**
     * <p>Information about the Scheduled Instances.</p>
     */
    inline PurchaseScheduledInstancesResponse& WithScheduledInstanceSet(Aws::Vector<ScheduledInstance>&& value) { SetScheduledInstanceSet(std::move(value)); return *this;}

    /**
     * <p>Information about the Scheduled Instances.</p>
     */
    inline PurchaseScheduledInstancesResponse& AddScheduledInstanceSet(const ScheduledInstance& value) { m_scheduledInstanceSet.push_back(value); return *this; }

    /**
     * <p>Information about the Scheduled Instances.</p>
     */
    inline PurchaseScheduledInstancesResponse& AddScheduledInstanceSet(ScheduledInstance&& value) { m_scheduledInstanceSet.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline PurchaseScheduledInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline PurchaseScheduledInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ScheduledInstance> m_scheduledInstanceSet;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
