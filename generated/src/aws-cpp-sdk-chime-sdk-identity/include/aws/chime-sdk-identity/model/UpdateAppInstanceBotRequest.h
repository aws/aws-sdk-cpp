/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-identity/model/Configuration.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   */
  class UpdateAppInstanceBotRequest : public ChimeSDKIdentityRequest
  {
  public:
    AWS_CHIMESDKIDENTITY_API UpdateAppInstanceBotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAppInstanceBot"; }

    AWS_CHIMESDKIDENTITY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the <code>AppInstanceBot</code>.</p>
     */
    inline const Aws::String& GetAppInstanceBotArn() const{ return m_appInstanceBotArn; }
    inline bool AppInstanceBotArnHasBeenSet() const { return m_appInstanceBotArnHasBeenSet; }
    inline void SetAppInstanceBotArn(const Aws::String& value) { m_appInstanceBotArnHasBeenSet = true; m_appInstanceBotArn = value; }
    inline void SetAppInstanceBotArn(Aws::String&& value) { m_appInstanceBotArnHasBeenSet = true; m_appInstanceBotArn = std::move(value); }
    inline void SetAppInstanceBotArn(const char* value) { m_appInstanceBotArnHasBeenSet = true; m_appInstanceBotArn.assign(value); }
    inline UpdateAppInstanceBotRequest& WithAppInstanceBotArn(const Aws::String& value) { SetAppInstanceBotArn(value); return *this;}
    inline UpdateAppInstanceBotRequest& WithAppInstanceBotArn(Aws::String&& value) { SetAppInstanceBotArn(std::move(value)); return *this;}
    inline UpdateAppInstanceBotRequest& WithAppInstanceBotArn(const char* value) { SetAppInstanceBotArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>AppInstanceBot</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateAppInstanceBotRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateAppInstanceBotRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateAppInstanceBotRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the <code>AppInstanceBot</code>.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }
    inline UpdateAppInstanceBotRequest& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}
    inline UpdateAppInstanceBotRequest& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}
    inline UpdateAppInstanceBotRequest& WithMetadata(const char* value) { SetMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the bot update.</p>
     */
    inline const Configuration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const Configuration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(Configuration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline UpdateAppInstanceBotRequest& WithConfiguration(const Configuration& value) { SetConfiguration(value); return *this;}
    inline UpdateAppInstanceBotRequest& WithConfiguration(Configuration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceBotArn;
    bool m_appInstanceBotArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    Configuration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
