/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotdeviceadvisor/model/SuiteDefinitionInformation.h>
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
namespace IoTDeviceAdvisor
{
namespace Model
{
  class ListSuiteDefinitionsResult
  {
  public:
    AWS_IOTDEVICEADVISOR_API ListSuiteDefinitionsResult() = default;
    AWS_IOTDEVICEADVISOR_API ListSuiteDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API ListSuiteDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that provide summaries of information about the suite
     * definitions in the list.</p>
     */
    inline const Aws::Vector<SuiteDefinitionInformation>& GetSuiteDefinitionInformationList() const { return m_suiteDefinitionInformationList; }
    template<typename SuiteDefinitionInformationListT = Aws::Vector<SuiteDefinitionInformation>>
    void SetSuiteDefinitionInformationList(SuiteDefinitionInformationListT&& value) { m_suiteDefinitionInformationListHasBeenSet = true; m_suiteDefinitionInformationList = std::forward<SuiteDefinitionInformationListT>(value); }
    template<typename SuiteDefinitionInformationListT = Aws::Vector<SuiteDefinitionInformation>>
    ListSuiteDefinitionsResult& WithSuiteDefinitionInformationList(SuiteDefinitionInformationListT&& value) { SetSuiteDefinitionInformationList(std::forward<SuiteDefinitionInformationListT>(value)); return *this;}
    template<typename SuiteDefinitionInformationListT = SuiteDefinitionInformation>
    ListSuiteDefinitionsResult& AddSuiteDefinitionInformationList(SuiteDefinitionInformationListT&& value) { m_suiteDefinitionInformationListHasBeenSet = true; m_suiteDefinitionInformationList.emplace_back(std::forward<SuiteDefinitionInformationListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSuiteDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSuiteDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SuiteDefinitionInformation> m_suiteDefinitionInformationList;
    bool m_suiteDefinitionInformationListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
