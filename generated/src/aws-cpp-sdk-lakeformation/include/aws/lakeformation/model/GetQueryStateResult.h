/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/QueryStateString.h>
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
namespace LakeFormation
{
namespace Model
{
  /**
   * <p>A structure for the output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetQueryStateResponse">AWS
   * API Reference</a></p>
   */
  class GetQueryStateResult
  {
  public:
    AWS_LAKEFORMATION_API GetQueryStateResult() = default;
    AWS_LAKEFORMATION_API GetQueryStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetQueryStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An error message when the operation fails.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    GetQueryStateResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of a query previously submitted. The possible states are:</p> <ul>
     * <li> <p>PENDING: the query is pending.</p> </li> <li> <p>WORKUNITS_AVAILABLE:
     * some work units are ready for retrieval and execution.</p> </li> <li>
     * <p>FINISHED: the query planning finished successfully, and all work units are
     * ready for retrieval and execution.</p> </li> <li> <p>ERROR: an error occurred
     * with the query, such as an invalid query ID or a backend error.</p> </li> </ul>
     */
    inline QueryStateString GetState() const { return m_state; }
    inline void SetState(QueryStateString value) { m_stateHasBeenSet = true; m_state = value; }
    inline GetQueryStateResult& WithState(QueryStateString value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQueryStateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    QueryStateString m_state{QueryStateString::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
