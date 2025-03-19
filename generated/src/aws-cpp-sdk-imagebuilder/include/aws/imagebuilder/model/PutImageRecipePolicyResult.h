/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
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
namespace imagebuilder
{
namespace Model
{
  class PutImageRecipePolicyResult
  {
  public:
    AWS_IMAGEBUILDER_API PutImageRecipePolicyResult() = default;
    AWS_IMAGEBUILDER_API PutImageRecipePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API PutImageRecipePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutImageRecipePolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that this policy was
     * applied to.</p>
     */
    inline const Aws::String& GetImageRecipeArn() const { return m_imageRecipeArn; }
    template<typename ImageRecipeArnT = Aws::String>
    void SetImageRecipeArn(ImageRecipeArnT&& value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn = std::forward<ImageRecipeArnT>(value); }
    template<typename ImageRecipeArnT = Aws::String>
    PutImageRecipePolicyResult& WithImageRecipeArn(ImageRecipeArnT&& value) { SetImageRecipeArn(std::forward<ImageRecipeArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_imageRecipeArn;
    bool m_imageRecipeArnHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
