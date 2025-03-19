/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/BatchReadSuccessfulResponse.h>
#include <aws/clouddirectory/model/BatchReadException.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Represents the output of a <code>BatchRead</code> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchReadOperationResponse">AWS
   * API Reference</a></p>
   */
  class BatchReadOperationResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchReadOperationResponse() = default;
    AWS_CLOUDDIRECTORY_API BatchReadOperationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchReadOperationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifies which operation in a batch has succeeded.</p>
     */
    inline const BatchReadSuccessfulResponse& GetSuccessfulResponse() const { return m_successfulResponse; }
    inline bool SuccessfulResponseHasBeenSet() const { return m_successfulResponseHasBeenSet; }
    template<typename SuccessfulResponseT = BatchReadSuccessfulResponse>
    void SetSuccessfulResponse(SuccessfulResponseT&& value) { m_successfulResponseHasBeenSet = true; m_successfulResponse = std::forward<SuccessfulResponseT>(value); }
    template<typename SuccessfulResponseT = BatchReadSuccessfulResponse>
    BatchReadOperationResponse& WithSuccessfulResponse(SuccessfulResponseT&& value) { SetSuccessfulResponse(std::forward<SuccessfulResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies which operation in a batch has failed.</p>
     */
    inline const BatchReadException& GetExceptionResponse() const { return m_exceptionResponse; }
    inline bool ExceptionResponseHasBeenSet() const { return m_exceptionResponseHasBeenSet; }
    template<typename ExceptionResponseT = BatchReadException>
    void SetExceptionResponse(ExceptionResponseT&& value) { m_exceptionResponseHasBeenSet = true; m_exceptionResponse = std::forward<ExceptionResponseT>(value); }
    template<typename ExceptionResponseT = BatchReadException>
    BatchReadOperationResponse& WithExceptionResponse(ExceptionResponseT&& value) { SetExceptionResponse(std::forward<ExceptionResponseT>(value)); return *this;}
    ///@}
  private:

    BatchReadSuccessfulResponse m_successfulResponse;
    bool m_successfulResponseHasBeenSet = false;

    BatchReadException m_exceptionResponse;
    bool m_exceptionResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
