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
  class AWS_MEDIACONNECT_API UpdateFlowSourceResult
  {
  public:
    UpdateFlowSourceResult();
    UpdateFlowSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateFlowSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the flow that you want to update.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the flow that you want to update.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * The ARN of the flow that you want to update.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * The ARN of the flow that you want to update.
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * The ARN of the flow that you want to update.
     */
    inline UpdateFlowSourceResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the flow that you want to update.
     */
    inline UpdateFlowSourceResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the flow that you want to update.
     */
    inline UpdateFlowSourceResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The settings for the source of the flow.
     */
    inline const Source& GetSource() const{ return m_source; }

    /**
     * The settings for the source of the flow.
     */
    inline void SetSource(const Source& value) { m_source = value; }

    /**
     * The settings for the source of the flow.
     */
    inline void SetSource(Source&& value) { m_source = std::move(value); }

    /**
     * The settings for the source of the flow.
     */
    inline UpdateFlowSourceResult& WithSource(const Source& value) { SetSource(value); return *this;}

    /**
     * The settings for the source of the flow.
     */
    inline UpdateFlowSourceResult& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}

  private:

    Aws::String m_flowArn;

    Source m_source;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
