/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>Complex data type that defines S3Detail objects.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/S3Detail">AWS
   * API Reference</a></p>
   */
  class S3Detail
  {
  public:
    AWS_IVSREALTIME_API S3Detail() = default;
    AWS_IVSREALTIME_API S3Detail(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API S3Detail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 bucket prefix under which the recording is stored.</p>
     */
    inline const Aws::String& GetRecordingPrefix() const { return m_recordingPrefix; }
    inline bool RecordingPrefixHasBeenSet() const { return m_recordingPrefixHasBeenSet; }
    template<typename RecordingPrefixT = Aws::String>
    void SetRecordingPrefix(RecordingPrefixT&& value) { m_recordingPrefixHasBeenSet = true; m_recordingPrefix = std::forward<RecordingPrefixT>(value); }
    template<typename RecordingPrefixT = Aws::String>
    S3Detail& WithRecordingPrefix(RecordingPrefixT&& value) { SetRecordingPrefix(std::forward<RecordingPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recordingPrefix;
    bool m_recordingPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
