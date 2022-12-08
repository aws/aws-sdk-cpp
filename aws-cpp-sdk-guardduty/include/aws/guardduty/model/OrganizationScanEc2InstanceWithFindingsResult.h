/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrganizationEbsVolumesResult.h>
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
   * <p>An object that contains information on the status of scanning EC2 instances
   * with findings for an organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationScanEc2InstanceWithFindingsResult">AWS
   * API Reference</a></p>
   */
  class OrganizationScanEc2InstanceWithFindingsResult
  {
  public:
    AWS_GUARDDUTY_API OrganizationScanEc2InstanceWithFindingsResult();
    AWS_GUARDDUTY_API OrganizationScanEc2InstanceWithFindingsResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationScanEc2InstanceWithFindingsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the configuration for scanning EBS volumes for an organization.</p>
     */
    inline const OrganizationEbsVolumesResult& GetEbsVolumes() const{ return m_ebsVolumes; }

    /**
     * <p>Describes the configuration for scanning EBS volumes for an organization.</p>
     */
    inline bool EbsVolumesHasBeenSet() const { return m_ebsVolumesHasBeenSet; }

    /**
     * <p>Describes the configuration for scanning EBS volumes for an organization.</p>
     */
    inline void SetEbsVolumes(const OrganizationEbsVolumesResult& value) { m_ebsVolumesHasBeenSet = true; m_ebsVolumes = value; }

    /**
     * <p>Describes the configuration for scanning EBS volumes for an organization.</p>
     */
    inline void SetEbsVolumes(OrganizationEbsVolumesResult&& value) { m_ebsVolumesHasBeenSet = true; m_ebsVolumes = std::move(value); }

    /**
     * <p>Describes the configuration for scanning EBS volumes for an organization.</p>
     */
    inline OrganizationScanEc2InstanceWithFindingsResult& WithEbsVolumes(const OrganizationEbsVolumesResult& value) { SetEbsVolumes(value); return *this;}

    /**
     * <p>Describes the configuration for scanning EBS volumes for an organization.</p>
     */
    inline OrganizationScanEc2InstanceWithFindingsResult& WithEbsVolumes(OrganizationEbsVolumesResult&& value) { SetEbsVolumes(std::move(value)); return *this;}

  private:

    OrganizationEbsVolumesResult m_ebsVolumes;
    bool m_ebsVolumesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
