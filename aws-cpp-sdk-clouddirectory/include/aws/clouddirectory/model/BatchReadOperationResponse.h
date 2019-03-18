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
  class AWS_CLOUDDIRECTORY_API BatchReadOperationResponse
  {
  public:
    BatchReadOperationResponse();
    BatchReadOperationResponse(Aws::Utils::Json::JsonView jsonValue);
    BatchReadOperationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies which operation in a batch has succeeded.</p>
     */
    inline const BatchReadSuccessfulResponse& GetSuccessfulResponse() const{ return m_successfulResponse; }

    /**
     * <p>Identifies which operation in a batch has succeeded.</p>
     */
    inline bool SuccessfulResponseHasBeenSet() const { return m_successfulResponseHasBeenSet; }

    /**
     * <p>Identifies which operation in a batch has succeeded.</p>
     */
    inline void SetSuccessfulResponse(const BatchReadSuccessfulResponse& value) { m_successfulResponseHasBeenSet = true; m_successfulResponse = value; }

    /**
     * <p>Identifies which operation in a batch has succeeded.</p>
     */
    inline void SetSuccessfulResponse(BatchReadSuccessfulResponse&& value) { m_successfulResponseHasBeenSet = true; m_successfulResponse = std::move(value); }

    /**
     * <p>Identifies which operation in a batch has succeeded.</p>
     */
    inline BatchReadOperationResponse& WithSuccessfulResponse(const BatchReadSuccessfulResponse& value) { SetSuccessfulResponse(value); return *this;}

    /**
     * <p>Identifies which operation in a batch has succeeded.</p>
     */
    inline BatchReadOperationResponse& WithSuccessfulResponse(BatchReadSuccessfulResponse&& value) { SetSuccessfulResponse(std::move(value)); return *this;}


    /**
     * <p>Identifies which operation in a batch has failed.</p>
     */
    inline const BatchReadException& GetExceptionResponse() const{ return m_exceptionResponse; }

    /**
     * <p>Identifies which operation in a batch has failed.</p>
     */
    inline bool ExceptionResponseHasBeenSet() const { return m_exceptionResponseHasBeenSet; }

    /**
     * <p>Identifies which operation in a batch has failed.</p>
     */
    inline void SetExceptionResponse(const BatchReadException& value) { m_exceptionResponseHasBeenSet = true; m_exceptionResponse = value; }

    /**
     * <p>Identifies which operation in a batch has failed.</p>
     */
    inline void SetExceptionResponse(BatchReadException&& value) { m_exceptionResponseHasBeenSet = true; m_exceptionResponse = std::move(value); }

    /**
     * <p>Identifies which operation in a batch has failed.</p>
     */
    inline BatchReadOperationResponse& WithExceptionResponse(const BatchReadException& value) { SetExceptionResponse(value); return *this;}

    /**
     * <p>Identifies which operation in a batch has failed.</p>
     */
    inline BatchReadOperationResponse& WithExceptionResponse(BatchReadException&& value) { SetExceptionResponse(std::move(value)); return *this;}

  private:

    BatchReadSuccessfulResponse m_successfulResponse;
    bool m_successfulResponseHasBeenSet;

    BatchReadException m_exceptionResponse;
    bool m_exceptionResponseHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
