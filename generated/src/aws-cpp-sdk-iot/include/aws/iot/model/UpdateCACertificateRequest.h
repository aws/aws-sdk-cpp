/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CACertificateStatus.h>
#include <aws/iot/model/AutoRegistrationStatus.h>
#include <aws/iot/model/RegistrationConfig.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   * <p>The input to the UpdateCACertificate operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateCACertificateRequest">AWS
   * API Reference</a></p>
   */
  class UpdateCACertificateRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateCACertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCACertificate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The CA certificate identifier.</p>
     */
    inline const Aws::String& GetCertificateId() const { return m_certificateId; }
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }
    template<typename CertificateIdT = Aws::String>
    void SetCertificateId(CertificateIdT&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::forward<CertificateIdT>(value); }
    template<typename CertificateIdT = Aws::String>
    UpdateCACertificateRequest& WithCertificateId(CertificateIdT&& value) { SetCertificateId(std::forward<CertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated status of the CA certificate.</p> <p> <b>Note:</b> The status
     * value REGISTER_INACTIVE is deprecated and should not be used.</p>
     */
    inline CACertificateStatus GetNewStatus() const { return m_newStatus; }
    inline bool NewStatusHasBeenSet() const { return m_newStatusHasBeenSet; }
    inline void SetNewStatus(CACertificateStatus value) { m_newStatusHasBeenSet = true; m_newStatus = value; }
    inline UpdateCACertificateRequest& WithNewStatus(CACertificateStatus value) { SetNewStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new value for the auto registration status. Valid values are: "ENABLE" or
     * "DISABLE".</p>
     */
    inline AutoRegistrationStatus GetNewAutoRegistrationStatus() const { return m_newAutoRegistrationStatus; }
    inline bool NewAutoRegistrationStatusHasBeenSet() const { return m_newAutoRegistrationStatusHasBeenSet; }
    inline void SetNewAutoRegistrationStatus(AutoRegistrationStatus value) { m_newAutoRegistrationStatusHasBeenSet = true; m_newAutoRegistrationStatus = value; }
    inline UpdateCACertificateRequest& WithNewAutoRegistrationStatus(AutoRegistrationStatus value) { SetNewAutoRegistrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the registration configuration.</p>
     */
    inline const RegistrationConfig& GetRegistrationConfig() const { return m_registrationConfig; }
    inline bool RegistrationConfigHasBeenSet() const { return m_registrationConfigHasBeenSet; }
    template<typename RegistrationConfigT = RegistrationConfig>
    void SetRegistrationConfig(RegistrationConfigT&& value) { m_registrationConfigHasBeenSet = true; m_registrationConfig = std::forward<RegistrationConfigT>(value); }
    template<typename RegistrationConfigT = RegistrationConfig>
    UpdateCACertificateRequest& WithRegistrationConfig(RegistrationConfigT&& value) { SetRegistrationConfig(std::forward<RegistrationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, removes auto registration.</p>
     */
    inline bool GetRemoveAutoRegistration() const { return m_removeAutoRegistration; }
    inline bool RemoveAutoRegistrationHasBeenSet() const { return m_removeAutoRegistrationHasBeenSet; }
    inline void SetRemoveAutoRegistration(bool value) { m_removeAutoRegistrationHasBeenSet = true; m_removeAutoRegistration = value; }
    inline UpdateCACertificateRequest& WithRemoveAutoRegistration(bool value) { SetRemoveAutoRegistration(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    CACertificateStatus m_newStatus{CACertificateStatus::NOT_SET};
    bool m_newStatusHasBeenSet = false;

    AutoRegistrationStatus m_newAutoRegistrationStatus{AutoRegistrationStatus::NOT_SET};
    bool m_newAutoRegistrationStatusHasBeenSet = false;

    RegistrationConfig m_registrationConfig;
    bool m_registrationConfigHasBeenSet = false;

    bool m_removeAutoRegistration{false};
    bool m_removeAutoRegistrationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
