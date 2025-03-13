/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>A tuple that provides information about an error that caused a cluster to
   * terminate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ErrorDetail">AWS
   * API Reference</a></p>
   */
  class ErrorDetail
  {
  public:
    AWS_EMR_API ErrorDetail() = default;
    AWS_EMR_API ErrorDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ErrorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name or code associated with the error.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    ErrorDetail& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key value pairs that provides contextual information about why an
     * error occured.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetErrorData() const { return m_errorData; }
    inline bool ErrorDataHasBeenSet() const { return m_errorDataHasBeenSet; }
    template<typename ErrorDataT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    void SetErrorData(ErrorDataT&& value) { m_errorDataHasBeenSet = true; m_errorData = std::forward<ErrorDataT>(value); }
    template<typename ErrorDataT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    ErrorDetail& WithErrorData(ErrorDataT&& value) { SetErrorData(std::forward<ErrorDataT>(value)); return *this;}
    template<typename ErrorDataT = Aws::Map<Aws::String, Aws::String>>
    ErrorDetail& AddErrorData(ErrorDataT&& value) { m_errorDataHasBeenSet = true; m_errorData.emplace_back(std::forward<ErrorDataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A message that describes the error.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    ErrorDetail& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_errorData;
    bool m_errorDataHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
