/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/ApplicationOperationInfo.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{
  /**
   * <p>A response that returns a list of operations for an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListApplicationOperationsResponse">AWS
   * API Reference</a></p>
   */
  class ListApplicationOperationsResult
  {
  public:
    AWS_KINESISANALYTICSV2_API ListApplicationOperationsResult() = default;
    AWS_KINESISANALYTICSV2_API ListApplicationOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API ListApplicationOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<ApplicationOperationInfo>& GetApplicationOperationInfoList() const { return m_applicationOperationInfoList; }
    template<typename ApplicationOperationInfoListT = Aws::Vector<ApplicationOperationInfo>>
    void SetApplicationOperationInfoList(ApplicationOperationInfoListT&& value) { m_applicationOperationInfoListHasBeenSet = true; m_applicationOperationInfoList = std::forward<ApplicationOperationInfoListT>(value); }
    template<typename ApplicationOperationInfoListT = Aws::Vector<ApplicationOperationInfo>>
    ListApplicationOperationsResult& WithApplicationOperationInfoList(ApplicationOperationInfoListT&& value) { SetApplicationOperationInfoList(std::forward<ApplicationOperationInfoListT>(value)); return *this;}
    template<typename ApplicationOperationInfoListT = ApplicationOperationInfo>
    ListApplicationOperationsResult& AddApplicationOperationInfoList(ApplicationOperationInfoListT&& value) { m_applicationOperationInfoListHasBeenSet = true; m_applicationOperationInfoList.emplace_back(std::forward<ApplicationOperationInfoListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationOperationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationOperationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationOperationInfo> m_applicationOperationInfoList;
    bool m_applicationOperationInfoListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
