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
    AWS_CONNECTCAMPAIGNS_API InstanceConfig();
    AWS_CONNECTCAMPAIGNS_API InstanceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API InstanceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetConnectInstanceId() const{ return m_connectInstanceId; }

    
    inline bool ConnectInstanceIdHasBeenSet() const { return m_connectInstanceIdHasBeenSet; }

    
    inline void SetConnectInstanceId(const Aws::String& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = value; }

    
    inline void SetConnectInstanceId(Aws::String&& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = std::move(value); }

    
    inline void SetConnectInstanceId(const char* value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId.assign(value); }

    
    inline InstanceConfig& WithConnectInstanceId(const Aws::String& value) { SetConnectInstanceId(value); return *this;}

    
    inline InstanceConfig& WithConnectInstanceId(Aws::String&& value) { SetConnectInstanceId(std::move(value)); return *this;}

    
    inline InstanceConfig& WithConnectInstanceId(const char* value) { SetConnectInstanceId(value); return *this;}


    
    inline const EncryptionConfig& GetEncryptionConfig() const{ return m_encryptionConfig; }

    
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }

    
    inline void SetEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = value; }

    
    inline void SetEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::move(value); }

    
    inline InstanceConfig& WithEncryptionConfig(const EncryptionConfig& value) { SetEncryptionConfig(value); return *this;}

    
    inline InstanceConfig& WithEncryptionConfig(EncryptionConfig&& value) { SetEncryptionConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetServiceLinkedRoleArn() const{ return m_serviceLinkedRoleArn; }

    
    inline bool ServiceLinkedRoleArnHasBeenSet() const { return m_serviceLinkedRoleArnHasBeenSet; }

    
    inline void SetServiceLinkedRoleArn(const Aws::String& value) { m_serviceLinkedRoleArnHasBeenSet = true; m_serviceLinkedRoleArn = value; }

    
    inline void SetServiceLinkedRoleArn(Aws::String&& value) { m_serviceLinkedRoleArnHasBeenSet = true; m_serviceLinkedRoleArn = std::move(value); }

    
    inline void SetServiceLinkedRoleArn(const char* value) { m_serviceLinkedRoleArnHasBeenSet = true; m_serviceLinkedRoleArn.assign(value); }

    
    inline InstanceConfig& WithServiceLinkedRoleArn(const Aws::String& value) { SetServiceLinkedRoleArn(value); return *this;}

    
    inline InstanceConfig& WithServiceLinkedRoleArn(Aws::String&& value) { SetServiceLinkedRoleArn(std::move(value)); return *this;}

    
    inline InstanceConfig& WithServiceLinkedRoleArn(const char* value) { SetServiceLinkedRoleArn(value); return *this;}

  private:

    Aws::String m_connectInstanceId;
    bool m_connectInstanceIdHasBeenSet = false;

    EncryptionConfig m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;

    Aws::String m_serviceLinkedRoleArn;
    bool m_serviceLinkedRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
