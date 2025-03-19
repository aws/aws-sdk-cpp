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
   * <p>The name of a prepared statement that could not be returned.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UnprocessedPreparedStatementName">AWS
   * API Reference</a></p>
   */
  class UnprocessedPreparedStatementName
  {
  public:
    AWS_ATHENA_API UnprocessedPreparedStatementName() = default;
    AWS_ATHENA_API UnprocessedPreparedStatementName(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API UnprocessedPreparedStatementName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a prepared statement that could not be returned due to an
     * error.</p>
     */
    inline const Aws::String& GetStatementName() const { return m_statementName; }
    inline bool StatementNameHasBeenSet() const { return m_statementNameHasBeenSet; }
    template<typename StatementNameT = Aws::String>
    void SetStatementName(StatementNameT&& value) { m_statementNameHasBeenSet = true; m_statementName = std::forward<StatementNameT>(value); }
    template<typename StatementNameT = Aws::String>
    UnprocessedPreparedStatementName& WithStatementName(StatementNameT&& value) { SetStatementName(std::forward<StatementNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code returned when the request for the prepared statement
     * failed.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    UnprocessedPreparedStatementName& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message containing the reason why the prepared statement could not
     * be returned. The following error messages are possible:</p> <ul> <li> <p>
     * <code>INVALID_INPUT</code> - The name of the prepared statement that was
     * provided is not valid (for example, the name is too long).</p> </li> <li> <p>
     * <code>STATEMENT_NOT_FOUND</code> - A prepared statement with the name provided
     * could not be found.</p> </li> <li> <p> <code>UNAUTHORIZED</code> - The requester
     * does not have permission to access the workgroup that contains the prepared
     * statement.</p> </li> </ul>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    UnprocessedPreparedStatementName& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_statementName;
    bool m_statementNameHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
