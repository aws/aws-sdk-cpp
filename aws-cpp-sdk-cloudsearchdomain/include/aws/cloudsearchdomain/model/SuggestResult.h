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
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/cloudsearchdomain/model/SuggestStatus.h>
#include <aws/cloudsearchdomain/model/SuggestModel.h>
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
  class AWS_CLOUDSEARCHDOMAIN_API SuggestResult
  {
  public:
    SuggestResult();
    SuggestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SuggestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of a <code>SuggestRequest</code>. Contains the resource ID
     * (<code>rid</code>) and how long it took to process the request
     * (<code>timems</code>).</p>
     */
    inline const SuggestStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a <code>SuggestRequest</code>. Contains the resource ID
     * (<code>rid</code>) and how long it took to process the request
     * (<code>timems</code>).</p>
     */
    inline void SetStatus(const SuggestStatus& value) { m_status = value; }

    /**
     * <p>The status of a <code>SuggestRequest</code>. Contains the resource ID
     * (<code>rid</code>) and how long it took to process the request
     * (<code>timems</code>).</p>
     */
    inline void SetStatus(SuggestStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of a <code>SuggestRequest</code>. Contains the resource ID
     * (<code>rid</code>) and how long it took to process the request
     * (<code>timems</code>).</p>
     */
    inline SuggestResult& WithStatus(const SuggestStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a <code>SuggestRequest</code>. Contains the resource ID
     * (<code>rid</code>) and how long it took to process the request
     * (<code>timems</code>).</p>
     */
    inline SuggestResult& WithStatus(SuggestStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Container for the matching search suggestion information.</p>
     */
    inline const SuggestModel& GetSuggest() const{ return m_suggest; }

    /**
     * <p>Container for the matching search suggestion information.</p>
     */
    inline void SetSuggest(const SuggestModel& value) { m_suggest = value; }

    /**
     * <p>Container for the matching search suggestion information.</p>
     */
    inline void SetSuggest(SuggestModel&& value) { m_suggest = std::move(value); }

    /**
     * <p>Container for the matching search suggestion information.</p>
     */
    inline SuggestResult& WithSuggest(const SuggestModel& value) { SetSuggest(value); return *this;}

    /**
     * <p>Container for the matching search suggestion information.</p>
     */
    inline SuggestResult& WithSuggest(SuggestModel&& value) { SetSuggest(std::move(value)); return *this;}

  private:

    SuggestStatus m_status;

    SuggestModel m_suggest;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
