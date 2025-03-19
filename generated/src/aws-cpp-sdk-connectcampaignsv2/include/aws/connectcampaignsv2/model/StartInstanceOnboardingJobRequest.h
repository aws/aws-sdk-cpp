/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/EncryptionConfig.h>
#include <utility>

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>The request for StartInstanceOnboardingJob API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/StartInstanceOnboardingJobRequest">AWS
   * API Reference</a></p>
   */
  class StartInstanceOnboardingJobRequest : public ConnectCampaignsV2Request
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API StartInstanceOnboardingJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartInstanceOnboardingJob"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetConnectInstanceId() const { return m_connectInstanceId; }
    inline bool ConnectInstanceIdHasBeenSet() const { return m_connectInstanceIdHasBeenSet; }
    template<typename ConnectInstanceIdT = Aws::String>
    void SetConnectInstanceId(ConnectInstanceIdT&& value) { m_connectInstanceIdHasBeenSet = true; m_connectInstanceId = std::forward<ConnectInstanceIdT>(value); }
    template<typename ConnectInstanceIdT = Aws::String>
    StartInstanceOnboardingJobRequest& WithConnectInstanceId(ConnectInstanceIdT&& value) { SetConnectInstanceId(std::forward<ConnectInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EncryptionConfig& GetEncryptionConfig() const { return m_encryptionConfig; }
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }
    template<typename EncryptionConfigT = EncryptionConfig>
    void SetEncryptionConfig(EncryptionConfigT&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::forward<EncryptionConfigT>(value); }
    template<typename EncryptionConfigT = EncryptionConfig>
    StartInstanceOnboardingJobRequest& WithEncryptionConfig(EncryptionConfigT&& value) { SetEncryptionConfig(std::forward<EncryptionConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectInstanceId;
    bool m_connectInstanceIdHasBeenSet = false;

    EncryptionConfig m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
