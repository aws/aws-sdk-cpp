/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/iot/model/VersionUpdateByJobsConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdatePackageConfigurationRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdatePackageConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePackageConfiguration"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Configuration to manage job's package version reporting. This updates the
     * thing's reserved named shadow that the job targets.</p>
     */
    inline const VersionUpdateByJobsConfig& GetVersionUpdateByJobsConfig() const { return m_versionUpdateByJobsConfig; }
    inline bool VersionUpdateByJobsConfigHasBeenSet() const { return m_versionUpdateByJobsConfigHasBeenSet; }
    template<typename VersionUpdateByJobsConfigT = VersionUpdateByJobsConfig>
    void SetVersionUpdateByJobsConfig(VersionUpdateByJobsConfigT&& value) { m_versionUpdateByJobsConfigHasBeenSet = true; m_versionUpdateByJobsConfig = std::forward<VersionUpdateByJobsConfigT>(value); }
    template<typename VersionUpdateByJobsConfigT = VersionUpdateByJobsConfig>
    UpdatePackageConfigurationRequest& WithVersionUpdateByJobsConfig(VersionUpdateByJobsConfigT&& value) { SetVersionUpdateByJobsConfig(std::forward<VersionUpdateByJobsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdatePackageConfigurationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    VersionUpdateByJobsConfig m_versionUpdateByJobsConfig;
    bool m_versionUpdateByJobsConfigHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
