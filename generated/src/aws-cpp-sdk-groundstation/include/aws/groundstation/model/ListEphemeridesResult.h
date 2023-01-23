/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/EphemerisItem.h>
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
namespace GroundStation
{
namespace Model
{
  class ListEphemeridesResult
  {
  public:
    AWS_GROUNDSTATION_API ListEphemeridesResult();
    AWS_GROUNDSTATION_API ListEphemeridesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API ListEphemeridesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of ephemerides.</p>
     */
    inline const Aws::Vector<EphemerisItem>& GetEphemerides() const{ return m_ephemerides; }

    /**
     * <p>List of ephemerides.</p>
     */
    inline void SetEphemerides(const Aws::Vector<EphemerisItem>& value) { m_ephemerides = value; }

    /**
     * <p>List of ephemerides.</p>
     */
    inline void SetEphemerides(Aws::Vector<EphemerisItem>&& value) { m_ephemerides = std::move(value); }

    /**
     * <p>List of ephemerides.</p>
     */
    inline ListEphemeridesResult& WithEphemerides(const Aws::Vector<EphemerisItem>& value) { SetEphemerides(value); return *this;}

    /**
     * <p>List of ephemerides.</p>
     */
    inline ListEphemeridesResult& WithEphemerides(Aws::Vector<EphemerisItem>&& value) { SetEphemerides(std::move(value)); return *this;}

    /**
     * <p>List of ephemerides.</p>
     */
    inline ListEphemeridesResult& AddEphemerides(const EphemerisItem& value) { m_ephemerides.push_back(value); return *this; }

    /**
     * <p>List of ephemerides.</p>
     */
    inline ListEphemeridesResult& AddEphemerides(EphemerisItem&& value) { m_ephemerides.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline ListEphemeridesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline ListEphemeridesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline ListEphemeridesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EphemerisItem> m_ephemerides;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
