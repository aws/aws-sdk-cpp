/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace LakeFormation
{
namespace Model
{
  /**
   * <p>A structure for the output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetWorkUnitResultsResponse">AWS
   * API Reference</a></p>
   */
  class GetWorkUnitResultsResult
  {
  public:
    AWS_LAKEFORMATION_API GetWorkUnitResultsResult() = default;
    AWS_LAKEFORMATION_API GetWorkUnitResultsResult(GetWorkUnitResultsResult&&) = default;
    AWS_LAKEFORMATION_API GetWorkUnitResultsResult& operator=(GetWorkUnitResultsResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetWorkUnitResultsResult(const GetWorkUnitResultsResult&) = delete;
    GetWorkUnitResultsResult& operator=(const GetWorkUnitResultsResult&) = delete;


    AWS_LAKEFORMATION_API GetWorkUnitResultsResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_LAKEFORMATION_API GetWorkUnitResultsResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>Rows returned from the <code>GetWorkUnitResults</code> operation as a stream
     * of Apache Arrow v1.0 messages.</p>
     */
    inline Aws::IOStream& GetResultStream() const { return m_resultStream.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_resultStream = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWorkUnitResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_resultStream{};
    bool m_resultStreamHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
