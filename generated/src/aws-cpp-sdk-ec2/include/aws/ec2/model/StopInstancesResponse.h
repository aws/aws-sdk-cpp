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
  class StopInstancesResponse
  {
  public:
    AWS_EC2_API StopInstancesResponse();
    AWS_EC2_API StopInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API StopInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the stopped instances.</p>
     */
    inline const Aws::Vector<InstanceStateChange>& GetStoppingInstances() const{ return m_stoppingInstances; }

    /**
     * <p>Information about the stopped instances.</p>
     */
    inline void SetStoppingInstances(const Aws::Vector<InstanceStateChange>& value) { m_stoppingInstances = value; }

    /**
     * <p>Information about the stopped instances.</p>
     */
    inline void SetStoppingInstances(Aws::Vector<InstanceStateChange>&& value) { m_stoppingInstances = std::move(value); }

    /**
     * <p>Information about the stopped instances.</p>
     */
    inline StopInstancesResponse& WithStoppingInstances(const Aws::Vector<InstanceStateChange>& value) { SetStoppingInstances(value); return *this;}

    /**
     * <p>Information about the stopped instances.</p>
     */
    inline StopInstancesResponse& WithStoppingInstances(Aws::Vector<InstanceStateChange>&& value) { SetStoppingInstances(std::move(value)); return *this;}

    /**
     * <p>Information about the stopped instances.</p>
     */
    inline StopInstancesResponse& AddStoppingInstances(const InstanceStateChange& value) { m_stoppingInstances.push_back(value); return *this; }

    /**
     * <p>Information about the stopped instances.</p>
     */
    inline StopInstancesResponse& AddStoppingInstances(InstanceStateChange&& value) { m_stoppingInstances.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline StopInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline StopInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<InstanceStateChange> m_stoppingInstances;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
