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
  class StartInstancesResponse
  {
  public:
    AWS_EC2_API StartInstancesResponse();
    AWS_EC2_API StartInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API StartInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the started instances.</p>
     */
    inline const Aws::Vector<InstanceStateChange>& GetStartingInstances() const{ return m_startingInstances; }

    /**
     * <p>Information about the started instances.</p>
     */
    inline void SetStartingInstances(const Aws::Vector<InstanceStateChange>& value) { m_startingInstances = value; }

    /**
     * <p>Information about the started instances.</p>
     */
    inline void SetStartingInstances(Aws::Vector<InstanceStateChange>&& value) { m_startingInstances = std::move(value); }

    /**
     * <p>Information about the started instances.</p>
     */
    inline StartInstancesResponse& WithStartingInstances(const Aws::Vector<InstanceStateChange>& value) { SetStartingInstances(value); return *this;}

    /**
     * <p>Information about the started instances.</p>
     */
    inline StartInstancesResponse& WithStartingInstances(Aws::Vector<InstanceStateChange>&& value) { SetStartingInstances(std::move(value)); return *this;}

    /**
     * <p>Information about the started instances.</p>
     */
    inline StartInstancesResponse& AddStartingInstances(const InstanceStateChange& value) { m_startingInstances.push_back(value); return *this; }

    /**
     * <p>Information about the started instances.</p>
     */
    inline StartInstancesResponse& AddStartingInstances(InstanceStateChange&& value) { m_startingInstances.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline StartInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline StartInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<InstanceStateChange> m_startingInstances;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
