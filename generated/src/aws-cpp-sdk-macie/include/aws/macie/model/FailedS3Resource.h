/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/macie/model/S3Resource.h>
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
namespace Macie
{
namespace Model
{

  /**
   * <p>(Discontinued) Includes details about the failed S3 resources.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/FailedS3Resource">AWS
   * API Reference</a></p>
   */
  class FailedS3Resource
  {
  public:
    AWS_MACIE_API FailedS3Resource();
    AWS_MACIE_API FailedS3Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE_API FailedS3Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>(Discontinued) The failed S3 resources.</p>
     */
    inline const S3Resource& GetFailedItem() const{ return m_failedItem; }

    /**
     * <p>(Discontinued) The failed S3 resources.</p>
     */
    inline bool FailedItemHasBeenSet() const { return m_failedItemHasBeenSet; }

    /**
     * <p>(Discontinued) The failed S3 resources.</p>
     */
    inline void SetFailedItem(const S3Resource& value) { m_failedItemHasBeenSet = true; m_failedItem = value; }

    /**
     * <p>(Discontinued) The failed S3 resources.</p>
     */
    inline void SetFailedItem(S3Resource&& value) { m_failedItemHasBeenSet = true; m_failedItem = std::move(value); }

    /**
     * <p>(Discontinued) The failed S3 resources.</p>
     */
    inline FailedS3Resource& WithFailedItem(const S3Resource& value) { SetFailedItem(value); return *this;}

    /**
     * <p>(Discontinued) The failed S3 resources.</p>
     */
    inline FailedS3Resource& WithFailedItem(S3Resource&& value) { SetFailedItem(std::move(value)); return *this;}


    /**
     * <p>(Discontinued) The status code of a failed item.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>(Discontinued) The status code of a failed item.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>(Discontinued) The status code of a failed item.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>(Discontinued) The status code of a failed item.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>(Discontinued) The status code of a failed item.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>(Discontinued) The status code of a failed item.</p>
     */
    inline FailedS3Resource& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>(Discontinued) The status code of a failed item.</p>
     */
    inline FailedS3Resource& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) The status code of a failed item.</p>
     */
    inline FailedS3Resource& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>(Discontinued) The error message of a failed item.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>(Discontinued) The error message of a failed item.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>(Discontinued) The error message of a failed item.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>(Discontinued) The error message of a failed item.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>(Discontinued) The error message of a failed item.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>(Discontinued) The error message of a failed item.</p>
     */
    inline FailedS3Resource& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>(Discontinued) The error message of a failed item.</p>
     */
    inline FailedS3Resource& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>(Discontinued) The error message of a failed item.</p>
     */
    inline FailedS3Resource& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    S3Resource m_failedItem;
    bool m_failedItemHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
