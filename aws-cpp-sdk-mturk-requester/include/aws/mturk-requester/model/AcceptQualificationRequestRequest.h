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
  class AWS_MTURK_API AcceptQualificationRequestRequest : public MTurkRequest
  {
  public:
    AcceptQualificationRequestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptQualificationRequest"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Qualification request, as returned by the
     * <code>GetQualificationRequests</code> operation.</p>
     */
    inline const Aws::String& GetQualificationRequestId() const{ return m_qualificationRequestId; }

    /**
     * <p>The ID of the Qualification request, as returned by the
     * <code>GetQualificationRequests</code> operation.</p>
     */
    inline bool QualificationRequestIdHasBeenSet() const { return m_qualificationRequestIdHasBeenSet; }

    /**
     * <p>The ID of the Qualification request, as returned by the
     * <code>GetQualificationRequests</code> operation.</p>
     */
    inline void SetQualificationRequestId(const Aws::String& value) { m_qualificationRequestIdHasBeenSet = true; m_qualificationRequestId = value; }

    /**
     * <p>The ID of the Qualification request, as returned by the
     * <code>GetQualificationRequests</code> operation.</p>
     */
    inline void SetQualificationRequestId(Aws::String&& value) { m_qualificationRequestIdHasBeenSet = true; m_qualificationRequestId = std::move(value); }

    /**
     * <p>The ID of the Qualification request, as returned by the
     * <code>GetQualificationRequests</code> operation.</p>
     */
    inline void SetQualificationRequestId(const char* value) { m_qualificationRequestIdHasBeenSet = true; m_qualificationRequestId.assign(value); }

    /**
     * <p>The ID of the Qualification request, as returned by the
     * <code>GetQualificationRequests</code> operation.</p>
     */
    inline AcceptQualificationRequestRequest& WithQualificationRequestId(const Aws::String& value) { SetQualificationRequestId(value); return *this;}

    /**
     * <p>The ID of the Qualification request, as returned by the
     * <code>GetQualificationRequests</code> operation.</p>
     */
    inline AcceptQualificationRequestRequest& WithQualificationRequestId(Aws::String&& value) { SetQualificationRequestId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Qualification request, as returned by the
     * <code>GetQualificationRequests</code> operation.</p>
     */
    inline AcceptQualificationRequestRequest& WithQualificationRequestId(const char* value) { SetQualificationRequestId(value); return *this;}


    /**
     * <p> The value of the Qualification. You can omit this value if you are using the
     * presence or absence of the Qualification as the basis for a HIT requirement.
     * </p>
     */
    inline int GetIntegerValue() const{ return m_integerValue; }

    /**
     * <p> The value of the Qualification. You can omit this value if you are using the
     * presence or absence of the Qualification as the basis for a HIT requirement.
     * </p>
     */
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }

    /**
     * <p> The value of the Qualification. You can omit this value if you are using the
     * presence or absence of the Qualification as the basis for a HIT requirement.
     * </p>
     */
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }

    /**
     * <p> The value of the Qualification. You can omit this value if you are using the
     * presence or absence of the Qualification as the basis for a HIT requirement.
     * </p>
     */
    inline AcceptQualificationRequestRequest& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}

  private:

    Aws::String m_qualificationRequestId;
    bool m_qualificationRequestIdHasBeenSet;

    int m_integerValue;
    bool m_integerValueHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
