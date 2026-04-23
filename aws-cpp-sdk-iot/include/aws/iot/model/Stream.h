/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API Stream
  {
  public:
    Stream();
    Stream(Aws::Utils::Json::JsonView jsonValue);
    Stream& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_streamIdHasBeenSet;

    int m_fileId;
    bool m_fileIdHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
