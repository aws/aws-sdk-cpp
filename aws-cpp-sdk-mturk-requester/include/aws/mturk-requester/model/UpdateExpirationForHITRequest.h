/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class UpdateExpirationForHITRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API UpdateExpirationForHITRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateExpirationForHIT"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The HIT to update. </p>
     */
    inline const Aws::String& GetHITId() const{ return m_hITId; }

    /**
     * <p> The HIT to update. </p>
     */
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }

    /**
     * <p> The HIT to update. </p>
     */
    inline void SetHITId(const Aws::String& value) { m_hITIdHasBeenSet = true; m_hITId = value; }

    /**
     * <p> The HIT to update. </p>
     */
    inline void SetHITId(Aws::String&& value) { m_hITIdHasBeenSet = true; m_hITId = std::move(value); }

    /**
     * <p> The HIT to update. </p>
     */
    inline void SetHITId(const char* value) { m_hITIdHasBeenSet = true; m_hITId.assign(value); }

    /**
     * <p> The HIT to update. </p>
     */
    inline UpdateExpirationForHITRequest& WithHITId(const Aws::String& value) { SetHITId(value); return *this;}

    /**
     * <p> The HIT to update. </p>
     */
    inline UpdateExpirationForHITRequest& WithHITId(Aws::String&& value) { SetHITId(std::move(value)); return *this;}

    /**
     * <p> The HIT to update. </p>
     */
    inline UpdateExpirationForHITRequest& WithHITId(const char* value) { SetHITId(value); return *this;}


    /**
     * <p> The date and time at which you want the HIT to expire </p>
     */
    inline const Aws::Utils::DateTime& GetExpireAt() const{ return m_expireAt; }

    /**
     * <p> The date and time at which you want the HIT to expire </p>
     */
    inline bool ExpireAtHasBeenSet() const { return m_expireAtHasBeenSet; }

    /**
     * <p> The date and time at which you want the HIT to expire </p>
     */
    inline void SetExpireAt(const Aws::Utils::DateTime& value) { m_expireAtHasBeenSet = true; m_expireAt = value; }

    /**
     * <p> The date and time at which you want the HIT to expire </p>
     */
    inline void SetExpireAt(Aws::Utils::DateTime&& value) { m_expireAtHasBeenSet = true; m_expireAt = std::move(value); }

    /**
     * <p> The date and time at which you want the HIT to expire </p>
     */
    inline UpdateExpirationForHITRequest& WithExpireAt(const Aws::Utils::DateTime& value) { SetExpireAt(value); return *this;}

    /**
     * <p> The date and time at which you want the HIT to expire </p>
     */
    inline UpdateExpirationForHITRequest& WithExpireAt(Aws::Utils::DateTime&& value) { SetExpireAt(std::move(value)); return *this;}

  private:

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet = false;

    Aws::Utils::DateTime m_expireAt;
    bool m_expireAtHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
