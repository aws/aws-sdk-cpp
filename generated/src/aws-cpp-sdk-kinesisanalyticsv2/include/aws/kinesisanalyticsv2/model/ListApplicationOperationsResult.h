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
   * Response with the list of operations for an application<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListApplicationOperationsResponse">AWS
   * API Reference</a></p>
   */
  class ListApplicationOperationsResult
  {
  public:
    AWS_KINESISANALYTICSV2_API ListApplicationOperationsResult();
    AWS_KINESISANALYTICSV2_API ListApplicationOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API ListApplicationOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<ApplicationOperationInfo>& GetApplicationOperationInfoList() const{ return m_applicationOperationInfoList; }
    inline void SetApplicationOperationInfoList(const Aws::Vector<ApplicationOperationInfo>& value) { m_applicationOperationInfoList = value; }
    inline void SetApplicationOperationInfoList(Aws::Vector<ApplicationOperationInfo>&& value) { m_applicationOperationInfoList = std::move(value); }
    inline ListApplicationOperationsResult& WithApplicationOperationInfoList(const Aws::Vector<ApplicationOperationInfo>& value) { SetApplicationOperationInfoList(value); return *this;}
    inline ListApplicationOperationsResult& WithApplicationOperationInfoList(Aws::Vector<ApplicationOperationInfo>&& value) { SetApplicationOperationInfoList(std::move(value)); return *this;}
    inline ListApplicationOperationsResult& AddApplicationOperationInfoList(const ApplicationOperationInfo& value) { m_applicationOperationInfoList.push_back(value); return *this; }
    inline ListApplicationOperationsResult& AddApplicationOperationInfoList(ApplicationOperationInfo&& value) { m_applicationOperationInfoList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListApplicationOperationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListApplicationOperationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListApplicationOperationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListApplicationOperationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListApplicationOperationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListApplicationOperationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationOperationInfo> m_applicationOperationInfoList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
