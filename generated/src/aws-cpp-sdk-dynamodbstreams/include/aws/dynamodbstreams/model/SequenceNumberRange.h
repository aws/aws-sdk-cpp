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
    AWS_DYNAMODBSTREAMS_API SequenceNumberRange() = default;
    AWS_DYNAMODBSTREAMS_API SequenceNumberRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API SequenceNumberRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The first sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline const Aws::String& GetStartingSequenceNumber() const { return m_startingSequenceNumber; }
    inline bool StartingSequenceNumberHasBeenSet() const { return m_startingSequenceNumberHasBeenSet; }
    template<typename StartingSequenceNumberT = Aws::String>
    void SetStartingSequenceNumber(StartingSequenceNumberT&& value) { m_startingSequenceNumberHasBeenSet = true; m_startingSequenceNumber = std::forward<StartingSequenceNumberT>(value); }
    template<typename StartingSequenceNumberT = Aws::String>
    SequenceNumberRange& WithStartingSequenceNumber(StartingSequenceNumberT&& value) { SetStartingSequenceNumber(std::forward<StartingSequenceNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last sequence number for the stream records contained within a shard.
     * String contains numeric characters only.</p>
     */
    inline const Aws::String& GetEndingSequenceNumber() const { return m_endingSequenceNumber; }
    inline bool EndingSequenceNumberHasBeenSet() const { return m_endingSequenceNumberHasBeenSet; }
    template<typename EndingSequenceNumberT = Aws::String>
    void SetEndingSequenceNumber(EndingSequenceNumberT&& value) { m_endingSequenceNumberHasBeenSet = true; m_endingSequenceNumber = std::forward<EndingSequenceNumberT>(value); }
    template<typename EndingSequenceNumberT = Aws::String>
    SequenceNumberRange& WithEndingSequenceNumber(EndingSequenceNumberT&& value) { SetEndingSequenceNumber(std::forward<EndingSequenceNumberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_startingSequenceNumber;
    bool m_startingSequenceNumberHasBeenSet = false;

    Aws::String m_endingSequenceNumber;
    bool m_endingSequenceNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
