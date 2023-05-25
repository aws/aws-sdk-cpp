/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/TableVersion.h>
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
  class GetTableVersionResult
  {
  public:
    AWS_GLUE_API GetTableVersionResult();
    AWS_GLUE_API GetTableVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetTableVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested table version.</p>
     */
    inline const TableVersion& GetTableVersion() const{ return m_tableVersion; }

    /**
     * <p>The requested table version.</p>
     */
    inline void SetTableVersion(const TableVersion& value) { m_tableVersion = value; }

    /**
     * <p>The requested table version.</p>
     */
    inline void SetTableVersion(TableVersion&& value) { m_tableVersion = std::move(value); }

    /**
     * <p>The requested table version.</p>
     */
    inline GetTableVersionResult& WithTableVersion(const TableVersion& value) { SetTableVersion(value); return *this;}

    /**
     * <p>The requested table version.</p>
     */
    inline GetTableVersionResult& WithTableVersion(TableVersion&& value) { SetTableVersion(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTableVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTableVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTableVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TableVersion m_tableVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
