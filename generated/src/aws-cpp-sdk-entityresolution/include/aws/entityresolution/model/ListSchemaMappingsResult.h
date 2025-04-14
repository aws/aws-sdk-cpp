/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/SchemaMappingSummary.h>
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
namespace EntityResolution
{
namespace Model
{
  class ListSchemaMappingsResult
  {
  public:
    AWS_ENTITYRESOLUTION_API ListSchemaMappingsResult() = default;
    AWS_ENTITYRESOLUTION_API ListSchemaMappingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API ListSchemaMappingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>SchemaMappingSummary</code> objects, each of which contain
     * the fields <code>SchemaName</code>, <code>SchemaArn</code>,
     * <code>CreatedAt</code>, <code>UpdatedAt</code>.</p>
     */
    inline const Aws::Vector<SchemaMappingSummary>& GetSchemaList() const { return m_schemaList; }
    template<typename SchemaListT = Aws::Vector<SchemaMappingSummary>>
    void SetSchemaList(SchemaListT&& value) { m_schemaListHasBeenSet = true; m_schemaList = std::forward<SchemaListT>(value); }
    template<typename SchemaListT = Aws::Vector<SchemaMappingSummary>>
    ListSchemaMappingsResult& WithSchemaList(SchemaListT&& value) { SetSchemaList(std::forward<SchemaListT>(value)); return *this;}
    template<typename SchemaListT = SchemaMappingSummary>
    ListSchemaMappingsResult& AddSchemaList(SchemaListT&& value) { m_schemaListHasBeenSet = true; m_schemaList.emplace_back(std::forward<SchemaListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSchemaMappingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSchemaMappingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SchemaMappingSummary> m_schemaList;
    bool m_schemaListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
