/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamesparks/model/GeneratedCodeJobDetails.h>
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
namespace GameSparks
{
namespace Model
{
  class ListGeneratedCodeJobsResult
  {
  public:
    AWS_GAMESPARKS_API ListGeneratedCodeJobsResult();
    AWS_GAMESPARKS_API ListGeneratedCodeJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API ListGeneratedCodeJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of generated code jobs.</p>
     */
    inline const Aws::Vector<GeneratedCodeJobDetails>& GetGeneratedCodeJobs() const{ return m_generatedCodeJobs; }

    /**
     * <p>The list of generated code jobs.</p>
     */
    inline void SetGeneratedCodeJobs(const Aws::Vector<GeneratedCodeJobDetails>& value) { m_generatedCodeJobs = value; }

    /**
     * <p>The list of generated code jobs.</p>
     */
    inline void SetGeneratedCodeJobs(Aws::Vector<GeneratedCodeJobDetails>&& value) { m_generatedCodeJobs = std::move(value); }

    /**
     * <p>The list of generated code jobs.</p>
     */
    inline ListGeneratedCodeJobsResult& WithGeneratedCodeJobs(const Aws::Vector<GeneratedCodeJobDetails>& value) { SetGeneratedCodeJobs(value); return *this;}

    /**
     * <p>The list of generated code jobs.</p>
     */
    inline ListGeneratedCodeJobsResult& WithGeneratedCodeJobs(Aws::Vector<GeneratedCodeJobDetails>&& value) { SetGeneratedCodeJobs(std::move(value)); return *this;}

    /**
     * <p>The list of generated code jobs.</p>
     */
    inline ListGeneratedCodeJobsResult& AddGeneratedCodeJobs(const GeneratedCodeJobDetails& value) { m_generatedCodeJobs.push_back(value); return *this; }

    /**
     * <p>The list of generated code jobs.</p>
     */
    inline ListGeneratedCodeJobsResult& AddGeneratedCodeJobs(GeneratedCodeJobDetails&& value) { m_generatedCodeJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListGeneratedCodeJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListGeneratedCodeJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListGeneratedCodeJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GeneratedCodeJobDetails> m_generatedCodeJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
