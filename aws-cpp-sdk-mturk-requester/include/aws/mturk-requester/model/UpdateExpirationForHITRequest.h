/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API UpdateExpirationForHITRequest : public MTurkRequest
  {
  public:
    UpdateExpirationForHITRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The HIT to update. </p>
     */
    inline const Aws::String& GetHITId() const{ return m_hITId; }

    /**
     * <p> The HIT to update. </p>
     */
    inline void SetHITId(const Aws::String& value) { m_hITIdHasBeenSet = true; m_hITId = value; }

    /**
     * <p> The HIT to update. </p>
     */
    inline void SetHITId(Aws::String&& value) { m_hITIdHasBeenSet = true; m_hITId = value; }

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
    inline UpdateExpirationForHITRequest& WithHITId(Aws::String&& value) { SetHITId(value); return *this;}

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
    inline void SetExpireAt(const Aws::Utils::DateTime& value) { m_expireAtHasBeenSet = true; m_expireAt = value; }

    /**
     * <p> The date and time at which you want the HIT to expire </p>
     */
    inline void SetExpireAt(Aws::Utils::DateTime&& value) { m_expireAtHasBeenSet = true; m_expireAt = value; }

    /**
     * <p> The date and time at which you want the HIT to expire </p>
     */
    inline UpdateExpirationForHITRequest& WithExpireAt(const Aws::Utils::DateTime& value) { SetExpireAt(value); return *this;}

    /**
     * <p> The date and time at which you want the HIT to expire </p>
     */
    inline UpdateExpirationForHITRequest& WithExpireAt(Aws::Utils::DateTime&& value) { SetExpireAt(value); return *this;}

  private:
    Aws::String m_hITId;
    bool m_hITIdHasBeenSet;
    Aws::Utils::DateTime m_expireAt;
    bool m_expireAtHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
