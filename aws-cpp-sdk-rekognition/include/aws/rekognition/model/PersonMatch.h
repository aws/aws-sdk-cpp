﻿/*
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
#include <aws/rekognition/model/PersonDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/FaceMatch.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Information about a person whose face matches a face(s) in a Amazon
   * Rekognition collection. Includes information about the faces in the Amazon
   * Rekognition collection (,information about the person (<a>PersonDetail</a>) and
   * the timestamp for when the person was detected in a video. An array of
   * <code>PersonMatch</code> objects is returned by . </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/PersonMatch">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API PersonMatch
  {
  public:
    PersonMatch();
    PersonMatch(const Aws::Utils::Json::JsonValue& jsonValue);
    PersonMatch& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time, in milliseconds from the beginning of the video, that the person
     * was matched in the video.</p>
     */
    inline long long GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time, in milliseconds from the beginning of the video, that the person
     * was matched in the video.</p>
     */
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time, in milliseconds from the beginning of the video, that the person
     * was matched in the video.</p>
     */
    inline PersonMatch& WithTimestamp(long long value) { SetTimestamp(value); return *this;}


    /**
     * <p>Information about the matched person.</p>
     */
    inline const PersonDetail& GetPerson() const{ return m_person; }

    /**
     * <p>Information about the matched person.</p>
     */
    inline void SetPerson(const PersonDetail& value) { m_personHasBeenSet = true; m_person = value; }

    /**
     * <p>Information about the matched person.</p>
     */
    inline void SetPerson(PersonDetail&& value) { m_personHasBeenSet = true; m_person = std::move(value); }

    /**
     * <p>Information about the matched person.</p>
     */
    inline PersonMatch& WithPerson(const PersonDetail& value) { SetPerson(value); return *this;}

    /**
     * <p>Information about the matched person.</p>
     */
    inline PersonMatch& WithPerson(PersonDetail&& value) { SetPerson(std::move(value)); return *this;}


    /**
     * <p>Information about the faces in the input collection that match the face of a
     * person in the video.</p>
     */
    inline const Aws::Vector<FaceMatch>& GetFaceMatches() const{ return m_faceMatches; }

    /**
     * <p>Information about the faces in the input collection that match the face of a
     * person in the video.</p>
     */
    inline void SetFaceMatches(const Aws::Vector<FaceMatch>& value) { m_faceMatchesHasBeenSet = true; m_faceMatches = value; }

    /**
     * <p>Information about the faces in the input collection that match the face of a
     * person in the video.</p>
     */
    inline void SetFaceMatches(Aws::Vector<FaceMatch>&& value) { m_faceMatchesHasBeenSet = true; m_faceMatches = std::move(value); }

    /**
     * <p>Information about the faces in the input collection that match the face of a
     * person in the video.</p>
     */
    inline PersonMatch& WithFaceMatches(const Aws::Vector<FaceMatch>& value) { SetFaceMatches(value); return *this;}

    /**
     * <p>Information about the faces in the input collection that match the face of a
     * person in the video.</p>
     */
    inline PersonMatch& WithFaceMatches(Aws::Vector<FaceMatch>&& value) { SetFaceMatches(std::move(value)); return *this;}

    /**
     * <p>Information about the faces in the input collection that match the face of a
     * person in the video.</p>
     */
    inline PersonMatch& AddFaceMatches(const FaceMatch& value) { m_faceMatchesHasBeenSet = true; m_faceMatches.push_back(value); return *this; }

    /**
     * <p>Information about the faces in the input collection that match the face of a
     * person in the video.</p>
     */
    inline PersonMatch& AddFaceMatches(FaceMatch&& value) { m_faceMatchesHasBeenSet = true; m_faceMatches.push_back(std::move(value)); return *this; }

  private:

    long long m_timestamp;
    bool m_timestampHasBeenSet;

    PersonDetail m_person;
    bool m_personHasBeenSet;

    Aws::Vector<FaceMatch> m_faceMatches;
    bool m_faceMatchesHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
