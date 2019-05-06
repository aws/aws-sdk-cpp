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
  class AWS_MTURK_API GetFileUploadURLRequest : public MTurkRequest
  {
  public:
    GetFileUploadURLRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFileUploadURL"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the assignment that contains the question with a
     * FileUploadAnswer.</p>
     */
    inline const Aws::String& GetAssignmentId() const{ return m_assignmentId; }

    /**
     * <p>The ID of the assignment that contains the question with a
     * FileUploadAnswer.</p>
     */
    inline bool AssignmentIdHasBeenSet() const { return m_assignmentIdHasBeenSet; }

    /**
     * <p>The ID of the assignment that contains the question with a
     * FileUploadAnswer.</p>
     */
    inline void SetAssignmentId(const Aws::String& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = value; }

    /**
     * <p>The ID of the assignment that contains the question with a
     * FileUploadAnswer.</p>
     */
    inline void SetAssignmentId(Aws::String&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = std::move(value); }

    /**
     * <p>The ID of the assignment that contains the question with a
     * FileUploadAnswer.</p>
     */
    inline void SetAssignmentId(const char* value) { m_assignmentIdHasBeenSet = true; m_assignmentId.assign(value); }

    /**
     * <p>The ID of the assignment that contains the question with a
     * FileUploadAnswer.</p>
     */
    inline GetFileUploadURLRequest& WithAssignmentId(const Aws::String& value) { SetAssignmentId(value); return *this;}

    /**
     * <p>The ID of the assignment that contains the question with a
     * FileUploadAnswer.</p>
     */
    inline GetFileUploadURLRequest& WithAssignmentId(Aws::String&& value) { SetAssignmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the assignment that contains the question with a
     * FileUploadAnswer.</p>
     */
    inline GetFileUploadURLRequest& WithAssignmentId(const char* value) { SetAssignmentId(value); return *this;}


    /**
     * <p>The identifier of the question with a FileUploadAnswer, as specified in the
     * QuestionForm of the HIT.</p>
     */
    inline const Aws::String& GetQuestionIdentifier() const{ return m_questionIdentifier; }

    /**
     * <p>The identifier of the question with a FileUploadAnswer, as specified in the
     * QuestionForm of the HIT.</p>
     */
    inline bool QuestionIdentifierHasBeenSet() const { return m_questionIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the question with a FileUploadAnswer, as specified in the
     * QuestionForm of the HIT.</p>
     */
    inline void SetQuestionIdentifier(const Aws::String& value) { m_questionIdentifierHasBeenSet = true; m_questionIdentifier = value; }

    /**
     * <p>The identifier of the question with a FileUploadAnswer, as specified in the
     * QuestionForm of the HIT.</p>
     */
    inline void SetQuestionIdentifier(Aws::String&& value) { m_questionIdentifierHasBeenSet = true; m_questionIdentifier = std::move(value); }

    /**
     * <p>The identifier of the question with a FileUploadAnswer, as specified in the
     * QuestionForm of the HIT.</p>
     */
    inline void SetQuestionIdentifier(const char* value) { m_questionIdentifierHasBeenSet = true; m_questionIdentifier.assign(value); }

    /**
     * <p>The identifier of the question with a FileUploadAnswer, as specified in the
     * QuestionForm of the HIT.</p>
     */
    inline GetFileUploadURLRequest& WithQuestionIdentifier(const Aws::String& value) { SetQuestionIdentifier(value); return *this;}

    /**
     * <p>The identifier of the question with a FileUploadAnswer, as specified in the
     * QuestionForm of the HIT.</p>
     */
    inline GetFileUploadURLRequest& WithQuestionIdentifier(Aws::String&& value) { SetQuestionIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the question with a FileUploadAnswer, as specified in the
     * QuestionForm of the HIT.</p>
     */
    inline GetFileUploadURLRequest& WithQuestionIdentifier(const char* value) { SetQuestionIdentifier(value); return *this;}

  private:

    Aws::String m_assignmentId;
    bool m_assignmentIdHasBeenSet;

    Aws::String m_questionIdentifier;
    bool m_questionIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
