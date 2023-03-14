/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/Schema.h>
#include <aws/cleanrooms/model/BatchGetSchemaError.h>
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
  class BatchGetSchemaResult
  {
  public:
    AWS_CLEANROOMS_API BatchGetSchemaResult();
    AWS_CLEANROOMS_API BatchGetSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API BatchGetSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline const Aws::Vector<Schema>& GetSchemas() const{ return m_schemas; }

    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline void SetSchemas(const Aws::Vector<Schema>& value) { m_schemas = value; }

    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline void SetSchemas(Aws::Vector<Schema>&& value) { m_schemas = std::move(value); }

    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline BatchGetSchemaResult& WithSchemas(const Aws::Vector<Schema>& value) { SetSchemas(value); return *this;}

    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline BatchGetSchemaResult& WithSchemas(Aws::Vector<Schema>&& value) { SetSchemas(std::move(value)); return *this;}

    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline BatchGetSchemaResult& AddSchemas(const Schema& value) { m_schemas.push_back(value); return *this; }

    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline BatchGetSchemaResult& AddSchemas(Schema&& value) { m_schemas.push_back(std::move(value)); return *this; }


    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline const Aws::Vector<BatchGetSchemaError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchGetSchemaError>& value) { m_errors = value; }

    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline void SetErrors(Aws::Vector<BatchGetSchemaError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline BatchGetSchemaResult& WithErrors(const Aws::Vector<BatchGetSchemaError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline BatchGetSchemaResult& WithErrors(Aws::Vector<BatchGetSchemaError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline BatchGetSchemaResult& AddErrors(const BatchGetSchemaError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline BatchGetSchemaResult& AddErrors(BatchGetSchemaError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetSchemaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetSchemaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetSchemaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Schema> m_schemas;

    Aws::Vector<BatchGetSchemaError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
