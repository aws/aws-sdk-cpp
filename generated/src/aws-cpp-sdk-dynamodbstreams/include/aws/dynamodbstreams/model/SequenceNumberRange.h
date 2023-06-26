/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DynamoDBStreams
{
namespace Model
{

  /**
   * <p>The beginning and ending sequence numbers for the stream records contained
   * within a shard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/SequenceNumberRange">AWS
   * API Reference</a></p>
   */
  class SequenceNumberRange
  {
  public:
    AWS_DYNAMODBSTREAMS_API SequenceNumberRange();
    AWS_DYNAMODBSTREAMS_API SequenceNumberRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API SequenceNumberRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The first sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline const Aws::String& GetStartingSequenceNumber() const{ return m_startingSequenceNumber; }

    /**
     * <p>The first sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline bool StartingSequenceNumberHasBeenSet() const { return m_startingSequenceNumberHasBeenSet; }

    /**
     * <p>The first sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline void SetStartingSequenceNumber(const Aws::String& value) { m_startingSequenceNumberHasBeenSet = true; m_startingSequenceNumber = value; }

    /**
     * <p>The first sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline void SetStartingSequenceNumber(Aws::String&& value) { m_startingSequenceNumberHasBeenSet = true; m_startingSequenceNumber = std::move(value); }

    /**
     * <p>The first sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline void SetStartingSequenceNumber(const char* value) { m_startingSequenceNumberHasBeenSet = true; m_startingSequenceNumber.assign(value); }

    /**
     * <p>The first sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline SequenceNumberRange& WithStartingSequenceNumber(const Aws::String& value) { SetStartingSequenceNumber(value); return *this;}

    /**
     * <p>The first sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline SequenceNumberRange& WithStartingSequenceNumber(Aws::String&& value) { SetStartingSequenceNumber(std::move(value)); return *this;}

    /**
     * <p>The first sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline SequenceNumberRange& WithStartingSequenceNumber(const char* value) { SetStartingSequenceNumber(value); return *this;}


    /**
     * <p>The last sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline const Aws::String& GetEndingSequenceNumber() const{ return m_endingSequenceNumber; }

    /**
     * <p>The last sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline bool EndingSequenceNumberHasBeenSet() const { return m_endingSequenceNumberHasBeenSet; }

    /**
     * <p>The last sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline void SetEndingSequenceNumber(const Aws::String& value) { m_endingSequenceNumberHasBeenSet = true; m_endingSequenceNumber = value; }

    /**
     * <p>The last sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline void SetEndingSequenceNumber(Aws::String&& value) { m_endingSequenceNumberHasBeenSet = true; m_endingSequenceNumber = std::move(value); }

    /**
     * <p>The last sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline void SetEndingSequenceNumber(const char* value) { m_endingSequenceNumberHasBeenSet = true; m_endingSequenceNumber.assign(value); }

    /**
     * <p>The last sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline SequenceNumberRange& WithEndingSequenceNumber(const Aws::String& value) { SetEndingSequenceNumber(value); return *this;}

    /**
     * <p>The last sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline SequenceNumberRange& WithEndingSequenceNumber(Aws::String&& value) { SetEndingSequenceNumber(std::move(value)); return *this;}

    /**
     * <p>The last sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline SequenceNumberRange& WithEndingSequenceNumber(const char* value) { SetEndingSequenceNumber(value); return *this;}

  private:

    Aws::String m_startingSequenceNumber;
    bool m_startingSequenceNumberHasBeenSet = false;

    Aws::String m_endingSequenceNumber;
    bool m_endingSequenceNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
