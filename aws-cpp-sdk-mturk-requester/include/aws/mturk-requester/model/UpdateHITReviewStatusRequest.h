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

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API UpdateHITReviewStatusRequest : public MTurkRequest
  {
  public:
    UpdateHITReviewStatusRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The ID of the HIT to update. </p>
     */
    inline const Aws::String& GetHITId() const{ return m_hITId; }

    /**
     * <p> The ID of the HIT to update. </p>
     */
    inline void SetHITId(const Aws::String& value) { m_hITIdHasBeenSet = true; m_hITId = value; }

    /**
     * <p> The ID of the HIT to update. </p>
     */
    inline void SetHITId(Aws::String&& value) { m_hITIdHasBeenSet = true; m_hITId = value; }

    /**
     * <p> The ID of the HIT to update. </p>
     */
    inline void SetHITId(const char* value) { m_hITIdHasBeenSet = true; m_hITId.assign(value); }

    /**
     * <p> The ID of the HIT to update. </p>
     */
    inline UpdateHITReviewStatusRequest& WithHITId(const Aws::String& value) { SetHITId(value); return *this;}

    /**
     * <p> The ID of the HIT to update. </p>
     */
    inline UpdateHITReviewStatusRequest& WithHITId(Aws::String&& value) { SetHITId(value); return *this;}

    /**
     * <p> The ID of the HIT to update. </p>
     */
    inline UpdateHITReviewStatusRequest& WithHITId(const char* value) { SetHITId(value); return *this;}

    /**
     * <p> Specifies how to update the HIT status. Default is <code>False</code>. </p>
     * <ul> <li> <p> Setting this to false will only transition a HIT from
     * <code>Reviewable</code> to <code>Reviewing</code> </p> </li> <li> <p> Setting
     * this to true will only transition a HIT from <code>Reviewing</code> to
     * <code>Reviewable</code> </p> </li> </ul>
     */
    inline bool GetRevert() const{ return m_revert; }

    /**
     * <p> Specifies how to update the HIT status. Default is <code>False</code>. </p>
     * <ul> <li> <p> Setting this to false will only transition a HIT from
     * <code>Reviewable</code> to <code>Reviewing</code> </p> </li> <li> <p> Setting
     * this to true will only transition a HIT from <code>Reviewing</code> to
     * <code>Reviewable</code> </p> </li> </ul>
     */
    inline void SetRevert(bool value) { m_revertHasBeenSet = true; m_revert = value; }

    /**
     * <p> Specifies how to update the HIT status. Default is <code>False</code>. </p>
     * <ul> <li> <p> Setting this to false will only transition a HIT from
     * <code>Reviewable</code> to <code>Reviewing</code> </p> </li> <li> <p> Setting
     * this to true will only transition a HIT from <code>Reviewing</code> to
     * <code>Reviewable</code> </p> </li> </ul>
     */
    inline UpdateHITReviewStatusRequest& WithRevert(bool value) { SetRevert(value); return *this;}

  private:
    Aws::String m_hITId;
    bool m_hITIdHasBeenSet;
    bool m_revert;
    bool m_revertHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
