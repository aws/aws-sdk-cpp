/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/FailureType.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about failure details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/FailureDetails">AWS
   * API Reference</a></p>
   */
  class FailureDetails
  {
  public:
    AWS_CODEPIPELINE_API FailureDetails() = default;
    AWS_CODEPIPELINE_API FailureDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API FailureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the failure.</p>
     */
    inline FailureType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FailureType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FailureDetails& WithType(FailureType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message about the failure.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    FailureDetails& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of the run of the action that failed.</p>
     */
    inline const Aws::String& GetExternalExecutionId() const { return m_externalExecutionId; }
    inline bool ExternalExecutionIdHasBeenSet() const { return m_externalExecutionIdHasBeenSet; }
    template<typename ExternalExecutionIdT = Aws::String>
    void SetExternalExecutionId(ExternalExecutionIdT&& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = std::forward<ExternalExecutionIdT>(value); }
    template<typename ExternalExecutionIdT = Aws::String>
    FailureDetails& WithExternalExecutionId(ExternalExecutionIdT&& value) { SetExternalExecutionId(std::forward<ExternalExecutionIdT>(value)); return *this;}
    ///@}
  private:

    FailureType m_type{FailureType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_externalExecutionId;
    bool m_externalExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
