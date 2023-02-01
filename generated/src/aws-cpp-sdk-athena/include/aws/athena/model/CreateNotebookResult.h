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
  class CreateNotebookResult
  {
  public:
    AWS_ATHENA_API CreateNotebookResult();
    AWS_ATHENA_API CreateNotebookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API CreateNotebookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the notebook.</p>
     */
    inline const Aws::String& GetNotebookId() const{ return m_notebookId; }

    /**
     * <p>A unique identifier for the notebook.</p>
     */
    inline void SetNotebookId(const Aws::String& value) { m_notebookId = value; }

    /**
     * <p>A unique identifier for the notebook.</p>
     */
    inline void SetNotebookId(Aws::String&& value) { m_notebookId = std::move(value); }

    /**
     * <p>A unique identifier for the notebook.</p>
     */
    inline void SetNotebookId(const char* value) { m_notebookId.assign(value); }

    /**
     * <p>A unique identifier for the notebook.</p>
     */
    inline CreateNotebookResult& WithNotebookId(const Aws::String& value) { SetNotebookId(value); return *this;}

    /**
     * <p>A unique identifier for the notebook.</p>
     */
    inline CreateNotebookResult& WithNotebookId(Aws::String&& value) { SetNotebookId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the notebook.</p>
     */
    inline CreateNotebookResult& WithNotebookId(const char* value) { SetNotebookId(value); return *this;}

  private:

    Aws::String m_notebookId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
