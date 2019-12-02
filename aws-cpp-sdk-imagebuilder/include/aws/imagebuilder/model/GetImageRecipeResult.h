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
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ImageRecipe.h>
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
  class AWS_IMAGEBUILDER_API GetImageRecipeResult
  {
  public:
    GetImageRecipeResult();
    GetImageRecipeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetImageRecipeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline GetImageRecipeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline GetImageRecipeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p> The request ID that uniquely identifies this request. </p>
     */
    inline GetImageRecipeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p> The image recipe object. </p>
     */
    inline const ImageRecipe& GetImageRecipe() const{ return m_imageRecipe; }

    /**
     * <p> The image recipe object. </p>
     */
    inline void SetImageRecipe(const ImageRecipe& value) { m_imageRecipe = value; }

    /**
     * <p> The image recipe object. </p>
     */
    inline void SetImageRecipe(ImageRecipe&& value) { m_imageRecipe = std::move(value); }

    /**
     * <p> The image recipe object. </p>
     */
    inline GetImageRecipeResult& WithImageRecipe(const ImageRecipe& value) { SetImageRecipe(value); return *this;}

    /**
     * <p> The image recipe object. </p>
     */
    inline GetImageRecipeResult& WithImageRecipe(ImageRecipe&& value) { SetImageRecipe(std::move(value)); return *this;}

  private:

    Aws::String m_requestId;

    ImageRecipe m_imageRecipe;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
