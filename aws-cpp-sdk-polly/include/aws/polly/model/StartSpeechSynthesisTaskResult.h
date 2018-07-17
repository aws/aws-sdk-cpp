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
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/SynthesisTask.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Polly
{
namespace Model
{
  class AWS_POLLY_API StartSpeechSynthesisTaskResult
  {
  public:
    StartSpeechSynthesisTaskResult();
    StartSpeechSynthesisTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartSpeechSynthesisTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>SynthesisTask object that provides information and attributes about a newly
     * submitted speech synthesis task.</p>
     */
    inline const SynthesisTask& GetSynthesisTask() const{ return m_synthesisTask; }

    /**
     * <p>SynthesisTask object that provides information and attributes about a newly
     * submitted speech synthesis task.</p>
     */
    inline void SetSynthesisTask(const SynthesisTask& value) { m_synthesisTask = value; }

    /**
     * <p>SynthesisTask object that provides information and attributes about a newly
     * submitted speech synthesis task.</p>
     */
    inline void SetSynthesisTask(SynthesisTask&& value) { m_synthesisTask = std::move(value); }

    /**
     * <p>SynthesisTask object that provides information and attributes about a newly
     * submitted speech synthesis task.</p>
     */
    inline StartSpeechSynthesisTaskResult& WithSynthesisTask(const SynthesisTask& value) { SetSynthesisTask(value); return *this;}

    /**
     * <p>SynthesisTask object that provides information and attributes about a newly
     * submitted speech synthesis task.</p>
     */
    inline StartSpeechSynthesisTaskResult& WithSynthesisTask(SynthesisTask&& value) { SetSynthesisTask(std::move(value)); return *this;}

  private:

    SynthesisTask m_synthesisTask;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
