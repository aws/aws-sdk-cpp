/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>Parameters for the SMS Channel Subtype</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/SmsChannelSubtypeParameters">AWS
   * API Reference</a></p>
   */
  class SmsChannelSubtypeParameters
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API SmsChannelSubtypeParameters() = default;
    AWS_CONNECTCAMPAIGNSV2_API SmsChannelSubtypeParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API SmsChannelSubtypeParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetDestinationPhoneNumber() const { return m_destinationPhoneNumber; }
    inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }
    template<typename DestinationPhoneNumberT = Aws::String>
    void SetDestinationPhoneNumber(DestinationPhoneNumberT&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::forward<DestinationPhoneNumberT>(value); }
    template<typename DestinationPhoneNumberT = Aws::String>
    SmsChannelSubtypeParameters& WithDestinationPhoneNumber(DestinationPhoneNumberT&& value) { SetDestinationPhoneNumber(std::forward<DestinationPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectSourcePhoneNumberArn() const { return m_connectSourcePhoneNumberArn; }
    inline bool ConnectSourcePhoneNumberArnHasBeenSet() const { return m_connectSourcePhoneNumberArnHasBeenSet; }
    template<typename ConnectSourcePhoneNumberArnT = Aws::String>
    void SetConnectSourcePhoneNumberArn(ConnectSourcePhoneNumberArnT&& value) { m_connectSourcePhoneNumberArnHasBeenSet = true; m_connectSourcePhoneNumberArn = std::forward<ConnectSourcePhoneNumberArnT>(value); }
    template<typename ConnectSourcePhoneNumberArnT = Aws::String>
    SmsChannelSubtypeParameters& WithConnectSourcePhoneNumberArn(ConnectSourcePhoneNumberArnT&& value) { SetConnectSourcePhoneNumberArn(std::forward<ConnectSourcePhoneNumberArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    template<typename TemplateArnT = Aws::String>
    void SetTemplateArn(TemplateArnT&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::forward<TemplateArnT>(value); }
    template<typename TemplateArnT = Aws::String>
    SmsChannelSubtypeParameters& WithTemplateArn(TemplateArnT&& value) { SetTemplateArn(std::forward<TemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTemplateParameters() const { return m_templateParameters; }
    inline bool TemplateParametersHasBeenSet() const { return m_templateParametersHasBeenSet; }
    template<typename TemplateParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetTemplateParameters(TemplateParametersT&& value) { m_templateParametersHasBeenSet = true; m_templateParameters = std::forward<TemplateParametersT>(value); }
    template<typename TemplateParametersT = Aws::Map<Aws::String, Aws::String>>
    SmsChannelSubtypeParameters& WithTemplateParameters(TemplateParametersT&& value) { SetTemplateParameters(std::forward<TemplateParametersT>(value)); return *this;}
    template<typename TemplateParametersKeyT = Aws::String, typename TemplateParametersValueT = Aws::String>
    SmsChannelSubtypeParameters& AddTemplateParameters(TemplateParametersKeyT&& key, TemplateParametersValueT&& value) {
      m_templateParametersHasBeenSet = true; m_templateParameters.emplace(std::forward<TemplateParametersKeyT>(key), std::forward<TemplateParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_destinationPhoneNumber;
    bool m_destinationPhoneNumberHasBeenSet = false;

    Aws::String m_connectSourcePhoneNumberArn;
    bool m_connectSourcePhoneNumberArnHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_templateParameters;
    bool m_templateParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
