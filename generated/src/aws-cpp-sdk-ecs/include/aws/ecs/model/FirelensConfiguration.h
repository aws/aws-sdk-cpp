/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/FirelensConfigurationType.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The FireLens configuration for the container. This is used to specify and
   * configure a log router for container logs. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Custom
   * log routing</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/FirelensConfiguration">AWS
   * API Reference</a></p>
   */
  class FirelensConfiguration
  {
  public:
    AWS_ECS_API FirelensConfiguration() = default;
    AWS_ECS_API FirelensConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API FirelensConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The log router to use. The valid values are <code>fluentd</code> or
     * <code>fluentbit</code>.</p>
     */
    inline FirelensConfigurationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FirelensConfigurationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FirelensConfiguration& WithType(FirelensConfigurationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options to use when configuring the log router. This field is optional
     * and can be used to specify a custom configuration file or to add additional
     * metadata, such as the task, task definition, cluster, and container instance
     * details to the log event. If specified, the syntax to use is
     * <code>"options":{"enable-ecs-log-metadata":"true|false","config-file-type:"s3|file","config-file-value":"arn:aws:s3:::mybucket/fluent.conf|filepath"}</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html#firelens-taskdef">Creating
     * a task definition that uses a FireLens configuration</a> in the <i>Amazon
     * Elastic Container Service Developer Guide</i>.</p>  <p>Tasks hosted on
     * Fargate only support the <code>file</code> configuration file type.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = Aws::Map<Aws::String, Aws::String>>
    FirelensConfiguration& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    template<typename OptionsKeyT = Aws::String, typename OptionsValueT = Aws::String>
    FirelensConfiguration& AddOptions(OptionsKeyT&& key, OptionsValueT&& value) {
      m_optionsHasBeenSet = true; m_options.emplace(std::forward<OptionsKeyT>(key), std::forward<OptionsValueT>(value)); return *this;
    }
    ///@}
  private:

    FirelensConfigurationType m_type{FirelensConfigurationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
