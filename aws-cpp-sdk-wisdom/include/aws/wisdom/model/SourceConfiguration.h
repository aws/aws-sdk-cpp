/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/AppIntegrationsConfiguration.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>Configuration information about the external data source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/SourceConfiguration">AWS
   * API Reference</a></p>
   */
  class SourceConfiguration
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API SourceConfiguration();
    AWS_CONNECTWISDOMSERVICE_API SourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API SourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration information for Amazon AppIntegrations to automatically ingest
     * content.</p>
     */
    inline const AppIntegrationsConfiguration& GetAppIntegrations() const{ return m_appIntegrations; }

    /**
     * <p>Configuration information for Amazon AppIntegrations to automatically ingest
     * content.</p>
     */
    inline bool AppIntegrationsHasBeenSet() const { return m_appIntegrationsHasBeenSet; }

    /**
     * <p>Configuration information for Amazon AppIntegrations to automatically ingest
     * content.</p>
     */
    inline void SetAppIntegrations(const AppIntegrationsConfiguration& value) { m_appIntegrationsHasBeenSet = true; m_appIntegrations = value; }

    /**
     * <p>Configuration information for Amazon AppIntegrations to automatically ingest
     * content.</p>
     */
    inline void SetAppIntegrations(AppIntegrationsConfiguration&& value) { m_appIntegrationsHasBeenSet = true; m_appIntegrations = std::move(value); }

    /**
     * <p>Configuration information for Amazon AppIntegrations to automatically ingest
     * content.</p>
     */
    inline SourceConfiguration& WithAppIntegrations(const AppIntegrationsConfiguration& value) { SetAppIntegrations(value); return *this;}

    /**
     * <p>Configuration information for Amazon AppIntegrations to automatically ingest
     * content.</p>
     */
    inline SourceConfiguration& WithAppIntegrations(AppIntegrationsConfiguration&& value) { SetAppIntegrations(std::move(value)); return *this;}

  private:

    AppIntegrationsConfiguration m_appIntegrations;
    bool m_appIntegrationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
