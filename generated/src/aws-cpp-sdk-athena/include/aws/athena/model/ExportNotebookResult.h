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
    AWS_ATHENA_API ExportNotebookResult();
    AWS_ATHENA_API ExportNotebookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API ExportNotebookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The notebook metadata, including notebook ID, notebook name, and workgroup
     * name.</p>
     */
    inline const NotebookMetadata& GetNotebookMetadata() const{ return m_notebookMetadata; }

    /**
     * <p>The notebook metadata, including notebook ID, notebook name, and workgroup
     * name.</p>
     */
    inline void SetNotebookMetadata(const NotebookMetadata& value) { m_notebookMetadata = value; }

    /**
     * <p>The notebook metadata, including notebook ID, notebook name, and workgroup
     * name.</p>
     */
    inline void SetNotebookMetadata(NotebookMetadata&& value) { m_notebookMetadata = std::move(value); }

    /**
     * <p>The notebook metadata, including notebook ID, notebook name, and workgroup
     * name.</p>
     */
    inline ExportNotebookResult& WithNotebookMetadata(const NotebookMetadata& value) { SetNotebookMetadata(value); return *this;}

    /**
     * <p>The notebook metadata, including notebook ID, notebook name, and workgroup
     * name.</p>
     */
    inline ExportNotebookResult& WithNotebookMetadata(NotebookMetadata&& value) { SetNotebookMetadata(std::move(value)); return *this;}


    /**
     * <p>The content of the exported notebook.</p>
     */
    inline const Aws::String& GetPayload() const{ return m_payload; }

    /**
     * <p>The content of the exported notebook.</p>
     */
    inline void SetPayload(const Aws::String& value) { m_payload = value; }

    /**
     * <p>The content of the exported notebook.</p>
     */
    inline void SetPayload(Aws::String&& value) { m_payload = std::move(value); }

    /**
     * <p>The content of the exported notebook.</p>
     */
    inline void SetPayload(const char* value) { m_payload.assign(value); }

    /**
     * <p>The content of the exported notebook.</p>
     */
    inline ExportNotebookResult& WithPayload(const Aws::String& value) { SetPayload(value); return *this;}

    /**
     * <p>The content of the exported notebook.</p>
     */
    inline ExportNotebookResult& WithPayload(Aws::String&& value) { SetPayload(std::move(value)); return *this;}

    /**
     * <p>The content of the exported notebook.</p>
     */
    inline ExportNotebookResult& WithPayload(const char* value) { SetPayload(value); return *this;}

  private:

    NotebookMetadata m_notebookMetadata;

    Aws::String m_payload;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
