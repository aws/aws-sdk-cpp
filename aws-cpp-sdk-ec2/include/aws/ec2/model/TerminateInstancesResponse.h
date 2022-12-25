/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceStateChange.h>
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
  class TerminateInstancesResponse
  {
  public:
    AWS_EC2_API TerminateInstancesResponse();
    AWS_EC2_API TerminateInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API TerminateInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the terminated instances.</p>
     */
    inline const Aws::Vector<InstanceStateChange>& GetTerminatingInstances() const{ return m_terminatingInstances; }

    /**
     * <p>Information about the terminated instances.</p>
     */
    inline void SetTerminatingInstances(const Aws::Vector<InstanceStateChange>& value) { m_terminatingInstances = value; }

    /**
     * <p>Information about the terminated instances.</p>
     */
    inline void SetTerminatingInstances(Aws::Vector<InstanceStateChange>&& value) { m_terminatingInstances = std::move(value); }

    /**
     * <p>Information about the terminated instances.</p>
     */
    inline TerminateInstancesResponse& WithTerminatingInstances(const Aws::Vector<InstanceStateChange>& value) { SetTerminatingInstances(value); return *this;}

    /**
     * <p>Information about the terminated instances.</p>
     */
    inline TerminateInstancesResponse& WithTerminatingInstances(Aws::Vector<InstanceStateChange>&& value) { SetTerminatingInstances(std::move(value)); return *this;}

    /**
     * <p>Information about the terminated instances.</p>
     */
    inline TerminateInstancesResponse& AddTerminatingInstances(const InstanceStateChange& value) { m_terminatingInstances.push_back(value); return *this; }

    /**
     * <p>Information about the terminated instances.</p>
     */
    inline TerminateInstancesResponse& AddTerminatingInstances(InstanceStateChange&& value) { m_terminatingInstances.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline TerminateInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline TerminateInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<InstanceStateChange> m_terminatingInstances;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
