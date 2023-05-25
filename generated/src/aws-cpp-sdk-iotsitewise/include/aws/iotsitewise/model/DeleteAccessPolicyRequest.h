/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class DeleteAccessPolicyRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API DeleteAccessPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAccessPolicy"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the access policy to be deleted.</p>
     */
    inline const Aws::String& GetAccessPolicyId() const{ return m_accessPolicyId; }

    /**
     * <p>The ID of the access policy to be deleted.</p>
     */
    inline bool AccessPolicyIdHasBeenSet() const { return m_accessPolicyIdHasBeenSet; }

    /**
     * <p>The ID of the access policy to be deleted.</p>
     */
    inline void SetAccessPolicyId(const Aws::String& value) { m_accessPolicyIdHasBeenSet = true; m_accessPolicyId = value; }

    /**
     * <p>The ID of the access policy to be deleted.</p>
     */
    inline void SetAccessPolicyId(Aws::String&& value) { m_accessPolicyIdHasBeenSet = true; m_accessPolicyId = std::move(value); }

    /**
     * <p>The ID of the access policy to be deleted.</p>
     */
    inline void SetAccessPolicyId(const char* value) { m_accessPolicyIdHasBeenSet = true; m_accessPolicyId.assign(value); }

    /**
     * <p>The ID of the access policy to be deleted.</p>
     */
    inline DeleteAccessPolicyRequest& WithAccessPolicyId(const Aws::String& value) { SetAccessPolicyId(value); return *this;}

    /**
     * <p>The ID of the access policy to be deleted.</p>
     */
    inline DeleteAccessPolicyRequest& WithAccessPolicyId(Aws::String&& value) { SetAccessPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the access policy to be deleted.</p>
     */
    inline DeleteAccessPolicyRequest& WithAccessPolicyId(const char* value) { SetAccessPolicyId(value); return *this;}


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
    inline DeleteAccessPolicyRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline DeleteAccessPolicyRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline DeleteAccessPolicyRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_accessPolicyId;
    bool m_accessPolicyIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
