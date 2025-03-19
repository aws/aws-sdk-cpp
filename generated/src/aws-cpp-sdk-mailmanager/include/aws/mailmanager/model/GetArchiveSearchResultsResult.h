/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/Row.h>
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
namespace MailManager
{
namespace Model
{
  /**
   * <p>The response containing search results from a completed archive
   * search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetArchiveSearchResultsResponse">AWS
   * API Reference</a></p>
   */
  class GetArchiveSearchResultsResult
  {
  public:
    AWS_MAILMANAGER_API GetArchiveSearchResultsResult() = default;
    AWS_MAILMANAGER_API GetArchiveSearchResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetArchiveSearchResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of email result objects matching the search criteria.</p>
     */
    inline const Aws::Vector<Row>& GetRows() const { return m_rows; }
    template<typename RowsT = Aws::Vector<Row>>
    void SetRows(RowsT&& value) { m_rowsHasBeenSet = true; m_rows = std::forward<RowsT>(value); }
    template<typename RowsT = Aws::Vector<Row>>
    GetArchiveSearchResultsResult& WithRows(RowsT&& value) { SetRows(std::forward<RowsT>(value)); return *this;}
    template<typename RowsT = Row>
    GetArchiveSearchResultsResult& AddRows(RowsT&& value) { m_rowsHasBeenSet = true; m_rows.emplace_back(std::forward<RowsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetArchiveSearchResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Row> m_rows;
    bool m_rowsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
