/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
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
namespace KeyspacesStreams
{
namespace Model
{

  /**
   * <p>Defines a range of sequence numbers within a change data capture stream's
   * shard for Amazon Keyspaces.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspacesstreams-2024-09-09/SequenceNumberRange">AWS
   * API Reference</a></p>
   */
  class SequenceNumberRange
  {
  public:
    AWS_KEYSPACESSTREAMS_API SequenceNumberRange() = default;
    AWS_KEYSPACESSTREAMS_API SequenceNumberRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API SequenceNumberRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The starting sequence number of the range.</p>
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
     * <p>The ending sequence number of the range, which may be null for open-ended
     * ranges.</p>
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
} // namespace KeyspacesStreams
} // namespace Aws
