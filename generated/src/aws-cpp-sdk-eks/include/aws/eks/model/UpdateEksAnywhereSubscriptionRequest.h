/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class UpdateEksAnywhereSubscriptionRequest : public EKSRequest
  {
  public:
    AWS_EKS_API UpdateEksAnywhereSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEksAnywhereSubscription"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the subscription.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the subscription.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the subscription.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the subscription.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the subscription.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the subscription.</p>
     */
    inline UpdateEksAnywhereSubscriptionRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the subscription.</p>
     */
    inline UpdateEksAnywhereSubscriptionRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subscription.</p>
     */
    inline UpdateEksAnywhereSubscriptionRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A boolean indicating whether or not to automatically renew the
     * subscription.</p>
     */
    inline bool GetAutoRenew() const{ return m_autoRenew; }

    /**
     * <p>A boolean indicating whether or not to automatically renew the
     * subscription.</p>
     */
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }

    /**
     * <p>A boolean indicating whether or not to automatically renew the
     * subscription.</p>
     */
    inline void SetAutoRenew(bool value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }

    /**
     * <p>A boolean indicating whether or not to automatically renew the
     * subscription.</p>
     */
    inline UpdateEksAnywhereSubscriptionRequest& WithAutoRenew(bool value) { SetAutoRenew(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the
     * request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the
     * request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the
     * request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the
     * request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the
     * request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the
     * request.</p>
     */
    inline UpdateEksAnywhereSubscriptionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the
     * request.</p>
     */
    inline UpdateEksAnywhereSubscriptionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier to ensure the idempotency of the
     * request.</p>
     */
    inline UpdateEksAnywhereSubscriptionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_autoRenew;
    bool m_autoRenewHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
