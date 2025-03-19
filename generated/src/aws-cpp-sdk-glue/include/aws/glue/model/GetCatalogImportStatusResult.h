/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/CatalogImportStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{
  class GetCatalogImportStatusResult
  {
  public:
    AWS_GLUE_API GetCatalogImportStatusResult() = default;
    AWS_GLUE_API GetCatalogImportStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetCatalogImportStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the specified catalog migration.</p>
     */
    inline const CatalogImportStatus& GetImportStatus() const { return m_importStatus; }
    template<typename ImportStatusT = CatalogImportStatus>
    void SetImportStatus(ImportStatusT&& value) { m_importStatusHasBeenSet = true; m_importStatus = std::forward<ImportStatusT>(value); }
    template<typename ImportStatusT = CatalogImportStatus>
    GetCatalogImportStatusResult& WithImportStatus(ImportStatusT&& value) { SetImportStatus(std::forward<ImportStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCatalogImportStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CatalogImportStatus m_importStatus;
    bool m_importStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
