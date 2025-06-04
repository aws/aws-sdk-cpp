/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/EVSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evs/model/HostInfoForCreate.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EVS
{
namespace Model
{

  /**
   */
  class CreateEnvironmentHostRequest : public EVSRequest
  {
  public:
    AWS_EVS_API CreateEnvironmentHostRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironmentHost"; }

    AWS_EVS_API Aws::String SerializePayload() const override;

    AWS_EVS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> <p>This parameter is not used in Amazon EVS currently. If you supply
     * input for this parameter, it will have no effect.</p>  <p>A unique,
     * case-sensitive identifier that you provide to ensure the idempotency of the host
     * creation request. If you do not specify a client token, a randomly generated
     * token is used for the request to ensure idempotency.</p></p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateEnvironmentHostRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique ID for the environment that the host is added to.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    CreateEnvironmentHostRequest& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The host that is created and added to the environment.</p>
     */
    inline const HostInfoForCreate& GetHost() const { return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    template<typename HostT = HostInfoForCreate>
    void SetHost(HostT&& value) { m_hostHasBeenSet = true; m_host = std::forward<HostT>(value); }
    template<typename HostT = HostInfoForCreate>
    CreateEnvironmentHostRequest& WithHost(HostT&& value) { SetHost(std::forward<HostT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    HostInfoForCreate m_host;
    bool m_hostHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
