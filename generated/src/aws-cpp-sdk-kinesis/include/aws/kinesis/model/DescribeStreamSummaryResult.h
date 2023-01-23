/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/StreamDescriptionSummary.h>
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
namespace Kinesis
{
namespace Model
{
  class DescribeStreamSummaryResult
  {
  public:
    AWS_KINESIS_API DescribeStreamSummaryResult();
    AWS_KINESIS_API DescribeStreamSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESIS_API DescribeStreamSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <a>StreamDescriptionSummary</a> containing information about the
     * stream.</p>
     */
    inline const StreamDescriptionSummary& GetStreamDescriptionSummary() const{ return m_streamDescriptionSummary; }

    /**
     * <p>A <a>StreamDescriptionSummary</a> containing information about the
     * stream.</p>
     */
    inline void SetStreamDescriptionSummary(const StreamDescriptionSummary& value) { m_streamDescriptionSummary = value; }

    /**
     * <p>A <a>StreamDescriptionSummary</a> containing information about the
     * stream.</p>
     */
    inline void SetStreamDescriptionSummary(StreamDescriptionSummary&& value) { m_streamDescriptionSummary = std::move(value); }

    /**
     * <p>A <a>StreamDescriptionSummary</a> containing information about the
     * stream.</p>
     */
    inline DescribeStreamSummaryResult& WithStreamDescriptionSummary(const StreamDescriptionSummary& value) { SetStreamDescriptionSummary(value); return *this;}

    /**
     * <p>A <a>StreamDescriptionSummary</a> containing information about the
     * stream.</p>
     */
    inline DescribeStreamSummaryResult& WithStreamDescriptionSummary(StreamDescriptionSummary&& value) { SetStreamDescriptionSummary(std::move(value)); return *this;}

  private:

    StreamDescriptionSummary m_streamDescriptionSummary;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
