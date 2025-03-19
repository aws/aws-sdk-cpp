/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/model/ExternalUrlConfig.h>
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
namespace AppIntegrationsService
{
namespace Model
{

  /**
   * <p>The configuration for where the application should be loaded
   * from.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ApplicationSourceConfig">AWS
   * API Reference</a></p>
   */
  class ApplicationSourceConfig
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ApplicationSourceConfig() = default;
    AWS_APPINTEGRATIONSSERVICE_API ApplicationSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API ApplicationSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The external URL source for the application.</p>
     */
    inline const ExternalUrlConfig& GetExternalUrlConfig() const { return m_externalUrlConfig; }
    inline bool ExternalUrlConfigHasBeenSet() const { return m_externalUrlConfigHasBeenSet; }
    template<typename ExternalUrlConfigT = ExternalUrlConfig>
    void SetExternalUrlConfig(ExternalUrlConfigT&& value) { m_externalUrlConfigHasBeenSet = true; m_externalUrlConfig = std::forward<ExternalUrlConfigT>(value); }
    template<typename ExternalUrlConfigT = ExternalUrlConfig>
    ApplicationSourceConfig& WithExternalUrlConfig(ExternalUrlConfigT&& value) { SetExternalUrlConfig(std::forward<ExternalUrlConfigT>(value)); return *this;}
    ///@}
  private:

    ExternalUrlConfig m_externalUrlConfig;
    bool m_externalUrlConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
