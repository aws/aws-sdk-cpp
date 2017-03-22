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
  class AWS_MTURK_API GetQualificationTypeRequest : public MTurkRequest
  {
  public:
    GetQualificationTypeRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the QualificationType.</p>
     */
    inline const Aws::String& GetQualificationTypeId() const{ return m_qualificationTypeId; }

    /**
     * <p>The ID of the QualificationType.</p>
     */
    inline void SetQualificationTypeId(const Aws::String& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }

    /**
     * <p>The ID of the QualificationType.</p>
     */
    inline void SetQualificationTypeId(Aws::String&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }

    /**
     * <p>The ID of the QualificationType.</p>
     */
    inline void SetQualificationTypeId(const char* value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId.assign(value); }

    /**
     * <p>The ID of the QualificationType.</p>
     */
    inline GetQualificationTypeRequest& WithQualificationTypeId(const Aws::String& value) { SetQualificationTypeId(value); return *this;}

    /**
     * <p>The ID of the QualificationType.</p>
     */
    inline GetQualificationTypeRequest& WithQualificationTypeId(Aws::String&& value) { SetQualificationTypeId(value); return *this;}

    /**
     * <p>The ID of the QualificationType.</p>
     */
    inline GetQualificationTypeRequest& WithQualificationTypeId(const char* value) { SetQualificationTypeId(value); return *this;}

  private:
    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
