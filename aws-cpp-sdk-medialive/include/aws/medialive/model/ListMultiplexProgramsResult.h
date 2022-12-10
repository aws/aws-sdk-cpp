/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/MultiplexProgramSummary.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListMultiplexProgramsResponse<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexProgramsResponse">AWS
   * API Reference</a></p>
   */
  class ListMultiplexProgramsResult
  {
  public:
    AWS_MEDIALIVE_API ListMultiplexProgramsResult();
    AWS_MEDIALIVE_API ListMultiplexProgramsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListMultiplexProgramsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * List of multiplex programs.
     */
    inline const Aws::Vector<MultiplexProgramSummary>& GetMultiplexPrograms() const{ return m_multiplexPrograms; }

    /**
     * List of multiplex programs.
     */
    inline void SetMultiplexPrograms(const Aws::Vector<MultiplexProgramSummary>& value) { m_multiplexPrograms = value; }

    /**
     * List of multiplex programs.
     */
    inline void SetMultiplexPrograms(Aws::Vector<MultiplexProgramSummary>&& value) { m_multiplexPrograms = std::move(value); }

    /**
     * List of multiplex programs.
     */
    inline ListMultiplexProgramsResult& WithMultiplexPrograms(const Aws::Vector<MultiplexProgramSummary>& value) { SetMultiplexPrograms(value); return *this;}

    /**
     * List of multiplex programs.
     */
    inline ListMultiplexProgramsResult& WithMultiplexPrograms(Aws::Vector<MultiplexProgramSummary>&& value) { SetMultiplexPrograms(std::move(value)); return *this;}

    /**
     * List of multiplex programs.
     */
    inline ListMultiplexProgramsResult& AddMultiplexPrograms(const MultiplexProgramSummary& value) { m_multiplexPrograms.push_back(value); return *this; }

    /**
     * List of multiplex programs.
     */
    inline ListMultiplexProgramsResult& AddMultiplexPrograms(MultiplexProgramSummary&& value) { m_multiplexPrograms.push_back(std::move(value)); return *this; }


    /**
     * Token for the next ListMultiplexProgram request.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Token for the next ListMultiplexProgram request.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * Token for the next ListMultiplexProgram request.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * Token for the next ListMultiplexProgram request.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * Token for the next ListMultiplexProgram request.
     */
    inline ListMultiplexProgramsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Token for the next ListMultiplexProgram request.
     */
    inline ListMultiplexProgramsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Token for the next ListMultiplexProgram request.
     */
    inline ListMultiplexProgramsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MultiplexProgramSummary> m_multiplexPrograms;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
