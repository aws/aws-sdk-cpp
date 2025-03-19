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
   * <p>Parameters for the Email Channel Subtype</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/EmailChannelSubtypeParameters">AWS
   * API Reference</a></p>
   */
  class EmailChannelSubtypeParameters
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API EmailChannelSubtypeParameters() = default;
    AWS_CONNECTCAMPAIGNSV2_API EmailChannelSubtypeParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API EmailChannelSubtypeParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetDestinationEmailAddress() const { return m_destinationEmailAddress; }
    inline bool DestinationEmailAddressHasBeenSet() const { return m_destinationEmailAddressHasBeenSet; }
    template<typename DestinationEmailAddressT = Aws::String>
    void SetDestinationEmailAddress(DestinationEmailAddressT&& value) { m_destinationEmailAddressHasBeenSet = true; m_destinationEmailAddress = std::forward<DestinationEmailAddressT>(value); }
    template<typename DestinationEmailAddressT = Aws::String>
    EmailChannelSubtypeParameters& WithDestinationEmailAddress(DestinationEmailAddressT&& value) { SetDestinationEmailAddress(std::forward<DestinationEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectSourceEmailAddress() const { return m_connectSourceEmailAddress; }
    inline bool ConnectSourceEmailAddressHasBeenSet() const { return m_connectSourceEmailAddressHasBeenSet; }
    template<typename ConnectSourceEmailAddressT = Aws::String>
    void SetConnectSourceEmailAddress(ConnectSourceEmailAddressT&& value) { m_connectSourceEmailAddressHasBeenSet = true; m_connectSourceEmailAddress = std::forward<ConnectSourceEmailAddressT>(value); }
    template<typename ConnectSourceEmailAddressT = Aws::String>
    EmailChannelSubtypeParameters& WithConnectSourceEmailAddress(ConnectSourceEmailAddressT&& value) { SetConnectSourceEmailAddress(std::forward<ConnectSourceEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    template<typename TemplateArnT = Aws::String>
    void SetTemplateArn(TemplateArnT&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::forward<TemplateArnT>(value); }
    template<typename TemplateArnT = Aws::String>
    EmailChannelSubtypeParameters& WithTemplateArn(TemplateArnT&& value) { SetTemplateArn(std::forward<TemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTemplateParameters() const { return m_templateParameters; }
    inline bool TemplateParametersHasBeenSet() const { return m_templateParametersHasBeenSet; }
    template<typename TemplateParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetTemplateParameters(TemplateParametersT&& value) { m_templateParametersHasBeenSet = true; m_templateParameters = std::forward<TemplateParametersT>(value); }
    template<typename TemplateParametersT = Aws::Map<Aws::String, Aws::String>>
    EmailChannelSubtypeParameters& WithTemplateParameters(TemplateParametersT&& value) { SetTemplateParameters(std::forward<TemplateParametersT>(value)); return *this;}
    template<typename TemplateParametersKeyT = Aws::String, typename TemplateParametersValueT = Aws::String>
    EmailChannelSubtypeParameters& AddTemplateParameters(TemplateParametersKeyT&& key, TemplateParametersValueT&& value) {
      m_templateParametersHasBeenSet = true; m_templateParameters.emplace(std::forward<TemplateParametersKeyT>(key), std::forward<TemplateParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_destinationEmailAddress;
    bool m_destinationEmailAddressHasBeenSet = false;

    Aws::String m_connectSourceEmailAddress;
    bool m_connectSourceEmailAddressHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_templateParameters;
    bool m_templateParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
