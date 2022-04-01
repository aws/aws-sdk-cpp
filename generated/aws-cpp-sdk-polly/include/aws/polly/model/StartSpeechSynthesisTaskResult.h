/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
