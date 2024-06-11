/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about an action configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionConfiguration">AWS
   * API Reference</a></p>
   */
  class ActionConfiguration
  {
  public:
    AWS_CODEPIPELINE_API ActionConfiguration();
    AWS_CODEPIPELINE_API ActionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration data for the action.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline ActionConfiguration& WithConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetConfiguration(value); return *this;}
    inline ActionConfiguration& WithConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetConfiguration(std::move(value)); return *this;}
    inline ActionConfiguration& AddConfiguration(const Aws::String& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }
    inline ActionConfiguration& AddConfiguration(Aws::String&& key, const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }
    inline ActionConfiguration& AddConfiguration(const Aws::String& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }
    inline ActionConfiguration& AddConfiguration(Aws::String&& key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), std::move(value)); return *this; }
    inline ActionConfiguration& AddConfiguration(const char* key, Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, std::move(value)); return *this; }
    inline ActionConfiguration& AddConfiguration(Aws::String&& key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(std::move(key), value); return *this; }
    inline ActionConfiguration& AddConfiguration(const char* key, const char* value) { m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
