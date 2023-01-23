/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
   * <p>Describes whether Malware Protection for EC2 instances with findings will be
   * enabled as a data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ScanEc2InstanceWithFindings">AWS
   * API Reference</a></p>
   */
  class ScanEc2InstanceWithFindings
  {
  public:
    AWS_GUARDDUTY_API ScanEc2InstanceWithFindings();
    AWS_GUARDDUTY_API ScanEc2InstanceWithFindings(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ScanEc2InstanceWithFindings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the configuration for scanning EBS volumes as data source.</p>
     */
    inline bool GetEbsVolumes() const{ return m_ebsVolumes; }

    /**
     * <p>Describes the configuration for scanning EBS volumes as data source.</p>
     */
    inline bool EbsVolumesHasBeenSet() const { return m_ebsVolumesHasBeenSet; }

    /**
     * <p>Describes the configuration for scanning EBS volumes as data source.</p>
     */
    inline void SetEbsVolumes(bool value) { m_ebsVolumesHasBeenSet = true; m_ebsVolumes = value; }

    /**
     * <p>Describes the configuration for scanning EBS volumes as data source.</p>
     */
    inline ScanEc2InstanceWithFindings& WithEbsVolumes(bool value) { SetEbsVolumes(value); return *this;}

  private:

    bool m_ebsVolumes;
    bool m_ebsVolumesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
