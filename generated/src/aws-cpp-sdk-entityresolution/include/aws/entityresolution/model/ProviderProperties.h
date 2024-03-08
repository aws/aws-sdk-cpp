/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/IntermediateSourceConfiguration.h>
#include <aws/core/utils/Document.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>An object containing the <code>providerServiceARN</code>,
   * <code>intermediateSourceConfiguration</code>, and
   * <code>providerConfiguration</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/ProviderProperties">AWS
   * API Reference</a></p>
   */
  class ProviderProperties
  {
  public:
    AWS_ENTITYRESOLUTION_API ProviderProperties();
    AWS_ENTITYRESOLUTION_API ProviderProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ProviderProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location that temporarily stores your data while it processes.
     * Your information won't be saved permanently.</p>
     */
    inline const IntermediateSourceConfiguration& GetIntermediateSourceConfiguration() const{ return m_intermediateSourceConfiguration; }

    /**
     * <p>The Amazon S3 location that temporarily stores your data while it processes.
     * Your information won't be saved permanently.</p>
     */
    inline bool IntermediateSourceConfigurationHasBeenSet() const { return m_intermediateSourceConfigurationHasBeenSet; }

    /**
     * <p>The Amazon S3 location that temporarily stores your data while it processes.
     * Your information won't be saved permanently.</p>
     */
    inline void SetIntermediateSourceConfiguration(const IntermediateSourceConfiguration& value) { m_intermediateSourceConfigurationHasBeenSet = true; m_intermediateSourceConfiguration = value; }

    /**
     * <p>The Amazon S3 location that temporarily stores your data while it processes.
     * Your information won't be saved permanently.</p>
     */
    inline void SetIntermediateSourceConfiguration(IntermediateSourceConfiguration&& value) { m_intermediateSourceConfigurationHasBeenSet = true; m_intermediateSourceConfiguration = std::move(value); }

    /**
     * <p>The Amazon S3 location that temporarily stores your data while it processes.
     * Your information won't be saved permanently.</p>
     */
    inline ProviderProperties& WithIntermediateSourceConfiguration(const IntermediateSourceConfiguration& value) { SetIntermediateSourceConfiguration(value); return *this;}

    /**
     * <p>The Amazon S3 location that temporarily stores your data while it processes.
     * Your information won't be saved permanently.</p>
     */
    inline ProviderProperties& WithIntermediateSourceConfiguration(IntermediateSourceConfiguration&& value) { SetIntermediateSourceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The required configuration fields to use with the provider service.</p>
     */
    inline Aws::Utils::DocumentView GetProviderConfiguration() const{ return m_providerConfiguration; }

    /**
     * <p>The required configuration fields to use with the provider service.</p>
     */
    inline bool ProviderConfigurationHasBeenSet() const { return m_providerConfigurationHasBeenSet; }

    /**
     * <p>The required configuration fields to use with the provider service.</p>
     */
    inline void SetProviderConfiguration(const Aws::Utils::Document& value) { m_providerConfigurationHasBeenSet = true; m_providerConfiguration = value; }

    /**
     * <p>The required configuration fields to use with the provider service.</p>
     */
    inline void SetProviderConfiguration(Aws::Utils::Document&& value) { m_providerConfigurationHasBeenSet = true; m_providerConfiguration = std::move(value); }

    /**
     * <p>The required configuration fields to use with the provider service.</p>
     */
    inline ProviderProperties& WithProviderConfiguration(const Aws::Utils::Document& value) { SetProviderConfiguration(value); return *this;}

    /**
     * <p>The required configuration fields to use with the provider service.</p>
     */
    inline ProviderProperties& WithProviderConfiguration(Aws::Utils::Document&& value) { SetProviderConfiguration(std::move(value)); return *this;}


    /**
     * <p>The ARN of the provider service.</p>
     */
    inline const Aws::String& GetProviderServiceArn() const{ return m_providerServiceArn; }

    /**
     * <p>The ARN of the provider service.</p>
     */
    inline bool ProviderServiceArnHasBeenSet() const { return m_providerServiceArnHasBeenSet; }

    /**
     * <p>The ARN of the provider service.</p>
     */
    inline void SetProviderServiceArn(const Aws::String& value) { m_providerServiceArnHasBeenSet = true; m_providerServiceArn = value; }

    /**
     * <p>The ARN of the provider service.</p>
     */
    inline void SetProviderServiceArn(Aws::String&& value) { m_providerServiceArnHasBeenSet = true; m_providerServiceArn = std::move(value); }

    /**
     * <p>The ARN of the provider service.</p>
     */
    inline void SetProviderServiceArn(const char* value) { m_providerServiceArnHasBeenSet = true; m_providerServiceArn.assign(value); }

    /**
     * <p>The ARN of the provider service.</p>
     */
    inline ProviderProperties& WithProviderServiceArn(const Aws::String& value) { SetProviderServiceArn(value); return *this;}

    /**
     * <p>The ARN of the provider service.</p>
     */
    inline ProviderProperties& WithProviderServiceArn(Aws::String&& value) { SetProviderServiceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the provider service.</p>
     */
    inline ProviderProperties& WithProviderServiceArn(const char* value) { SetProviderServiceArn(value); return *this;}

  private:

    IntermediateSourceConfiguration m_intermediateSourceConfiguration;
    bool m_intermediateSourceConfigurationHasBeenSet = false;

    Aws::Utils::Document m_providerConfiguration;
    bool m_providerConfigurationHasBeenSet = false;

    Aws::String m_providerServiceArn;
    bool m_providerServiceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
