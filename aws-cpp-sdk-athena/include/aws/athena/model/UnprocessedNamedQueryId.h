﻿/*
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
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Information about a named query ID that could not be processed.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UnprocessedNamedQueryId">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API UnprocessedNamedQueryId
  {
  public:
    UnprocessedNamedQueryId();
    UnprocessedNamedQueryId(Aws::Utils::Json::JsonView jsonValue);
    UnprocessedNamedQueryId& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the named query.</p>
     */
    inline const Aws::String& GetNamedQueryId() const{ return m_namedQueryId; }

    /**
     * <p>The unique identifier of the named query.</p>
     */
    inline void SetNamedQueryId(const Aws::String& value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId = value; }

    /**
     * <p>The unique identifier of the named query.</p>
     */
    inline void SetNamedQueryId(Aws::String&& value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId = std::move(value); }

    /**
     * <p>The unique identifier of the named query.</p>
     */
    inline void SetNamedQueryId(const char* value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId.assign(value); }

    /**
     * <p>The unique identifier of the named query.</p>
     */
    inline UnprocessedNamedQueryId& WithNamedQueryId(const Aws::String& value) { SetNamedQueryId(value); return *this;}

    /**
     * <p>The unique identifier of the named query.</p>
     */
    inline UnprocessedNamedQueryId& WithNamedQueryId(Aws::String&& value) { SetNamedQueryId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the named query.</p>
     */
    inline UnprocessedNamedQueryId& WithNamedQueryId(const char* value) { SetNamedQueryId(value); return *this;}


    /**
     * <p>The error code returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline UnprocessedNamedQueryId& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline UnprocessedNamedQueryId& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline UnprocessedNamedQueryId& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The error message returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline UnprocessedNamedQueryId& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline UnprocessedNamedQueryId& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline UnprocessedNamedQueryId& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_namedQueryId;
    bool m_namedQueryIdHasBeenSet;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
