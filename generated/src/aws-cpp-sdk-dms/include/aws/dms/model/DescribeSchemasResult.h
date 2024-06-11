/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeSchemasResponse">AWS
   * API Reference</a></p>
   */
  class DescribeSchemasResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeSchemasResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeSchemasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeSchemasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeSchemasResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeSchemasResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeSchemasResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The described schema.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSchemas() const{ return m_schemas; }
    inline void SetSchemas(const Aws::Vector<Aws::String>& value) { m_schemas = value; }
    inline void SetSchemas(Aws::Vector<Aws::String>&& value) { m_schemas = std::move(value); }
    inline DescribeSchemasResult& WithSchemas(const Aws::Vector<Aws::String>& value) { SetSchemas(value); return *this;}
    inline DescribeSchemasResult& WithSchemas(Aws::Vector<Aws::String>&& value) { SetSchemas(std::move(value)); return *this;}
    inline DescribeSchemasResult& AddSchemas(const Aws::String& value) { m_schemas.push_back(value); return *this; }
    inline DescribeSchemasResult& AddSchemas(Aws::String&& value) { m_schemas.push_back(std::move(value)); return *this; }
    inline DescribeSchemasResult& AddSchemas(const char* value) { m_schemas.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeSchemasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeSchemasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeSchemasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::Vector<Aws::String> m_schemas;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
