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
    AWS_LOOKOUTMETRICS_API VpcConfiguration();
    AWS_LOOKOUTMETRICS_API VpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API VpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of strings containing the Amazon VPC subnet IDs (e.g.,
     * <code>subnet-0bb1c79de3EXAMPLE</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIdList() const{ return m_subnetIdList; }

    /**
     * <p>An array of strings containing the Amazon VPC subnet IDs (e.g.,
     * <code>subnet-0bb1c79de3EXAMPLE</code>.</p>
     */
    inline bool SubnetIdListHasBeenSet() const { return m_subnetIdListHasBeenSet; }

    /**
     * <p>An array of strings containing the Amazon VPC subnet IDs (e.g.,
     * <code>subnet-0bb1c79de3EXAMPLE</code>.</p>
     */
    inline void SetSubnetIdList(const Aws::Vector<Aws::String>& value) { m_subnetIdListHasBeenSet = true; m_subnetIdList = value; }

    /**
     * <p>An array of strings containing the Amazon VPC subnet IDs (e.g.,
     * <code>subnet-0bb1c79de3EXAMPLE</code>.</p>
     */
    inline void SetSubnetIdList(Aws::Vector<Aws::String>&& value) { m_subnetIdListHasBeenSet = true; m_subnetIdList = std::move(value); }

    /**
     * <p>An array of strings containing the Amazon VPC subnet IDs (e.g.,
     * <code>subnet-0bb1c79de3EXAMPLE</code>.</p>
     */
    inline VpcConfiguration& WithSubnetIdList(const Aws::Vector<Aws::String>& value) { SetSubnetIdList(value); return *this;}

    /**
     * <p>An array of strings containing the Amazon VPC subnet IDs (e.g.,
     * <code>subnet-0bb1c79de3EXAMPLE</code>.</p>
     */
    inline VpcConfiguration& WithSubnetIdList(Aws::Vector<Aws::String>&& value) { SetSubnetIdList(std::move(value)); return *this;}

    /**
     * <p>An array of strings containing the Amazon VPC subnet IDs (e.g.,
     * <code>subnet-0bb1c79de3EXAMPLE</code>.</p>
     */
    inline VpcConfiguration& AddSubnetIdList(const Aws::String& value) { m_subnetIdListHasBeenSet = true; m_subnetIdList.push_back(value); return *this; }

    /**
     * <p>An array of strings containing the Amazon VPC subnet IDs (e.g.,
     * <code>subnet-0bb1c79de3EXAMPLE</code>.</p>
     */
    inline VpcConfiguration& AddSubnetIdList(Aws::String&& value) { m_subnetIdListHasBeenSet = true; m_subnetIdList.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings containing the Amazon VPC subnet IDs (e.g.,
     * <code>subnet-0bb1c79de3EXAMPLE</code>.</p>
     */
    inline VpcConfiguration& AddSubnetIdList(const char* value) { m_subnetIdListHasBeenSet = true; m_subnetIdList.push_back(value); return *this; }


    /**
     * <p>An array of strings containing the list of security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIdList() const{ return m_securityGroupIdList; }

    /**
     * <p>An array of strings containing the list of security groups.</p>
     */
    inline bool SecurityGroupIdListHasBeenSet() const { return m_securityGroupIdListHasBeenSet; }

    /**
     * <p>An array of strings containing the list of security groups.</p>
     */
    inline void SetSecurityGroupIdList(const Aws::Vector<Aws::String>& value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList = value; }

    /**
     * <p>An array of strings containing the list of security groups.</p>
     */
    inline void SetSecurityGroupIdList(Aws::Vector<Aws::String>&& value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList = std::move(value); }

    /**
     * <p>An array of strings containing the list of security groups.</p>
     */
    inline VpcConfiguration& WithSecurityGroupIdList(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIdList(value); return *this;}

    /**
     * <p>An array of strings containing the list of security groups.</p>
     */
    inline VpcConfiguration& WithSecurityGroupIdList(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIdList(std::move(value)); return *this;}

    /**
     * <p>An array of strings containing the list of security groups.</p>
     */
    inline VpcConfiguration& AddSecurityGroupIdList(const Aws::String& value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList.push_back(value); return *this; }

    /**
     * <p>An array of strings containing the list of security groups.</p>
     */
    inline VpcConfiguration& AddSecurityGroupIdList(Aws::String&& value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings containing the list of security groups.</p>
     */
    inline VpcConfiguration& AddSecurityGroupIdList(const char* value) { m_securityGroupIdListHasBeenSet = true; m_securityGroupIdList.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_subnetIdList;
    bool m_subnetIdListHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIdList;
    bool m_securityGroupIdListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
