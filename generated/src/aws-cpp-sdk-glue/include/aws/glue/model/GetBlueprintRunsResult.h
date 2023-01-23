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


    /**
     * <p>Returns a list of <code>BlueprintRun</code> objects.</p>
     */
    inline const Aws::Vector<BlueprintRun>& GetBlueprintRuns() const{ return m_blueprintRuns; }

    /**
     * <p>Returns a list of <code>BlueprintRun</code> objects.</p>
     */
    inline void SetBlueprintRuns(const Aws::Vector<BlueprintRun>& value) { m_blueprintRuns = value; }

    /**
     * <p>Returns a list of <code>BlueprintRun</code> objects.</p>
     */
    inline void SetBlueprintRuns(Aws::Vector<BlueprintRun>&& value) { m_blueprintRuns = std::move(value); }

    /**
     * <p>Returns a list of <code>BlueprintRun</code> objects.</p>
     */
    inline GetBlueprintRunsResult& WithBlueprintRuns(const Aws::Vector<BlueprintRun>& value) { SetBlueprintRuns(value); return *this;}

    /**
     * <p>Returns a list of <code>BlueprintRun</code> objects.</p>
     */
    inline GetBlueprintRunsResult& WithBlueprintRuns(Aws::Vector<BlueprintRun>&& value) { SetBlueprintRuns(std::move(value)); return *this;}

    /**
     * <p>Returns a list of <code>BlueprintRun</code> objects.</p>
     */
    inline GetBlueprintRunsResult& AddBlueprintRuns(const BlueprintRun& value) { m_blueprintRuns.push_back(value); return *this; }

    /**
     * <p>Returns a list of <code>BlueprintRun</code> objects.</p>
     */
    inline GetBlueprintRunsResult& AddBlueprintRuns(BlueprintRun&& value) { m_blueprintRuns.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if not all blueprint runs have been returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if not all blueprint runs have been returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if not all blueprint runs have been returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if not all blueprint runs have been returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if not all blueprint runs have been returned.</p>
     */
    inline GetBlueprintRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if not all blueprint runs have been returned.</p>
     */
    inline GetBlueprintRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if not all blueprint runs have been returned.</p>
     */
    inline GetBlueprintRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BlueprintRun> m_blueprintRuns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
