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
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/QueryErrorCode.h>
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
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>A two-part error structure that can occur in <code>ListGroupResources</code>
   * or <code>SearchResources</code> operations on CloudFormation stack-based
   * queries. The error occurs if the CloudFormation stack on which the query is
   * based either does not exist, or has a status that renders the stack inactive. A
   * <code>QueryError</code> occurrence does not necessarily mean that AWS Resource
   * Groups could not complete the operation, but the resulting group might have no
   * member resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/QueryError">AWS
   * API Reference</a></p>
   */
  class AWS_RESOURCEGROUPS_API QueryError
  {
  public:
    QueryError();
    QueryError(Aws::Utils::Json::JsonView jsonValue);
    QueryError& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Possible values are <code>CLOUDFORMATION_STACK_INACTIVE</code> and
     * <code>CLOUDFORMATION_STACK_NOT_EXISTING</code>.</p>
     */
    inline const QueryErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>Possible values are <code>CLOUDFORMATION_STACK_INACTIVE</code> and
     * <code>CLOUDFORMATION_STACK_NOT_EXISTING</code>.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>Possible values are <code>CLOUDFORMATION_STACK_INACTIVE</code> and
     * <code>CLOUDFORMATION_STACK_NOT_EXISTING</code>.</p>
     */
    inline void SetErrorCode(const QueryErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>Possible values are <code>CLOUDFORMATION_STACK_INACTIVE</code> and
     * <code>CLOUDFORMATION_STACK_NOT_EXISTING</code>.</p>
     */
    inline void SetErrorCode(QueryErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>Possible values are <code>CLOUDFORMATION_STACK_INACTIVE</code> and
     * <code>CLOUDFORMATION_STACK_NOT_EXISTING</code>.</p>
     */
    inline QueryError& WithErrorCode(const QueryErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>Possible values are <code>CLOUDFORMATION_STACK_INACTIVE</code> and
     * <code>CLOUDFORMATION_STACK_NOT_EXISTING</code>.</p>
     */
    inline QueryError& WithErrorCode(QueryErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>A message that explains the <code>ErrorCode</code> value. Messages might
     * state that the specified CloudFormation stack does not exist (or no longer
     * exists). For <code>CLOUDFORMATION_STACK_INACTIVE</code>, the message typically
     * states that the CloudFormation stack has a status that is not (or no longer)
     * active, such as <code>CREATE_FAILED</code>.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message that explains the <code>ErrorCode</code> value. Messages might
     * state that the specified CloudFormation stack does not exist (or no longer
     * exists). For <code>CLOUDFORMATION_STACK_INACTIVE</code>, the message typically
     * states that the CloudFormation stack has a status that is not (or no longer)
     * active, such as <code>CREATE_FAILED</code>.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message that explains the <code>ErrorCode</code> value. Messages might
     * state that the specified CloudFormation stack does not exist (or no longer
     * exists). For <code>CLOUDFORMATION_STACK_INACTIVE</code>, the message typically
     * states that the CloudFormation stack has a status that is not (or no longer)
     * active, such as <code>CREATE_FAILED</code>.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message that explains the <code>ErrorCode</code> value. Messages might
     * state that the specified CloudFormation stack does not exist (or no longer
     * exists). For <code>CLOUDFORMATION_STACK_INACTIVE</code>, the message typically
     * states that the CloudFormation stack has a status that is not (or no longer)
     * active, such as <code>CREATE_FAILED</code>.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message that explains the <code>ErrorCode</code> value. Messages might
     * state that the specified CloudFormation stack does not exist (or no longer
     * exists). For <code>CLOUDFORMATION_STACK_INACTIVE</code>, the message typically
     * states that the CloudFormation stack has a status that is not (or no longer)
     * active, such as <code>CREATE_FAILED</code>.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message that explains the <code>ErrorCode</code> value. Messages might
     * state that the specified CloudFormation stack does not exist (or no longer
     * exists). For <code>CLOUDFORMATION_STACK_INACTIVE</code>, the message typically
     * states that the CloudFormation stack has a status that is not (or no longer)
     * active, such as <code>CREATE_FAILED</code>.</p>
     */
    inline QueryError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message that explains the <code>ErrorCode</code> value. Messages might
     * state that the specified CloudFormation stack does not exist (or no longer
     * exists). For <code>CLOUDFORMATION_STACK_INACTIVE</code>, the message typically
     * states that the CloudFormation stack has a status that is not (or no longer)
     * active, such as <code>CREATE_FAILED</code>.</p>
     */
    inline QueryError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message that explains the <code>ErrorCode</code> value. Messages might
     * state that the specified CloudFormation stack does not exist (or no longer
     * exists). For <code>CLOUDFORMATION_STACK_INACTIVE</code>, the message typically
     * states that the CloudFormation stack has a status that is not (or no longer)
     * active, such as <code>CREATE_FAILED</code>.</p>
     */
    inline QueryError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    QueryErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
