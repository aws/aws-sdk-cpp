﻿/**
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
  class CreateEphemerisResult
  {
  public:
    AWS_GROUNDSTATION_API CreateEphemerisResult();
    AWS_GROUNDSTATION_API CreateEphemerisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API CreateEphemerisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The AWS Ground Station ephemeris ID.</p>
     */
    inline const Aws::String& GetEphemerisId() const{ return m_ephemerisId; }
    inline void SetEphemerisId(const Aws::String& value) { m_ephemerisId = value; }
    inline void SetEphemerisId(Aws::String&& value) { m_ephemerisId = std::move(value); }
    inline void SetEphemerisId(const char* value) { m_ephemerisId.assign(value); }
    inline CreateEphemerisResult& WithEphemerisId(const Aws::String& value) { SetEphemerisId(value); return *this;}
    inline CreateEphemerisResult& WithEphemerisId(Aws::String&& value) { SetEphemerisId(std::move(value)); return *this;}
    inline CreateEphemerisResult& WithEphemerisId(const char* value) { SetEphemerisId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateEphemerisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateEphemerisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateEphemerisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_ephemerisId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
