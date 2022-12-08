/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/SelectedVideoStreams.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>Source configuration for a specified media capture pipeline.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SourceConfiguration">AWS
   * API Reference</a></p>
   */
  class SourceConfiguration
  {
  public:
    AWS_CHIME_API SourceConfiguration();
    AWS_CHIME_API SourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API SourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The selected video streams to capture for a specified media capture pipeline.
     * The number of video streams can't exceed 25.</p>
     */
    inline const SelectedVideoStreams& GetSelectedVideoStreams() const{ return m_selectedVideoStreams; }

    /**
     * <p>The selected video streams to capture for a specified media capture pipeline.
     * The number of video streams can't exceed 25.</p>
     */
    inline bool SelectedVideoStreamsHasBeenSet() const { return m_selectedVideoStreamsHasBeenSet; }

    /**
     * <p>The selected video streams to capture for a specified media capture pipeline.
     * The number of video streams can't exceed 25.</p>
     */
    inline void SetSelectedVideoStreams(const SelectedVideoStreams& value) { m_selectedVideoStreamsHasBeenSet = true; m_selectedVideoStreams = value; }

    /**
     * <p>The selected video streams to capture for a specified media capture pipeline.
     * The number of video streams can't exceed 25.</p>
     */
    inline void SetSelectedVideoStreams(SelectedVideoStreams&& value) { m_selectedVideoStreamsHasBeenSet = true; m_selectedVideoStreams = std::move(value); }

    /**
     * <p>The selected video streams to capture for a specified media capture pipeline.
     * The number of video streams can't exceed 25.</p>
     */
    inline SourceConfiguration& WithSelectedVideoStreams(const SelectedVideoStreams& value) { SetSelectedVideoStreams(value); return *this;}

    /**
     * <p>The selected video streams to capture for a specified media capture pipeline.
     * The number of video streams can't exceed 25.</p>
     */
    inline SourceConfiguration& WithSelectedVideoStreams(SelectedVideoStreams&& value) { SetSelectedVideoStreams(std::move(value)); return *this;}

  private:

    SelectedVideoStreams m_selectedVideoStreams;
    bool m_selectedVideoStreamsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
