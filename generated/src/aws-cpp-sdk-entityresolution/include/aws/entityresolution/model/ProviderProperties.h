/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
#include <aws/entityresolution/model/IntermediateSourceConfiguration.h>
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
    AWS_ENTITYRESOLUTION_API ProviderProperties() = default;
    AWS_ENTITYRESOLUTION_API ProviderProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ProviderProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the provider service.</p>
     */
    inline const Aws::String& GetProviderServiceArn() const { return m_providerServiceArn; }
    inline bool ProviderServiceArnHasBeenSet() const { return m_providerServiceArnHasBeenSet; }
    template<typename ProviderServiceArnT = Aws::String>
    void SetProviderServiceArn(ProviderServiceArnT&& value) { m_providerServiceArnHasBeenSet = true; m_providerServiceArn = std::forward<ProviderServiceArnT>(value); }
    template<typename ProviderServiceArnT = Aws::String>
    ProviderProperties& WithProviderServiceArn(ProviderServiceArnT&& value) { SetProviderServiceArn(std::forward<ProviderServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required configuration fields to use with the provider service.</p>
     */
    inline Aws::Utils::DocumentView GetProviderConfiguration() const { return m_providerConfiguration; }
    inline bool ProviderConfigurationHasBeenSet() const { return m_providerConfigurationHasBeenSet; }
    template<typename ProviderConfigurationT = Aws::Utils::Document>
    void SetProviderConfiguration(ProviderConfigurationT&& value) { m_providerConfigurationHasBeenSet = true; m_providerConfiguration = std::forward<ProviderConfigurationT>(value); }
    template<typename ProviderConfigurationT = Aws::Utils::Document>
    ProviderProperties& WithProviderConfiguration(ProviderConfigurationT&& value) { SetProviderConfiguration(std::forward<ProviderConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location that temporarily stores your data while it processes.
     * Your information won't be saved permanently.</p>
     */
    inline const IntermediateSourceConfiguration& GetIntermediateSourceConfiguration() const { return m_intermediateSourceConfiguration; }
    inline bool IntermediateSourceConfigurationHasBeenSet() const { return m_intermediateSourceConfigurationHasBeenSet; }
    template<typename IntermediateSourceConfigurationT = IntermediateSourceConfiguration>
    void SetIntermediateSourceConfiguration(IntermediateSourceConfigurationT&& value) { m_intermediateSourceConfigurationHasBeenSet = true; m_intermediateSourceConfiguration = std::forward<IntermediateSourceConfigurationT>(value); }
    template<typename IntermediateSourceConfigurationT = IntermediateSourceConfiguration>
    ProviderProperties& WithIntermediateSourceConfiguration(IntermediateSourceConfigurationT&& value) { SetIntermediateSourceConfiguration(std::forward<IntermediateSourceConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_providerServiceArn;
    bool m_providerServiceArnHasBeenSet = false;

    Aws::Utils::Document m_providerConfiguration;
    bool m_providerConfigurationHasBeenSet = false;

    IntermediateSourceConfiguration m_intermediateSourceConfiguration;
    bool m_intermediateSourceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
