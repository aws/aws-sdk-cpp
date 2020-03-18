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
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/Source.h>
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
namespace MediaConnect
{
namespace Model
{
  class AWS_MEDIACONNECT_API AddFlowSourcesResult
  {
  public:
    AddFlowSourcesResult();
    AddFlowSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AddFlowSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the flow that these sources were added to.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the flow that these sources were added to.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * The ARN of the flow that these sources were added to.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * The ARN of the flow that these sources were added to.
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * The ARN of the flow that these sources were added to.
     */
    inline AddFlowSourcesResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the flow that these sources were added to.
     */
    inline AddFlowSourcesResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the flow that these sources were added to.
     */
    inline AddFlowSourcesResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The details of the newly added sources.
     */
    inline const Aws::Vector<Source>& GetSources() const{ return m_sources; }

    /**
     * The details of the newly added sources.
     */
    inline void SetSources(const Aws::Vector<Source>& value) { m_sources = value; }

    /**
     * The details of the newly added sources.
     */
    inline void SetSources(Aws::Vector<Source>&& value) { m_sources = std::move(value); }

    /**
     * The details of the newly added sources.
     */
    inline AddFlowSourcesResult& WithSources(const Aws::Vector<Source>& value) { SetSources(value); return *this;}

    /**
     * The details of the newly added sources.
     */
    inline AddFlowSourcesResult& WithSources(Aws::Vector<Source>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * The details of the newly added sources.
     */
    inline AddFlowSourcesResult& AddSources(const Source& value) { m_sources.push_back(value); return *this; }

    /**
     * The details of the newly added sources.
     */
    inline AddFlowSourcesResult& AddSources(Source&& value) { m_sources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_flowArn;

    Aws::Vector<Source> m_sources;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
