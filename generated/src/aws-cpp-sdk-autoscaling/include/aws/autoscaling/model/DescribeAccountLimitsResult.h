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
    AWS_AUTOSCALING_API DescribeAccountLimitsResult() = default;
    AWS_AUTOSCALING_API DescribeAccountLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeAccountLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The maximum number of groups allowed for your account. The default is 200
     * groups per Region.</p>
     */
    inline int GetMaxNumberOfAutoScalingGroups() const { return m_maxNumberOfAutoScalingGroups; }
    inline void SetMaxNumberOfAutoScalingGroups(int value) { m_maxNumberOfAutoScalingGroupsHasBeenSet = true; m_maxNumberOfAutoScalingGroups = value; }
    inline DescribeAccountLimitsResult& WithMaxNumberOfAutoScalingGroups(int value) { SetMaxNumberOfAutoScalingGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of launch configurations allowed for your account. The
     * default is 200 launch configurations per Region.</p>
     */
    inline int GetMaxNumberOfLaunchConfigurations() const { return m_maxNumberOfLaunchConfigurations; }
    inline void SetMaxNumberOfLaunchConfigurations(int value) { m_maxNumberOfLaunchConfigurationsHasBeenSet = true; m_maxNumberOfLaunchConfigurations = value; }
    inline DescribeAccountLimitsResult& WithMaxNumberOfLaunchConfigurations(int value) { SetMaxNumberOfLaunchConfigurations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of groups for your account.</p>
     */
    inline int GetNumberOfAutoScalingGroups() const { return m_numberOfAutoScalingGroups; }
    inline void SetNumberOfAutoScalingGroups(int value) { m_numberOfAutoScalingGroupsHasBeenSet = true; m_numberOfAutoScalingGroups = value; }
    inline DescribeAccountLimitsResult& WithNumberOfAutoScalingGroups(int value) { SetNumberOfAutoScalingGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of launch configurations for your account.</p>
     */
    inline int GetNumberOfLaunchConfigurations() const { return m_numberOfLaunchConfigurations; }
    inline void SetNumberOfLaunchConfigurations(int value) { m_numberOfLaunchConfigurationsHasBeenSet = true; m_numberOfLaunchConfigurations = value; }
    inline DescribeAccountLimitsResult& WithNumberOfLaunchConfigurations(int value) { SetNumberOfLaunchConfigurations(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAccountLimitsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    int m_maxNumberOfAutoScalingGroups{0};
    bool m_maxNumberOfAutoScalingGroupsHasBeenSet = false;

    int m_maxNumberOfLaunchConfigurations{0};
    bool m_maxNumberOfLaunchConfigurationsHasBeenSet = false;

    int m_numberOfAutoScalingGroups{0};
    bool m_numberOfAutoScalingGroupsHasBeenSet = false;

    int m_numberOfLaunchConfigurations{0};
    bool m_numberOfLaunchConfigurationsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
