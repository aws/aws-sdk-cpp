﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/cloudsearchdomain/model/SuggestStatus.h>
#include <aws/cloudsearchdomain/model/SuggestModel.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudSearchDomain
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>Suggest</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/SuggestResponse">AWS
   * API Reference</a></p>
   */
  class SuggestResult
  {
  public:
    AWS_CLOUDSEARCHDOMAIN_API SuggestResult();
    AWS_CLOUDSEARCHDOMAIN_API SuggestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDSEARCHDOMAIN_API SuggestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of a <code>SuggestRequest</code>. Contains the resource ID
     * (<code>rid</code>) and how long it took to process the request
     * (<code>timems</code>).</p>
     */
    inline const SuggestStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SuggestStatus& value) { m_status = value; }
    inline void SetStatus(SuggestStatus&& value) { m_status = std::move(value); }
    inline SuggestResult& WithStatus(const SuggestStatus& value) { SetStatus(value); return *this;}
    inline SuggestResult& WithStatus(SuggestStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for the matching search suggestion information.</p>
     */
    inline const SuggestModel& GetSuggest() const{ return m_suggest; }
    inline void SetSuggest(const SuggestModel& value) { m_suggest = value; }
    inline void SetSuggest(SuggestModel&& value) { m_suggest = std::move(value); }
    inline SuggestResult& WithSuggest(const SuggestModel& value) { SetSuggest(value); return *this;}
    inline SuggestResult& WithSuggest(SuggestModel&& value) { SetSuggest(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SuggestResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SuggestResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SuggestResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SuggestStatus m_status;

    SuggestModel m_suggest;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
