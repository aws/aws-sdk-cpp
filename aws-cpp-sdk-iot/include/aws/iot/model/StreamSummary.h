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
   * <p>A summary of a stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StreamSummary">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API StreamSummary
  {
  public:
    StreamSummary();
    StreamSummary(Aws::Utils::Json::JsonView jsonValue);
    StreamSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline StreamSummary& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>The stream ID.</p>
     */
    inline StreamSummary& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>The stream ID.</p>
     */
    inline StreamSummary& WithStreamId(const char* value) { SetStreamId(value); return *this;}


    /**
     * <p>The stream ARN.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }

    /**
     * <p>The stream ARN.</p>
     */
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }

    /**
     * <p>The stream ARN.</p>
     */
    inline void SetStreamArn(const Aws::String& value) { m_streamArnHasBeenSet = true; m_streamArn = value; }

    /**
     * <p>The stream ARN.</p>
     */
    inline void SetStreamArn(Aws::String&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::move(value); }

    /**
     * <p>The stream ARN.</p>
     */
    inline void SetStreamArn(const char* value) { m_streamArnHasBeenSet = true; m_streamArn.assign(value); }

    /**
     * <p>The stream ARN.</p>
     */
    inline StreamSummary& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The stream ARN.</p>
     */
    inline StreamSummary& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The stream ARN.</p>
     */
    inline StreamSummary& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}


    /**
     * <p>The stream version.</p>
     */
    inline int GetStreamVersion() const{ return m_streamVersion; }

    /**
     * <p>The stream version.</p>
     */
    inline bool StreamVersionHasBeenSet() const { return m_streamVersionHasBeenSet; }

    /**
     * <p>The stream version.</p>
     */
    inline void SetStreamVersion(int value) { m_streamVersionHasBeenSet = true; m_streamVersion = value; }

    /**
     * <p>The stream version.</p>
     */
    inline StreamSummary& WithStreamVersion(int value) { SetStreamVersion(value); return *this;}


    /**
     * <p>A description of the stream.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the stream.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the stream.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the stream.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the stream.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the stream.</p>
     */
    inline StreamSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the stream.</p>
     */
    inline StreamSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the stream.</p>
     */
    inline StreamSummary& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet;

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet;

    int m_streamVersion;
    bool m_streamVersionHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
