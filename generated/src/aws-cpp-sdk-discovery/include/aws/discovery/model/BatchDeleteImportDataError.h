/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/BatchDeleteImportDataErrorCode.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p>Error messages returned for each import task that you deleted as a response
   * for this command.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/BatchDeleteImportDataError">AWS
   * API Reference</a></p>
   */
  class BatchDeleteImportDataError
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteImportDataError();
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteImportDataError(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteImportDataError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique import ID associated with the error that occurred.</p>
     */
    inline const Aws::String& GetImportTaskId() const{ return m_importTaskId; }
    inline bool ImportTaskIdHasBeenSet() const { return m_importTaskIdHasBeenSet; }
    inline void SetImportTaskId(const Aws::String& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = value; }
    inline void SetImportTaskId(Aws::String&& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = std::move(value); }
    inline void SetImportTaskId(const char* value) { m_importTaskIdHasBeenSet = true; m_importTaskId.assign(value); }
    inline BatchDeleteImportDataError& WithImportTaskId(const Aws::String& value) { SetImportTaskId(value); return *this;}
    inline BatchDeleteImportDataError& WithImportTaskId(Aws::String&& value) { SetImportTaskId(std::move(value)); return *this;}
    inline BatchDeleteImportDataError& WithImportTaskId(const char* value) { SetImportTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of error that occurred for a specific import task.</p>
     */
    inline const BatchDeleteImportDataErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const BatchDeleteImportDataErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(BatchDeleteImportDataErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline BatchDeleteImportDataError& WithErrorCode(const BatchDeleteImportDataErrorCode& value) { SetErrorCode(value); return *this;}
    inline BatchDeleteImportDataError& WithErrorCode(BatchDeleteImportDataErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the error that occurred for a specific import task.</p>
     */
    inline const Aws::String& GetErrorDescription() const{ return m_errorDescription; }
    inline bool ErrorDescriptionHasBeenSet() const { return m_errorDescriptionHasBeenSet; }
    inline void SetErrorDescription(const Aws::String& value) { m_errorDescriptionHasBeenSet = true; m_errorDescription = value; }
    inline void SetErrorDescription(Aws::String&& value) { m_errorDescriptionHasBeenSet = true; m_errorDescription = std::move(value); }
    inline void SetErrorDescription(const char* value) { m_errorDescriptionHasBeenSet = true; m_errorDescription.assign(value); }
    inline BatchDeleteImportDataError& WithErrorDescription(const Aws::String& value) { SetErrorDescription(value); return *this;}
    inline BatchDeleteImportDataError& WithErrorDescription(Aws::String&& value) { SetErrorDescription(std::move(value)); return *this;}
    inline BatchDeleteImportDataError& WithErrorDescription(const char* value) { SetErrorDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_importTaskId;
    bool m_importTaskIdHasBeenSet = false;

    BatchDeleteImportDataErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorDescription;
    bool m_errorDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
