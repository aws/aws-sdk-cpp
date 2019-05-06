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
  class AWS_MTURK_API CreateAdditionalAssignmentsForHITRequest : public MTurkRequest
  {
  public:
    CreateAdditionalAssignmentsForHITRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAdditionalAssignmentsForHIT"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the HIT to extend.</p>
     */
    inline const Aws::String& GetHITId() const{ return m_hITId; }

    /**
     * <p>The ID of the HIT to extend.</p>
     */
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }

    /**
     * <p>The ID of the HIT to extend.</p>
     */
    inline void SetHITId(const Aws::String& value) { m_hITIdHasBeenSet = true; m_hITId = value; }

    /**
     * <p>The ID of the HIT to extend.</p>
     */
    inline void SetHITId(Aws::String&& value) { m_hITIdHasBeenSet = true; m_hITId = std::move(value); }

    /**
     * <p>The ID of the HIT to extend.</p>
     */
    inline void SetHITId(const char* value) { m_hITIdHasBeenSet = true; m_hITId.assign(value); }

    /**
     * <p>The ID of the HIT to extend.</p>
     */
    inline CreateAdditionalAssignmentsForHITRequest& WithHITId(const Aws::String& value) { SetHITId(value); return *this;}

    /**
     * <p>The ID of the HIT to extend.</p>
     */
    inline CreateAdditionalAssignmentsForHITRequest& WithHITId(Aws::String&& value) { SetHITId(std::move(value)); return *this;}

    /**
     * <p>The ID of the HIT to extend.</p>
     */
    inline CreateAdditionalAssignmentsForHITRequest& WithHITId(const char* value) { SetHITId(value); return *this;}


    /**
     * <p>The number of additional assignments to request for this HIT.</p>
     */
    inline int GetNumberOfAdditionalAssignments() const{ return m_numberOfAdditionalAssignments; }

    /**
     * <p>The number of additional assignments to request for this HIT.</p>
     */
    inline bool NumberOfAdditionalAssignmentsHasBeenSet() const { return m_numberOfAdditionalAssignmentsHasBeenSet; }

    /**
     * <p>The number of additional assignments to request for this HIT.</p>
     */
    inline void SetNumberOfAdditionalAssignments(int value) { m_numberOfAdditionalAssignmentsHasBeenSet = true; m_numberOfAdditionalAssignments = value; }

    /**
     * <p>The number of additional assignments to request for this HIT.</p>
     */
    inline CreateAdditionalAssignmentsForHITRequest& WithNumberOfAdditionalAssignments(int value) { SetNumberOfAdditionalAssignments(value); return *this;}


    /**
     * <p> A unique identifier for this request, which allows you to retry the call on
     * error without extending the HIT multiple times. This is useful in cases such as
     * network timeouts where it is unclear whether or not the call succeeded on the
     * server. If the extend HIT already exists in the system from a previous call
     * using the same <code>UniqueRequestToken</code>, subsequent calls will return an
     * error with a message containing the request ID. </p>
     */
    inline const Aws::String& GetUniqueRequestToken() const{ return m_uniqueRequestToken; }

    /**
     * <p> A unique identifier for this request, which allows you to retry the call on
     * error without extending the HIT multiple times. This is useful in cases such as
     * network timeouts where it is unclear whether or not the call succeeded on the
     * server. If the extend HIT already exists in the system from a previous call
     * using the same <code>UniqueRequestToken</code>, subsequent calls will return an
     * error with a message containing the request ID. </p>
     */
    inline bool UniqueRequestTokenHasBeenSet() const { return m_uniqueRequestTokenHasBeenSet; }

    /**
     * <p> A unique identifier for this request, which allows you to retry the call on
     * error without extending the HIT multiple times. This is useful in cases such as
     * network timeouts where it is unclear whether or not the call succeeded on the
     * server. If the extend HIT already exists in the system from a previous call
     * using the same <code>UniqueRequestToken</code>, subsequent calls will return an
     * error with a message containing the request ID. </p>
     */
    inline void SetUniqueRequestToken(const Aws::String& value) { m_uniqueRequestTokenHasBeenSet = true; m_uniqueRequestToken = value; }

    /**
     * <p> A unique identifier for this request, which allows you to retry the call on
     * error without extending the HIT multiple times. This is useful in cases such as
     * network timeouts where it is unclear whether or not the call succeeded on the
     * server. If the extend HIT already exists in the system from a previous call
     * using the same <code>UniqueRequestToken</code>, subsequent calls will return an
     * error with a message containing the request ID. </p>
     */
    inline void SetUniqueRequestToken(Aws::String&& value) { m_uniqueRequestTokenHasBeenSet = true; m_uniqueRequestToken = std::move(value); }

    /**
     * <p> A unique identifier for this request, which allows you to retry the call on
     * error without extending the HIT multiple times. This is useful in cases such as
     * network timeouts where it is unclear whether or not the call succeeded on the
     * server. If the extend HIT already exists in the system from a previous call
     * using the same <code>UniqueRequestToken</code>, subsequent calls will return an
     * error with a message containing the request ID. </p>
     */
    inline void SetUniqueRequestToken(const char* value) { m_uniqueRequestTokenHasBeenSet = true; m_uniqueRequestToken.assign(value); }

    /**
     * <p> A unique identifier for this request, which allows you to retry the call on
     * error without extending the HIT multiple times. This is useful in cases such as
     * network timeouts where it is unclear whether or not the call succeeded on the
     * server. If the extend HIT already exists in the system from a previous call
     * using the same <code>UniqueRequestToken</code>, subsequent calls will return an
     * error with a message containing the request ID. </p>
     */
    inline CreateAdditionalAssignmentsForHITRequest& WithUniqueRequestToken(const Aws::String& value) { SetUniqueRequestToken(value); return *this;}

    /**
     * <p> A unique identifier for this request, which allows you to retry the call on
     * error without extending the HIT multiple times. This is useful in cases such as
     * network timeouts where it is unclear whether or not the call succeeded on the
     * server. If the extend HIT already exists in the system from a previous call
     * using the same <code>UniqueRequestToken</code>, subsequent calls will return an
     * error with a message containing the request ID. </p>
     */
    inline CreateAdditionalAssignmentsForHITRequest& WithUniqueRequestToken(Aws::String&& value) { SetUniqueRequestToken(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for this request, which allows you to retry the call on
     * error without extending the HIT multiple times. This is useful in cases such as
     * network timeouts where it is unclear whether or not the call succeeded on the
     * server. If the extend HIT already exists in the system from a previous call
     * using the same <code>UniqueRequestToken</code>, subsequent calls will return an
     * error with a message containing the request ID. </p>
     */
    inline CreateAdditionalAssignmentsForHITRequest& WithUniqueRequestToken(const char* value) { SetUniqueRequestToken(value); return *this;}

  private:

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet;

    int m_numberOfAdditionalAssignments;
    bool m_numberOfAdditionalAssignmentsHasBeenSet;

    Aws::String m_uniqueRequestToken;
    bool m_uniqueRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
