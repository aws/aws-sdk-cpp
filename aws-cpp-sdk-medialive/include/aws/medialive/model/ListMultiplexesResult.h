/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/MultiplexSummary.h>
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
   * Placeholder documentation for ListMultiplexesResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListMultiplexesResponse">AWS
   * API Reference</a></p>
   */
  class ListMultiplexesResult
  {
  public:
    AWS_MEDIALIVE_API ListMultiplexesResult();
    AWS_MEDIALIVE_API ListMultiplexesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListMultiplexesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * List of multiplexes.
     */
    inline const Aws::Vector<MultiplexSummary>& GetMultiplexes() const{ return m_multiplexes; }

    /**
     * List of multiplexes.
     */
    inline void SetMultiplexes(const Aws::Vector<MultiplexSummary>& value) { m_multiplexes = value; }

    /**
     * List of multiplexes.
     */
    inline void SetMultiplexes(Aws::Vector<MultiplexSummary>&& value) { m_multiplexes = std::move(value); }

    /**
     * List of multiplexes.
     */
    inline ListMultiplexesResult& WithMultiplexes(const Aws::Vector<MultiplexSummary>& value) { SetMultiplexes(value); return *this;}

    /**
     * List of multiplexes.
     */
    inline ListMultiplexesResult& WithMultiplexes(Aws::Vector<MultiplexSummary>&& value) { SetMultiplexes(std::move(value)); return *this;}

    /**
     * List of multiplexes.
     */
    inline ListMultiplexesResult& AddMultiplexes(const MultiplexSummary& value) { m_multiplexes.push_back(value); return *this; }

    /**
     * List of multiplexes.
     */
    inline ListMultiplexesResult& AddMultiplexes(MultiplexSummary&& value) { m_multiplexes.push_back(std::move(value)); return *this; }


    /**
     * Token for the next ListMultiplexes request.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Token for the next ListMultiplexes request.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * Token for the next ListMultiplexes request.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * Token for the next ListMultiplexes request.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * Token for the next ListMultiplexes request.
     */
    inline ListMultiplexesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Token for the next ListMultiplexes request.
     */
    inline ListMultiplexesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Token for the next ListMultiplexes request.
     */
    inline ListMultiplexesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MultiplexSummary> m_multiplexes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
