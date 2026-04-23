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
  class AWS_CODEPIPELINE_API FailureDetails
  {
  public:
    FailureDetails();
    FailureDetails(Aws::Utils::Json::JsonView jsonValue);
    FailureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the failure.</p>
     */
    inline const FailureType& GetType() const{ return m_type; }

    /**
     * <p>The type of the failure.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the failure.</p>
     */
    inline void SetType(const FailureType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the failure.</p>
     */
    inline void SetType(FailureType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the failure.</p>
     */
    inline FailureDetails& WithType(const FailureType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the failure.</p>
     */
    inline FailureDetails& WithType(FailureType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The message about the failure.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message about the failure.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message about the failure.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message about the failure.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message about the failure.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message about the failure.</p>
     */
    inline FailureDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message about the failure.</p>
     */
    inline FailureDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message about the failure.</p>
     */
    inline FailureDetails& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The external ID of the run of the action that failed.</p>
     */
    inline const Aws::String& GetExternalExecutionId() const{ return m_externalExecutionId; }

    /**
     * <p>The external ID of the run of the action that failed.</p>
     */
    inline bool ExternalExecutionIdHasBeenSet() const { return m_externalExecutionIdHasBeenSet; }

    /**
     * <p>The external ID of the run of the action that failed.</p>
     */
    inline void SetExternalExecutionId(const Aws::String& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = value; }

    /**
     * <p>The external ID of the run of the action that failed.</p>
     */
    inline void SetExternalExecutionId(Aws::String&& value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId = std::move(value); }

    /**
     * <p>The external ID of the run of the action that failed.</p>
     */
    inline void SetExternalExecutionId(const char* value) { m_externalExecutionIdHasBeenSet = true; m_externalExecutionId.assign(value); }

    /**
     * <p>The external ID of the run of the action that failed.</p>
     */
    inline FailureDetails& WithExternalExecutionId(const Aws::String& value) { SetExternalExecutionId(value); return *this;}

    /**
     * <p>The external ID of the run of the action that failed.</p>
     */
    inline FailureDetails& WithExternalExecutionId(Aws::String&& value) { SetExternalExecutionId(std::move(value)); return *this;}

    /**
     * <p>The external ID of the run of the action that failed.</p>
     */
    inline FailureDetails& WithExternalExecutionId(const char* value) { SetExternalExecutionId(value); return *this;}

  private:

    FailureType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_externalExecutionId;
    bool m_externalExecutionIdHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
