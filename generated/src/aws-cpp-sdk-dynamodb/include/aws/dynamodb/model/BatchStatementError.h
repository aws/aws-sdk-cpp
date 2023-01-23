/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BatchStatementErrorCodeEnum.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p> An error associated with a statement in a PartiQL batch that was run.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchStatementError">AWS
   * API Reference</a></p>
   */
  class BatchStatementError
  {
  public:
    AWS_DYNAMODB_API BatchStatementError();
    AWS_DYNAMODB_API BatchStatementError(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API BatchStatementError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The error code associated with the failed PartiQL batch statement. </p>
     */
    inline const BatchStatementErrorCodeEnum& GetCode() const{ return m_code; }

    /**
     * <p> The error code associated with the failed PartiQL batch statement. </p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p> The error code associated with the failed PartiQL batch statement. </p>
     */
    inline void SetCode(const BatchStatementErrorCodeEnum& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p> The error code associated with the failed PartiQL batch statement. </p>
     */
    inline void SetCode(BatchStatementErrorCodeEnum&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p> The error code associated with the failed PartiQL batch statement. </p>
     */
    inline BatchStatementError& WithCode(const BatchStatementErrorCodeEnum& value) { SetCode(value); return *this;}

    /**
     * <p> The error code associated with the failed PartiQL batch statement. </p>
     */
    inline BatchStatementError& WithCode(BatchStatementErrorCodeEnum&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p> The error message associated with the PartiQL batch response. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p> The error message associated with the PartiQL batch response. </p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p> The error message associated with the PartiQL batch response. </p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p> The error message associated with the PartiQL batch response. </p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p> The error message associated with the PartiQL batch response. </p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p> The error message associated with the PartiQL batch response. </p>
     */
    inline BatchStatementError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p> The error message associated with the PartiQL batch response. </p>
     */
    inline BatchStatementError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p> The error message associated with the PartiQL batch response. </p>
     */
    inline BatchStatementError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    BatchStatementErrorCodeEnum m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
