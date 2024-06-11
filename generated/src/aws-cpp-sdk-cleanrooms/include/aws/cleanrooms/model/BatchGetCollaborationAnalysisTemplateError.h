/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Details of errors thrown by the call to retrieve multiple analysis templates
   * within a collaboration by their identifiers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/BatchGetCollaborationAnalysisTemplateError">AWS
   * API Reference</a></p>
   */
  class BatchGetCollaborationAnalysisTemplateError
  {
  public:
    AWS_CLEANROOMS_API BatchGetCollaborationAnalysisTemplateError();
    AWS_CLEANROOMS_API BatchGetCollaborationAnalysisTemplateError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API BatchGetCollaborationAnalysisTemplateError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the analysis template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline BatchGetCollaborationAnalysisTemplateError& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline BatchGetCollaborationAnalysisTemplateError& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline BatchGetCollaborationAnalysisTemplateError& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error code for the error.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline BatchGetCollaborationAnalysisTemplateError& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline BatchGetCollaborationAnalysisTemplateError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline BatchGetCollaborationAnalysisTemplateError& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of why the call failed.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline BatchGetCollaborationAnalysisTemplateError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline BatchGetCollaborationAnalysisTemplateError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline BatchGetCollaborationAnalysisTemplateError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
