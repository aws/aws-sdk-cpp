﻿/*
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
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/ResponseMetadata.h>
#include <aws/elasticloadbalancing/model/InstanceState.h>

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
   * <p>Contains the output for DescribeInstanceHealth.</p>
   */
  class AWS_ELASTICLOADBALANCING_API DescribeInstanceHealthResult
  {
  public:
    DescribeInstanceHealthResult();
    DescribeInstanceHealthResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeInstanceHealthResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
    inline void SetInstanceStates(Aws::Vector<InstanceState>&& value) { m_instanceStates = value; }

    /**
     * <p>Information about the health of the instances.</p>
     */
    inline DescribeInstanceHealthResult& WithInstanceStates(const Aws::Vector<InstanceState>& value) { SetInstanceStates(value); return *this;}

    /**
     * <p>Information about the health of the instances.</p>
     */
    inline DescribeInstanceHealthResult& WithInstanceStates(Aws::Vector<InstanceState>&& value) { SetInstanceStates(value); return *this;}

    /**
     * <p>Information about the health of the instances.</p>
     */
    inline DescribeInstanceHealthResult& AddInstanceStates(const InstanceState& value) { m_instanceStates.push_back(value); return *this; }

    /**
     * <p>Information about the health of the instances.</p>
     */
    inline DescribeInstanceHealthResult& AddInstanceStates(InstanceState&& value) { m_instanceStates.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeInstanceHealthResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeInstanceHealthResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<InstanceState> m_instanceStates;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws