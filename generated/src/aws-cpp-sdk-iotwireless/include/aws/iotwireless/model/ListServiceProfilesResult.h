/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/ServiceProfile.h>
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
namespace IoTWireless
{
namespace Model
{
  class ListServiceProfilesResult
  {
  public:
    AWS_IOTWIRELESS_API ListServiceProfilesResult() = default;
    AWS_IOTWIRELESS_API ListServiceProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListServiceProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServiceProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of service profiles.</p>
     */
    inline const Aws::Vector<ServiceProfile>& GetServiceProfileList() const { return m_serviceProfileList; }
    template<typename ServiceProfileListT = Aws::Vector<ServiceProfile>>
    void SetServiceProfileList(ServiceProfileListT&& value) { m_serviceProfileListHasBeenSet = true; m_serviceProfileList = std::forward<ServiceProfileListT>(value); }
    template<typename ServiceProfileListT = Aws::Vector<ServiceProfile>>
    ListServiceProfilesResult& WithServiceProfileList(ServiceProfileListT&& value) { SetServiceProfileList(std::forward<ServiceProfileListT>(value)); return *this;}
    template<typename ServiceProfileListT = ServiceProfile>
    ListServiceProfilesResult& AddServiceProfileList(ServiceProfileListT&& value) { m_serviceProfileListHasBeenSet = true; m_serviceProfileList.emplace_back(std::forward<ServiceProfileListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServiceProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ServiceProfile> m_serviceProfileList;
    bool m_serviceProfileListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
