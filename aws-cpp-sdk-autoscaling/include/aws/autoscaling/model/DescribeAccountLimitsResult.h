/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/autoscaling/model/ResponseMetadata.h>

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
  /*
    $shape.documentation
  */
  class AWS_AUTOSCALING_API DescribeAccountLimitsResult
  {
  public:
    DescribeAccountLimitsResult();
    DescribeAccountLimitsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeAccountLimitsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /*
     <p>The maximum number of groups allowed for your AWS account. The default limit is 20 per region.</p>
    */
    inline long GetMaxNumberOfAutoScalingGroups() const{ return m_maxNumberOfAutoScalingGroups; }
    /*
     <p>The maximum number of groups allowed for your AWS account. The default limit is 20 per region.</p>
    */
    inline void SetMaxNumberOfAutoScalingGroups(long value) { m_maxNumberOfAutoScalingGroups = value; }

    /*
     <p>The maximum number of groups allowed for your AWS account. The default limit is 20 per region.</p>
    */
    inline DescribeAccountLimitsResult&  WithMaxNumberOfAutoScalingGroups(long value) { SetMaxNumberOfAutoScalingGroups(value); return *this;}

    /*
     <p>The maximum number of launch configurations allowed for your AWS account. The default limit is 100 per region.</p>
    */
    inline long GetMaxNumberOfLaunchConfigurations() const{ return m_maxNumberOfLaunchConfigurations; }
    /*
     <p>The maximum number of launch configurations allowed for your AWS account. The default limit is 100 per region.</p>
    */
    inline void SetMaxNumberOfLaunchConfigurations(long value) { m_maxNumberOfLaunchConfigurations = value; }

    /*
     <p>The maximum number of launch configurations allowed for your AWS account. The default limit is 100 per region.</p>
    */
    inline DescribeAccountLimitsResult&  WithMaxNumberOfLaunchConfigurations(long value) { SetMaxNumberOfLaunchConfigurations(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline DescribeAccountLimitsResult&  WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

  private:
    long m_maxNumberOfAutoScalingGroups;
    long m_maxNumberOfLaunchConfigurations;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws