/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
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
   * <p>An object containing <code>ProviderConfiguration</code> and
   * <code>ProviderServiceArn</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/NamespaceProviderProperties">AWS
   * API Reference</a></p>
   */
  class NamespaceProviderProperties
  {
  public:
    AWS_ENTITYRESOLUTION_API NamespaceProviderProperties();
    AWS_ENTITYRESOLUTION_API NamespaceProviderProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API NamespaceProviderProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object which defines any additional configurations required by the
     * provider service.</p>
     */
    inline Aws::Utils::DocumentView GetProviderConfiguration() const{ return m_providerConfiguration; }
    inline bool ProviderConfigurationHasBeenSet() const { return m_providerConfigurationHasBeenSet; }
    inline void SetProviderConfiguration(const Aws::Utils::Document& value) { m_providerConfigurationHasBeenSet = true; m_providerConfiguration = value; }
    inline void SetProviderConfiguration(Aws::Utils::Document&& value) { m_providerConfigurationHasBeenSet = true; m_providerConfiguration = std::move(value); }
    inline NamespaceProviderProperties& WithProviderConfiguration(const Aws::Utils::Document& value) { SetProviderConfiguration(value); return *this;}
    inline NamespaceProviderProperties& WithProviderConfiguration(Aws::Utils::Document&& value) { SetProviderConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the provider service.</p>
     */
    inline const Aws::String& GetProviderServiceArn() const{ return m_providerServiceArn; }
    inline bool ProviderServiceArnHasBeenSet() const { return m_providerServiceArnHasBeenSet; }
    inline void SetProviderServiceArn(const Aws::String& value) { m_providerServiceArnHasBeenSet = true; m_providerServiceArn = value; }
    inline void SetProviderServiceArn(Aws::String&& value) { m_providerServiceArnHasBeenSet = true; m_providerServiceArn = std::move(value); }
    inline void SetProviderServiceArn(const char* value) { m_providerServiceArnHasBeenSet = true; m_providerServiceArn.assign(value); }
    inline NamespaceProviderProperties& WithProviderServiceArn(const Aws::String& value) { SetProviderServiceArn(value); return *this;}
    inline NamespaceProviderProperties& WithProviderServiceArn(Aws::String&& value) { SetProviderServiceArn(std::move(value)); return *this;}
    inline NamespaceProviderProperties& WithProviderServiceArn(const char* value) { SetProviderServiceArn(value); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_providerConfiguration;
    bool m_providerConfigurationHasBeenSet = false;

    Aws::String m_providerServiceArn;
    bool m_providerServiceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
