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
    AWS_IOT_API MitigationActionParams();
    AWS_IOT_API MitigationActionParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MitigationActionParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Parameters to define a mitigation action that changes the state of the device
     * certificate to inactive.</p>
     */
    inline const UpdateDeviceCertificateParams& GetUpdateDeviceCertificateParams() const{ return m_updateDeviceCertificateParams; }

    /**
     * <p>Parameters to define a mitigation action that changes the state of the device
     * certificate to inactive.</p>
     */
    inline bool UpdateDeviceCertificateParamsHasBeenSet() const { return m_updateDeviceCertificateParamsHasBeenSet; }

    /**
     * <p>Parameters to define a mitigation action that changes the state of the device
     * certificate to inactive.</p>
     */
    inline void SetUpdateDeviceCertificateParams(const UpdateDeviceCertificateParams& value) { m_updateDeviceCertificateParamsHasBeenSet = true; m_updateDeviceCertificateParams = value; }

    /**
     * <p>Parameters to define a mitigation action that changes the state of the device
     * certificate to inactive.</p>
     */
    inline void SetUpdateDeviceCertificateParams(UpdateDeviceCertificateParams&& value) { m_updateDeviceCertificateParamsHasBeenSet = true; m_updateDeviceCertificateParams = std::move(value); }

    /**
     * <p>Parameters to define a mitigation action that changes the state of the device
     * certificate to inactive.</p>
     */
    inline MitigationActionParams& WithUpdateDeviceCertificateParams(const UpdateDeviceCertificateParams& value) { SetUpdateDeviceCertificateParams(value); return *this;}

    /**
     * <p>Parameters to define a mitigation action that changes the state of the device
     * certificate to inactive.</p>
     */
    inline MitigationActionParams& WithUpdateDeviceCertificateParams(UpdateDeviceCertificateParams&& value) { SetUpdateDeviceCertificateParams(std::move(value)); return *this;}


    /**
     * <p>Parameters to define a mitigation action that changes the state of the CA
     * certificate to inactive.</p>
     */
    inline const UpdateCACertificateParams& GetUpdateCACertificateParams() const{ return m_updateCACertificateParams; }

    /**
     * <p>Parameters to define a mitigation action that changes the state of the CA
     * certificate to inactive.</p>
     */
    inline bool UpdateCACertificateParamsHasBeenSet() const { return m_updateCACertificateParamsHasBeenSet; }

    /**
     * <p>Parameters to define a mitigation action that changes the state of the CA
     * certificate to inactive.</p>
     */
    inline void SetUpdateCACertificateParams(const UpdateCACertificateParams& value) { m_updateCACertificateParamsHasBeenSet = true; m_updateCACertificateParams = value; }

    /**
     * <p>Parameters to define a mitigation action that changes the state of the CA
     * certificate to inactive.</p>
     */
    inline void SetUpdateCACertificateParams(UpdateCACertificateParams&& value) { m_updateCACertificateParamsHasBeenSet = true; m_updateCACertificateParams = std::move(value); }

    /**
     * <p>Parameters to define a mitigation action that changes the state of the CA
     * certificate to inactive.</p>
     */
    inline MitigationActionParams& WithUpdateCACertificateParams(const UpdateCACertificateParams& value) { SetUpdateCACertificateParams(value); return *this;}

    /**
     * <p>Parameters to define a mitigation action that changes the state of the CA
     * certificate to inactive.</p>
     */
    inline MitigationActionParams& WithUpdateCACertificateParams(UpdateCACertificateParams&& value) { SetUpdateCACertificateParams(std::move(value)); return *this;}


    /**
     * <p>Parameters to define a mitigation action that moves devices associated with a
     * certificate to one or more specified thing groups, typically for quarantine.</p>
     */
    inline const AddThingsToThingGroupParams& GetAddThingsToThingGroupParams() const{ return m_addThingsToThingGroupParams; }

    /**
     * <p>Parameters to define a mitigation action that moves devices associated with a
     * certificate to one or more specified thing groups, typically for quarantine.</p>
     */
    inline bool AddThingsToThingGroupParamsHasBeenSet() const { return m_addThingsToThingGroupParamsHasBeenSet; }

    /**
     * <p>Parameters to define a mitigation action that moves devices associated with a
     * certificate to one or more specified thing groups, typically for quarantine.</p>
     */
    inline void SetAddThingsToThingGroupParams(const AddThingsToThingGroupParams& value) { m_addThingsToThingGroupParamsHasBeenSet = true; m_addThingsToThingGroupParams = value; }

    /**
     * <p>Parameters to define a mitigation action that moves devices associated with a
     * certificate to one or more specified thing groups, typically for quarantine.</p>
     */
    inline void SetAddThingsToThingGroupParams(AddThingsToThingGroupParams&& value) { m_addThingsToThingGroupParamsHasBeenSet = true; m_addThingsToThingGroupParams = std::move(value); }

    /**
     * <p>Parameters to define a mitigation action that moves devices associated with a
     * certificate to one or more specified thing groups, typically for quarantine.</p>
     */
    inline MitigationActionParams& WithAddThingsToThingGroupParams(const AddThingsToThingGroupParams& value) { SetAddThingsToThingGroupParams(value); return *this;}

    /**
     * <p>Parameters to define a mitigation action that moves devices associated with a
     * certificate to one or more specified thing groups, typically for quarantine.</p>
     */
    inline MitigationActionParams& WithAddThingsToThingGroupParams(AddThingsToThingGroupParams&& value) { SetAddThingsToThingGroupParams(std::move(value)); return *this;}


    /**
     * <p>Parameters to define a mitigation action that adds a blank policy to restrict
     * permissions.</p>
     */
    inline const ReplaceDefaultPolicyVersionParams& GetReplaceDefaultPolicyVersionParams() const{ return m_replaceDefaultPolicyVersionParams; }

    /**
     * <p>Parameters to define a mitigation action that adds a blank policy to restrict
     * permissions.</p>
     */
    inline bool ReplaceDefaultPolicyVersionParamsHasBeenSet() const { return m_replaceDefaultPolicyVersionParamsHasBeenSet; }

    /**
     * <p>Parameters to define a mitigation action that adds a blank policy to restrict
     * permissions.</p>
     */
    inline void SetReplaceDefaultPolicyVersionParams(const ReplaceDefaultPolicyVersionParams& value) { m_replaceDefaultPolicyVersionParamsHasBeenSet = true; m_replaceDefaultPolicyVersionParams = value; }

    /**
     * <p>Parameters to define a mitigation action that adds a blank policy to restrict
     * permissions.</p>
     */
    inline void SetReplaceDefaultPolicyVersionParams(ReplaceDefaultPolicyVersionParams&& value) { m_replaceDefaultPolicyVersionParamsHasBeenSet = true; m_replaceDefaultPolicyVersionParams = std::move(value); }

    /**
     * <p>Parameters to define a mitigation action that adds a blank policy to restrict
     * permissions.</p>
     */
    inline MitigationActionParams& WithReplaceDefaultPolicyVersionParams(const ReplaceDefaultPolicyVersionParams& value) { SetReplaceDefaultPolicyVersionParams(value); return *this;}

    /**
     * <p>Parameters to define a mitigation action that adds a blank policy to restrict
     * permissions.</p>
     */
    inline MitigationActionParams& WithReplaceDefaultPolicyVersionParams(ReplaceDefaultPolicyVersionParams&& value) { SetReplaceDefaultPolicyVersionParams(std::move(value)); return *this;}


    /**
     * <p>Parameters to define a mitigation action that enables Amazon Web Services IoT
     * Core logging at a specified level of detail.</p>
     */
    inline const EnableIoTLoggingParams& GetEnableIoTLoggingParams() const{ return m_enableIoTLoggingParams; }

    /**
     * <p>Parameters to define a mitigation action that enables Amazon Web Services IoT
     * Core logging at a specified level of detail.</p>
     */
    inline bool EnableIoTLoggingParamsHasBeenSet() const { return m_enableIoTLoggingParamsHasBeenSet; }

    /**
     * <p>Parameters to define a mitigation action that enables Amazon Web Services IoT
     * Core logging at a specified level of detail.</p>
     */
    inline void SetEnableIoTLoggingParams(const EnableIoTLoggingParams& value) { m_enableIoTLoggingParamsHasBeenSet = true; m_enableIoTLoggingParams = value; }

    /**
     * <p>Parameters to define a mitigation action that enables Amazon Web Services IoT
     * Core logging at a specified level of detail.</p>
     */
    inline void SetEnableIoTLoggingParams(EnableIoTLoggingParams&& value) { m_enableIoTLoggingParamsHasBeenSet = true; m_enableIoTLoggingParams = std::move(value); }

    /**
     * <p>Parameters to define a mitigation action that enables Amazon Web Services IoT
     * Core logging at a specified level of detail.</p>
     */
    inline MitigationActionParams& WithEnableIoTLoggingParams(const EnableIoTLoggingParams& value) { SetEnableIoTLoggingParams(value); return *this;}

    /**
     * <p>Parameters to define a mitigation action that enables Amazon Web Services IoT
     * Core logging at a specified level of detail.</p>
     */
    inline MitigationActionParams& WithEnableIoTLoggingParams(EnableIoTLoggingParams&& value) { SetEnableIoTLoggingParams(std::move(value)); return *this;}


    /**
     * <p>Parameters to define a mitigation action that publishes findings to Amazon
     * Simple Notification Service (Amazon SNS. You can implement your own custom
     * actions in response to the Amazon SNS messages.</p>
     */
    inline const PublishFindingToSnsParams& GetPublishFindingToSnsParams() const{ return m_publishFindingToSnsParams; }

    /**
     * <p>Parameters to define a mitigation action that publishes findings to Amazon
     * Simple Notification Service (Amazon SNS. You can implement your own custom
     * actions in response to the Amazon SNS messages.</p>
     */
    inline bool PublishFindingToSnsParamsHasBeenSet() const { return m_publishFindingToSnsParamsHasBeenSet; }

    /**
     * <p>Parameters to define a mitigation action that publishes findings to Amazon
     * Simple Notification Service (Amazon SNS. You can implement your own custom
     * actions in response to the Amazon SNS messages.</p>
     */
    inline void SetPublishFindingToSnsParams(const PublishFindingToSnsParams& value) { m_publishFindingToSnsParamsHasBeenSet = true; m_publishFindingToSnsParams = value; }

    /**
     * <p>Parameters to define a mitigation action that publishes findings to Amazon
     * Simple Notification Service (Amazon SNS. You can implement your own custom
     * actions in response to the Amazon SNS messages.</p>
     */
    inline void SetPublishFindingToSnsParams(PublishFindingToSnsParams&& value) { m_publishFindingToSnsParamsHasBeenSet = true; m_publishFindingToSnsParams = std::move(value); }

    /**
     * <p>Parameters to define a mitigation action that publishes findings to Amazon
     * Simple Notification Service (Amazon SNS. You can implement your own custom
     * actions in response to the Amazon SNS messages.</p>
     */
    inline MitigationActionParams& WithPublishFindingToSnsParams(const PublishFindingToSnsParams& value) { SetPublishFindingToSnsParams(value); return *this;}

    /**
     * <p>Parameters to define a mitigation action that publishes findings to Amazon
     * Simple Notification Service (Amazon SNS. You can implement your own custom
     * actions in response to the Amazon SNS messages.</p>
     */
    inline MitigationActionParams& WithPublishFindingToSnsParams(PublishFindingToSnsParams&& value) { SetPublishFindingToSnsParams(std::move(value)); return *this;}

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
