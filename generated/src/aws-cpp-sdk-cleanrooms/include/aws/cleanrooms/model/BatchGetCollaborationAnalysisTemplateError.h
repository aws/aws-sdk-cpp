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
    AWS_CLEANROOMS_API BatchGetCollaborationAnalysisTemplateError() = default;
    AWS_CLEANROOMS_API BatchGetCollaborationAnalysisTemplateError(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API BatchGetCollaborationAnalysisTemplateError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the analysis template.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    BatchGetCollaborationAnalysisTemplateError& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error code for the error.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    BatchGetCollaborationAnalysisTemplateError& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of why the call failed.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    BatchGetCollaborationAnalysisTemplateError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
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
