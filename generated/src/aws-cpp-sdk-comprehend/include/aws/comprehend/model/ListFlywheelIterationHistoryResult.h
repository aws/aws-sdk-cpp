/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/FlywheelIterationProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class ListFlywheelIterationHistoryResult
  {
  public:
    AWS_COMPREHEND_API ListFlywheelIterationHistoryResult() = default;
    AWS_COMPREHEND_API ListFlywheelIterationHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListFlywheelIterationHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of flywheel iteration properties</p>
     */
    inline const Aws::Vector<FlywheelIterationProperties>& GetFlywheelIterationPropertiesList() const { return m_flywheelIterationPropertiesList; }
    template<typename FlywheelIterationPropertiesListT = Aws::Vector<FlywheelIterationProperties>>
    void SetFlywheelIterationPropertiesList(FlywheelIterationPropertiesListT&& value) { m_flywheelIterationPropertiesListHasBeenSet = true; m_flywheelIterationPropertiesList = std::forward<FlywheelIterationPropertiesListT>(value); }
    template<typename FlywheelIterationPropertiesListT = Aws::Vector<FlywheelIterationProperties>>
    ListFlywheelIterationHistoryResult& WithFlywheelIterationPropertiesList(FlywheelIterationPropertiesListT&& value) { SetFlywheelIterationPropertiesList(std::forward<FlywheelIterationPropertiesListT>(value)); return *this;}
    template<typename FlywheelIterationPropertiesListT = FlywheelIterationProperties>
    ListFlywheelIterationHistoryResult& AddFlywheelIterationPropertiesList(FlywheelIterationPropertiesListT&& value) { m_flywheelIterationPropertiesListHasBeenSet = true; m_flywheelIterationPropertiesList.emplace_back(std::forward<FlywheelIterationPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Next token</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFlywheelIterationHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFlywheelIterationHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FlywheelIterationProperties> m_flywheelIterationPropertiesList;
    bool m_flywheelIterationPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
