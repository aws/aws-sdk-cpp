/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DetectTextResult
  {
  public:
    AWS_REKOGNITION_API DetectTextResult();
    AWS_REKOGNITION_API DetectTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DetectTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    /**
     * <p>The model version used to detect text.</p>
     */
    inline const Aws::String& GetTextModelVersion() const{ return m_textModelVersion; }

    /**
     * <p>The model version used to detect text.</p>
     */
    inline void SetTextModelVersion(const Aws::String& value) { m_textModelVersion = value; }

    /**
     * <p>The model version used to detect text.</p>
     */
    inline void SetTextModelVersion(Aws::String&& value) { m_textModelVersion = std::move(value); }

    /**
     * <p>The model version used to detect text.</p>
     */
    inline void SetTextModelVersion(const char* value) { m_textModelVersion.assign(value); }

    /**
     * <p>The model version used to detect text.</p>
     */
    inline DetectTextResult& WithTextModelVersion(const Aws::String& value) { SetTextModelVersion(value); return *this;}

    /**
     * <p>The model version used to detect text.</p>
     */
    inline DetectTextResult& WithTextModelVersion(Aws::String&& value) { SetTextModelVersion(std::move(value)); return *this;}

    /**
     * <p>The model version used to detect text.</p>
     */
    inline DetectTextResult& WithTextModelVersion(const char* value) { SetTextModelVersion(value); return *this;}

  private:

    Aws::Vector<TextDetection> m_textDetections;

    Aws::String m_textModelVersion;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
