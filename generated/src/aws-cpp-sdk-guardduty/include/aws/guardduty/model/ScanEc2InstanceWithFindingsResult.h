/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/EbsVolumesResult.h>
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
   * <p>An object that contains information on the status of whether Malware
   * Protection for EC2 instances with findings will be enabled as a data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ScanEc2InstanceWithFindingsResult">AWS
   * API Reference</a></p>
   */
  class ScanEc2InstanceWithFindingsResult
  {
  public:
    AWS_GUARDDUTY_API ScanEc2InstanceWithFindingsResult();
    AWS_GUARDDUTY_API ScanEc2InstanceWithFindingsResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ScanEc2InstanceWithFindingsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the configuration of scanning EBS volumes as a data source.</p>
     */
    inline const EbsVolumesResult& GetEbsVolumes() const{ return m_ebsVolumes; }

    /**
     * <p>Describes the configuration of scanning EBS volumes as a data source.</p>
     */
    inline bool EbsVolumesHasBeenSet() const { return m_ebsVolumesHasBeenSet; }

    /**
     * <p>Describes the configuration of scanning EBS volumes as a data source.</p>
     */
    inline void SetEbsVolumes(const EbsVolumesResult& value) { m_ebsVolumesHasBeenSet = true; m_ebsVolumes = value; }

    /**
     * <p>Describes the configuration of scanning EBS volumes as a data source.</p>
     */
    inline void SetEbsVolumes(EbsVolumesResult&& value) { m_ebsVolumesHasBeenSet = true; m_ebsVolumes = std::move(value); }

    /**
     * <p>Describes the configuration of scanning EBS volumes as a data source.</p>
     */
    inline ScanEc2InstanceWithFindingsResult& WithEbsVolumes(const EbsVolumesResult& value) { SetEbsVolumes(value); return *this;}

    /**
     * <p>Describes the configuration of scanning EBS volumes as a data source.</p>
     */
    inline ScanEc2InstanceWithFindingsResult& WithEbsVolumes(EbsVolumesResult&& value) { SetEbsVolumes(std::move(value)); return *this;}

  private:

    EbsVolumesResult m_ebsVolumes;
    bool m_ebsVolumesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
