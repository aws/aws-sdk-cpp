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
#include <aws/rekognition/model/ComparedSourceImageFace.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/CompareFacesMatch.h>
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
  class AWS_REKOGNITION_API CompareFacesResult
  {
  public:
    CompareFacesResult();
    CompareFacesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CompareFacesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The face from the source image that was used for comparison.</p>
     */
    inline const ComparedSourceImageFace& GetSourceImageFace() const{ return m_sourceImageFace; }

    /**
     * <p>The face from the source image that was used for comparison.</p>
     */
    inline void SetSourceImageFace(const ComparedSourceImageFace& value) { m_sourceImageFace = value; }

    /**
     * <p>The face from the source image that was used for comparison.</p>
     */
    inline void SetSourceImageFace(ComparedSourceImageFace&& value) { m_sourceImageFace = std::move(value); }

    /**
     * <p>The face from the source image that was used for comparison.</p>
     */
    inline CompareFacesResult& WithSourceImageFace(const ComparedSourceImageFace& value) { SetSourceImageFace(value); return *this;}

    /**
     * <p>The face from the source image that was used for comparison.</p>
     */
    inline CompareFacesResult& WithSourceImageFace(ComparedSourceImageFace&& value) { SetSourceImageFace(std::move(value)); return *this;}

    /**
     * <p>Provides an array of <code>CompareFacesMatch</code> objects. Each object
     * provides the bounding box, confidence that the bounding box contains a face, and
     * the similarity between the face in the bounding box and the face in the source
     * image.</p>
     */
    inline const Aws::Vector<CompareFacesMatch>& GetFaceMatches() const{ return m_faceMatches; }

    /**
     * <p>Provides an array of <code>CompareFacesMatch</code> objects. Each object
     * provides the bounding box, confidence that the bounding box contains a face, and
     * the similarity between the face in the bounding box and the face in the source
     * image.</p>
     */
    inline void SetFaceMatches(const Aws::Vector<CompareFacesMatch>& value) { m_faceMatches = value; }

    /**
     * <p>Provides an array of <code>CompareFacesMatch</code> objects. Each object
     * provides the bounding box, confidence that the bounding box contains a face, and
     * the similarity between the face in the bounding box and the face in the source
     * image.</p>
     */
    inline void SetFaceMatches(Aws::Vector<CompareFacesMatch>&& value) { m_faceMatches = std::move(value); }

    /**
     * <p>Provides an array of <code>CompareFacesMatch</code> objects. Each object
     * provides the bounding box, confidence that the bounding box contains a face, and
     * the similarity between the face in the bounding box and the face in the source
     * image.</p>
     */
    inline CompareFacesResult& WithFaceMatches(const Aws::Vector<CompareFacesMatch>& value) { SetFaceMatches(value); return *this;}

    /**
     * <p>Provides an array of <code>CompareFacesMatch</code> objects. Each object
     * provides the bounding box, confidence that the bounding box contains a face, and
     * the similarity between the face in the bounding box and the face in the source
     * image.</p>
     */
    inline CompareFacesResult& WithFaceMatches(Aws::Vector<CompareFacesMatch>&& value) { SetFaceMatches(std::move(value)); return *this;}

    /**
     * <p>Provides an array of <code>CompareFacesMatch</code> objects. Each object
     * provides the bounding box, confidence that the bounding box contains a face, and
     * the similarity between the face in the bounding box and the face in the source
     * image.</p>
     */
    inline CompareFacesResult& AddFaceMatches(const CompareFacesMatch& value) { m_faceMatches.push_back(value); return *this; }

    /**
     * <p>Provides an array of <code>CompareFacesMatch</code> objects. Each object
     * provides the bounding box, confidence that the bounding box contains a face, and
     * the similarity between the face in the bounding box and the face in the source
     * image.</p>
     */
    inline CompareFacesResult& AddFaceMatches(CompareFacesMatch&& value) { m_faceMatches.push_back(std::move(value)); return *this; }

  private:
    ComparedSourceImageFace m_sourceImageFace;
    Aws::Vector<CompareFacesMatch> m_faceMatches;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
