/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_POLLY_API ListSpeechSynthesisTasksResult
  {
  public:
    ListSpeechSynthesisTasksResult();
    ListSpeechSynthesisTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSpeechSynthesisTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An opaque pagination token returned from the previous List operation in this
     * request. If present, this indicates where to continue the listing.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An opaque pagination token returned from the previous List operation in this
     * request. If present, this indicates where to continue the listing.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An opaque pagination token returned from the previous List operation in this
     * request. If present, this indicates where to continue the listing.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An opaque pagination token returned from the previous List operation in this
     * request. If present, this indicates where to continue the listing.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An opaque pagination token returned from the previous List operation in this
     * request. If present, this indicates where to continue the listing.</p>
     */
    inline ListSpeechSynthesisTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An opaque pagination token returned from the previous List operation in this
     * request. If present, this indicates where to continue the listing.</p>
     */
    inline ListSpeechSynthesisTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An opaque pagination token returned from the previous List operation in this
     * request. If present, this indicates where to continue the listing.</p>
     */
    inline ListSpeechSynthesisTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of SynthesisTask objects that provides information from the specified
     * task in the list request, including output format, creation time, task status,
     * and so on.</p>
     */
    inline const Aws::Vector<SynthesisTask>& GetSynthesisTasks() const{ return m_synthesisTasks; }

    /**
     * <p>List of SynthesisTask objects that provides information from the specified
     * task in the list request, including output format, creation time, task status,
     * and so on.</p>
     */
    inline void SetSynthesisTasks(const Aws::Vector<SynthesisTask>& value) { m_synthesisTasks = value; }

    /**
     * <p>List of SynthesisTask objects that provides information from the specified
     * task in the list request, including output format, creation time, task status,
     * and so on.</p>
     */
    inline void SetSynthesisTasks(Aws::Vector<SynthesisTask>&& value) { m_synthesisTasks = std::move(value); }

    /**
     * <p>List of SynthesisTask objects that provides information from the specified
     * task in the list request, including output format, creation time, task status,
     * and so on.</p>
     */
    inline ListSpeechSynthesisTasksResult& WithSynthesisTasks(const Aws::Vector<SynthesisTask>& value) { SetSynthesisTasks(value); return *this;}

    /**
     * <p>List of SynthesisTask objects that provides information from the specified
     * task in the list request, including output format, creation time, task status,
     * and so on.</p>
     */
    inline ListSpeechSynthesisTasksResult& WithSynthesisTasks(Aws::Vector<SynthesisTask>&& value) { SetSynthesisTasks(std::move(value)); return *this;}

    /**
     * <p>List of SynthesisTask objects that provides information from the specified
     * task in the list request, including output format, creation time, task status,
     * and so on.</p>
     */
    inline ListSpeechSynthesisTasksResult& AddSynthesisTasks(const SynthesisTask& value) { m_synthesisTasks.push_back(value); return *this; }

    /**
     * <p>List of SynthesisTask objects that provides information from the specified
     * task in the list request, including output format, creation time, task status,
     * and so on.</p>
     */
    inline ListSpeechSynthesisTasksResult& AddSynthesisTasks(SynthesisTask&& value) { m_synthesisTasks.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SynthesisTask> m_synthesisTasks;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
