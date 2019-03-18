/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_MIGRATIONHUB_API DiscoveredResource
  {
  public:
    DiscoveredResource();
    DiscoveredResource(Aws::Utils::Json::JsonView jsonValue);
    DiscoveredResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configurationId in ADS that uniquely identifies the on-premise
     * resource.</p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }

    /**
     * <p>The configurationId in ADS that uniquely identifies the on-premise
     * resource.</p>
     */
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }

    /**
     * <p>The configurationId in ADS that uniquely identifies the on-premise
     * resource.</p>
     */
    inline void SetConfigurationId(const Aws::String& value) { m_configurationIdHasBeenSet = true; m_configurationId = value; }

    /**
     * <p>The configurationId in ADS that uniquely identifies the on-premise
     * resource.</p>
     */
    inline void SetConfigurationId(Aws::String&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::move(value); }

    /**
     * <p>The configurationId in ADS that uniquely identifies the on-premise
     * resource.</p>
     */
    inline void SetConfigurationId(const char* value) { m_configurationIdHasBeenSet = true; m_configurationId.assign(value); }

    /**
     * <p>The configurationId in ADS that uniquely identifies the on-premise
     * resource.</p>
     */
    inline DiscoveredResource& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * <p>The configurationId in ADS that uniquely identifies the on-premise
     * resource.</p>
     */
    inline DiscoveredResource& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The configurationId in ADS that uniquely identifies the on-premise
     * resource.</p>
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
    bool m_configurationIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
