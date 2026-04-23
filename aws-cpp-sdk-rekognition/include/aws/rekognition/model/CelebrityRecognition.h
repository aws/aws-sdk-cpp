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
#include <aws/rekognition/model/CelebrityDetail.h>
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
   * <p>Information about a detected celebrity and the time the celebrity was
   * detected in a stored video. For more information, see GetCelebrityRecognition in
   * the Amazon Rekognition Developer Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CelebrityRecognition">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API CelebrityRecognition
  {
  public:
    CelebrityRecognition();
    CelebrityRecognition(Aws::Utils::Json::JsonView jsonValue);
    CelebrityRecognition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time, in milliseconds from the start of the video, that the celebrity was
     * recognized.</p>
     */
    inline long long GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time, in milliseconds from the start of the video, that the celebrity was
     * recognized.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The time, in milliseconds from the start of the video, that the celebrity was
     * recognized.</p>
     */
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time, in milliseconds from the start of the video, that the celebrity was
     * recognized.</p>
     */
    inline CelebrityRecognition& WithTimestamp(long long value) { SetTimestamp(value); return *this;}


    /**
     * <p>Information about a recognized celebrity.</p>
     */
    inline const CelebrityDetail& GetCelebrity() const{ return m_celebrity; }

    /**
     * <p>Information about a recognized celebrity.</p>
     */
    inline bool CelebrityHasBeenSet() const { return m_celebrityHasBeenSet; }

    /**
     * <p>Information about a recognized celebrity.</p>
     */
    inline void SetCelebrity(const CelebrityDetail& value) { m_celebrityHasBeenSet = true; m_celebrity = value; }

    /**
     * <p>Information about a recognized celebrity.</p>
     */
    inline void SetCelebrity(CelebrityDetail&& value) { m_celebrityHasBeenSet = true; m_celebrity = std::move(value); }

    /**
     * <p>Information about a recognized celebrity.</p>
     */
    inline CelebrityRecognition& WithCelebrity(const CelebrityDetail& value) { SetCelebrity(value); return *this;}

    /**
     * <p>Information about a recognized celebrity.</p>
     */
    inline CelebrityRecognition& WithCelebrity(CelebrityDetail&& value) { SetCelebrity(std::move(value)); return *this;}

  private:

    long long m_timestamp;
    bool m_timestampHasBeenSet;

    CelebrityDetail m_celebrity;
    bool m_celebrityHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
