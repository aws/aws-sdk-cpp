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
    AWS_GLUE_API GetBlueprintRunsResult();
    AWS_GLUE_API GetBlueprintRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetBlueprintRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of <code>BlueprintRun</code> objects.</p>
     */
    inline const Aws::Vector<BlueprintRun>& GetBlueprintRuns() const{ return m_blueprintRuns; }
    inline void SetBlueprintRuns(const Aws::Vector<BlueprintRun>& value) { m_blueprintRuns = value; }
    inline void SetBlueprintRuns(Aws::Vector<BlueprintRun>&& value) { m_blueprintRuns = std::move(value); }
    inline GetBlueprintRunsResult& WithBlueprintRuns(const Aws::Vector<BlueprintRun>& value) { SetBlueprintRuns(value); return *this;}
    inline GetBlueprintRunsResult& WithBlueprintRuns(Aws::Vector<BlueprintRun>&& value) { SetBlueprintRuns(std::move(value)); return *this;}
    inline GetBlueprintRunsResult& AddBlueprintRuns(const BlueprintRun& value) { m_blueprintRuns.push_back(value); return *this; }
    inline GetBlueprintRunsResult& AddBlueprintRuns(BlueprintRun&& value) { m_blueprintRuns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if not all blueprint runs have been returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetBlueprintRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetBlueprintRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetBlueprintRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBlueprintRunsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBlueprintRunsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBlueprintRunsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BlueprintRun> m_blueprintRuns;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
