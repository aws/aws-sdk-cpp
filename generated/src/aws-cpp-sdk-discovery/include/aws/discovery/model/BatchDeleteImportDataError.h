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
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteImportDataError() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteImportDataError(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteImportDataError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique import ID associated with the error that occurred.</p>
     */
    inline const Aws::String& GetImportTaskId() const { return m_importTaskId; }
    inline bool ImportTaskIdHasBeenSet() const { return m_importTaskIdHasBeenSet; }
    template<typename ImportTaskIdT = Aws::String>
    void SetImportTaskId(ImportTaskIdT&& value) { m_importTaskIdHasBeenSet = true; m_importTaskId = std::forward<ImportTaskIdT>(value); }
    template<typename ImportTaskIdT = Aws::String>
    BatchDeleteImportDataError& WithImportTaskId(ImportTaskIdT&& value) { SetImportTaskId(std::forward<ImportTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of error that occurred for a specific import task.</p>
     */
    inline BatchDeleteImportDataErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(BatchDeleteImportDataErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline BatchDeleteImportDataError& WithErrorCode(BatchDeleteImportDataErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the error that occurred for a specific import task.</p>
     */
    inline const Aws::String& GetErrorDescription() const { return m_errorDescription; }
    inline bool ErrorDescriptionHasBeenSet() const { return m_errorDescriptionHasBeenSet; }
    template<typename ErrorDescriptionT = Aws::String>
    void SetErrorDescription(ErrorDescriptionT&& value) { m_errorDescriptionHasBeenSet = true; m_errorDescription = std::forward<ErrorDescriptionT>(value); }
    template<typename ErrorDescriptionT = Aws::String>
    BatchDeleteImportDataError& WithErrorDescription(ErrorDescriptionT&& value) { SetErrorDescription(std::forward<ErrorDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_importTaskId;
    bool m_importTaskIdHasBeenSet = false;

    BatchDeleteImportDataErrorCode m_errorCode{BatchDeleteImportDataErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorDescription;
    bool m_errorDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
