/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
  class ImportNotebookResult
  {
  public:
    AWS_ATHENA_API ImportNotebookResult();
    AWS_ATHENA_API ImportNotebookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API ImportNotebookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID assigned to the imported notebook.</p>
     */
    inline const Aws::String& GetNotebookId() const{ return m_notebookId; }

    /**
     * <p>The ID assigned to the imported notebook.</p>
     */
    inline void SetNotebookId(const Aws::String& value) { m_notebookId = value; }

    /**
     * <p>The ID assigned to the imported notebook.</p>
     */
    inline void SetNotebookId(Aws::String&& value) { m_notebookId = std::move(value); }

    /**
     * <p>The ID assigned to the imported notebook.</p>
     */
    inline void SetNotebookId(const char* value) { m_notebookId.assign(value); }

    /**
     * <p>The ID assigned to the imported notebook.</p>
     */
    inline ImportNotebookResult& WithNotebookId(const Aws::String& value) { SetNotebookId(value); return *this;}

    /**
     * <p>The ID assigned to the imported notebook.</p>
     */
    inline ImportNotebookResult& WithNotebookId(Aws::String&& value) { SetNotebookId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the imported notebook.</p>
     */
    inline ImportNotebookResult& WithNotebookId(const char* value) { SetNotebookId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ImportNotebookResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ImportNotebookResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ImportNotebookResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_notebookId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
