/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
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
  class DescribeAccountLimitsResult
  {
  public:
    AWS_AUTOSCALING_API DescribeAccountLimitsResult();
    AWS_AUTOSCALING_API DescribeAccountLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeAccountLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The maximum number of groups allowed for your account. The default is 200
     * groups per Region.</p>
     */
    inline int GetMaxNumberOfAutoScalingGroups() const{ return m_maxNumberOfAutoScalingGroups; }
    inline void SetMaxNumberOfAutoScalingGroups(int value) { m_maxNumberOfAutoScalingGroups = value; }
    inline DescribeAccountLimitsResult& WithMaxNumberOfAutoScalingGroups(int value) { SetMaxNumberOfAutoScalingGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of launch configurations allowed for your account. The
     * default is 200 launch configurations per Region.</p>
     */
    inline int GetMaxNumberOfLaunchConfigurations() const{ return m_maxNumberOfLaunchConfigurations; }
    inline void SetMaxNumberOfLaunchConfigurations(int value) { m_maxNumberOfLaunchConfigurations = value; }
    inline DescribeAccountLimitsResult& WithMaxNumberOfLaunchConfigurations(int value) { SetMaxNumberOfLaunchConfigurations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of groups for your account.</p>
     */
    inline int GetNumberOfAutoScalingGroups() const{ return m_numberOfAutoScalingGroups; }
    inline void SetNumberOfAutoScalingGroups(int value) { m_numberOfAutoScalingGroups = value; }
    inline DescribeAccountLimitsResult& WithNumberOfAutoScalingGroups(int value) { SetNumberOfAutoScalingGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of launch configurations for your account.</p>
     */
    inline int GetNumberOfLaunchConfigurations() const{ return m_numberOfLaunchConfigurations; }
    inline void SetNumberOfLaunchConfigurations(int value) { m_numberOfLaunchConfigurations = value; }
    inline DescribeAccountLimitsResult& WithNumberOfLaunchConfigurations(int value) { SetNumberOfLaunchConfigurations(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeAccountLimitsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeAccountLimitsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    int m_maxNumberOfAutoScalingGroups;

    int m_maxNumberOfLaunchConfigurations;

    int m_numberOfAutoScalingGroups;

    int m_numberOfLaunchConfigurations;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
