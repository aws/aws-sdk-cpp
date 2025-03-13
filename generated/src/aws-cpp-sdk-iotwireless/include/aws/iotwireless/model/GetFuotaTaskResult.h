/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/FuotaTaskStatus.h>
#include <aws/iotwireless/model/LoRaWANFuotaTaskGetInfo.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTWireless
{
namespace Model
{
  class GetFuotaTaskResult
  {
  public:
    AWS_IOTWIRELESS_API GetFuotaTaskResult() = default;
    AWS_IOTWIRELESS_API GetFuotaTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetFuotaTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetFuotaTaskResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetFuotaTaskResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline FuotaTaskStatus GetStatus() const { return m_status; }
    inline void SetStatus(FuotaTaskStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetFuotaTaskResult& WithStatus(FuotaTaskStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetFuotaTaskResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetFuotaTaskResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LoRaWANFuotaTaskGetInfo& GetLoRaWAN() const { return m_loRaWAN; }
    template<typename LoRaWANT = LoRaWANFuotaTaskGetInfo>
    void SetLoRaWAN(LoRaWANT&& value) { m_loRaWANHasBeenSet = true; m_loRaWAN = std::forward<LoRaWANT>(value); }
    template<typename LoRaWANT = LoRaWANFuotaTaskGetInfo>
    GetFuotaTaskResult& WithLoRaWAN(LoRaWANT&& value) { SetLoRaWAN(std::forward<LoRaWANT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFirmwareUpdateImage() const { return m_firmwareUpdateImage; }
    template<typename FirmwareUpdateImageT = Aws::String>
    void SetFirmwareUpdateImage(FirmwareUpdateImageT&& value) { m_firmwareUpdateImageHasBeenSet = true; m_firmwareUpdateImage = std::forward<FirmwareUpdateImageT>(value); }
    template<typename FirmwareUpdateImageT = Aws::String>
    GetFuotaTaskResult& WithFirmwareUpdateImage(FirmwareUpdateImageT&& value) { SetFirmwareUpdateImage(std::forward<FirmwareUpdateImageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFirmwareUpdateRole() const { return m_firmwareUpdateRole; }
    template<typename FirmwareUpdateRoleT = Aws::String>
    void SetFirmwareUpdateRole(FirmwareUpdateRoleT&& value) { m_firmwareUpdateRoleHasBeenSet = true; m_firmwareUpdateRole = std::forward<FirmwareUpdateRoleT>(value); }
    template<typename FirmwareUpdateRoleT = Aws::String>
    GetFuotaTaskResult& WithFirmwareUpdateRole(FirmwareUpdateRoleT&& value) { SetFirmwareUpdateRole(std::forward<FirmwareUpdateRoleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetFuotaTaskResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetRedundancyPercent() const { return m_redundancyPercent; }
    inline void SetRedundancyPercent(int value) { m_redundancyPercentHasBeenSet = true; m_redundancyPercent = value; }
    inline GetFuotaTaskResult& WithRedundancyPercent(int value) { SetRedundancyPercent(value); return *this;}
    ///@}

    ///@{
    
    inline int GetFragmentSizeBytes() const { return m_fragmentSizeBytes; }
    inline void SetFragmentSizeBytes(int value) { m_fragmentSizeBytesHasBeenSet = true; m_fragmentSizeBytes = value; }
    inline GetFuotaTaskResult& WithFragmentSizeBytes(int value) { SetFragmentSizeBytes(value); return *this;}
    ///@}

    ///@{
    
    inline int GetFragmentIntervalMS() const { return m_fragmentIntervalMS; }
    inline void SetFragmentIntervalMS(int value) { m_fragmentIntervalMSHasBeenSet = true; m_fragmentIntervalMS = value; }
    inline GetFuotaTaskResult& WithFragmentIntervalMS(int value) { SetFragmentIntervalMS(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDescriptor() const { return m_descriptor; }
    template<typename DescriptorT = Aws::String>
    void SetDescriptor(DescriptorT&& value) { m_descriptorHasBeenSet = true; m_descriptor = std::forward<DescriptorT>(value); }
    template<typename DescriptorT = Aws::String>
    GetFuotaTaskResult& WithDescriptor(DescriptorT&& value) { SetDescriptor(std::forward<DescriptorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFuotaTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    FuotaTaskStatus m_status{FuotaTaskStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    LoRaWANFuotaTaskGetInfo m_loRaWAN;
    bool m_loRaWANHasBeenSet = false;

    Aws::String m_firmwareUpdateImage;
    bool m_firmwareUpdateImageHasBeenSet = false;

    Aws::String m_firmwareUpdateRole;
    bool m_firmwareUpdateRoleHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    int m_redundancyPercent{0};
    bool m_redundancyPercentHasBeenSet = false;

    int m_fragmentSizeBytes{0};
    bool m_fragmentSizeBytesHasBeenSet = false;

    int m_fragmentIntervalMS{0};
    bool m_fragmentIntervalMSHasBeenSet = false;

    Aws::String m_descriptor;
    bool m_descriptorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
