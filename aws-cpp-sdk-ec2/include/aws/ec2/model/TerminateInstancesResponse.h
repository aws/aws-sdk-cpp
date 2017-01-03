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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceStateChange.h>

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
   * <p>Contains the output of TerminateInstances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TerminateInstancesResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API TerminateInstancesResponse
  {
  public:
    TerminateInstancesResponse();
    TerminateInstancesResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    TerminateInstancesResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about one or more terminated instances.</p>
     */
    inline const Aws::Vector<InstanceStateChange>& GetTerminatingInstances() const{ return m_terminatingInstances; }

    /**
     * <p>Information about one or more terminated instances.</p>
     */
    inline void SetTerminatingInstances(const Aws::Vector<InstanceStateChange>& value) { m_terminatingInstances = value; }

    /**
     * <p>Information about one or more terminated instances.</p>
     */
    inline void SetTerminatingInstances(Aws::Vector<InstanceStateChange>&& value) { m_terminatingInstances = value; }

    /**
     * <p>Information about one or more terminated instances.</p>
     */
    inline TerminateInstancesResponse& WithTerminatingInstances(const Aws::Vector<InstanceStateChange>& value) { SetTerminatingInstances(value); return *this;}

    /**
     * <p>Information about one or more terminated instances.</p>
     */
    inline TerminateInstancesResponse& WithTerminatingInstances(Aws::Vector<InstanceStateChange>&& value) { SetTerminatingInstances(value); return *this;}

    /**
     * <p>Information about one or more terminated instances.</p>
     */
    inline TerminateInstancesResponse& AddTerminatingInstances(const InstanceStateChange& value) { m_terminatingInstances.push_back(value); return *this; }

    /**
     * <p>Information about one or more terminated instances.</p>
     */
    inline TerminateInstancesResponse& AddTerminatingInstances(InstanceStateChange&& value) { m_terminatingInstances.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline TerminateInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline TerminateInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<InstanceStateChange> m_terminatingInstances;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws