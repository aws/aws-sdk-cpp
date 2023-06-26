/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
  class GetSchemaVersionsDiffResult
  {
  public:
    AWS_GLUE_API GetSchemaVersionsDiffResult();
    AWS_GLUE_API GetSchemaVersionsDiffResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetSchemaVersionsDiffResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The difference between schemas as a string in JsonPatch format.</p>
     */
    inline const Aws::String& GetDiff() const{ return m_diff; }

    /**
     * <p>The difference between schemas as a string in JsonPatch format.</p>
     */
    inline void SetDiff(const Aws::String& value) { m_diff = value; }

    /**
     * <p>The difference between schemas as a string in JsonPatch format.</p>
     */
    inline void SetDiff(Aws::String&& value) { m_diff = std::move(value); }

    /**
     * <p>The difference between schemas as a string in JsonPatch format.</p>
     */
    inline void SetDiff(const char* value) { m_diff.assign(value); }

    /**
     * <p>The difference between schemas as a string in JsonPatch format.</p>
     */
    inline GetSchemaVersionsDiffResult& WithDiff(const Aws::String& value) { SetDiff(value); return *this;}

    /**
     * <p>The difference between schemas as a string in JsonPatch format.</p>
     */
    inline GetSchemaVersionsDiffResult& WithDiff(Aws::String&& value) { SetDiff(std::move(value)); return *this;}

    /**
     * <p>The difference between schemas as a string in JsonPatch format.</p>
     */
    inline GetSchemaVersionsDiffResult& WithDiff(const char* value) { SetDiff(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSchemaVersionsDiffResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSchemaVersionsDiffResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSchemaVersionsDiffResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_diff;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
