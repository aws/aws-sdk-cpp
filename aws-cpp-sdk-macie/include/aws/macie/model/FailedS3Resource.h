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
   * <p>Includes details about the failed S3 resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie-2017-12-19/FailedS3Resource">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE_API FailedS3Resource
  {
  public:
    FailedS3Resource();
    FailedS3Resource(Aws::Utils::Json::JsonView jsonValue);
    FailedS3Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The failed S3 resources.</p>
     */
    inline const S3Resource& GetFailedItem() const{ return m_failedItem; }

    /**
     * <p>The failed S3 resources.</p>
     */
    inline bool FailedItemHasBeenSet() const { return m_failedItemHasBeenSet; }

    /**
     * <p>The failed S3 resources.</p>
     */
    inline void SetFailedItem(const S3Resource& value) { m_failedItemHasBeenSet = true; m_failedItem = value; }

    /**
     * <p>The failed S3 resources.</p>
     */
    inline void SetFailedItem(S3Resource&& value) { m_failedItemHasBeenSet = true; m_failedItem = std::move(value); }

    /**
     * <p>The failed S3 resources.</p>
     */
    inline FailedS3Resource& WithFailedItem(const S3Resource& value) { SetFailedItem(value); return *this;}

    /**
     * <p>The failed S3 resources.</p>
     */
    inline FailedS3Resource& WithFailedItem(S3Resource&& value) { SetFailedItem(std::move(value)); return *this;}


    /**
     * <p>The status code of a failed item.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The status code of a failed item.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The status code of a failed item.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The status code of a failed item.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The status code of a failed item.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The status code of a failed item.</p>
     */
    inline FailedS3Resource& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The status code of a failed item.</p>
     */
    inline FailedS3Resource& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The status code of a failed item.</p>
     */
    inline FailedS3Resource& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The error message of a failed item.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message of a failed item.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message of a failed item.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message of a failed item.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message of a failed item.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message of a failed item.</p>
     */
    inline FailedS3Resource& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message of a failed item.</p>
     */
    inline FailedS3Resource& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message of a failed item.</p>
     */
    inline FailedS3Resource& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    S3Resource m_failedItem;
    bool m_failedItemHasBeenSet;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace Macie
} // namespace Aws
