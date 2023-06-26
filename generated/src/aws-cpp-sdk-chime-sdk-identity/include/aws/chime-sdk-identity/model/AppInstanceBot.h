/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-identity/model/Configuration.h>
#include <aws/core/utils/DateTime.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   * <p>An Amazon Lex V2 chat bot created under an
   * <code>AppInstance</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/AppInstanceBot">AWS
   * API Reference</a></p>
   */
  class AppInstanceBot
  {
  public:
    AWS_CHIMESDKIDENTITY_API AppInstanceBot();
    AWS_CHIMESDKIDENTITY_API AppInstanceBot(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API AppInstanceBot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline const Aws::String& GetAppInstanceBotArn() const{ return m_appInstanceBotArn; }

    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline bool AppInstanceBotArnHasBeenSet() const { return m_appInstanceBotArnHasBeenSet; }

    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline void SetAppInstanceBotArn(const Aws::String& value) { m_appInstanceBotArnHasBeenSet = true; m_appInstanceBotArn = value; }

    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline void SetAppInstanceBotArn(Aws::String&& value) { m_appInstanceBotArnHasBeenSet = true; m_appInstanceBotArn = std::move(value); }

    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline void SetAppInstanceBotArn(const char* value) { m_appInstanceBotArnHasBeenSet = true; m_appInstanceBotArn.assign(value); }

    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline AppInstanceBot& WithAppInstanceBotArn(const Aws::String& value) { SetAppInstanceBotArn(value); return *this;}

    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline AppInstanceBot& WithAppInstanceBotArn(Aws::String&& value) { SetAppInstanceBotArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AppInstanceBot.</p>
     */
    inline AppInstanceBot& WithAppInstanceBotArn(const char* value) { SetAppInstanceBotArn(value); return *this;}


    /**
     * <p>The name of the AppInstanceBot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the AppInstanceBot.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the AppInstanceBot.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the AppInstanceBot.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the AppInstanceBot.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the AppInstanceBot.</p>
     */
    inline AppInstanceBot& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the AppInstanceBot.</p>
     */
    inline AppInstanceBot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the AppInstanceBot.</p>
     */
    inline AppInstanceBot& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data processing instructions for an AppInstanceBot.</p>
     */
    inline const Configuration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The data processing instructions for an AppInstanceBot.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The data processing instructions for an AppInstanceBot.</p>
     */
    inline void SetConfiguration(const Configuration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The data processing instructions for an AppInstanceBot.</p>
     */
    inline void SetConfiguration(Configuration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The data processing instructions for an AppInstanceBot.</p>
     */
    inline AppInstanceBot& WithConfiguration(const Configuration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The data processing instructions for an AppInstanceBot.</p>
     */
    inline AppInstanceBot& WithConfiguration(Configuration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The time at which the <code>AppInstanceBot</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which the <code>AppInstanceBot</code> was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which the <code>AppInstanceBot</code> was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which the <code>AppInstanceBot</code> was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which the <code>AppInstanceBot</code> was created.</p>
     */
    inline AppInstanceBot& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the <code>AppInstanceBot</code> was created.</p>
     */
    inline AppInstanceBot& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which the <code>AppInstanceBot</code> was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p>The time at which the <code>AppInstanceBot</code> was last updated.</p>
     */
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }

    /**
     * <p>The time at which the <code>AppInstanceBot</code> was last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }

    /**
     * <p>The time at which the <code>AppInstanceBot</code> was last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }

    /**
     * <p>The time at which the <code>AppInstanceBot</code> was last updated.</p>
     */
    inline AppInstanceBot& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the <code>AppInstanceBot</code> was last updated.</p>
     */
    inline AppInstanceBot& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The metadata for an AppInstanceBot.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata for an AppInstanceBot.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata for an AppInstanceBot.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata for an AppInstanceBot.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata for an AppInstanceBot.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The metadata for an AppInstanceBot.</p>
     */
    inline AppInstanceBot& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata for an AppInstanceBot.</p>
     */
    inline AppInstanceBot& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The metadata for an AppInstanceBot.</p>
     */
    inline AppInstanceBot& WithMetadata(const char* value) { SetMetadata(value); return *this;}

  private:

    Aws::String m_appInstanceBotArn;
    bool m_appInstanceBotArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Configuration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
