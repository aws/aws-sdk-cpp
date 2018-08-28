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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/SamplingRuleRecord.h>
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
namespace XRay
{
namespace Model
{
  class AWS_XRAY_API GetSamplingRulesResult
  {
  public:
    GetSamplingRulesResult();
    GetSamplingRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSamplingRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Rule definitions and metadata.</p>
     */
    inline const Aws::Vector<SamplingRuleRecord>& GetSamplingRuleRecords() const{ return m_samplingRuleRecords; }

    /**
     * <p>Rule definitions and metadata.</p>
     */
    inline void SetSamplingRuleRecords(const Aws::Vector<SamplingRuleRecord>& value) { m_samplingRuleRecords = value; }

    /**
     * <p>Rule definitions and metadata.</p>
     */
    inline void SetSamplingRuleRecords(Aws::Vector<SamplingRuleRecord>&& value) { m_samplingRuleRecords = std::move(value); }

    /**
     * <p>Rule definitions and metadata.</p>
     */
    inline GetSamplingRulesResult& WithSamplingRuleRecords(const Aws::Vector<SamplingRuleRecord>& value) { SetSamplingRuleRecords(value); return *this;}

    /**
     * <p>Rule definitions and metadata.</p>
     */
    inline GetSamplingRulesResult& WithSamplingRuleRecords(Aws::Vector<SamplingRuleRecord>&& value) { SetSamplingRuleRecords(std::move(value)); return *this;}

    /**
     * <p>Rule definitions and metadata.</p>
     */
    inline GetSamplingRulesResult& AddSamplingRuleRecords(const SamplingRuleRecord& value) { m_samplingRuleRecords.push_back(value); return *this; }

    /**
     * <p>Rule definitions and metadata.</p>
     */
    inline GetSamplingRulesResult& AddSamplingRuleRecords(SamplingRuleRecord&& value) { m_samplingRuleRecords.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token. Not used.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetSamplingRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetSamplingRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetSamplingRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SamplingRuleRecord> m_samplingRuleRecords;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
