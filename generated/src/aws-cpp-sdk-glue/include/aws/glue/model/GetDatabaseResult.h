/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Database.h>
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
  class GetDatabaseResult
  {
  public:
    AWS_GLUE_API GetDatabaseResult();
    AWS_GLUE_API GetDatabaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDatabaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The definition of the specified database in the Data Catalog.</p>
     */
    inline const Database& GetDatabase() const{ return m_database; }

    /**
     * <p>The definition of the specified database in the Data Catalog.</p>
     */
    inline void SetDatabase(const Database& value) { m_database = value; }

    /**
     * <p>The definition of the specified database in the Data Catalog.</p>
     */
    inline void SetDatabase(Database&& value) { m_database = std::move(value); }

    /**
     * <p>The definition of the specified database in the Data Catalog.</p>
     */
    inline GetDatabaseResult& WithDatabase(const Database& value) { SetDatabase(value); return *this;}

    /**
     * <p>The definition of the specified database in the Data Catalog.</p>
     */
    inline GetDatabaseResult& WithDatabase(Database&& value) { SetDatabase(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDatabaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDatabaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDatabaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Database m_database;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
