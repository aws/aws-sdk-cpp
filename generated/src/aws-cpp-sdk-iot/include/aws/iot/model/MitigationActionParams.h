/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/UpdateDeviceCertificateParams.h>
#include <aws/iot/model/UpdateCACertificateParams.h>
#include <aws/iot/model/AddThingsToThingGroupParams.h>
#include <aws/iot/model/ReplaceDefaultPolicyVersionParams.h>
#include <aws/iot/model/EnableIoTLoggingParams.h>
#include <aws/iot/model/PublishFindingToSnsParams.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The set of parameters for this mitigation action. You can specify only one
   * type of parameter (in other words, you can apply only one action for each
   * defined mitigation action).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/MitigationActionParams">AWS
   * API Reference</a></p>
   */
  class MitigationActionParams
  {
  public:
    AWS_IOT_API MitigationActionParams() = default;
    AWS_IOT_API MitigationActionParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MitigationActionParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameters to define a mitigation action that changes the state of the device
     * certificate to inactive.</p>
     */
    inline const UpdateDeviceCertificateParams& GetUpdateDeviceCertificateParams() const { return m_updateDeviceCertificateParams; }
    inline bool UpdateDeviceCertificateParamsHasBeenSet() const { return m_updateDeviceCertificateParamsHasBeenSet; }
    template<typename UpdateDeviceCertificateParamsT = UpdateDeviceCertificateParams>
    void SetUpdateDeviceCertificateParams(UpdateDeviceCertificateParamsT&& value) { m_updateDeviceCertificateParamsHasBeenSet = true; m_updateDeviceCertificateParams = std::forward<UpdateDeviceCertificateParamsT>(value); }
    template<typename UpdateDeviceCertificateParamsT = UpdateDeviceCertificateParams>
    MitigationActionParams& WithUpdateDeviceCertificateParams(UpdateDeviceCertificateParamsT&& value) { SetUpdateDeviceCertificateParams(std::forward<UpdateDeviceCertificateParamsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters to define a mitigation action that changes the state of the CA
     * certificate to inactive.</p>
     */
    inline const UpdateCACertificateParams& GetUpdateCACertificateParams() const { return m_updateCACertificateParams; }
    inline bool UpdateCACertificateParamsHasBeenSet() const { return m_updateCACertificateParamsHasBeenSet; }
    template<typename UpdateCACertificateParamsT = UpdateCACertificateParams>
    void SetUpdateCACertificateParams(UpdateCACertificateParamsT&& value) { m_updateCACertificateParamsHasBeenSet = true; m_updateCACertificateParams = std::forward<UpdateCACertificateParamsT>(value); }
    template<typename UpdateCACertificateParamsT = UpdateCACertificateParams>
    MitigationActionParams& WithUpdateCACertificateParams(UpdateCACertificateParamsT&& value) { SetUpdateCACertificateParams(std::forward<UpdateCACertificateParamsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters to define a mitigation action that moves devices associated with a
     * certificate to one or more specified thing groups, typically for quarantine.</p>
     */
    inline const AddThingsToThingGroupParams& GetAddThingsToThingGroupParams() const { return m_addThingsToThingGroupParams; }
    inline bool AddThingsToThingGroupParamsHasBeenSet() const { return m_addThingsToThingGroupParamsHasBeenSet; }
    template<typename AddThingsToThingGroupParamsT = AddThingsToThingGroupParams>
    void SetAddThingsToThingGroupParams(AddThingsToThingGroupParamsT&& value) { m_addThingsToThingGroupParamsHasBeenSet = true; m_addThingsToThingGroupParams = std::forward<AddThingsToThingGroupParamsT>(value); }
    template<typename AddThingsToThingGroupParamsT = AddThingsToThingGroupParams>
    MitigationActionParams& WithAddThingsToThingGroupParams(AddThingsToThingGroupParamsT&& value) { SetAddThingsToThingGroupParams(std::forward<AddThingsToThingGroupParamsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters to define a mitigation action that adds a blank policy to restrict
     * permissions.</p>
     */
    inline const ReplaceDefaultPolicyVersionParams& GetReplaceDefaultPolicyVersionParams() const { return m_replaceDefaultPolicyVersionParams; }
    inline bool ReplaceDefaultPolicyVersionParamsHasBeenSet() const { return m_replaceDefaultPolicyVersionParamsHasBeenSet; }
    template<typename ReplaceDefaultPolicyVersionParamsT = ReplaceDefaultPolicyVersionParams>
    void SetReplaceDefaultPolicyVersionParams(ReplaceDefaultPolicyVersionParamsT&& value) { m_replaceDefaultPolicyVersionParamsHasBeenSet = true; m_replaceDefaultPolicyVersionParams = std::forward<ReplaceDefaultPolicyVersionParamsT>(value); }
    template<typename ReplaceDefaultPolicyVersionParamsT = ReplaceDefaultPolicyVersionParams>
    MitigationActionParams& WithReplaceDefaultPolicyVersionParams(ReplaceDefaultPolicyVersionParamsT&& value) { SetReplaceDefaultPolicyVersionParams(std::forward<ReplaceDefaultPolicyVersionParamsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters to define a mitigation action that enables Amazon Web Services IoT
     * Core logging at a specified level of detail.</p>
     */
    inline const EnableIoTLoggingParams& GetEnableIoTLoggingParams() const { return m_enableIoTLoggingParams; }
    inline bool EnableIoTLoggingParamsHasBeenSet() const { return m_enableIoTLoggingParamsHasBeenSet; }
    template<typename EnableIoTLoggingParamsT = EnableIoTLoggingParams>
    void SetEnableIoTLoggingParams(EnableIoTLoggingParamsT&& value) { m_enableIoTLoggingParamsHasBeenSet = true; m_enableIoTLoggingParams = std::forward<EnableIoTLoggingParamsT>(value); }
    template<typename EnableIoTLoggingParamsT = EnableIoTLoggingParams>
    MitigationActionParams& WithEnableIoTLoggingParams(EnableIoTLoggingParamsT&& value) { SetEnableIoTLoggingParams(std::forward<EnableIoTLoggingParamsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters to define a mitigation action that publishes findings to Amazon
     * Simple Notification Service (Amazon SNS. You can implement your own custom
     * actions in response to the Amazon SNS messages.</p>
     */
    inline const PublishFindingToSnsParams& GetPublishFindingToSnsParams() const { return m_publishFindingToSnsParams; }
    inline bool PublishFindingToSnsParamsHasBeenSet() const { return m_publishFindingToSnsParamsHasBeenSet; }
    template<typename PublishFindingToSnsParamsT = PublishFindingToSnsParams>
    void SetPublishFindingToSnsParams(PublishFindingToSnsParamsT&& value) { m_publishFindingToSnsParamsHasBeenSet = true; m_publishFindingToSnsParams = std::forward<PublishFindingToSnsParamsT>(value); }
    template<typename PublishFindingToSnsParamsT = PublishFindingToSnsParams>
    MitigationActionParams& WithPublishFindingToSnsParams(PublishFindingToSnsParamsT&& value) { SetPublishFindingToSnsParams(std::forward<PublishFindingToSnsParamsT>(value)); return *this;}
    ///@}
  private:

    UpdateDeviceCertificateParams m_updateDeviceCertificateParams;
    bool m_updateDeviceCertificateParamsHasBeenSet = false;

    UpdateCACertificateParams m_updateCACertificateParams;
    bool m_updateCACertificateParamsHasBeenSet = false;

    AddThingsToThingGroupParams m_addThingsToThingGroupParams;
    bool m_addThingsToThingGroupParamsHasBeenSet = false;

    ReplaceDefaultPolicyVersionParams m_replaceDefaultPolicyVersionParams;
    bool m_replaceDefaultPolicyVersionParamsHasBeenSet = false;

    EnableIoTLoggingParams m_enableIoTLoggingParams;
    bool m_enableIoTLoggingParamsHasBeenSet = false;

    PublishFindingToSnsParams m_publishFindingToSnsParams;
    bool m_publishFindingToSnsParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
