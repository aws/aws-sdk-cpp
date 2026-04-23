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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/StreamProcessorStatus.h>
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
   * <p>An object that recognizes faces in a streaming video. An Amazon Rekognition
   * stream processor is created by a call to <a>CreateStreamProcessor</a>. The
   * request parameters for <code>CreateStreamProcessor</code> describe the Kinesis
   * video stream source for the streaming video, face recognition parameters, and
   * where to stream the analysis resullts. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StreamProcessor">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API StreamProcessor
  {
  public:
    StreamProcessor();
    StreamProcessor(Aws::Utils::Json::JsonView jsonValue);
    StreamProcessor& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the Amazon Rekognition stream processor. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the Amazon Rekognition stream processor. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the Amazon Rekognition stream processor. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the Amazon Rekognition stream processor. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the Amazon Rekognition stream processor. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the Amazon Rekognition stream processor. </p>
     */
    inline StreamProcessor& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the Amazon Rekognition stream processor. </p>
     */
    inline StreamProcessor& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the Amazon Rekognition stream processor. </p>
     */
    inline StreamProcessor& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Current status of the Amazon Rekognition stream processor.</p>
     */
    inline const StreamProcessorStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the Amazon Rekognition stream processor.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Current status of the Amazon Rekognition stream processor.</p>
     */
    inline void SetStatus(const StreamProcessorStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the Amazon Rekognition stream processor.</p>
     */
    inline void SetStatus(StreamProcessorStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Current status of the Amazon Rekognition stream processor.</p>
     */
    inline StreamProcessor& WithStatus(const StreamProcessorStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the Amazon Rekognition stream processor.</p>
     */
    inline StreamProcessor& WithStatus(StreamProcessorStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    StreamProcessorStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
