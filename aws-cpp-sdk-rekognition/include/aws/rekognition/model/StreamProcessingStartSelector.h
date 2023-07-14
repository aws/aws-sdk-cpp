﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/KinesisVideoStreamStartSelector.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StreamProcessingStartSelector">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API StreamProcessingStartSelector
  {
  public:
    StreamProcessingStartSelector();
    StreamProcessingStartSelector(Aws::Utils::Json::JsonView jsonValue);
    StreamProcessingStartSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies the starting point in the stream to start processing. This can be
     * done with a timestamp or a fragment number in a Kinesis stream. </p>
     */
    inline const KinesisVideoStreamStartSelector& GetKVSStreamStartSelector() const{ return m_kVSStreamStartSelector; }

    /**
     * <p> Specifies the starting point in the stream to start processing. This can be
     * done with a timestamp or a fragment number in a Kinesis stream. </p>
     */
    inline bool KVSStreamStartSelectorHasBeenSet() const { return m_kVSStreamStartSelectorHasBeenSet; }

    /**
     * <p> Specifies the starting point in the stream to start processing. This can be
     * done with a timestamp or a fragment number in a Kinesis stream. </p>
     */
    inline void SetKVSStreamStartSelector(const KinesisVideoStreamStartSelector& value) { m_kVSStreamStartSelectorHasBeenSet = true; m_kVSStreamStartSelector = value; }

    /**
     * <p> Specifies the starting point in the stream to start processing. This can be
     * done with a timestamp or a fragment number in a Kinesis stream. </p>
     */
    inline void SetKVSStreamStartSelector(KinesisVideoStreamStartSelector&& value) { m_kVSStreamStartSelectorHasBeenSet = true; m_kVSStreamStartSelector = std::move(value); }

    /**
     * <p> Specifies the starting point in the stream to start processing. This can be
     * done with a timestamp or a fragment number in a Kinesis stream. </p>
     */
    inline StreamProcessingStartSelector& WithKVSStreamStartSelector(const KinesisVideoStreamStartSelector& value) { SetKVSStreamStartSelector(value); return *this;}

    /**
     * <p> Specifies the starting point in the stream to start processing. This can be
     * done with a timestamp or a fragment number in a Kinesis stream. </p>
     */
    inline StreamProcessingStartSelector& WithKVSStreamStartSelector(KinesisVideoStreamStartSelector&& value) { SetKVSStreamStartSelector(std::move(value)); return *this;}

  private:

    KinesisVideoStreamStartSelector m_kVSStreamStartSelector;
    bool m_kVSStreamStartSelectorHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
