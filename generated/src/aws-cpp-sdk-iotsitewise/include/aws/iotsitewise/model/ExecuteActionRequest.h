/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/model/TargetResource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ActionPayload.h>
#include <aws/iotsitewise/model/ResolveTo.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class ExecuteActionRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ExecuteActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteAction"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline const TargetResource& GetTargetResource() const { return m_targetResource; }
    inline bool TargetResourceHasBeenSet() const { return m_targetResourceHasBeenSet; }
    template<typename TargetResourceT = TargetResource>
    void SetTargetResource(TargetResourceT&& value) { m_targetResourceHasBeenSet = true; m_targetResource = std::forward<TargetResourceT>(value); }
    template<typename TargetResourceT = TargetResource>
    ExecuteActionRequest& WithTargetResource(TargetResourceT&& value) { SetTargetResource(std::forward<TargetResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the action definition.</p>
     */
    inline const Aws::String& GetActionDefinitionId() const { return m_actionDefinitionId; }
    inline bool ActionDefinitionIdHasBeenSet() const { return m_actionDefinitionIdHasBeenSet; }
    template<typename ActionDefinitionIdT = Aws::String>
    void SetActionDefinitionId(ActionDefinitionIdT&& value) { m_actionDefinitionIdHasBeenSet = true; m_actionDefinitionId = std::forward<ActionDefinitionIdT>(value); }
    template<typename ActionDefinitionIdT = Aws::String>
    ExecuteActionRequest& WithActionDefinitionId(ActionDefinitionIdT&& value) { SetActionDefinitionId(std::forward<ActionDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON payload of the action.</p>
     */
    inline const ActionPayload& GetActionPayload() const { return m_actionPayload; }
    inline bool ActionPayloadHasBeenSet() const { return m_actionPayloadHasBeenSet; }
    template<typename ActionPayloadT = ActionPayload>
    void SetActionPayload(ActionPayloadT&& value) { m_actionPayloadHasBeenSet = true; m_actionPayload = std::forward<ActionPayloadT>(value); }
    template<typename ActionPayloadT = ActionPayload>
    ExecuteActionRequest& WithActionPayload(ActionPayloadT&& value) { SetActionPayload(std::forward<ActionPayloadT>(value)); return *this;}
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
    ExecuteActionRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed resource this action resolves to.</p>
     */
    inline const ResolveTo& GetResolveTo() const { return m_resolveTo; }
    inline bool ResolveToHasBeenSet() const { return m_resolveToHasBeenSet; }
    template<typename ResolveToT = ResolveTo>
    void SetResolveTo(ResolveToT&& value) { m_resolveToHasBeenSet = true; m_resolveTo = std::forward<ResolveToT>(value); }
    template<typename ResolveToT = ResolveTo>
    ExecuteActionRequest& WithResolveTo(ResolveToT&& value) { SetResolveTo(std::forward<ResolveToT>(value)); return *this;}
    ///@}
  private:

    TargetResource m_targetResource;
    bool m_targetResourceHasBeenSet = false;

    Aws::String m_actionDefinitionId;
    bool m_actionDefinitionIdHasBeenSet = false;

    ActionPayload m_actionPayload;
    bool m_actionPayloadHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ResolveTo m_resolveTo;
    bool m_resolveToHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
