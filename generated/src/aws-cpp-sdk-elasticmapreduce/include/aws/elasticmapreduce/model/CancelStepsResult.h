/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/CancelStepsInfo.h>
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
namespace EMR
{
namespace Model
{
  /**
   * <p> The output for the <a>CancelSteps</a> operation. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CancelStepsOutput">AWS
   * API Reference</a></p>
   */
  class CancelStepsResult
  {
  public:
    AWS_EMR_API CancelStepsResult() = default;
    AWS_EMR_API CancelStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API CancelStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <a>CancelStepsInfo</a>, which shows the status of specified cancel
     * requests for each <code>StepID</code> specified.</p>
     */
    inline const Aws::Vector<CancelStepsInfo>& GetCancelStepsInfoList() const { return m_cancelStepsInfoList; }
    template<typename CancelStepsInfoListT = Aws::Vector<CancelStepsInfo>>
    void SetCancelStepsInfoList(CancelStepsInfoListT&& value) { m_cancelStepsInfoListHasBeenSet = true; m_cancelStepsInfoList = std::forward<CancelStepsInfoListT>(value); }
    template<typename CancelStepsInfoListT = Aws::Vector<CancelStepsInfo>>
    CancelStepsResult& WithCancelStepsInfoList(CancelStepsInfoListT&& value) { SetCancelStepsInfoList(std::forward<CancelStepsInfoListT>(value)); return *this;}
    template<typename CancelStepsInfoListT = CancelStepsInfo>
    CancelStepsResult& AddCancelStepsInfoList(CancelStepsInfoListT&& value) { m_cancelStepsInfoListHasBeenSet = true; m_cancelStepsInfoList.emplace_back(std::forward<CancelStepsInfoListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CancelStepsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CancelStepsInfo> m_cancelStepsInfoList;
    bool m_cancelStepsInfoListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
