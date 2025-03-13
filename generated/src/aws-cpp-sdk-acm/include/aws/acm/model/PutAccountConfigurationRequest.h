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
    AWS_ACM_API PutAccountConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountConfiguration"; }

    AWS_ACM_API Aws::String SerializePayload() const override;

    AWS_ACM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies expiration events associated with an account.</p>
     */
    inline const ExpiryEventsConfiguration& GetExpiryEvents() const { return m_expiryEvents; }
    inline bool ExpiryEventsHasBeenSet() const { return m_expiryEventsHasBeenSet; }
    template<typename ExpiryEventsT = ExpiryEventsConfiguration>
    void SetExpiryEvents(ExpiryEventsT&& value) { m_expiryEventsHasBeenSet = true; m_expiryEvents = std::forward<ExpiryEventsT>(value); }
    template<typename ExpiryEventsT = ExpiryEventsConfiguration>
    PutAccountConfigurationRequest& WithExpiryEvents(ExpiryEventsT&& value) { SetExpiryEvents(std::forward<ExpiryEventsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer-chosen string used to distinguish between calls to
     * <code>PutAccountConfiguration</code>. Idempotency tokens time out after one
     * hour. If you call <code>PutAccountConfiguration</code> multiple times with the
     * same unexpired idempotency token, ACM treats it as the same request and returns
     * the original result. If you change the idempotency token for each call, ACM
     * treats each call as a new request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    PutAccountConfigurationRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}
  private:

    ExpiryEventsConfiguration m_expiryEvents;
    bool m_expiryEventsHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
