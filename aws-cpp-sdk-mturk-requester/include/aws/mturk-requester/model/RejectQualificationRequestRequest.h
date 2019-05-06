/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API RejectQualificationRequestRequest : public MTurkRequest
  {
  public:
    RejectQualificationRequestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectQualificationRequest"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The ID of the Qualification request, as returned by the
     * <code>ListQualificationRequests</code> operation. </p>
     */
    inline const Aws::String& GetQualificationRequestId() const{ return m_qualificationRequestId; }

    /**
     * <p> The ID of the Qualification request, as returned by the
     * <code>ListQualificationRequests</code> operation. </p>
     */
    inline bool QualificationRequestIdHasBeenSet() const { return m_qualificationRequestIdHasBeenSet; }

    /**
     * <p> The ID of the Qualification request, as returned by the
     * <code>ListQualificationRequests</code> operation. </p>
     */
    inline void SetQualificationRequestId(const Aws::String& value) { m_qualificationRequestIdHasBeenSet = true; m_qualificationRequestId = value; }

    /**
     * <p> The ID of the Qualification request, as returned by the
     * <code>ListQualificationRequests</code> operation. </p>
     */
    inline void SetQualificationRequestId(Aws::String&& value) { m_qualificationRequestIdHasBeenSet = true; m_qualificationRequestId = std::move(value); }

    /**
     * <p> The ID of the Qualification request, as returned by the
     * <code>ListQualificationRequests</code> operation. </p>
     */
    inline void SetQualificationRequestId(const char* value) { m_qualificationRequestIdHasBeenSet = true; m_qualificationRequestId.assign(value); }

    /**
     * <p> The ID of the Qualification request, as returned by the
     * <code>ListQualificationRequests</code> operation. </p>
     */
    inline RejectQualificationRequestRequest& WithQualificationRequestId(const Aws::String& value) { SetQualificationRequestId(value); return *this;}

    /**
     * <p> The ID of the Qualification request, as returned by the
     * <code>ListQualificationRequests</code> operation. </p>
     */
    inline RejectQualificationRequestRequest& WithQualificationRequestId(Aws::String&& value) { SetQualificationRequestId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Qualification request, as returned by the
     * <code>ListQualificationRequests</code> operation. </p>
     */
    inline RejectQualificationRequestRequest& WithQualificationRequestId(const char* value) { SetQualificationRequestId(value); return *this;}


    /**
     * <p>A text message explaining why the request was rejected, to be shown to the
     * Worker who made the request.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A text message explaining why the request was rejected, to be shown to the
     * Worker who made the request.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A text message explaining why the request was rejected, to be shown to the
     * Worker who made the request.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A text message explaining why the request was rejected, to be shown to the
     * Worker who made the request.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A text message explaining why the request was rejected, to be shown to the
     * Worker who made the request.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A text message explaining why the request was rejected, to be shown to the
     * Worker who made the request.</p>
     */
    inline RejectQualificationRequestRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A text message explaining why the request was rejected, to be shown to the
     * Worker who made the request.</p>
     */
    inline RejectQualificationRequestRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>A text message explaining why the request was rejected, to be shown to the
     * Worker who made the request.</p>
     */
    inline RejectQualificationRequestRequest& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_qualificationRequestId;
    bool m_qualificationRequestIdHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
