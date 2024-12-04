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
    AWS_BEDROCKDATAAUTOMATION_API ListBlueprintsResult();
    AWS_BEDROCKDATAAUTOMATION_API ListBlueprintsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKDATAAUTOMATION_API ListBlueprintsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<BlueprintSummary>& GetBlueprints() const{ return m_blueprints; }
    inline void SetBlueprints(const Aws::Vector<BlueprintSummary>& value) { m_blueprints = value; }
    inline void SetBlueprints(Aws::Vector<BlueprintSummary>&& value) { m_blueprints = std::move(value); }
    inline ListBlueprintsResult& WithBlueprints(const Aws::Vector<BlueprintSummary>& value) { SetBlueprints(value); return *this;}
    inline ListBlueprintsResult& WithBlueprints(Aws::Vector<BlueprintSummary>&& value) { SetBlueprints(std::move(value)); return *this;}
    inline ListBlueprintsResult& AddBlueprints(const BlueprintSummary& value) { m_blueprints.push_back(value); return *this; }
    inline ListBlueprintsResult& AddBlueprints(BlueprintSummary&& value) { m_blueprints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBlueprintsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBlueprintsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBlueprintsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBlueprintsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBlueprintsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBlueprintsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BlueprintSummary> m_blueprints;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
