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
  class AWS_AUTOSCALING_API DescribeAutoScalingNotificationTypesResult
  {
  public:
    DescribeAutoScalingNotificationTypesResult();
    DescribeAutoScalingNotificationTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeAutoScalingNotificationTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The notification types.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingNotificationTypes() const{ return m_autoScalingNotificationTypes; }

    /**
     * <p>The notification types.</p>
     */
    inline void SetAutoScalingNotificationTypes(const Aws::Vector<Aws::String>& value) { m_autoScalingNotificationTypes = value; }

    /**
     * <p>The notification types.</p>
     */
    inline void SetAutoScalingNotificationTypes(Aws::Vector<Aws::String>&& value) { m_autoScalingNotificationTypes = std::move(value); }

    /**
     * <p>The notification types.</p>
     */
    inline DescribeAutoScalingNotificationTypesResult& WithAutoScalingNotificationTypes(const Aws::Vector<Aws::String>& value) { SetAutoScalingNotificationTypes(value); return *this;}

    /**
     * <p>The notification types.</p>
     */
    inline DescribeAutoScalingNotificationTypesResult& WithAutoScalingNotificationTypes(Aws::Vector<Aws::String>&& value) { SetAutoScalingNotificationTypes(std::move(value)); return *this;}

    /**
     * <p>The notification types.</p>
     */
    inline DescribeAutoScalingNotificationTypesResult& AddAutoScalingNotificationTypes(const Aws::String& value) { m_autoScalingNotificationTypes.push_back(value); return *this; }

    /**
     * <p>The notification types.</p>
     */
    inline DescribeAutoScalingNotificationTypesResult& AddAutoScalingNotificationTypes(Aws::String&& value) { m_autoScalingNotificationTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The notification types.</p>
     */
    inline DescribeAutoScalingNotificationTypesResult& AddAutoScalingNotificationTypes(const char* value) { m_autoScalingNotificationTypes.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAutoScalingNotificationTypesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAutoScalingNotificationTypesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_autoScalingNotificationTypes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
