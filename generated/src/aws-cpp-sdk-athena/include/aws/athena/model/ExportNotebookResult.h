/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/NotebookMetadata.h>
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
namespace Athena
{
namespace Model
{
  class ExportNotebookResult
  {
  public:
    AWS_ATHENA_API ExportNotebookResult() = default;
    AWS_ATHENA_API ExportNotebookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API ExportNotebookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The notebook metadata, including notebook ID, notebook name, and workgroup
     * name.</p>
     */
    inline const NotebookMetadata& GetNotebookMetadata() const { return m_notebookMetadata; }
    template<typename NotebookMetadataT = NotebookMetadata>
    void SetNotebookMetadata(NotebookMetadataT&& value) { m_notebookMetadataHasBeenSet = true; m_notebookMetadata = std::forward<NotebookMetadataT>(value); }
    template<typename NotebookMetadataT = NotebookMetadata>
    ExportNotebookResult& WithNotebookMetadata(NotebookMetadataT&& value) { SetNotebookMetadata(std::forward<NotebookMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the exported notebook.</p>
     */
    inline const Aws::String& GetPayload() const { return m_payload; }
    template<typename PayloadT = Aws::String>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Aws::String>
    ExportNotebookResult& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExportNotebookResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    NotebookMetadata m_notebookMetadata;
    bool m_notebookMetadataHasBeenSet = false;

    Aws::String m_payload;
    bool m_payloadHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
