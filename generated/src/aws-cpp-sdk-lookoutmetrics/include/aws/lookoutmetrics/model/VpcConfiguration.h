/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Contains configuration information about the Amazon Virtual Private Cloud
   * (VPC).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/VpcConfiguration">AWS
   * API Reference</a></p>
   */
  class VpcConfiguration
  {
  public:
    AWS_LOOKOUTMETRICS_API VpcConfiguration() = default;
    AWS_LOOKOUTMETRICS_API VpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API VpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of strings containing the Amazon VPC subnet IDs (e.g.,
     * <code>subnet-0bb1c79de3EXAMPLE</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIdList() const { return m_subnetIdList; }
    inline bool SubnetIdListHasBeenSet() const { return m_subnetIdListHasBeenSet; }
    template<typename SubnetIdListT = Aws::Vector<Aws::String>>
    void SetSubnetIdList(SubnetIdListT&& value) { m_subnetIdListHasBeenSet = true; m_subnetIdList = std::forward<SubnetIdListT>(value); }
    template<typename SubnetIdListT = Aws::Vector<Aws::String>>
    VpcConfiguration& WithSubnetIdList(SubnetIdListT&& value) { SetSubnetIdList(std::forward<SubnetIdListT>(value)); return *this;}
    template<typename SubnetIdListT = Aws::String>
    VpcConfiguration& AddSubnetIdList(SubnetIdListT&& value) { m_subnetIdListHasBeenSet = true; m_subnetIdList.emplace_back(std::forward<SubnetIdListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of strings containing the list of security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIdList() const { return m_securityGroupIdList; }
    inline bool SecurityGroupIdListHasBeenSet() const { return m_securityGroupIdListHasBeenSet; }
    template<typename SecurityGroupIdListT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIdList(SecurityGroupIdListT&& value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList = std::forward<SecurityGroupIdListT>(value); }
    template<typename SecurityGroupIdListT = Aws::Vector<Aws::String>>
    VpcConfiguration& WithSecurityGroupIdList(SecurityGroupIdListT&& value) { SetSecurityGroupIdList(std::forward<SecurityGroupIdListT>(value)); return *this;}
    template<typename SecurityGroupIdListT = Aws::String>
    VpcConfiguration& AddSecurityGroupIdList(SecurityGroupIdListT&& value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList.emplace_back(std::forward<SecurityGroupIdListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnetIdList;
    bool m_subnetIdListHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIdList;
    bool m_securityGroupIdListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
