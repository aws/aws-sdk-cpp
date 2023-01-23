/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AssociateApprovedOriginRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API AssociateApprovedOriginRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateApprovedOrigin"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline AssociateApprovedOriginRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline AssociateApprovedOriginRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline AssociateApprovedOriginRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The domain to add to your allow list.</p>
     */
    inline const Aws::String& GetOrigin() const{ return m_origin; }

    /**
     * <p>The domain to add to your allow list.</p>
     */
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }

    /**
     * <p>The domain to add to your allow list.</p>
     */
    inline void SetOrigin(const Aws::String& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>The domain to add to your allow list.</p>
     */
    inline void SetOrigin(Aws::String&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }

    /**
     * <p>The domain to add to your allow list.</p>
     */
    inline void SetOrigin(const char* value) { m_originHasBeenSet = true; m_origin.assign(value); }

    /**
     * <p>The domain to add to your allow list.</p>
     */
    inline AssociateApprovedOriginRequest& WithOrigin(const Aws::String& value) { SetOrigin(value); return *this;}

    /**
     * <p>The domain to add to your allow list.</p>
     */
    inline AssociateApprovedOriginRequest& WithOrigin(Aws::String&& value) { SetOrigin(std::move(value)); return *this;}

    /**
     * <p>The domain to add to your allow list.</p>
     */
    inline AssociateApprovedOriginRequest& WithOrigin(const char* value) { SetOrigin(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_origin;
    bool m_originHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
