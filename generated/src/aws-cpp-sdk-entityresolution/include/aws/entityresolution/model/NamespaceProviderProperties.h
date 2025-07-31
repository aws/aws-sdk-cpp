/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
   * <p>An object containing <code>providerConfiguration</code> and
   * <code>providerServiceArn</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/NamespaceProviderProperties">AWS
   * API Reference</a></p>
   */
  class NamespaceProviderProperties
  {
  public:
    AWS_ENTITYRESOLUTION_API NamespaceProviderProperties() = default;
    AWS_ENTITYRESOLUTION_API NamespaceProviderProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API NamespaceProviderProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the provider service.</p>
     */
    inline const Aws::String& GetProviderServiceArn() const { return m_providerServiceArn; }
    inline bool ProviderServiceArnHasBeenSet() const { return m_providerServiceArnHasBeenSet; }
    template<typename ProviderServiceArnT = Aws::String>
    void SetProviderServiceArn(ProviderServiceArnT&& value) { m_providerServiceArnHasBeenSet = true; m_providerServiceArn = std::forward<ProviderServiceArnT>(value); }
    template<typename ProviderServiceArnT = Aws::String>
    NamespaceProviderProperties& WithProviderServiceArn(ProviderServiceArnT&& value) { SetProviderServiceArn(std::forward<ProviderServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object which defines any additional configurations required by the
     * provider service.</p>
     */
    inline Aws::Utils::DocumentView GetProviderConfiguration() const { return m_providerConfiguration; }
    inline bool ProviderConfigurationHasBeenSet() const { return m_providerConfigurationHasBeenSet; }
    template<typename ProviderConfigurationT = Aws::Utils::Document>
    void SetProviderConfiguration(ProviderConfigurationT&& value) { m_providerConfigurationHasBeenSet = true; m_providerConfiguration = std::forward<ProviderConfigurationT>(value); }
    template<typename ProviderConfigurationT = Aws::Utils::Document>
    NamespaceProviderProperties& WithProviderConfiguration(ProviderConfigurationT&& value) { SetProviderConfiguration(std::forward<ProviderConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_providerServiceArn;
    bool m_providerServiceArnHasBeenSet = false;

    Aws::Utils::Document m_providerConfiguration;
    bool m_providerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
