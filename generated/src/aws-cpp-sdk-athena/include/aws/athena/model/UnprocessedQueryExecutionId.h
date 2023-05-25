/**
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
   * <p>Describes a query execution that failed to process.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UnprocessedQueryExecutionId">AWS
   * API Reference</a></p>
   */
  class UnprocessedQueryExecutionId
  {
  public:
    AWS_ATHENA_API UnprocessedQueryExecutionId();
    AWS_ATHENA_API UnprocessedQueryExecutionId(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API UnprocessedQueryExecutionId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the query execution.</p>
     */
    inline const Aws::String& GetQueryExecutionId() const{ return m_queryExecutionId; }

    /**
     * <p>The unique identifier of the query execution.</p>
     */
    inline bool QueryExecutionIdHasBeenSet() const { return m_queryExecutionIdHasBeenSet; }

    /**
     * <p>The unique identifier of the query execution.</p>
     */
    inline void SetQueryExecutionId(const Aws::String& value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId = value; }

    /**
     * <p>The unique identifier of the query execution.</p>
     */
    inline void SetQueryExecutionId(Aws::String&& value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId = std::move(value); }

    /**
     * <p>The unique identifier of the query execution.</p>
     */
    inline void SetQueryExecutionId(const char* value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId.assign(value); }

    /**
     * <p>The unique identifier of the query execution.</p>
     */
    inline UnprocessedQueryExecutionId& WithQueryExecutionId(const Aws::String& value) { SetQueryExecutionId(value); return *this;}

    /**
     * <p>The unique identifier of the query execution.</p>
     */
    inline UnprocessedQueryExecutionId& WithQueryExecutionId(Aws::String&& value) { SetQueryExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the query execution.</p>
     */
    inline UnprocessedQueryExecutionId& WithQueryExecutionId(const char* value) { SetQueryExecutionId(value); return *this;}


    /**
     * <p>The error code returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline UnprocessedQueryExecutionId& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline UnprocessedQueryExecutionId& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline UnprocessedQueryExecutionId& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The error message returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline UnprocessedQueryExecutionId& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline UnprocessedQueryExecutionId& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline UnprocessedQueryExecutionId& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_queryExecutionId;
    bool m_queryExecutionIdHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
