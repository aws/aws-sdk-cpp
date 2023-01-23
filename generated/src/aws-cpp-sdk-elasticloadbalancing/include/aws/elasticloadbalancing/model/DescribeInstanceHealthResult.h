/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/ResponseMetadata.h>
#include <aws/elasticloadbalancing/model/InstanceState.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{
  /**
   * <p>Contains the output for DescribeInstanceHealth.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/DescribeEndPointStateOutput">AWS
   * API Reference</a></p>
   */
  class DescribeInstanceHealthResult
  {
  public:
    AWS_ELASTICLOADBALANCING_API DescribeInstanceHealthResult();
    AWS_ELASTICLOADBALANCING_API DescribeInstanceHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCING_API DescribeInstanceHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the health of the instances.</p>
     */
    inline const Aws::Vector<InstanceState>& GetInstanceStates() const{ return m_instanceStates; }

    /**
     * <p>Information about the health of the instances.</p>
     */
    inline void SetInstanceStates(const Aws::Vector<InstanceState>& value) { m_instanceStates = value; }

    /**
     * <p>Information about the health of the instances.</p>
     */
    inline void SetInstanceStates(Aws::Vector<InstanceState>&& value) { m_instanceStates = std::move(value); }

    /**
     * <p>Information about the health of the instances.</p>
     */
    inline DescribeInstanceHealthResult& WithInstanceStates(const Aws::Vector<InstanceState>& value) { SetInstanceStates(value); return *this;}

    /**
     * <p>Information about the health of the instances.</p>
     */
    inline DescribeInstanceHealthResult& WithInstanceStates(Aws::Vector<InstanceState>&& value) { SetInstanceStates(std::move(value)); return *this;}

    /**
     * <p>Information about the health of the instances.</p>
     */
    inline DescribeInstanceHealthResult& AddInstanceStates(const InstanceState& value) { m_instanceStates.push_back(value); return *this; }

    /**
     * <p>Information about the health of the instances.</p>
     */
    inline DescribeInstanceHealthResult& AddInstanceStates(InstanceState&& value) { m_instanceStates.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeInstanceHealthResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeInstanceHealthResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<InstanceState> m_instanceStates;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
