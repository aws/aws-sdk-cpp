/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
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
namespace BackupSearch
{
namespace Model
{
  class StartSearchResultExportJobResult
  {
  public:
    AWS_BACKUPSEARCH_API StartSearchResultExportJobResult() = default;
    AWS_BACKUPSEARCH_API StartSearchResultExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSEARCH_API StartSearchResultExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This is the unique ARN (Amazon Resource Name) that belongs to the new export
     * job.</p>
     */
    inline const Aws::String& GetExportJobArn() const { return m_exportJobArn; }
    template<typename ExportJobArnT = Aws::String>
    void SetExportJobArn(ExportJobArnT&& value) { m_exportJobArnHasBeenSet = true; m_exportJobArn = std::forward<ExportJobArnT>(value); }
    template<typename ExportJobArnT = Aws::String>
    StartSearchResultExportJobResult& WithExportJobArn(ExportJobArnT&& value) { SetExportJobArn(std::forward<ExportJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the unique identifier that specifies the new export job.</p>
     */
    inline const Aws::String& GetExportJobIdentifier() const { return m_exportJobIdentifier; }
    template<typename ExportJobIdentifierT = Aws::String>
    void SetExportJobIdentifier(ExportJobIdentifierT&& value) { m_exportJobIdentifierHasBeenSet = true; m_exportJobIdentifier = std::forward<ExportJobIdentifierT>(value); }
    template<typename ExportJobIdentifierT = Aws::String>
    StartSearchResultExportJobResult& WithExportJobIdentifier(ExportJobIdentifierT&& value) { SetExportJobIdentifier(std::forward<ExportJobIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartSearchResultExportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exportJobArn;
    bool m_exportJobArnHasBeenSet = false;

    Aws::String m_exportJobIdentifier;
    bool m_exportJobIdentifierHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
