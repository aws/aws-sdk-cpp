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
    AWS_IMAGEBUILDER_API PutImageRecipePolicyResult();
    AWS_IMAGEBUILDER_API PutImageRecipePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API PutImageRecipePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutImageRecipePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutImageRecipePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutImageRecipePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that this policy was
     * applied to.</p>
     */
    inline const Aws::String& GetImageRecipeArn() const{ return m_imageRecipeArn; }
    inline void SetImageRecipeArn(const Aws::String& value) { m_imageRecipeArn = value; }
    inline void SetImageRecipeArn(Aws::String&& value) { m_imageRecipeArn = std::move(value); }
    inline void SetImageRecipeArn(const char* value) { m_imageRecipeArn.assign(value); }
    inline PutImageRecipePolicyResult& WithImageRecipeArn(const Aws::String& value) { SetImageRecipeArn(value); return *this;}
    inline PutImageRecipePolicyResult& WithImageRecipeArn(Aws::String&& value) { SetImageRecipeArn(std::move(value)); return *this;}
    inline PutImageRecipePolicyResult& WithImageRecipeArn(const char* value) { SetImageRecipeArn(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::String m_imageRecipeArn;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
