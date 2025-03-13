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
    AWS_CLEANROOMS_API BatchGetSchemaResult() = default;
    AWS_CLEANROOMS_API BatchGetSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API BatchGetSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The retrieved list of schemas.</p>
     */
    inline const Aws::Vector<Schema>& GetSchemas() const { return m_schemas; }
    template<typename SchemasT = Aws::Vector<Schema>>
    void SetSchemas(SchemasT&& value) { m_schemasHasBeenSet = true; m_schemas = std::forward<SchemasT>(value); }
    template<typename SchemasT = Aws::Vector<Schema>>
    BatchGetSchemaResult& WithSchemas(SchemasT&& value) { SetSchemas(std::forward<SchemasT>(value)); return *this;}
    template<typename SchemasT = Schema>
    BatchGetSchemaResult& AddSchemas(SchemasT&& value) { m_schemasHasBeenSet = true; m_schemas.emplace_back(std::forward<SchemasT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Error reasons for schemas that could not be retrieved. One error is returned
     * for every schema that could not be retrieved.</p>
     */
    inline const Aws::Vector<BatchGetSchemaError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchGetSchemaError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchGetSchemaError>>
    BatchGetSchemaResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchGetSchemaError>
    BatchGetSchemaResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetSchemaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Schema> m_schemas;
    bool m_schemasHasBeenSet = false;

    Aws::Vector<BatchGetSchemaError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
