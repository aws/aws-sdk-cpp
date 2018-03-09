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
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{
  class AWS_REKOGNITION_API CreateStreamProcessorResult
  {
  public:
    CreateStreamProcessorResult();
    CreateStreamProcessorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateStreamProcessorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ARN for the newly create stream processor.</p>
     */
    inline const Aws::String& GetStreamProcessorArn() const{ return m_streamProcessorArn; }

    /**
     * <p>ARN for the newly create stream processor.</p>
     */
    inline void SetStreamProcessorArn(const Aws::String& value) { m_streamProcessorArn = value; }

    /**
     * <p>ARN for the newly create stream processor.</p>
     */
    inline void SetStreamProcessorArn(Aws::String&& value) { m_streamProcessorArn = std::move(value); }

    /**
     * <p>ARN for the newly create stream processor.</p>
     */
    inline void SetStreamProcessorArn(const char* value) { m_streamProcessorArn.assign(value); }

    /**
     * <p>ARN for the newly create stream processor.</p>
     */
    inline CreateStreamProcessorResult& WithStreamProcessorArn(const Aws::String& value) { SetStreamProcessorArn(value); return *this;}

    /**
     * <p>ARN for the newly create stream processor.</p>
     */
    inline CreateStreamProcessorResult& WithStreamProcessorArn(Aws::String&& value) { SetStreamProcessorArn(std::move(value)); return *this;}

    /**
     * <p>ARN for the newly create stream processor.</p>
     */
    inline CreateStreamProcessorResult& WithStreamProcessorArn(const char* value) { SetStreamProcessorArn(value); return *this;}

  private:

    Aws::String m_streamProcessorArn;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
