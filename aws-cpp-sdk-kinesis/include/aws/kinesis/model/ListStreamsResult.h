﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/StreamSummary.h>
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
namespace Kinesis
{
namespace Model
{
  /**
   * <p>Represents the output for <code>ListStreams</code>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/ListStreamsOutput">AWS
   * API Reference</a></p>
   */
  class ListStreamsResult
  {
  public:
    AWS_KINESIS_API ListStreamsResult();
    AWS_KINESIS_API ListStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESIS_API ListStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The names of the streams that are associated with the Amazon Web Services
     * account making the <code>ListStreams</code> request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStreamNames() const{ return m_streamNames; }

    /**
     * <p>The names of the streams that are associated with the Amazon Web Services
     * account making the <code>ListStreams</code> request.</p>
     */
    inline void SetStreamNames(const Aws::Vector<Aws::String>& value) { m_streamNames = value; }

    /**
     * <p>The names of the streams that are associated with the Amazon Web Services
     * account making the <code>ListStreams</code> request.</p>
     */
    inline void SetStreamNames(Aws::Vector<Aws::String>&& value) { m_streamNames = std::move(value); }

    /**
     * <p>The names of the streams that are associated with the Amazon Web Services
     * account making the <code>ListStreams</code> request.</p>
     */
    inline ListStreamsResult& WithStreamNames(const Aws::Vector<Aws::String>& value) { SetStreamNames(value); return *this;}

    /**
     * <p>The names of the streams that are associated with the Amazon Web Services
     * account making the <code>ListStreams</code> request.</p>
     */
    inline ListStreamsResult& WithStreamNames(Aws::Vector<Aws::String>&& value) { SetStreamNames(std::move(value)); return *this;}

    /**
     * <p>The names of the streams that are associated with the Amazon Web Services
     * account making the <code>ListStreams</code> request.</p>
     */
    inline ListStreamsResult& AddStreamNames(const Aws::String& value) { m_streamNames.push_back(value); return *this; }

    /**
     * <p>The names of the streams that are associated with the Amazon Web Services
     * account making the <code>ListStreams</code> request.</p>
     */
    inline ListStreamsResult& AddStreamNames(Aws::String&& value) { m_streamNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the streams that are associated with the Amazon Web Services
     * account making the <code>ListStreams</code> request.</p>
     */
    inline ListStreamsResult& AddStreamNames(const char* value) { m_streamNames.push_back(value); return *this; }


    /**
     * <p>If set to <code>true</code>, there are more streams available to list.</p>
     */
    inline bool GetHasMoreStreams() const{ return m_hasMoreStreams; }

    /**
     * <p>If set to <code>true</code>, there are more streams available to list.</p>
     */
    inline void SetHasMoreStreams(bool value) { m_hasMoreStreams = value; }

    /**
     * <p>If set to <code>true</code>, there are more streams available to list.</p>
     */
    inline ListStreamsResult& WithHasMoreStreams(bool value) { SetHasMoreStreams(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p/>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p/>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p/>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p/>
     */
    inline ListStreamsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p/>
     */
    inline ListStreamsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListStreamsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<StreamSummary>& GetStreamSummaries() const{ return m_streamSummaries; }

    /**
     * <p/>
     */
    inline void SetStreamSummaries(const Aws::Vector<StreamSummary>& value) { m_streamSummaries = value; }

    /**
     * <p/>
     */
    inline void SetStreamSummaries(Aws::Vector<StreamSummary>&& value) { m_streamSummaries = std::move(value); }

    /**
     * <p/>
     */
    inline ListStreamsResult& WithStreamSummaries(const Aws::Vector<StreamSummary>& value) { SetStreamSummaries(value); return *this;}

    /**
     * <p/>
     */
    inline ListStreamsResult& WithStreamSummaries(Aws::Vector<StreamSummary>&& value) { SetStreamSummaries(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListStreamsResult& AddStreamSummaries(const StreamSummary& value) { m_streamSummaries.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline ListStreamsResult& AddStreamSummaries(StreamSummary&& value) { m_streamSummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_streamNames;

    bool m_hasMoreStreams;

    Aws::String m_nextToken;

    Aws::Vector<StreamSummary> m_streamSummaries;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
