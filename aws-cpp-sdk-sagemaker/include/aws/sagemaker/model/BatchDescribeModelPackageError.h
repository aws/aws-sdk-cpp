/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The error code and error description associated with the
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BatchDescribeModelPackageError">AWS
   * API Reference</a></p>
   */
  class BatchDescribeModelPackageError
  {
  public:
    AWS_SAGEMAKER_API BatchDescribeModelPackageError();
    AWS_SAGEMAKER_API BatchDescribeModelPackageError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API BatchDescribeModelPackageError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p/>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p/>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p/>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p/>
     */
    inline BatchDescribeModelPackageError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p/>
     */
    inline BatchDescribeModelPackageError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline BatchDescribeModelPackageError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetErrorResponse() const{ return m_errorResponse; }

    /**
     * <p/>
     */
    inline bool ErrorResponseHasBeenSet() const { return m_errorResponseHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetErrorResponse(const Aws::String& value) { m_errorResponseHasBeenSet = true; m_errorResponse = value; }

    /**
     * <p/>
     */
    inline void SetErrorResponse(Aws::String&& value) { m_errorResponseHasBeenSet = true; m_errorResponse = std::move(value); }

    /**
     * <p/>
     */
    inline void SetErrorResponse(const char* value) { m_errorResponseHasBeenSet = true; m_errorResponse.assign(value); }

    /**
     * <p/>
     */
    inline BatchDescribeModelPackageError& WithErrorResponse(const Aws::String& value) { SetErrorResponse(value); return *this;}

    /**
     * <p/>
     */
    inline BatchDescribeModelPackageError& WithErrorResponse(Aws::String&& value) { SetErrorResponse(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline BatchDescribeModelPackageError& WithErrorResponse(const char* value) { SetErrorResponse(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorResponse;
    bool m_errorResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
