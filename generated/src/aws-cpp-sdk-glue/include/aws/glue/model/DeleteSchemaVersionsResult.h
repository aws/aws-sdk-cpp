/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SchemaVersionErrorItem.h>
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
  class DeleteSchemaVersionsResult
  {
  public:
    AWS_GLUE_API DeleteSchemaVersionsResult() = default;
    AWS_GLUE_API DeleteSchemaVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API DeleteSchemaVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>SchemaVersionErrorItem</code> objects, each containing an
     * error and schema version.</p>
     */
    inline const Aws::Vector<SchemaVersionErrorItem>& GetSchemaVersionErrors() const { return m_schemaVersionErrors; }
    template<typename SchemaVersionErrorsT = Aws::Vector<SchemaVersionErrorItem>>
    void SetSchemaVersionErrors(SchemaVersionErrorsT&& value) { m_schemaVersionErrorsHasBeenSet = true; m_schemaVersionErrors = std::forward<SchemaVersionErrorsT>(value); }
    template<typename SchemaVersionErrorsT = Aws::Vector<SchemaVersionErrorItem>>
    DeleteSchemaVersionsResult& WithSchemaVersionErrors(SchemaVersionErrorsT&& value) { SetSchemaVersionErrors(std::forward<SchemaVersionErrorsT>(value)); return *this;}
    template<typename SchemaVersionErrorsT = SchemaVersionErrorItem>
    DeleteSchemaVersionsResult& AddSchemaVersionErrors(SchemaVersionErrorsT&& value) { m_schemaVersionErrorsHasBeenSet = true; m_schemaVersionErrors.emplace_back(std::forward<SchemaVersionErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteSchemaVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SchemaVersionErrorItem> m_schemaVersionErrors;
    bool m_schemaVersionErrorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
