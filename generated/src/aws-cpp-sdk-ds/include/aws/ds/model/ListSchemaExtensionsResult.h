/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/SchemaExtensionInfo.h>
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
namespace DirectoryService
{
namespace Model
{
  class ListSchemaExtensionsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API ListSchemaExtensionsResult() = default;
    AWS_DIRECTORYSERVICE_API ListSchemaExtensionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API ListSchemaExtensionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the schema extensions applied to the directory.</p>
     */
    inline const Aws::Vector<SchemaExtensionInfo>& GetSchemaExtensionsInfo() const { return m_schemaExtensionsInfo; }
    template<typename SchemaExtensionsInfoT = Aws::Vector<SchemaExtensionInfo>>
    void SetSchemaExtensionsInfo(SchemaExtensionsInfoT&& value) { m_schemaExtensionsInfoHasBeenSet = true; m_schemaExtensionsInfo = std::forward<SchemaExtensionsInfoT>(value); }
    template<typename SchemaExtensionsInfoT = Aws::Vector<SchemaExtensionInfo>>
    ListSchemaExtensionsResult& WithSchemaExtensionsInfo(SchemaExtensionsInfoT&& value) { SetSchemaExtensionsInfo(std::forward<SchemaExtensionsInfoT>(value)); return *this;}
    template<typename SchemaExtensionsInfoT = SchemaExtensionInfo>
    ListSchemaExtensionsResult& AddSchemaExtensionsInfo(SchemaExtensionsInfoT&& value) { m_schemaExtensionsInfoHasBeenSet = true; m_schemaExtensionsInfo.emplace_back(std::forward<SchemaExtensionsInfoT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <code>ListSchemaExtensions</code> to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSchemaExtensionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSchemaExtensionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SchemaExtensionInfo> m_schemaExtensionsInfo;
    bool m_schemaExtensionsInfoHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
