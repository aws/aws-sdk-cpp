/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AutoScaling
{
namespace Model
{
  class AWS_AUTOSCALING_API DescribeTerminationPolicyTypesResult
  {
  public:
    DescribeTerminationPolicyTypesResult();
    DescribeTerminationPolicyTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeTerminationPolicyTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The termination policies supported by Amazon EC2 Auto Scaling:
     * <code>OldestInstance</code>, <code>OldestLaunchConfiguration</code>,
     * <code>NewestInstance</code>, <code>ClosestToNextInstanceHour</code>,
     * <code>Default</code>, <code>OldestLaunchTemplate</code>, and
     * <code>AllocationStrategy</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminationPolicyTypes() const{ return m_terminationPolicyTypes; }

    /**
     * <p>The termination policies supported by Amazon EC2 Auto Scaling:
     * <code>OldestInstance</code>, <code>OldestLaunchConfiguration</code>,
     * <code>NewestInstance</code>, <code>ClosestToNextInstanceHour</code>,
     * <code>Default</code>, <code>OldestLaunchTemplate</code>, and
     * <code>AllocationStrategy</code>.</p>
     */
    inline void SetTerminationPolicyTypes(const Aws::Vector<Aws::String>& value) { m_terminationPolicyTypes = value; }

    /**
     * <p>The termination policies supported by Amazon EC2 Auto Scaling:
     * <code>OldestInstance</code>, <code>OldestLaunchConfiguration</code>,
     * <code>NewestInstance</code>, <code>ClosestToNextInstanceHour</code>,
     * <code>Default</code>, <code>OldestLaunchTemplate</code>, and
     * <code>AllocationStrategy</code>.</p>
     */
    inline void SetTerminationPolicyTypes(Aws::Vector<Aws::String>&& value) { m_terminationPolicyTypes = std::move(value); }

    /**
     * <p>The termination policies supported by Amazon EC2 Auto Scaling:
     * <code>OldestInstance</code>, <code>OldestLaunchConfiguration</code>,
     * <code>NewestInstance</code>, <code>ClosestToNextInstanceHour</code>,
     * <code>Default</code>, <code>OldestLaunchTemplate</code>, and
     * <code>AllocationStrategy</code>.</p>
     */
    inline DescribeTerminationPolicyTypesResult& WithTerminationPolicyTypes(const Aws::Vector<Aws::String>& value) { SetTerminationPolicyTypes(value); return *this;}

    /**
     * <p>The termination policies supported by Amazon EC2 Auto Scaling:
     * <code>OldestInstance</code>, <code>OldestLaunchConfiguration</code>,
     * <code>NewestInstance</code>, <code>ClosestToNextInstanceHour</code>,
     * <code>Default</code>, <code>OldestLaunchTemplate</code>, and
     * <code>AllocationStrategy</code>.</p>
     */
    inline DescribeTerminationPolicyTypesResult& WithTerminationPolicyTypes(Aws::Vector<Aws::String>&& value) { SetTerminationPolicyTypes(std::move(value)); return *this;}

    /**
     * <p>The termination policies supported by Amazon EC2 Auto Scaling:
     * <code>OldestInstance</code>, <code>OldestLaunchConfiguration</code>,
     * <code>NewestInstance</code>, <code>ClosestToNextInstanceHour</code>,
     * <code>Default</code>, <code>OldestLaunchTemplate</code>, and
     * <code>AllocationStrategy</code>.</p>
     */
    inline DescribeTerminationPolicyTypesResult& AddTerminationPolicyTypes(const Aws::String& value) { m_terminationPolicyTypes.push_back(value); return *this; }

    /**
     * <p>The termination policies supported by Amazon EC2 Auto Scaling:
     * <code>OldestInstance</code>, <code>OldestLaunchConfiguration</code>,
     * <code>NewestInstance</code>, <code>ClosestToNextInstanceHour</code>,
     * <code>Default</code>, <code>OldestLaunchTemplate</code>, and
     * <code>AllocationStrategy</code>.</p>
     */
    inline DescribeTerminationPolicyTypesResult& AddTerminationPolicyTypes(Aws::String&& value) { m_terminationPolicyTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The termination policies supported by Amazon EC2 Auto Scaling:
     * <code>OldestInstance</code>, <code>OldestLaunchConfiguration</code>,
     * <code>NewestInstance</code>, <code>ClosestToNextInstanceHour</code>,
     * <code>Default</code>, <code>OldestLaunchTemplate</code>, and
     * <code>AllocationStrategy</code>.</p>
     */
    inline DescribeTerminationPolicyTypesResult& AddTerminationPolicyTypes(const char* value) { m_terminationPolicyTypes.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTerminationPolicyTypesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTerminationPolicyTypesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_terminationPolicyTypes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
