﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/LicenseEndpointStatus.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details for a license endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/LicenseEndpointSummary">AWS
   * API Reference</a></p>
   */
  class LicenseEndpointSummary
  {
  public:
    AWS_DEADLINE_API LicenseEndpointSummary();
    AWS_DEADLINE_API LicenseEndpointSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API LicenseEndpointSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The license endpoint ID.</p>
     */
    inline const Aws::String& GetLicenseEndpointId() const{ return m_licenseEndpointId; }
    inline bool LicenseEndpointIdHasBeenSet() const { return m_licenseEndpointIdHasBeenSet; }
    inline void SetLicenseEndpointId(const Aws::String& value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId = value; }
    inline void SetLicenseEndpointId(Aws::String&& value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId = std::move(value); }
    inline void SetLicenseEndpointId(const char* value) { m_licenseEndpointIdHasBeenSet = true; m_licenseEndpointId.assign(value); }
    inline LicenseEndpointSummary& WithLicenseEndpointId(const Aws::String& value) { SetLicenseEndpointId(value); return *this;}
    inline LicenseEndpointSummary& WithLicenseEndpointId(Aws::String&& value) { SetLicenseEndpointId(std::move(value)); return *this;}
    inline LicenseEndpointSummary& WithLicenseEndpointId(const char* value) { SetLicenseEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the license endpoint.</p>
     */
    inline const LicenseEndpointStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const LicenseEndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(LicenseEndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline LicenseEndpointSummary& WithStatus(const LicenseEndpointStatus& value) { SetStatus(value); return *this;}
    inline LicenseEndpointSummary& WithStatus(LicenseEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the license endpoint.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline LicenseEndpointSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline LicenseEndpointSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline LicenseEndpointSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VCP(virtual private cloud) ID associated with the license endpoint.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline LicenseEndpointSummary& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline LicenseEndpointSummary& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline LicenseEndpointSummary& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}
  private:

    Aws::String m_licenseEndpointId;
    bool m_licenseEndpointIdHasBeenSet = false;

    LicenseEndpointStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
