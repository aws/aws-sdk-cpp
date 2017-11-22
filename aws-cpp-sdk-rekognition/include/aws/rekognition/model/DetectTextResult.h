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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/TextDetection.h>
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
  class AWS_REKOGNITION_API DetectTextResult
  {
  public:
    DetectTextResult();
    DetectTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DetectTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of text that was detected in the input image.</p>
     */
    inline const Aws::Vector<TextDetection>& GetTextDetections() const{ return m_textDetections; }

    /**
     * <p>An array of text that was detected in the input image.</p>
     */
    inline void SetTextDetections(const Aws::Vector<TextDetection>& value) { m_textDetections = value; }

    /**
     * <p>An array of text that was detected in the input image.</p>
     */
    inline void SetTextDetections(Aws::Vector<TextDetection>&& value) { m_textDetections = std::move(value); }

    /**
     * <p>An array of text that was detected in the input image.</p>
     */
    inline DetectTextResult& WithTextDetections(const Aws::Vector<TextDetection>& value) { SetTextDetections(value); return *this;}

    /**
     * <p>An array of text that was detected in the input image.</p>
     */
    inline DetectTextResult& WithTextDetections(Aws::Vector<TextDetection>&& value) { SetTextDetections(std::move(value)); return *this;}

    /**
     * <p>An array of text that was detected in the input image.</p>
     */
    inline DetectTextResult& AddTextDetections(const TextDetection& value) { m_textDetections.push_back(value); return *this; }

    /**
     * <p>An array of text that was detected in the input image.</p>
     */
    inline DetectTextResult& AddTextDetections(TextDetection&& value) { m_textDetections.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TextDetection> m_textDetections;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
