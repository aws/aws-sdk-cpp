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
   * <p>Information about a named query ID that could not be processed.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/UnprocessedNamedQueryId">AWS
   * API Reference</a></p>
   */
  class UnprocessedNamedQueryId
  {
  public:
    AWS_ATHENA_API UnprocessedNamedQueryId() = default;
    AWS_ATHENA_API UnprocessedNamedQueryId(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API UnprocessedNamedQueryId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the named query.</p>
     */
    inline const Aws::String& GetNamedQueryId() const { return m_namedQueryId; }
    inline bool NamedQueryIdHasBeenSet() const { return m_namedQueryIdHasBeenSet; }
    template<typename NamedQueryIdT = Aws::String>
    void SetNamedQueryId(NamedQueryIdT&& value) { m_namedQueryIdHasBeenSet = true; m_namedQueryId = std::forward<NamedQueryIdT>(value); }
    template<typename NamedQueryIdT = Aws::String>
    UnprocessedNamedQueryId& WithNamedQueryId(NamedQueryIdT&& value) { SetNamedQueryId(std::forward<NamedQueryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    UnprocessedNamedQueryId& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message returned when the processing request for the named query
     * failed, if applicable.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    UnprocessedNamedQueryId& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
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
