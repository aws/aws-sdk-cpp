/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/DataSourceStatus.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Describes the configuration of scanning EBS volumes as a data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EbsVolumesResult">AWS
   * API Reference</a></p>
   */
  class EbsVolumesResult
  {
  public:
    AWS_GUARDDUTY_API EbsVolumesResult();
    AWS_GUARDDUTY_API EbsVolumesResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API EbsVolumesResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether scanning EBS volumes is enabled as a data source.</p>
     */
    inline const DataSourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Describes whether scanning EBS volumes is enabled as a data source.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Describes whether scanning EBS volumes is enabled as a data source.</p>
     */
    inline void SetStatus(const DataSourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Describes whether scanning EBS volumes is enabled as a data source.</p>
     */
    inline void SetStatus(DataSourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Describes whether scanning EBS volumes is enabled as a data source.</p>
     */
    inline EbsVolumesResult& WithStatus(const DataSourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Describes whether scanning EBS volumes is enabled as a data source.</p>
     */
    inline EbsVolumesResult& WithStatus(DataSourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies the reason why scanning EBS volumes (Malware Protection) was not
     * enabled as a data source.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>Specifies the reason why scanning EBS volumes (Malware Protection) was not
     * enabled as a data source.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Specifies the reason why scanning EBS volumes (Malware Protection) was not
     * enabled as a data source.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Specifies the reason why scanning EBS volumes (Malware Protection) was not
     * enabled as a data source.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Specifies the reason why scanning EBS volumes (Malware Protection) was not
     * enabled as a data source.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>Specifies the reason why scanning EBS volumes (Malware Protection) was not
     * enabled as a data source.</p>
     */
    inline EbsVolumesResult& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>Specifies the reason why scanning EBS volumes (Malware Protection) was not
     * enabled as a data source.</p>
     */
    inline EbsVolumesResult& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>Specifies the reason why scanning EBS volumes (Malware Protection) was not
     * enabled as a data source.</p>
     */
    inline EbsVolumesResult& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    DataSourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
