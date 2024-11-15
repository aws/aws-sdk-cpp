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
    AWS_CONNECTCAMPAIGNSV2_API EmailChannelSubtypeParameters();
    AWS_CONNECTCAMPAIGNSV2_API EmailChannelSubtypeParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API EmailChannelSubtypeParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetDestinationEmailAddress() const{ return m_destinationEmailAddress; }
    inline bool DestinationEmailAddressHasBeenSet() const { return m_destinationEmailAddressHasBeenSet; }
    inline void SetDestinationEmailAddress(const Aws::String& value) { m_destinationEmailAddressHasBeenSet = true; m_destinationEmailAddress = value; }
    inline void SetDestinationEmailAddress(Aws::String&& value) { m_destinationEmailAddressHasBeenSet = true; m_destinationEmailAddress = std::move(value); }
    inline void SetDestinationEmailAddress(const char* value) { m_destinationEmailAddressHasBeenSet = true; m_destinationEmailAddress.assign(value); }
    inline EmailChannelSubtypeParameters& WithDestinationEmailAddress(const Aws::String& value) { SetDestinationEmailAddress(value); return *this;}
    inline EmailChannelSubtypeParameters& WithDestinationEmailAddress(Aws::String&& value) { SetDestinationEmailAddress(std::move(value)); return *this;}
    inline EmailChannelSubtypeParameters& WithDestinationEmailAddress(const char* value) { SetDestinationEmailAddress(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectSourceEmailAddress() const{ return m_connectSourceEmailAddress; }
    inline bool ConnectSourceEmailAddressHasBeenSet() const { return m_connectSourceEmailAddressHasBeenSet; }
    inline void SetConnectSourceEmailAddress(const Aws::String& value) { m_connectSourceEmailAddressHasBeenSet = true; m_connectSourceEmailAddress = value; }
    inline void SetConnectSourceEmailAddress(Aws::String&& value) { m_connectSourceEmailAddressHasBeenSet = true; m_connectSourceEmailAddress = std::move(value); }
    inline void SetConnectSourceEmailAddress(const char* value) { m_connectSourceEmailAddressHasBeenSet = true; m_connectSourceEmailAddress.assign(value); }
    inline EmailChannelSubtypeParameters& WithConnectSourceEmailAddress(const Aws::String& value) { SetConnectSourceEmailAddress(value); return *this;}
    inline EmailChannelSubtypeParameters& WithConnectSourceEmailAddress(Aws::String&& value) { SetConnectSourceEmailAddress(std::move(value)); return *this;}
    inline EmailChannelSubtypeParameters& WithConnectSourceEmailAddress(const char* value) { SetConnectSourceEmailAddress(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }
    inline EmailChannelSubtypeParameters& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}
    inline EmailChannelSubtypeParameters& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}
    inline EmailChannelSubtypeParameters& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTemplateParameters() const{ return m_templateParameters; }
    inline bool TemplateParametersHasBeenSet() const { return m_templateParametersHasBeenSet; }
    inline void SetTemplateParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_templateParametersHasBeenSet = true; m_templateParameters = value; }
    inline void SetTemplateParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_templateParametersHasBeenSet = true; m_templateParameters = std::move(value); }
    inline EmailChannelSubtypeParameters& WithTemplateParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetTemplateParameters(value); return *this;}
    inline EmailChannelSubtypeParameters& WithTemplateParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetTemplateParameters(std::move(value)); return *this;}
    inline EmailChannelSubtypeParameters& AddTemplateParameters(const Aws::String& key, const Aws::String& value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(key, value); return *this; }
    inline EmailChannelSubtypeParameters& AddTemplateParameters(Aws::String&& key, const Aws::String& value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(std::move(key), value); return *this; }
    inline EmailChannelSubtypeParameters& AddTemplateParameters(const Aws::String& key, Aws::String&& value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(key, std::move(value)); return *this; }
    inline EmailChannelSubtypeParameters& AddTemplateParameters(Aws::String&& key, Aws::String&& value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline EmailChannelSubtypeParameters& AddTemplateParameters(const char* key, Aws::String&& value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(key, std::move(value)); return *this; }
    inline EmailChannelSubtypeParameters& AddTemplateParameters(Aws::String&& key, const char* value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(std::move(key), value); return *this; }
    inline EmailChannelSubtypeParameters& AddTemplateParameters(const char* key, const char* value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(key, value); return *this; }
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
