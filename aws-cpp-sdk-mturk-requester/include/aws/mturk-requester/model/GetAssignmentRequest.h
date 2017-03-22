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
  class AWS_MTURK_API GetAssignmentRequest : public MTurkRequest
  {
  public:
    GetAssignmentRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Assignment to be retrieved.</p>
     */
    inline const Aws::String& GetAssignmentId() const{ return m_assignmentId; }

    /**
     * <p>The ID of the Assignment to be retrieved.</p>
     */
    inline void SetAssignmentId(const Aws::String& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = value; }

    /**
     * <p>The ID of the Assignment to be retrieved.</p>
     */
    inline void SetAssignmentId(Aws::String&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = value; }

    /**
     * <p>The ID of the Assignment to be retrieved.</p>
     */
    inline void SetAssignmentId(const char* value) { m_assignmentIdHasBeenSet = true; m_assignmentId.assign(value); }

    /**
     * <p>The ID of the Assignment to be retrieved.</p>
     */
    inline GetAssignmentRequest& WithAssignmentId(const Aws::String& value) { SetAssignmentId(value); return *this;}

    /**
     * <p>The ID of the Assignment to be retrieved.</p>
     */
    inline GetAssignmentRequest& WithAssignmentId(Aws::String&& value) { SetAssignmentId(value); return *this;}

    /**
     * <p>The ID of the Assignment to be retrieved.</p>
     */
    inline GetAssignmentRequest& WithAssignmentId(const char* value) { SetAssignmentId(value); return *this;}

  private:
    Aws::String m_assignmentId;
    bool m_assignmentIdHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
