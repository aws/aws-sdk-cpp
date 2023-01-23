/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MigrationHub
{
namespace Model
{

  /**
   * <p>Object representing the on-premises resource being migrated.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWSMigrationHub-2017-05-31/DiscoveredResource">AWS
   * API Reference</a></p>
   */
  class DiscoveredResource
  {
  public:
    AWS_MIGRATIONHUB_API DiscoveredResource();
    AWS_MIGRATIONHUB_API DiscoveredResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API DiscoveredResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configurationId in Application Discovery Service that uniquely identifies
     * the on-premise resource.</p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }

    /**
     * <p>The configurationId in Application Discovery Service that uniquely identifies
     * the on-premise resource.</p>
     */
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }

    /**
     * <p>The configurationId in Application Discovery Service that uniquely identifies
     * the on-premise resource.</p>
     */
    inline void SetConfigurationId(const Aws::String& value) { m_configurationIdHasBeenSet = true; m_configurationId = value; }

    /**
     * <p>The configurationId in Application Discovery Service that uniquely identifies
     * the on-premise resource.</p>
     */
    inline void SetConfigurationId(Aws::String&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::move(value); }

    /**
     * <p>The configurationId in Application Discovery Service that uniquely identifies
     * the on-premise resource.</p>
     */
    inline void SetConfigurationId(const char* value) { m_configurationIdHasBeenSet = true; m_configurationId.assign(value); }

    /**
     * <p>The configurationId in Application Discovery Service that uniquely identifies
     * the on-premise resource.</p>
     */
    inline DiscoveredResource& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * <p>The configurationId in Application Discovery Service that uniquely identifies
     * the on-premise resource.</p>
     */
    inline DiscoveredResource& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The configurationId in Application Discovery Service that uniquely identifies
     * the on-premise resource.</p>
     */
    inline DiscoveredResource& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}


    /**
     * <p>A description that can be free-form text to record additional detail about
     * the discovered resource for clarity or later reference.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description that can be free-form text to record additional detail about
     * the discovered resource for clarity or later reference.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description that can be free-form text to record additional detail about
     * the discovered resource for clarity or later reference.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description that can be free-form text to record additional detail about
     * the discovered resource for clarity or later reference.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description that can be free-form text to record additional detail about
     * the discovered resource for clarity or later reference.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description that can be free-form text to record additional detail about
     * the discovered resource for clarity or later reference.</p>
     */
    inline DiscoveredResource& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description that can be free-form text to record additional detail about
     * the discovered resource for clarity or later reference.</p>
     */
    inline DiscoveredResource& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description that can be free-form text to record additional detail about
     * the discovered resource for clarity or later reference.</p>
     */
    inline DiscoveredResource& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
