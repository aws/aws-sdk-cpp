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
    AWS_CODEPIPELINE_API FailureDetails();
    AWS_CODEPIPELINE_API FailureDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API FailureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the failure.</p>
     */
    inline const FailureType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FailureType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FailureType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline FailureDetails& WithType(const FailureType& value) { SetType(value); return *this;}
    inline FailureDetails& WithType(FailureType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message about the failure.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline FailureDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline FailureDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline FailureDetails& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of the run of the action that failed.</p>
     */
    inline const Aws::String& GetExternalExecutionId() const{ return m_externalExecutionId; }
    inline bool ExternalExecutionIdHasBeenSet() const { return m_externalExecutionIdHasBeenSet; }
    inline void SetExternalExecutionId(const Aws::String& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = value; }
    inline void SetExternalExecutionId(Aws::String&& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = std::move(value); }
    inline void SetExternalExecutionId(const char* value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId.assign(value); }
    inline FailureDetails& WithExternalExecutionId(const Aws::String& value) { SetExternalExecutionId(value); return *this;}
    inline FailureDetails& WithExternalExecutionId(Aws::String&& value) { SetExternalExecutionId(std::move(value)); return *this;}
    inline FailureDetails& WithExternalExecutionId(const char* value) { SetExternalExecutionId(value); return *this;}
    ///@}
  private:

    FailureType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_externalExecutionId;
    bool m_externalExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
