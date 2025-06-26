/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/OAuthUpdate.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>The updated authentication configuration details for a connector
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/AuthConfigUpdate">AWS
   * API Reference</a></p>
   */
  class AuthConfigUpdate
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API AuthConfigUpdate() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API AuthConfigUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API AuthConfigUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The updated OAuth configuration settings for the authentication
     * configuration.</p>
     */
    inline const OAuthUpdate& GetOAuthUpdate() const { return m_oAuthUpdate; }
    inline bool OAuthUpdateHasBeenSet() const { return m_oAuthUpdateHasBeenSet; }
    template<typename OAuthUpdateT = OAuthUpdate>
    void SetOAuthUpdate(OAuthUpdateT&& value) { m_oAuthUpdateHasBeenSet = true; m_oAuthUpdate = std::forward<OAuthUpdateT>(value); }
    template<typename OAuthUpdateT = OAuthUpdate>
    AuthConfigUpdate& WithOAuthUpdate(OAuthUpdateT&& value) { SetOAuthUpdate(std::forward<OAuthUpdateT>(value)); return *this;}
    ///@}
  private:

    OAuthUpdate m_oAuthUpdate;
    bool m_oAuthUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
