/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/ImageVersion.h>
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
namespace imagebuilder
{
namespace Model
{
  class AWS_IMAGEBUILDER_API ListImagesResult
  {
  public:
    ListImagesResult();
    ListImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The request ID that uniquely identifies this request. </p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The request ID that uniquely identifies this request. </p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The request ID that uniquely identifies this request. </p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The request ID that uniquely identifies this request. </p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The request ID that uniquely identifies this request. </p>
     */
    inline ListImagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request. </p>
     */
    inline ListImagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request. </p>
     */
    inline ListImagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The list of image semantic versions. </p>
     */
    inline const Aws::Vector<ImageVersion>& GetImageVersionList() const{ return m_imageVersionList; }

    /**
     * <p>The list of image semantic versions. </p>
     */
    inline void SetImageVersionList(const Aws::Vector<ImageVersion>& value) { m_imageVersionList = value; }

    /**
     * <p>The list of image semantic versions. </p>
     */
    inline void SetImageVersionList(Aws::Vector<ImageVersion>&& value) { m_imageVersionList = std::move(value); }

    /**
     * <p>The list of image semantic versions. </p>
     */
    inline ListImagesResult& WithImageVersionList(const Aws::Vector<ImageVersion>& value) { SetImageVersionList(value); return *this;}

    /**
     * <p>The list of image semantic versions. </p>
     */
    inline ListImagesResult& WithImageVersionList(Aws::Vector<ImageVersion>&& value) { SetImageVersionList(std::move(value)); return *this;}

    /**
     * <p>The list of image semantic versions. </p>
     */
    inline ListImagesResult& AddImageVersionList(const ImageVersion& value) { m_imageVersionList.push_back(value); return *this; }

    /**
     * <p>The list of image semantic versions. </p>
     */
    inline ListImagesResult& AddImageVersionList(ImageVersion&& value) { m_imageVersionList.push_back(std::move(value)); return *this; }


    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects. </p>
     */
    inline ListImagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects. </p>
     */
    inline ListImagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token used for paginated responses. When this is not empty, there
     * are additional elements that the service has not included in this request. Use
     * this token with the next request to retrieve additional objects. </p>
     */
    inline ListImagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::Vector<ImageVersion> m_imageVersionList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
