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
    AWS_CLOUDDIRECTORY_API BatchReadOperationResponse();
    AWS_CLOUDDIRECTORY_API BatchReadOperationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchReadOperationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifies which operation in a batch has succeeded.</p>
     */
    inline const BatchReadSuccessfulResponse& GetSuccessfulResponse() const{ return m_successfulResponse; }
    inline bool SuccessfulResponseHasBeenSet() const { return m_successfulResponseHasBeenSet; }
    inline void SetSuccessfulResponse(const BatchReadSuccessfulResponse& value) { m_successfulResponseHasBeenSet = true; m_successfulResponse = value; }
    inline void SetSuccessfulResponse(BatchReadSuccessfulResponse&& value) { m_successfulResponseHasBeenSet = true; m_successfulResponse = std::move(value); }
    inline BatchReadOperationResponse& WithSuccessfulResponse(const BatchReadSuccessfulResponse& value) { SetSuccessfulResponse(value); return *this;}
    inline BatchReadOperationResponse& WithSuccessfulResponse(BatchReadSuccessfulResponse&& value) { SetSuccessfulResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies which operation in a batch has failed.</p>
     */
    inline const BatchReadException& GetExceptionResponse() const{ return m_exceptionResponse; }
    inline bool ExceptionResponseHasBeenSet() const { return m_exceptionResponseHasBeenSet; }
    inline void SetExceptionResponse(const BatchReadException& value) { m_exceptionResponseHasBeenSet = true; m_exceptionResponse = value; }
    inline void SetExceptionResponse(BatchReadException&& value) { m_exceptionResponseHasBeenSet = true; m_exceptionResponse = std::move(value); }
    inline BatchReadOperationResponse& WithExceptionResponse(const BatchReadException& value) { SetExceptionResponse(value); return *this;}
    inline BatchReadOperationResponse& WithExceptionResponse(BatchReadException&& value) { SetExceptionResponse(std::move(value)); return *this;}
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
