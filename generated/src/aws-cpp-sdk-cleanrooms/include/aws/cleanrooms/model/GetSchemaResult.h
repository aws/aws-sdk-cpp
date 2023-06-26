/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/Schema.h>
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
namespace CleanRooms
{
namespace Model
{
  class GetSchemaResult
  {
  public:
    AWS_CLEANROOMS_API GetSchemaResult();
    AWS_CLEANROOMS_API GetSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API GetSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The entire schema object.</p>
     */
    inline const Schema& GetSchema() const{ return m_schema; }

    /**
     * <p>The entire schema object.</p>
     */
    inline void SetSchema(const Schema& value) { m_schema = value; }

    /**
     * <p>The entire schema object.</p>
     */
    inline void SetSchema(Schema&& value) { m_schema = std::move(value); }

    /**
     * <p>The entire schema object.</p>
     */
    inline GetSchemaResult& WithSchema(const Schema& value) { SetSchema(value); return *this;}

    /**
     * <p>The entire schema object.</p>
     */
    inline GetSchemaResult& WithSchema(Schema&& value) { SetSchema(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSchemaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSchemaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSchemaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Schema m_schema;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
