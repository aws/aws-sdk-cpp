/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/ExportSummary.h>
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
   * <p>The response containing a list of archive export jobs and their
   * statuses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListArchiveExportsResponse">AWS
   * API Reference</a></p>
   */
  class ListArchiveExportsResult
  {
  public:
    AWS_MAILMANAGER_API ListArchiveExportsResult() = default;
    AWS_MAILMANAGER_API ListArchiveExportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API ListArchiveExportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of export job identifiers and statuses.</p>
     */
    inline const Aws::Vector<ExportSummary>& GetExports() const { return m_exports; }
    template<typename ExportsT = Aws::Vector<ExportSummary>>
    void SetExports(ExportsT&& value) { m_exportsHasBeenSet = true; m_exports = std::forward<ExportsT>(value); }
    template<typename ExportsT = Aws::Vector<ExportSummary>>
    ListArchiveExportsResult& WithExports(ExportsT&& value) { SetExports(std::forward<ExportsT>(value)); return *this;}
    template<typename ExportsT = ExportSummary>
    ListArchiveExportsResult& AddExports(ExportsT&& value) { m_exportsHasBeenSet = true; m_exports.emplace_back(std::forward<ExportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListArchiveExportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListArchiveExportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExportSummary> m_exports;
    bool m_exportsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
