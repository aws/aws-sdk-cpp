/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateEphemerisResult
  {
  public:
    AWS_GROUNDSTATION_API UpdateEphemerisResult();
    AWS_GROUNDSTATION_API UpdateEphemerisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API UpdateEphemerisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline const Aws::String& GetEphemerisId() const{ return m_ephemerisId; }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline void SetEphemerisId(const Aws::String& value) { m_ephemerisId = value; }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline void SetEphemerisId(Aws::String&& value) { m_ephemerisId = std::move(value); }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline void SetEphemerisId(const char* value) { m_ephemerisId.assign(value); }

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline UpdateEphemerisResult& WithEphemerisId(const Aws::String& value) { SetEphemerisId(value); return *this;}

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline UpdateEphemerisResult& WithEphemerisId(Aws::String&& value) { SetEphemerisId(std::move(value)); return *this;}

    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline UpdateEphemerisResult& WithEphemerisId(const char* value) { SetEphemerisId(value); return *this;}

  private:

    Aws::String m_ephemerisId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
