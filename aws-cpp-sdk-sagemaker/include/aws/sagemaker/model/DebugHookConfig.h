/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/CollectionConfiguration.h>
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
   * <p>Configuration information for the Amazon SageMaker Debugger hook parameters,
   * metric and tensor collections, and storage paths. To learn more about how to
   * configure the <code>DebugHookConfig</code> parameter, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
   * the SageMaker and Debugger Configuration API Operations to Create, Update, and
   * Debug Your Training Job</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DebugHookConfig">AWS
   * API Reference</a></p>
   */
  class DebugHookConfig
  {
  public:
    AWS_SAGEMAKER_API DebugHookConfig();
    AWS_SAGEMAKER_API DebugHookConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DebugHookConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Path to local storage location for metrics and tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline const Aws::String& GetLocalPath() const{ return m_localPath; }

    /**
     * <p>Path to local storage location for metrics and tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }

    /**
     * <p>Path to local storage location for metrics and tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline void SetLocalPath(const Aws::String& value) { m_localPathHasBeenSet = true; m_localPath = value; }

    /**
     * <p>Path to local storage location for metrics and tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline void SetLocalPath(Aws::String&& value) { m_localPathHasBeenSet = true; m_localPath = std::move(value); }

    /**
     * <p>Path to local storage location for metrics and tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline void SetLocalPath(const char* value) { m_localPathHasBeenSet = true; m_localPath.assign(value); }

    /**
     * <p>Path to local storage location for metrics and tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline DebugHookConfig& WithLocalPath(const Aws::String& value) { SetLocalPath(value); return *this;}

    /**
     * <p>Path to local storage location for metrics and tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline DebugHookConfig& WithLocalPath(Aws::String&& value) { SetLocalPath(std::move(value)); return *this;}

    /**
     * <p>Path to local storage location for metrics and tensors. Defaults to
     * <code>/opt/ml/output/tensors/</code>.</p>
     */
    inline DebugHookConfig& WithLocalPath(const char* value) { SetLocalPath(value); return *this;}


    /**
     * <p>Path to Amazon S3 storage location for metrics and tensors.</p>
     */
    inline const Aws::String& GetS3OutputPath() const{ return m_s3OutputPath; }

    /**
     * <p>Path to Amazon S3 storage location for metrics and tensors.</p>
     */
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }

    /**
     * <p>Path to Amazon S3 storage location for metrics and tensors.</p>
     */
    inline void SetS3OutputPath(const Aws::String& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = value; }

    /**
     * <p>Path to Amazon S3 storage location for metrics and tensors.</p>
     */
    inline void SetS3OutputPath(Aws::String&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::move(value); }

    /**
     * <p>Path to Amazon S3 storage location for metrics and tensors.</p>
     */
    inline void SetS3OutputPath(const char* value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath.assign(value); }

    /**
     * <p>Path to Amazon S3 storage location for metrics and tensors.</p>
     */
    inline DebugHookConfig& WithS3OutputPath(const Aws::String& value) { SetS3OutputPath(value); return *this;}

    /**
     * <p>Path to Amazon S3 storage location for metrics and tensors.</p>
     */
    inline DebugHookConfig& WithS3OutputPath(Aws::String&& value) { SetS3OutputPath(std::move(value)); return *this;}

    /**
     * <p>Path to Amazon S3 storage location for metrics and tensors.</p>
     */
    inline DebugHookConfig& WithS3OutputPath(const char* value) { SetS3OutputPath(value); return *this;}


    /**
     * <p>Configuration information for the Amazon SageMaker Debugger hook
     * parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHookParameters() const{ return m_hookParameters; }

    /**
     * <p>Configuration information for the Amazon SageMaker Debugger hook
     * parameters.</p>
     */
    inline bool HookParametersHasBeenSet() const { return m_hookParametersHasBeenSet; }

    /**
     * <p>Configuration information for the Amazon SageMaker Debugger hook
     * parameters.</p>
     */
    inline void SetHookParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_hookParametersHasBeenSet = true; m_hookParameters = value; }

    /**
     * <p>Configuration information for the Amazon SageMaker Debugger hook
     * parameters.</p>
     */
    inline void SetHookParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_hookParametersHasBeenSet = true; m_hookParameters = std::move(value); }

    /**
     * <p>Configuration information for the Amazon SageMaker Debugger hook
     * parameters.</p>
     */
    inline DebugHookConfig& WithHookParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHookParameters(value); return *this;}

    /**
     * <p>Configuration information for the Amazon SageMaker Debugger hook
     * parameters.</p>
     */
    inline DebugHookConfig& WithHookParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHookParameters(std::move(value)); return *this;}

    /**
     * <p>Configuration information for the Amazon SageMaker Debugger hook
     * parameters.</p>
     */
    inline DebugHookConfig& AddHookParameters(const Aws::String& key, const Aws::String& value) { m_hookParametersHasBeenSet = true; m_hookParameters.emplace(key, value); return *this; }

    /**
     * <p>Configuration information for the Amazon SageMaker Debugger hook
     * parameters.</p>
     */
    inline DebugHookConfig& AddHookParameters(Aws::String&& key, const Aws::String& value) { m_hookParametersHasBeenSet = true; m_hookParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Configuration information for the Amazon SageMaker Debugger hook
     * parameters.</p>
     */
    inline DebugHookConfig& AddHookParameters(const Aws::String& key, Aws::String&& value) { m_hookParametersHasBeenSet = true; m_hookParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Configuration information for the Amazon SageMaker Debugger hook
     * parameters.</p>
     */
    inline DebugHookConfig& AddHookParameters(Aws::String&& key, Aws::String&& value) { m_hookParametersHasBeenSet = true; m_hookParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Configuration information for the Amazon SageMaker Debugger hook
     * parameters.</p>
     */
    inline DebugHookConfig& AddHookParameters(const char* key, Aws::String&& value) { m_hookParametersHasBeenSet = true; m_hookParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Configuration information for the Amazon SageMaker Debugger hook
     * parameters.</p>
     */
    inline DebugHookConfig& AddHookParameters(Aws::String&& key, const char* value) { m_hookParametersHasBeenSet = true; m_hookParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Configuration information for the Amazon SageMaker Debugger hook
     * parameters.</p>
     */
    inline DebugHookConfig& AddHookParameters(const char* key, const char* value) { m_hookParametersHasBeenSet = true; m_hookParameters.emplace(key, value); return *this; }


    /**
     * <p>Configuration information for Amazon SageMaker Debugger tensor collections.
     * To learn more about how to configure the <code>CollectionConfiguration</code>
     * parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline const Aws::Vector<CollectionConfiguration>& GetCollectionConfigurations() const{ return m_collectionConfigurations; }

    /**
     * <p>Configuration information for Amazon SageMaker Debugger tensor collections.
     * To learn more about how to configure the <code>CollectionConfiguration</code>
     * parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline bool CollectionConfigurationsHasBeenSet() const { return m_collectionConfigurationsHasBeenSet; }

    /**
     * <p>Configuration information for Amazon SageMaker Debugger tensor collections.
     * To learn more about how to configure the <code>CollectionConfiguration</code>
     * parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline void SetCollectionConfigurations(const Aws::Vector<CollectionConfiguration>& value) { m_collectionConfigurationsHasBeenSet = true; m_collectionConfigurations = value; }

    /**
     * <p>Configuration information for Amazon SageMaker Debugger tensor collections.
     * To learn more about how to configure the <code>CollectionConfiguration</code>
     * parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline void SetCollectionConfigurations(Aws::Vector<CollectionConfiguration>&& value) { m_collectionConfigurationsHasBeenSet = true; m_collectionConfigurations = std::move(value); }

    /**
     * <p>Configuration information for Amazon SageMaker Debugger tensor collections.
     * To learn more about how to configure the <code>CollectionConfiguration</code>
     * parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline DebugHookConfig& WithCollectionConfigurations(const Aws::Vector<CollectionConfiguration>& value) { SetCollectionConfigurations(value); return *this;}

    /**
     * <p>Configuration information for Amazon SageMaker Debugger tensor collections.
     * To learn more about how to configure the <code>CollectionConfiguration</code>
     * parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline DebugHookConfig& WithCollectionConfigurations(Aws::Vector<CollectionConfiguration>&& value) { SetCollectionConfigurations(std::move(value)); return *this;}

    /**
     * <p>Configuration information for Amazon SageMaker Debugger tensor collections.
     * To learn more about how to configure the <code>CollectionConfiguration</code>
     * parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline DebugHookConfig& AddCollectionConfigurations(const CollectionConfiguration& value) { m_collectionConfigurationsHasBeenSet = true; m_collectionConfigurations.push_back(value); return *this; }

    /**
     * <p>Configuration information for Amazon SageMaker Debugger tensor collections.
     * To learn more about how to configure the <code>CollectionConfiguration</code>
     * parameter, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/debugger-createtrainingjob-api.html">Use
     * the SageMaker and Debugger Configuration API Operations to Create, Update, and
     * Debug Your Training Job</a>. </p>
     */
    inline DebugHookConfig& AddCollectionConfigurations(CollectionConfiguration&& value) { m_collectionConfigurationsHasBeenSet = true; m_collectionConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_localPath;
    bool m_localPathHasBeenSet = false;

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_hookParameters;
    bool m_hookParametersHasBeenSet = false;

    Aws::Vector<CollectionConfiguration> m_collectionConfigurations;
    bool m_collectionConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
