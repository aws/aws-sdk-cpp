/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaigns/model/EncryptionConfig.h>
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
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>Instance config object</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/InstanceConfig">AWS
   * API Reference</a></p>
   */
  class InstanceConfig
  {
  public:
    AWS_CONNECTCAMPAIGNS_API InstanceConfig() = default;
    AWS_CONNECTCAMPAIGNS_API InstanceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API InstanceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetConnectInstanceId() const { return m_connectInstanceId; }
    inline bool ConnectInstanceIdHasBeenSet() const { return m_connectInstanceIdHasBeenSet; }
    template<typename ConnectInstanceIdT = Aws::String>
    void SetConnectInstanceId(ConnectInstanceIdT&& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = std::forward<ConnectInstanceIdT>(value); }
    template<typename ConnectInstanceIdT = Aws::String>
    InstanceConfig& WithConnectInstanceId(ConnectInstanceIdT&& value) { SetConnectInstanceId(std::forward<ConnectInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetServiceLinkedRoleArn() const { return m_serviceLinkedRoleArn; }
    inline bool ServiceLinkedRoleArnHasBeenSet() const { return m_serviceLinkedRoleArnHasBeenSet; }
    template<typename ServiceLinkedRoleArnT = Aws::String>
    void SetServiceLinkedRoleArn(ServiceLinkedRoleArnT&& value) { m_serviceLinkedRoleArnHasBeenSet = true; m_serviceLinkedRoleArn = std::forward<ServiceLinkedRoleArnT>(value); }
    template<typename ServiceLinkedRoleArnT = Aws::String>
    InstanceConfig& WithServiceLinkedRoleArn(ServiceLinkedRoleArnT&& value) { SetServiceLinkedRoleArn(std::forward<ServiceLinkedRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EncryptionConfig& GetEncryptionConfig() const { return m_encryptionConfig; }
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }
    template<typename EncryptionConfigT = EncryptionConfig>
    void SetEncryptionConfig(EncryptionConfigT&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::forward<EncryptionConfigT>(value); }
    template<typename EncryptionConfigT = EncryptionConfig>
    InstanceConfig& WithEncryptionConfig(EncryptionConfigT&& value) { SetEncryptionConfig(std::forward<EncryptionConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectInstanceId;
    bool m_connectInstanceIdHasBeenSet = false;

    Aws::String m_serviceLinkedRoleArn;
    bool m_serviceLinkedRoleArnHasBeenSet = false;

    EncryptionConfig m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
