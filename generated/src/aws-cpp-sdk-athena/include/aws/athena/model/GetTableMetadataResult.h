/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/TableMetadata.h>
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
  class GetTableMetadataResult
  {
  public:
    AWS_ATHENA_API GetTableMetadataResult();
    AWS_ATHENA_API GetTableMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetTableMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains table metadata.</p>
     */
    inline const TableMetadata& GetTableMetadata() const{ return m_tableMetadata; }

    /**
     * <p>An object that contains table metadata.</p>
     */
    inline void SetTableMetadata(const TableMetadata& value) { m_tableMetadata = value; }

    /**
     * <p>An object that contains table metadata.</p>
     */
    inline void SetTableMetadata(TableMetadata&& value) { m_tableMetadata = std::move(value); }

    /**
     * <p>An object that contains table metadata.</p>
     */
    inline GetTableMetadataResult& WithTableMetadata(const TableMetadata& value) { SetTableMetadata(value); return *this;}

    /**
     * <p>An object that contains table metadata.</p>
     */
    inline GetTableMetadataResult& WithTableMetadata(TableMetadata&& value) { SetTableMetadata(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTableMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTableMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTableMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TableMetadata m_tableMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
