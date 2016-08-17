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
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>Contains the output of RunScheduledInstances.</p>
   */
  class AWS_EC2_API RunScheduledInstancesResponse
  {
  public:
    RunScheduledInstancesResponse();
    RunScheduledInstancesResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    RunScheduledInstancesResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIdSet() const{ return m_instanceIdSet; }

    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline void SetInstanceIdSet(const Aws::Vector<Aws::String>& value) { m_instanceIdSet = value; }

    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline void SetInstanceIdSet(Aws::Vector<Aws::String>&& value) { m_instanceIdSet = value; }

    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline RunScheduledInstancesResponse& WithInstanceIdSet(const Aws::Vector<Aws::String>& value) { SetInstanceIdSet(value); return *this;}

    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline RunScheduledInstancesResponse& WithInstanceIdSet(Aws::Vector<Aws::String>&& value) { SetInstanceIdSet(value); return *this;}

    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline RunScheduledInstancesResponse& AddInstanceIdSet(const Aws::String& value) { m_instanceIdSet.push_back(value); return *this; }

    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline RunScheduledInstancesResponse& AddInstanceIdSet(Aws::String&& value) { m_instanceIdSet.push_back(value); return *this; }

    /**
     * <p>The IDs of the newly launched instances.</p>
     */
    inline RunScheduledInstancesResponse& AddInstanceIdSet(const char* value) { m_instanceIdSet.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline RunScheduledInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RunScheduledInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_instanceIdSet;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws