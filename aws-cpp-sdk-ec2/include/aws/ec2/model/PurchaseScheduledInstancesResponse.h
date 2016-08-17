/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ScheduledInstance.h>

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
   * <p>Contains the output of PurchaseScheduledInstances.</p>
   */
  class AWS_EC2_API PurchaseScheduledInstancesResponse
  {
  public:
    PurchaseScheduledInstancesResponse();
    PurchaseScheduledInstancesResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    PurchaseScheduledInstancesResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
    inline void SetScheduledInstanceSet(Aws::Vector<ScheduledInstance>&& value) { m_scheduledInstanceSet = value; }

    /**
     * <p>Information about the Scheduled Instances.</p>
     */
    inline PurchaseScheduledInstancesResponse& WithScheduledInstanceSet(const Aws::Vector<ScheduledInstance>& value) { SetScheduledInstanceSet(value); return *this;}

    /**
     * <p>Information about the Scheduled Instances.</p>
     */
    inline PurchaseScheduledInstancesResponse& WithScheduledInstanceSet(Aws::Vector<ScheduledInstance>&& value) { SetScheduledInstanceSet(value); return *this;}

    /**
     * <p>Information about the Scheduled Instances.</p>
     */
    inline PurchaseScheduledInstancesResponse& AddScheduledInstanceSet(const ScheduledInstance& value) { m_scheduledInstanceSet.push_back(value); return *this; }

    /**
     * <p>Information about the Scheduled Instances.</p>
     */
    inline PurchaseScheduledInstancesResponse& AddScheduledInstanceSet(ScheduledInstance&& value) { m_scheduledInstanceSet.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline PurchaseScheduledInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline PurchaseScheduledInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<ScheduledInstance> m_scheduledInstanceSet;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws