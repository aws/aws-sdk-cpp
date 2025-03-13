/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation/model/BlueprintSummary.h>
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
namespace BedrockDataAutomation
{
namespace Model
{
  /**
   * <p>List Blueprint Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/ListBlueprintsResponse">AWS
   * API Reference</a></p>
   */
  class ListBlueprintsResult
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API ListBlueprintsResult() = default;
    AWS_BEDROCKDATAAUTOMATION_API ListBlueprintsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKDATAAUTOMATION_API ListBlueprintsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<BlueprintSummary>& GetBlueprints() const { return m_blueprints; }
    template<typename BlueprintsT = Aws::Vector<BlueprintSummary>>
    void SetBlueprints(BlueprintsT&& value) { m_blueprintsHasBeenSet = true; m_blueprints = std::forward<BlueprintsT>(value); }
    template<typename BlueprintsT = Aws::Vector<BlueprintSummary>>
    ListBlueprintsResult& WithBlueprints(BlueprintsT&& value) { SetBlueprints(std::forward<BlueprintsT>(value)); return *this;}
    template<typename BlueprintsT = BlueprintSummary>
    ListBlueprintsResult& AddBlueprints(BlueprintsT&& value) { m_blueprintsHasBeenSet = true; m_blueprints.emplace_back(std::forward<BlueprintsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBlueprintsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBlueprintsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BlueprintSummary> m_blueprints;
    bool m_blueprintsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
