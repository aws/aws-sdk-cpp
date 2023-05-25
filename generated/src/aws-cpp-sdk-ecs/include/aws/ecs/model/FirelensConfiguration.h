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
    AWS_ECS_API FirelensConfiguration();
    AWS_ECS_API FirelensConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API FirelensConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The log router to use. The valid values are <code>fluentd</code> or
     * <code>fluentbit</code>.</p>
     */
    inline const FirelensConfigurationType& GetType() const{ return m_type; }

    /**
     * <p>The log router to use. The valid values are <code>fluentd</code> or
     * <code>fluentbit</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The log router to use. The valid values are <code>fluentd</code> or
     * <code>fluentbit</code>.</p>
     */
    inline void SetType(const FirelensConfigurationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The log router to use. The valid values are <code>fluentd</code> or
     * <code>fluentbit</code>.</p>
     */
    inline void SetType(FirelensConfigurationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The log router to use. The valid values are <code>fluentd</code> or
     * <code>fluentbit</code>.</p>
     */
    inline FirelensConfiguration& WithType(const FirelensConfigurationType& value) { SetType(value); return *this;}

    /**
     * <p>The log router to use. The valid values are <code>fluentd</code> or
     * <code>fluentbit</code>.</p>
     */
    inline FirelensConfiguration& WithType(FirelensConfigurationType&& value) { SetType(std::move(value)); return *this;}


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
    inline const Aws::Map<Aws::String, Aws::String>& GetOptions() const{ return m_options; }

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
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

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
    inline void SetOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_optionsHasBeenSet = true; m_options = value; }

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
    inline void SetOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

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
    inline FirelensConfiguration& WithOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetOptions(value); return *this;}

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
    inline FirelensConfiguration& WithOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetOptions(std::move(value)); return *this;}

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
    inline FirelensConfiguration& AddOptions(const Aws::String& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options.emplace(key, value); return *this; }

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
    inline FirelensConfiguration& AddOptions(Aws::String&& key, const Aws::String& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), value); return *this; }

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
    inline FirelensConfiguration& AddOptions(const Aws::String& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(key, std::move(value)); return *this; }

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
    inline FirelensConfiguration& AddOptions(Aws::String&& key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), std::move(value)); return *this; }

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
    inline FirelensConfiguration& AddOptions(const char* key, Aws::String&& value) { m_optionsHasBeenSet = true; m_options.emplace(key, std::move(value)); return *this; }

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
    inline FirelensConfiguration& AddOptions(Aws::String&& key, const char* value) { m_optionsHasBeenSet = true; m_options.emplace(std::move(key), value); return *this; }

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
    inline FirelensConfiguration& AddOptions(const char* key, const char* value) { m_optionsHasBeenSet = true; m_options.emplace(key, value); return *this; }

  private:

    FirelensConfigurationType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_options;
    bool m_optionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
