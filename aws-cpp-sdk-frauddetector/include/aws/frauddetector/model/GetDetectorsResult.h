﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/Detector.h>
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
namespace FraudDetector
{
namespace Model
{
  class AWS_FRAUDDETECTOR_API GetDetectorsResult
  {
  public:
    GetDetectorsResult();
    GetDetectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDetectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detectors.</p>
     */
    inline const Aws::Vector<Detector>& GetDetectors() const{ return m_detectors; }

    /**
     * <p>The detectors.</p>
     */
    inline void SetDetectors(const Aws::Vector<Detector>& value) { m_detectors = value; }

    /**
     * <p>The detectors.</p>
     */
    inline void SetDetectors(Aws::Vector<Detector>&& value) { m_detectors = std::move(value); }

    /**
     * <p>The detectors.</p>
     */
    inline GetDetectorsResult& WithDetectors(const Aws::Vector<Detector>& value) { SetDetectors(value); return *this;}

    /**
     * <p>The detectors.</p>
     */
    inline GetDetectorsResult& WithDetectors(Aws::Vector<Detector>&& value) { SetDetectors(std::move(value)); return *this;}

    /**
     * <p>The detectors.</p>
     */
    inline GetDetectorsResult& AddDetectors(const Detector& value) { m_detectors.push_back(value); return *this; }

    /**
     * <p>The detectors.</p>
     */
    inline GetDetectorsResult& AddDetectors(Detector&& value) { m_detectors.push_back(std::move(value)); return *this; }


    /**
     * <p>The next page token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next page token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next page token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next page token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next page token.</p>
     */
    inline GetDetectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next page token.</p>
     */
    inline GetDetectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next page token.</p>
     */
    inline GetDetectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Detector> m_detectors;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
