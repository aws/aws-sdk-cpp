﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UnprocessedNamedQueryId
  {
  public:
    AWS_ATHENA_API UnprocessedNamedQueryId();
    AWS_ATHENA_API UnprocessedNamedQueryId(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API UnprocessedNamedQueryId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the named query.</p>
     */
    inline const Aws::String& GetNamedQueryId() const{ return m_namedQueryId; }
    inline bool NamedQueryIdHasBeenSet() const { return m_namedQueryIdHasBeenSet; }
    inline void SetNamedQueryId(const Aws::String& value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId = value; }
    inline void SetNamedQueryId(Aws::String&& value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId = std::move(value); }
    inline void SetNamedQueryId(const char* value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId.assign(value); }
    inline UnprocessedNamedQueryId& WithNamedQueryId(const Aws::String& value) { SetNamedQueryId(value); return *this;}
    inline UnprocessedNamedQueryId& WithNamedQueryId(Aws::String&& value) { SetNamedQueryId(std::move(value)); return *this;}
    inline UnprocessedNamedQueryId& WithNamedQueryId(const char* value) { SetNamedQueryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline UnprocessedNamedQueryId& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline UnprocessedNamedQueryId& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline UnprocessedNamedQueryId& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline UnprocessedNamedQueryId& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline UnprocessedNamedQueryId& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline UnprocessedNamedQueryId& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_namedQueryId;
    bool m_namedQueryIdHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
