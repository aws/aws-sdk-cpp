/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/ImportStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{
  class DeleteImportResult
  {
  public:
    AWS_LEXMODELSV2_API DeleteImportResult() = default;
    AWS_LEXMODELSV2_API DeleteImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DeleteImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the deleted import.</p>
     */
    inline const Aws::String& GetImportId() const { return m_importId; }
    template<typename ImportIdT = Aws::String>
    void SetImportId(ImportIdT&& value) { m_importIdHasBeenSet = true; m_importId = std::forward<ImportIdT>(value); }
    template<typename ImportIdT = Aws::String>
    DeleteImportResult& WithImportId(ImportIdT&& value) { SetImportId(std::forward<ImportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the deletion. When the deletion is complete, the import
     * will no longer be returned by the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_ListImports.html">ListImports</a>
     * operation and calls to the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_DescribeImport.html">DescribeImport</a>
     * operation with the import identifier will fail.</p>
     */
    inline ImportStatus GetImportStatus() const { return m_importStatus; }
    inline void SetImportStatus(ImportStatus value) { m_importStatusHasBeenSet = true; m_importStatus = value; }
    inline DeleteImportResult& WithImportStatus(ImportStatus value) { SetImportStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteImportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;

    ImportStatus m_importStatus{ImportStatus::NOT_SET};
    bool m_importStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
