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
    AWS_ATHENA_API GetNotebookMetadataResult();
    AWS_ATHENA_API GetNotebookMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetNotebookMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The metadata that is returned for the specified notebook ID.</p>
     */
    inline const NotebookMetadata& GetNotebookMetadata() const{ return m_notebookMetadata; }

    /**
     * <p>The metadata that is returned for the specified notebook ID.</p>
     */
    inline void SetNotebookMetadata(const NotebookMetadata& value) { m_notebookMetadata = value; }

    /**
     * <p>The metadata that is returned for the specified notebook ID.</p>
     */
    inline void SetNotebookMetadata(NotebookMetadata&& value) { m_notebookMetadata = std::move(value); }

    /**
     * <p>The metadata that is returned for the specified notebook ID.</p>
     */
    inline GetNotebookMetadataResult& WithNotebookMetadata(const NotebookMetadata& value) { SetNotebookMetadata(value); return *this;}

    /**
     * <p>The metadata that is returned for the specified notebook ID.</p>
     */
    inline GetNotebookMetadataResult& WithNotebookMetadata(NotebookMetadata&& value) { SetNotebookMetadata(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetNotebookMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetNotebookMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetNotebookMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    NotebookMetadata m_notebookMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
