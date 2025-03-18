/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/BlueprintRun.h>
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
namespace Glue
{
namespace Model
{
  class GetBlueprintRunsResult
  {
  public:
    AWS_GLUE_API GetBlueprintRunsResult() = default;
    AWS_GLUE_API GetBlueprintRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetBlueprintRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of <code>BlueprintRun</code> objects.</p>
     */
    inline const Aws::Vector<BlueprintRun>& GetBlueprintRuns() const { return m_blueprintRuns; }
    template<typename BlueprintRunsT = Aws::Vector<BlueprintRun>>
    void SetBlueprintRuns(BlueprintRunsT&& value) { m_blueprintRunsHasBeenSet = true; m_blueprintRuns = std::forward<BlueprintRunsT>(value); }
    template<typename BlueprintRunsT = Aws::Vector<BlueprintRun>>
    GetBlueprintRunsResult& WithBlueprintRuns(BlueprintRunsT&& value) { SetBlueprintRuns(std::forward<BlueprintRunsT>(value)); return *this;}
    template<typename BlueprintRunsT = BlueprintRun>
    GetBlueprintRunsResult& AddBlueprintRuns(BlueprintRunsT&& value) { m_blueprintRunsHasBeenSet = true; m_blueprintRuns.emplace_back(std::forward<BlueprintRunsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if not all blueprint runs have been returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetBlueprintRunsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBlueprintRunsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BlueprintRun> m_blueprintRuns;
    bool m_blueprintRunsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
