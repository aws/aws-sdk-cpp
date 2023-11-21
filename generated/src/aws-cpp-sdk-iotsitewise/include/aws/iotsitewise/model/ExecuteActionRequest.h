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
    AWS_IOTSITEWISE_API ExecuteActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteAction"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline const TargetResource& GetTargetResource() const{ return m_targetResource; }

    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline bool TargetResourceHasBeenSet() const { return m_targetResourceHasBeenSet; }

    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline void SetTargetResource(const TargetResource& value) { m_targetResourceHasBeenSet = true; m_targetResource = value; }

    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline void SetTargetResource(TargetResource&& value) { m_targetResourceHasBeenSet = true; m_targetResource = std::move(value); }

    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline ExecuteActionRequest& WithTargetResource(const TargetResource& value) { SetTargetResource(value); return *this;}

    /**
     * <p>The resource the action will be taken on.</p>
     */
    inline ExecuteActionRequest& WithTargetResource(TargetResource&& value) { SetTargetResource(std::move(value)); return *this;}


    /**
     * <p>The ID of the action definition.</p>
     */
    inline const Aws::String& GetActionDefinitionId() const{ return m_actionDefinitionId; }

    /**
     * <p>The ID of the action definition.</p>
     */
    inline bool ActionDefinitionIdHasBeenSet() const { return m_actionDefinitionIdHasBeenSet; }

    /**
     * <p>The ID of the action definition.</p>
     */
    inline void SetActionDefinitionId(const Aws::String& value) { m_actionDefinitionIdHasBeenSet = true; m_actionDefinitionId = value; }

    /**
     * <p>The ID of the action definition.</p>
     */
    inline void SetActionDefinitionId(Aws::String&& value) { m_actionDefinitionIdHasBeenSet = true; m_actionDefinitionId = std::move(value); }

    /**
     * <p>The ID of the action definition.</p>
     */
    inline void SetActionDefinitionId(const char* value) { m_actionDefinitionIdHasBeenSet = true; m_actionDefinitionId.assign(value); }

    /**
     * <p>The ID of the action definition.</p>
     */
    inline ExecuteActionRequest& WithActionDefinitionId(const Aws::String& value) { SetActionDefinitionId(value); return *this;}

    /**
     * <p>The ID of the action definition.</p>
     */
    inline ExecuteActionRequest& WithActionDefinitionId(Aws::String&& value) { SetActionDefinitionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the action definition.</p>
     */
    inline ExecuteActionRequest& WithActionDefinitionId(const char* value) { SetActionDefinitionId(value); return *this;}


    /**
     * <p>The JSON payload of the action.</p>
     */
    inline const ActionPayload& GetActionPayload() const{ return m_actionPayload; }

    /**
     * <p>The JSON payload of the action.</p>
     */
    inline bool ActionPayloadHasBeenSet() const { return m_actionPayloadHasBeenSet; }

    /**
     * <p>The JSON payload of the action.</p>
     */
    inline void SetActionPayload(const ActionPayload& value) { m_actionPayloadHasBeenSet = true; m_actionPayload = value; }

    /**
     * <p>The JSON payload of the action.</p>
     */
    inline void SetActionPayload(ActionPayload&& value) { m_actionPayloadHasBeenSet = true; m_actionPayload = std::move(value); }

    /**
     * <p>The JSON payload of the action.</p>
     */
    inline ExecuteActionRequest& WithActionPayload(const ActionPayload& value) { SetActionPayload(value); return *this;}

    /**
     * <p>The JSON payload of the action.</p>
     */
    inline ExecuteActionRequest& WithActionPayload(ActionPayload&& value) { SetActionPayload(std::move(value)); return *this;}


    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline ExecuteActionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline ExecuteActionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline ExecuteActionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    TargetResource m_targetResource;
    bool m_targetResourceHasBeenSet = false;

    Aws::String m_actionDefinitionId;
    bool m_actionDefinitionIdHasBeenSet = false;

    ActionPayload m_actionPayload;
    bool m_actionPayloadHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
