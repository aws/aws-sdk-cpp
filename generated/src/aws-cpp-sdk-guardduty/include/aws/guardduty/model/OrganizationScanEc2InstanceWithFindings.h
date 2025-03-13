/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrganizationEbsVolumes.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Organization-wide EC2 instances with findings scan
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationScanEc2InstanceWithFindings">AWS
   * API Reference</a></p>
   */
  class OrganizationScanEc2InstanceWithFindings
  {
  public:
    AWS_GUARDDUTY_API OrganizationScanEc2InstanceWithFindings() = default;
    AWS_GUARDDUTY_API OrganizationScanEc2InstanceWithFindings(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationScanEc2InstanceWithFindings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether scanning EBS volumes should be auto-enabled for new members joining
     * the organization.</p>
     */
    inline const OrganizationEbsVolumes& GetEbsVolumes() const { return m_ebsVolumes; }
    inline bool EbsVolumesHasBeenSet() const { return m_ebsVolumesHasBeenSet; }
    template<typename EbsVolumesT = OrganizationEbsVolumes>
    void SetEbsVolumes(EbsVolumesT&& value) { m_ebsVolumesHasBeenSet = true; m_ebsVolumes = std::forward<EbsVolumesT>(value); }
    template<typename EbsVolumesT = OrganizationEbsVolumes>
    OrganizationScanEc2InstanceWithFindings& WithEbsVolumes(EbsVolumesT&& value) { SetEbsVolumes(std::forward<EbsVolumesT>(value)); return *this;}
    ///@}
  private:

    OrganizationEbsVolumes m_ebsVolumes;
    bool m_ebsVolumesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
