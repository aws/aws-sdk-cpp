﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ResourceSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The JupyterServer app settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/JupyterServerAppSettings">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API JupyterServerAppSettings
  {
  public:
    JupyterServerAppSettings();
    JupyterServerAppSettings(Aws::Utils::Json::JsonView jsonValue);
    JupyterServerAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the JupyterServer app.</p>
     */
    inline const ResourceSpec& GetDefaultResourceSpec() const{ return m_defaultResourceSpec; }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the JupyterServer app.</p>
     */
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the JupyterServer app.</p>
     */
    inline void SetDefaultResourceSpec(const ResourceSpec& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = value; }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the JupyterServer app.</p>
     */
    inline void SetDefaultResourceSpec(ResourceSpec&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::move(value); }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the JupyterServer app.</p>
     */
    inline JupyterServerAppSettings& WithDefaultResourceSpec(const ResourceSpec& value) { SetDefaultResourceSpec(value); return *this;}

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the JupyterServer app.</p>
     */
    inline JupyterServerAppSettings& WithDefaultResourceSpec(ResourceSpec&& value) { SetDefaultResourceSpec(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLifecycleConfigArns() const{ return m_lifecycleConfigArns; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp.</p>
     */
    inline bool LifecycleConfigArnsHasBeenSet() const { return m_lifecycleConfigArnsHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp.</p>
     */
    inline void SetLifecycleConfigArns(const Aws::Vector<Aws::String>& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp.</p>
     */
    inline void SetLifecycleConfigArns(Aws::Vector<Aws::String>&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp.</p>
     */
    inline JupyterServerAppSettings& WithLifecycleConfigArns(const Aws::Vector<Aws::String>& value) { SetLifecycleConfigArns(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp.</p>
     */
    inline JupyterServerAppSettings& WithLifecycleConfigArns(Aws::Vector<Aws::String>&& value) { SetLifecycleConfigArns(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp.</p>
     */
    inline JupyterServerAppSettings& AddLifecycleConfigArns(const Aws::String& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(value); return *this; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp.</p>
     */
    inline JupyterServerAppSettings& AddLifecycleConfigArns(Aws::String&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(std::move(value)); return *this; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp.</p>
     */
    inline JupyterServerAppSettings& AddLifecycleConfigArns(const char* value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(value); return *this; }

  private:

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet;

    Aws::Vector<Aws::String> m_lifecycleConfigArns;
    bool m_lifecycleConfigArnsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
