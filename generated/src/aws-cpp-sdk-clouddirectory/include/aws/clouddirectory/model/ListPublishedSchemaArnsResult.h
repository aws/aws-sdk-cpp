/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CloudDirectory
{
namespace Model
{
  class ListPublishedSchemaArnsResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListPublishedSchemaArnsResult() = default;
    AWS_CLOUDDIRECTORY_API ListPublishedSchemaArnsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListPublishedSchemaArnsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARNs of published schemas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSchemaArns() const { return m_schemaArns; }
    template<typename SchemaArnsT = Aws::Vector<Aws::String>>
    void SetSchemaArns(SchemaArnsT&& value) { m_schemaArnsHasBeenSet = true; m_schemaArns = std::forward<SchemaArnsT>(value); }
    template<typename SchemaArnsT = Aws::Vector<Aws::String>>
    ListPublishedSchemaArnsResult& WithSchemaArns(SchemaArnsT&& value) { SetSchemaArns(std::forward<SchemaArnsT>(value)); return *this;}
    template<typename SchemaArnsT = Aws::String>
    ListPublishedSchemaArnsResult& AddSchemaArns(SchemaArnsT&& value) { m_schemaArnsHasBeenSet = true; m_schemaArns.emplace_back(std::forward<SchemaArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPublishedSchemaArnsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPublishedSchemaArnsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_schemaArns;
    bool m_schemaArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
