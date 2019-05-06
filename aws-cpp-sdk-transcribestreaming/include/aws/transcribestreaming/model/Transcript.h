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
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/model/Result.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>The transcription in a <a>TranscriptEvent</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/Transcript">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API Transcript
  {
  public:
    Transcript();
    Transcript(Aws::Utils::Json::JsonView jsonValue);
    Transcript& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <a>Result</a> objects that contain the results of transcribing a portion of
     * the input audio stream. The array can be empty.</p>
     */
    inline const Aws::Vector<Result>& GetResults() const{ return m_results; }

    /**
     * <p> <a>Result</a> objects that contain the results of transcribing a portion of
     * the input audio stream. The array can be empty.</p>
     */
    inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }

    /**
     * <p> <a>Result</a> objects that contain the results of transcribing a portion of
     * the input audio stream. The array can be empty.</p>
     */
    inline void SetResults(const Aws::Vector<Result>& value) { m_resultsHasBeenSet = true; m_results = value; }

    /**
     * <p> <a>Result</a> objects that contain the results of transcribing a portion of
     * the input audio stream. The array can be empty.</p>
     */
    inline void SetResults(Aws::Vector<Result>&& value) { m_resultsHasBeenSet = true; m_results = std::move(value); }

    /**
     * <p> <a>Result</a> objects that contain the results of transcribing a portion of
     * the input audio stream. The array can be empty.</p>
     */
    inline Transcript& WithResults(const Aws::Vector<Result>& value) { SetResults(value); return *this;}

    /**
     * <p> <a>Result</a> objects that contain the results of transcribing a portion of
     * the input audio stream. The array can be empty.</p>
     */
    inline Transcript& WithResults(Aws::Vector<Result>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p> <a>Result</a> objects that contain the results of transcribing a portion of
     * the input audio stream. The array can be empty.</p>
     */
    inline Transcript& AddResults(const Result& value) { m_resultsHasBeenSet = true; m_results.push_back(value); return *this; }

    /**
     * <p> <a>Result</a> objects that contain the results of transcribing a portion of
     * the input audio stream. The array can be empty.</p>
     */
    inline Transcript& AddResults(Result&& value) { m_resultsHasBeenSet = true; m_results.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Result> m_results;
    bool m_resultsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
