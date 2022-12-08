/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/StreamDescription.h>
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
  /**
   * <p>Represents the output for <code>DescribeStream</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/DescribeStreamOutput">AWS
   * API Reference</a></p>
   */
  class DescribeStreamResult
  {
  public:
    AWS_KINESIS_API DescribeStreamResult();
    AWS_KINESIS_API DescribeStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESIS_API DescribeStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status of the stream, the stream Amazon Resource Name (ARN), an
     * array of shard objects that comprise the stream, and whether there are more
     * shards available.</p>
     */
    inline const StreamDescription& GetStreamDescription() const{ return m_streamDescription; }

    /**
     * <p>The current status of the stream, the stream Amazon Resource Name (ARN), an
     * array of shard objects that comprise the stream, and whether there are more
     * shards available.</p>
     */
    inline void SetStreamDescription(const StreamDescription& value) { m_streamDescription = value; }

    /**
     * <p>The current status of the stream, the stream Amazon Resource Name (ARN), an
     * array of shard objects that comprise the stream, and whether there are more
     * shards available.</p>
     */
    inline void SetStreamDescription(StreamDescription&& value) { m_streamDescription = std::move(value); }

    /**
     * <p>The current status of the stream, the stream Amazon Resource Name (ARN), an
     * array of shard objects that comprise the stream, and whether there are more
     * shards available.</p>
     */
    inline DescribeStreamResult& WithStreamDescription(const StreamDescription& value) { SetStreamDescription(value); return *this;}

    /**
     * <p>The current status of the stream, the stream Amazon Resource Name (ARN), an
     * array of shard objects that comprise the stream, and whether there are more
     * shards available.</p>
     */
    inline DescribeStreamResult& WithStreamDescription(StreamDescription&& value) { SetStreamDescription(std::move(value)); return *this;}

  private:

    StreamDescription m_streamDescription;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
