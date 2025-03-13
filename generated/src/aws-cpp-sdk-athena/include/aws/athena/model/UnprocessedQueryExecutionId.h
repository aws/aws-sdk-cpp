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
    AWS_ATHENA_API UnprocessedQueryExecutionId() = default;
    AWS_ATHENA_API UnprocessedQueryExecutionId(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API UnprocessedQueryExecutionId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the query execution.</p>
     */
    inline const Aws::String& GetQueryExecutionId() const { return m_queryExecutionId; }
    inline bool QueryExecutionIdHasBeenSet() const { return m_queryExecutionIdHasBeenSet; }
    template<typename QueryExecutionIdT = Aws::String>
    void SetQueryExecutionId(QueryExecutionIdT&& value) { m_queryExecutionIdHasBeenSet = true; m_queryExecutionId = std::forward<QueryExecutionIdT>(value); }
    template<typename QueryExecutionIdT = Aws::String>
    UnprocessedQueryExecutionId& WithQueryExecutionId(QueryExecutionIdT&& value) { SetQueryExecutionId(std::forward<QueryExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    UnprocessedQueryExecutionId& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message returned when the query execution failed to process, if
     * applicable.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    UnprocessedQueryExecutionId& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
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
