/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetImageRecipeResult
  {
  public:
    AWS_IMAGEBUILDER_API GetImageRecipeResult() = default;
    AWS_IMAGEBUILDER_API GetImageRecipeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetImageRecipeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetImageRecipeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image recipe object.</p>
     */
    inline const ImageRecipe& GetImageRecipe() const { return m_imageRecipe; }
    template<typename ImageRecipeT = ImageRecipe>
    void SetImageRecipe(ImageRecipeT&& value) { m_imageRecipeHasBeenSet = true; m_imageRecipe = std::forward<ImageRecipeT>(value); }
    template<typename ImageRecipeT = ImageRecipe>
    GetImageRecipeResult& WithImageRecipe(ImageRecipeT&& value) { SetImageRecipe(std::forward<ImageRecipeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    ImageRecipe m_imageRecipe;
    bool m_imageRecipeHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
