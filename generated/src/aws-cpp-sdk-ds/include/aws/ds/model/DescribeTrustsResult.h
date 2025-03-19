/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/Trust.h>
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
  /**
   * <p>The result of a DescribeTrust request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeTrustsResult">AWS
   * API Reference</a></p>
   */
  class DescribeTrustsResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeTrustsResult() = default;
    AWS_DIRECTORYSERVICE_API DescribeTrustsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeTrustsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of Trust objects that were retrieved.</p> <p>It is possible that
     * this list contains less than the number of items specified in the <i>Limit</i>
     * member of the request. This occurs if there are less than the requested number
     * of items left to retrieve, or if the limitations of the operation have been
     * exceeded.</p>
     */
    inline const Aws::Vector<Trust>& GetTrusts() const { return m_trusts; }
    template<typename TrustsT = Aws::Vector<Trust>>
    void SetTrusts(TrustsT&& value) { m_trustsHasBeenSet = true; m_trusts = std::forward<TrustsT>(value); }
    template<typename TrustsT = Aws::Vector<Trust>>
    DescribeTrustsResult& WithTrusts(TrustsT&& value) { SetTrusts(std::forward<TrustsT>(value)); return *this;}
    template<typename TrustsT = Trust>
    DescribeTrustsResult& AddTrusts(TrustsT&& value) { m_trustsHasBeenSet = true; m_trusts.emplace_back(std::forward<TrustsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If not null, more results are available. Pass this value for the
     * <i>NextToken</i> parameter in a subsequent call to <a>DescribeTrusts</a> to
     * retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeTrustsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTrustsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Trust> m_trusts;
    bool m_trustsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
