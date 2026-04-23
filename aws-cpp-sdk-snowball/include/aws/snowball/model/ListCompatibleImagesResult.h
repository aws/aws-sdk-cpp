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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/CompatibleImage.h>
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
namespace Snowball
{
namespace Model
{
  class AWS_SNOWBALL_API ListCompatibleImagesResult
  {
  public:
    ListCompatibleImagesResult();
    ListCompatibleImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCompatibleImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A JSON-formatted object that describes a compatible AMI.</p>
     */
    inline const Aws::Vector<CompatibleImage>& GetCompatibleImages() const{ return m_compatibleImages; }

    /**
     * <p>A JSON-formatted object that describes a compatible AMI.</p>
     */
    inline void SetCompatibleImages(const Aws::Vector<CompatibleImage>& value) { m_compatibleImages = value; }

    /**
     * <p>A JSON-formatted object that describes a compatible AMI.</p>
     */
    inline void SetCompatibleImages(Aws::Vector<CompatibleImage>&& value) { m_compatibleImages = std::move(value); }

    /**
     * <p>A JSON-formatted object that describes a compatible AMI.</p>
     */
    inline ListCompatibleImagesResult& WithCompatibleImages(const Aws::Vector<CompatibleImage>& value) { SetCompatibleImages(value); return *this;}

    /**
     * <p>A JSON-formatted object that describes a compatible AMI.</p>
     */
    inline ListCompatibleImagesResult& WithCompatibleImages(Aws::Vector<CompatibleImage>&& value) { SetCompatibleImages(std::move(value)); return *this;}

    /**
     * <p>A JSON-formatted object that describes a compatible AMI.</p>
     */
    inline ListCompatibleImagesResult& AddCompatibleImages(const CompatibleImage& value) { m_compatibleImages.push_back(value); return *this; }

    /**
     * <p>A JSON-formatted object that describes a compatible AMI.</p>
     */
    inline ListCompatibleImagesResult& AddCompatibleImages(CompatibleImage&& value) { m_compatibleImages.push_back(std::move(value)); return *this; }


    /**
     * <p>Because HTTP requests are stateless, this is the starting point for your next
     * list of returned images.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Because HTTP requests are stateless, this is the starting point for your next
     * list of returned images.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Because HTTP requests are stateless, this is the starting point for your next
     * list of returned images.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Because HTTP requests are stateless, this is the starting point for your next
     * list of returned images.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Because HTTP requests are stateless, this is the starting point for your next
     * list of returned images.</p>
     */
    inline ListCompatibleImagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Because HTTP requests are stateless, this is the starting point for your next
     * list of returned images.</p>
     */
    inline ListCompatibleImagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Because HTTP requests are stateless, this is the starting point for your next
     * list of returned images.</p>
     */
    inline ListCompatibleImagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CompatibleImage> m_compatibleImages;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
