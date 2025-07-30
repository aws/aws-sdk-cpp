/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>A directory assessment is automatically created when you create a hybrid
   * directory. There are two types of assessments: <code>CUSTOMER</code> and
   * <code>SYSTEM</code>. Your Amazon Web Services account has a limit of 100
   * <code>CUSTOMER</code> directory assessments.</p> <p>If you attempt to create a
   * hybrid directory; and you already have 100 <code>CUSTOMER</code> directory
   * assessments;, you will encounter an error. Delete assessments to free up
   * capacity before trying again.</p> <p>You can request an increase to your
   * <code>CUSTOMER</code> directory assessment quota by contacting customer support
   * or delete existing CUSTOMER directory assessments; to free up
   * capacity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ADAssessmentLimitExceededException">AWS
   * API Reference</a></p>
   */
  class ADAssessmentLimitExceededException
  {
  public:
    AWS_DIRECTORYSERVICE_API ADAssessmentLimitExceededException() = default;
    AWS_DIRECTORYSERVICE_API ADAssessmentLimitExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API ADAssessmentLimitExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ADAssessmentLimitExceededException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ADAssessmentLimitExceededException& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
