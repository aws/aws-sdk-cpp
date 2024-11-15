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
    AWS_CONNECTCAMPAIGNSV2_API SmsChannelSubtypeParameters();
    AWS_CONNECTCAMPAIGNSV2_API SmsChannelSubtypeParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API SmsChannelSubtypeParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetDestinationPhoneNumber() const{ return m_destinationPhoneNumber; }
    inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }
    inline void SetDestinationPhoneNumber(const Aws::String& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = value; }
    inline void SetDestinationPhoneNumber(Aws::String&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::move(value); }
    inline void SetDestinationPhoneNumber(const char* value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber.assign(value); }
    inline SmsChannelSubtypeParameters& WithDestinationPhoneNumber(const Aws::String& value) { SetDestinationPhoneNumber(value); return *this;}
    inline SmsChannelSubtypeParameters& WithDestinationPhoneNumber(Aws::String&& value) { SetDestinationPhoneNumber(std::move(value)); return *this;}
    inline SmsChannelSubtypeParameters& WithDestinationPhoneNumber(const char* value) { SetDestinationPhoneNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectSourcePhoneNumberArn() const{ return m_connectSourcePhoneNumberArn; }
    inline bool ConnectSourcePhoneNumberArnHasBeenSet() const { return m_connectSourcePhoneNumberArnHasBeenSet; }
    inline void SetConnectSourcePhoneNumberArn(const Aws::String& value) { m_connectSourcePhoneNumberArnHasBeenSet = true; m_connectSourcePhoneNumberArn = value; }
    inline void SetConnectSourcePhoneNumberArn(Aws::String&& value) { m_connectSourcePhoneNumberArnHasBeenSet = true; m_connectSourcePhoneNumberArn = std::move(value); }
    inline void SetConnectSourcePhoneNumberArn(const char* value) { m_connectSourcePhoneNumberArnHasBeenSet = true; m_connectSourcePhoneNumberArn.assign(value); }
    inline SmsChannelSubtypeParameters& WithConnectSourcePhoneNumberArn(const Aws::String& value) { SetConnectSourcePhoneNumberArn(value); return *this;}
    inline SmsChannelSubtypeParameters& WithConnectSourcePhoneNumberArn(Aws::String&& value) { SetConnectSourcePhoneNumberArn(std::move(value)); return *this;}
    inline SmsChannelSubtypeParameters& WithConnectSourcePhoneNumberArn(const char* value) { SetConnectSourcePhoneNumberArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }
    inline SmsChannelSubtypeParameters& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}
    inline SmsChannelSubtypeParameters& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}
    inline SmsChannelSubtypeParameters& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTemplateParameters() const{ return m_templateParameters; }
    inline bool TemplateParametersHasBeenSet() const { return m_templateParametersHasBeenSet; }
    inline void SetTemplateParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_templateParametersHasBeenSet = true; m_templateParameters = value; }
    inline void SetTemplateParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_templateParametersHasBeenSet = true; m_templateParameters = std::move(value); }
    inline SmsChannelSubtypeParameters& WithTemplateParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetTemplateParameters(value); return *this;}
    inline SmsChannelSubtypeParameters& WithTemplateParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetTemplateParameters(std::move(value)); return *this;}
    inline SmsChannelSubtypeParameters& AddTemplateParameters(const Aws::String& key, const Aws::String& value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(key, value); return *this; }
    inline SmsChannelSubtypeParameters& AddTemplateParameters(Aws::String&& key, const Aws::String& value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(std::move(key), value); return *this; }
    inline SmsChannelSubtypeParameters& AddTemplateParameters(const Aws::String& key, Aws::String&& value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(key, std::move(value)); return *this; }
    inline SmsChannelSubtypeParameters& AddTemplateParameters(Aws::String&& key, Aws::String&& value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline SmsChannelSubtypeParameters& AddTemplateParameters(const char* key, Aws::String&& value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(key, std::move(value)); return *this; }
    inline SmsChannelSubtypeParameters& AddTemplateParameters(Aws::String&& key, const char* value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(std::move(key), value); return *this; }
    inline SmsChannelSubtypeParameters& AddTemplateParameters(const char* key, const char* value) { m_templateParametersHasBeenSet = true; m_templateParameters.emplace(key, value); return *this; }
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
