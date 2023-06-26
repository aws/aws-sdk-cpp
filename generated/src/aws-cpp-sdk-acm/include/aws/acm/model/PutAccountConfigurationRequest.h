/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/ACMRequest.h>
#include <aws/acm/model/ExpiryEventsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ACM
{
namespace Model
{

  /**
   */
  class PutAccountConfigurationRequest : public ACMRequest
  {
  public:
    AWS_ACM_API PutAccountConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountConfiguration"; }

    AWS_ACM_API Aws::String SerializePayload() const override;

    AWS_ACM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies expiration events associated with an account.</p>
     */
    inline const ExpiryEventsConfiguration& GetExpiryEvents() const{ return m_expiryEvents; }

    /**
     * <p>Specifies expiration events associated with an account.</p>
     */
    inline bool ExpiryEventsHasBeenSet() const { return m_expiryEventsHasBeenSet; }

    /**
     * <p>Specifies expiration events associated with an account.</p>
     */
    inline void SetExpiryEvents(const ExpiryEventsConfiguration& value) { m_expiryEventsHasBeenSet = true; m_expiryEvents = value; }

    /**
     * <p>Specifies expiration events associated with an account.</p>
     */
    inline void SetExpiryEvents(ExpiryEventsConfiguration&& value) { m_expiryEventsHasBeenSet = true; m_expiryEvents = std::move(value); }

    /**
     * <p>Specifies expiration events associated with an account.</p>
     */
    inline PutAccountConfigurationRequest& WithExpiryEvents(const ExpiryEventsConfiguration& value) { SetExpiryEvents(value); return *this;}

    /**
     * <p>Specifies expiration events associated with an account.</p>
     */
    inline PutAccountConfigurationRequest& WithExpiryEvents(ExpiryEventsConfiguration&& value) { SetExpiryEvents(std::move(value)); return *this;}


    /**
     * <p>Customer-chosen string used to distinguish between calls to
     * <code>PutAccountConfiguration</code>. Idempotency tokens time out after one
     * hour. If you call <code>PutAccountConfiguration</code> multiple times with the
     * same unexpired idempotency token, ACM treats it as the same request and returns
     * the original result. If you change the idempotency token for each call, ACM
     * treats each call as a new request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>Customer-chosen string used to distinguish between calls to
     * <code>PutAccountConfiguration</code>. Idempotency tokens time out after one
     * hour. If you call <code>PutAccountConfiguration</code> multiple times with the
     * same unexpired idempotency token, ACM treats it as the same request and returns
     * the original result. If you change the idempotency token for each call, ACM
     * treats each call as a new request.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>Customer-chosen string used to distinguish between calls to
     * <code>PutAccountConfiguration</code>. Idempotency tokens time out after one
     * hour. If you call <code>PutAccountConfiguration</code> multiple times with the
     * same unexpired idempotency token, ACM treats it as the same request and returns
     * the original result. If you change the idempotency token for each call, ACM
     * treats each call as a new request.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>Customer-chosen string used to distinguish between calls to
     * <code>PutAccountConfiguration</code>. Idempotency tokens time out after one
     * hour. If you call <code>PutAccountConfiguration</code> multiple times with the
     * same unexpired idempotency token, ACM treats it as the same request and returns
     * the original result. If you change the idempotency token for each call, ACM
     * treats each call as a new request.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>Customer-chosen string used to distinguish between calls to
     * <code>PutAccountConfiguration</code>. Idempotency tokens time out after one
     * hour. If you call <code>PutAccountConfiguration</code> multiple times with the
     * same unexpired idempotency token, ACM treats it as the same request and returns
     * the original result. If you change the idempotency token for each call, ACM
     * treats each call as a new request.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>Customer-chosen string used to distinguish between calls to
     * <code>PutAccountConfiguration</code>. Idempotency tokens time out after one
     * hour. If you call <code>PutAccountConfiguration</code> multiple times with the
     * same unexpired idempotency token, ACM treats it as the same request and returns
     * the original result. If you change the idempotency token for each call, ACM
     * treats each call as a new request.</p>
     */
    inline PutAccountConfigurationRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>Customer-chosen string used to distinguish between calls to
     * <code>PutAccountConfiguration</code>. Idempotency tokens time out after one
     * hour. If you call <code>PutAccountConfiguration</code> multiple times with the
     * same unexpired idempotency token, ACM treats it as the same request and returns
     * the original result. If you change the idempotency token for each call, ACM
     * treats each call as a new request.</p>
     */
    inline PutAccountConfigurationRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>Customer-chosen string used to distinguish between calls to
     * <code>PutAccountConfiguration</code>. Idempotency tokens time out after one
     * hour. If you call <code>PutAccountConfiguration</code> multiple times with the
     * same unexpired idempotency token, ACM treats it as the same request and returns
     * the original result. If you change the idempotency token for each call, ACM
     * treats each call as a new request.</p>
     */
    inline PutAccountConfigurationRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:

    ExpiryEventsConfiguration m_expiryEvents;
    bool m_expiryEventsHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
