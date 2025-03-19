/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableVersion.h>
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
  class GetTableVersionsResult
  {
  public:
    AWS_GLUE_API GetTableVersionsResult() = default;
    AWS_GLUE_API GetTableVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetTableVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of strings identifying available versions of the specified table.</p>
     */
    inline const Aws::Vector<TableVersion>& GetTableVersions() const { return m_tableVersions; }
    template<typename TableVersionsT = Aws::Vector<TableVersion>>
    void SetTableVersions(TableVersionsT&& value) { m_tableVersionsHasBeenSet = true; m_tableVersions = std::forward<TableVersionsT>(value); }
    template<typename TableVersionsT = Aws::Vector<TableVersion>>
    GetTableVersionsResult& WithTableVersions(TableVersionsT&& value) { SetTableVersions(std::forward<TableVersionsT>(value)); return *this;}
    template<typename TableVersionsT = TableVersion>
    GetTableVersionsResult& AddTableVersions(TableVersionsT&& value) { m_tableVersionsHasBeenSet = true; m_tableVersions.emplace_back(std::forward<TableVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if the list of available versions does not include the
     * last one.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetTableVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTableVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TableVersion> m_tableVersions;
    bool m_tableVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
