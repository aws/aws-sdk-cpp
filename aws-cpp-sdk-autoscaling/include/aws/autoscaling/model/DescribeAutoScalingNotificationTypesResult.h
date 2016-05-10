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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
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
namespace AutoScaling
{
namespace Model
{
  class AWS_AUTOSCALING_API DescribeAutoScalingNotificationTypesResult
  {
  public:
    DescribeAutoScalingNotificationTypesResult();
    DescribeAutoScalingNotificationTypesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeAutoScalingNotificationTypesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>One or more of the following notification types:</p> <ul>
     * <li><p><code>autoscaling:EC2_INSTANCE_LAUNCH</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_TERMINATE</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code></p></li>
     * <li><p><code>autoscaling:TEST_NOTIFICATION</code></p></li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingNotificationTypes() const{ return m_autoScalingNotificationTypes; }

    /**
     * <p>One or more of the following notification types:</p> <ul>
     * <li><p><code>autoscaling:EC2_INSTANCE_LAUNCH</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_TERMINATE</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code></p></li>
     * <li><p><code>autoscaling:TEST_NOTIFICATION</code></p></li> </ul>
     */
    inline void SetAutoScalingNotificationTypes(const Aws::Vector<Aws::String>& value) { m_autoScalingNotificationTypes = value; }

    /**
     * <p>One or more of the following notification types:</p> <ul>
     * <li><p><code>autoscaling:EC2_INSTANCE_LAUNCH</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_TERMINATE</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code></p></li>
     * <li><p><code>autoscaling:TEST_NOTIFICATION</code></p></li> </ul>
     */
    inline void SetAutoScalingNotificationTypes(Aws::Vector<Aws::String>&& value) { m_autoScalingNotificationTypes = value; }

    /**
     * <p>One or more of the following notification types:</p> <ul>
     * <li><p><code>autoscaling:EC2_INSTANCE_LAUNCH</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_TERMINATE</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code></p></li>
     * <li><p><code>autoscaling:TEST_NOTIFICATION</code></p></li> </ul>
     */
    inline DescribeAutoScalingNotificationTypesResult& WithAutoScalingNotificationTypes(const Aws::Vector<Aws::String>& value) { SetAutoScalingNotificationTypes(value); return *this;}

    /**
     * <p>One or more of the following notification types:</p> <ul>
     * <li><p><code>autoscaling:EC2_INSTANCE_LAUNCH</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_TERMINATE</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code></p></li>
     * <li><p><code>autoscaling:TEST_NOTIFICATION</code></p></li> </ul>
     */
    inline DescribeAutoScalingNotificationTypesResult& WithAutoScalingNotificationTypes(Aws::Vector<Aws::String>&& value) { SetAutoScalingNotificationTypes(value); return *this;}

    /**
     * <p>One or more of the following notification types:</p> <ul>
     * <li><p><code>autoscaling:EC2_INSTANCE_LAUNCH</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_TERMINATE</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code></p></li>
     * <li><p><code>autoscaling:TEST_NOTIFICATION</code></p></li> </ul>
     */
    inline DescribeAutoScalingNotificationTypesResult& AddAutoScalingNotificationTypes(const Aws::String& value) { m_autoScalingNotificationTypes.push_back(value); return *this; }

    /**
     * <p>One or more of the following notification types:</p> <ul>
     * <li><p><code>autoscaling:EC2_INSTANCE_LAUNCH</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_TERMINATE</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code></p></li>
     * <li><p><code>autoscaling:TEST_NOTIFICATION</code></p></li> </ul>
     */
    inline DescribeAutoScalingNotificationTypesResult& AddAutoScalingNotificationTypes(Aws::String&& value) { m_autoScalingNotificationTypes.push_back(value); return *this; }

    /**
     * <p>One or more of the following notification types:</p> <ul>
     * <li><p><code>autoscaling:EC2_INSTANCE_LAUNCH</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_LAUNCH_ERROR</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_TERMINATE</code></p></li>
     * <li><p><code>autoscaling:EC2_INSTANCE_TERMINATE_ERROR</code></p></li>
     * <li><p><code>autoscaling:TEST_NOTIFICATION</code></p></li> </ul>
     */
    inline DescribeAutoScalingNotificationTypesResult& AddAutoScalingNotificationTypes(const char* value) { m_autoScalingNotificationTypes.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeAutoScalingNotificationTypesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAutoScalingNotificationTypesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_autoScalingNotificationTypes;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws