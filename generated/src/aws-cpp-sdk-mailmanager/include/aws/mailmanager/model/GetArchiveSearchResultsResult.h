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
    AWS_MAILMANAGER_API GetArchiveSearchResultsResult();
    AWS_MAILMANAGER_API GetArchiveSearchResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetArchiveSearchResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of email result objects matching the search criteria.</p>
     */
    inline const Aws::Vector<Row>& GetRows() const{ return m_rows; }
    inline void SetRows(const Aws::Vector<Row>& value) { m_rows = value; }
    inline void SetRows(Aws::Vector<Row>&& value) { m_rows = std::move(value); }
    inline GetArchiveSearchResultsResult& WithRows(const Aws::Vector<Row>& value) { SetRows(value); return *this;}
    inline GetArchiveSearchResultsResult& WithRows(Aws::Vector<Row>&& value) { SetRows(std::move(value)); return *this;}
    inline GetArchiveSearchResultsResult& AddRows(const Row& value) { m_rows.push_back(value); return *this; }
    inline GetArchiveSearchResultsResult& AddRows(Row&& value) { m_rows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetArchiveSearchResultsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetArchiveSearchResultsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetArchiveSearchResultsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Row> m_rows;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
