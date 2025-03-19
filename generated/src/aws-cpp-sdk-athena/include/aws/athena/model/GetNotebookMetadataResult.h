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
  class GetNotebookMetadataResult
  {
  public:
    AWS_ATHENA_API GetNotebookMetadataResult() = default;
    AWS_ATHENA_API GetNotebookMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetNotebookMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The metadata that is returned for the specified notebook ID.</p>
     */
    inline const NotebookMetadata& GetNotebookMetadata() const { return m_notebookMetadata; }
    template<typename NotebookMetadataT = NotebookMetadata>
    void SetNotebookMetadata(NotebookMetadataT&& value) { m_notebookMetadataHasBeenSet = true; m_notebookMetadata = std::forward<NotebookMetadataT>(value); }
    template<typename NotebookMetadataT = NotebookMetadata>
    GetNotebookMetadataResult& WithNotebookMetadata(NotebookMetadataT&& value) { SetNotebookMetadata(std::forward<NotebookMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetNotebookMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    NotebookMetadata m_notebookMetadata;
    bool m_notebookMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
