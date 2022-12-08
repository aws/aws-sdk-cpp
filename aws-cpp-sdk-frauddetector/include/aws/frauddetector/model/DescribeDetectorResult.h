/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/DetectorVersionSummary.h>
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
  class DescribeDetectorResult
  {
  public:
    AWS_FRAUDDETECTOR_API DescribeDetectorResult();
    AWS_FRAUDDETECTOR_API DescribeDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API DescribeDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The detector ID.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The detector ID.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorId = value; }

    /**
     * <p>The detector ID.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorId = std::move(value); }

    /**
     * <p>The detector ID.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorId.assign(value); }

    /**
     * <p>The detector ID.</p>
     */
    inline DescribeDetectorResult& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The detector ID.</p>
     */
    inline DescribeDetectorResult& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The detector ID.</p>
     */
    inline DescribeDetectorResult& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The status and description for each detector version.</p>
     */
    inline const Aws::Vector<DetectorVersionSummary>& GetDetectorVersionSummaries() const{ return m_detectorVersionSummaries; }

    /**
     * <p>The status and description for each detector version.</p>
     */
    inline void SetDetectorVersionSummaries(const Aws::Vector<DetectorVersionSummary>& value) { m_detectorVersionSummaries = value; }

    /**
     * <p>The status and description for each detector version.</p>
     */
    inline void SetDetectorVersionSummaries(Aws::Vector<DetectorVersionSummary>&& value) { m_detectorVersionSummaries = std::move(value); }

    /**
     * <p>The status and description for each detector version.</p>
     */
    inline DescribeDetectorResult& WithDetectorVersionSummaries(const Aws::Vector<DetectorVersionSummary>& value) { SetDetectorVersionSummaries(value); return *this;}

    /**
     * <p>The status and description for each detector version.</p>
     */
    inline DescribeDetectorResult& WithDetectorVersionSummaries(Aws::Vector<DetectorVersionSummary>&& value) { SetDetectorVersionSummaries(std::move(value)); return *this;}

    /**
     * <p>The status and description for each detector version.</p>
     */
    inline DescribeDetectorResult& AddDetectorVersionSummaries(const DetectorVersionSummary& value) { m_detectorVersionSummaries.push_back(value); return *this; }

    /**
     * <p>The status and description for each detector version.</p>
     */
    inline DescribeDetectorResult& AddDetectorVersionSummaries(DetectorVersionSummary&& value) { m_detectorVersionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The next token to be used for subsequent requests.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next token to be used for subsequent requests.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next token to be used for subsequent requests.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next token to be used for subsequent requests.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next token to be used for subsequent requests.</p>
     */
    inline DescribeDetectorResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token to be used for subsequent requests.</p>
     */
    inline DescribeDetectorResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token to be used for subsequent requests.</p>
     */
    inline DescribeDetectorResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The detector ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The detector ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The detector ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The detector ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The detector ARN.</p>
     */
    inline DescribeDetectorResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The detector ARN.</p>
     */
    inline DescribeDetectorResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The detector ARN.</p>
     */
    inline DescribeDetectorResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_detectorId;

    Aws::Vector<DetectorVersionSummary> m_detectorVersionSummaries;

    Aws::String m_nextToken;

    Aws::String m_arn;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
