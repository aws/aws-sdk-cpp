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


    ///@{
    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline const Aws::Vector<Schema>& GetSchemas() const{ return m_schemas; }
    inline void SetSchemas(const Aws::Vector<Schema>& value) { m_schemas = value; }
    inline void SetSchemas(Aws::Vector<Schema>&& value) { m_schemas = std::move(value); }
    inline BatchGetSchemaResult& WithSchemas(const Aws::Vector<Schema>& value) { SetSchemas(value); return *this;}
    inline BatchGetSchemaResult& WithSchemas(Aws::Vector<Schema>&& value) { SetSchemas(std::move(value)); return *this;}
    inline BatchGetSchemaResult& AddSchemas(const Schema& value) { m_schemas.push_back(value); return *this; }
    inline BatchGetSchemaResult& AddSchemas(Schema&& value) { m_schemas.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline const Aws::Vector<BatchGetSchemaError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchGetSchemaError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchGetSchemaError>&& value) { m_errors = std::move(value); }
    inline BatchGetSchemaResult& WithErrors(const Aws::Vector<BatchGetSchemaError>& value) { SetErrors(value); return *this;}
    inline BatchGetSchemaResult& WithErrors(Aws::Vector<BatchGetSchemaError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchGetSchemaResult& AddErrors(const BatchGetSchemaError& value) { m_errors.push_back(value); return *this; }
    inline BatchGetSchemaResult& AddErrors(BatchGetSchemaError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetSchemaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetSchemaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetSchemaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Schema> m_schemas;

    Aws::Vector<BatchGetSchemaError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
