/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes a group of files that can be streamed.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/Stream">AWS API
   * Reference</a></p>
   */
  class Stream
  {
  public:
    AWS_IOT_API Stream();
    AWS_IOT_API Stream(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Stream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The stream ID.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * <p>The stream ID.</p>
     */
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }

    /**
     * <p>The stream ID.</p>
     */
    inline Stream& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>The stream ID.</p>
     */
    inline Stream& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>The stream ID.</p>
     */
    inline Stream& WithStreamId(const char* value) { SetStreamId(value); return *this;}


    /**
     * <p>The ID of a file associated with a stream.</p>
     */
    inline int GetFileId() const{ return m_fileId; }

    /**
     * <p>The ID of a file associated with a stream.</p>
     */
    inline bool FileIdHasBeenSet() const { return m_fileIdHasBeenSet; }

    /**
     * <p>The ID of a file associated with a stream.</p>
     */
    inline void SetFileId(int value) { m_fileIdHasBeenSet = true; m_fileId = value; }

    /**
     * <p>The ID of a file associated with a stream.</p>
     */
    inline Stream& WithFileId(int value) { SetFileId(value); return *this;}

  private:

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;

    int m_fileId;
    bool m_fileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
