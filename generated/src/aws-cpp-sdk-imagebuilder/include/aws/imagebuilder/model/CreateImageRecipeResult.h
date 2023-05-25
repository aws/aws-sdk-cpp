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
  class CreateImageRecipeResult
  {
  public:
    AWS_IMAGEBUILDER_API CreateImageRecipeResult();
    AWS_IMAGEBUILDER_API CreateImageRecipeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API CreateImageRecipeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline CreateImageRecipeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline CreateImageRecipeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline CreateImageRecipeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline CreateImageRecipeResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline CreateImageRecipeResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline CreateImageRecipeResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that was created by this
     * request.</p>
     */
    inline const Aws::String& GetImageRecipeArn() const{ return m_imageRecipeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that was created by this
     * request.</p>
     */
    inline void SetImageRecipeArn(const Aws::String& value) { m_imageRecipeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that was created by this
     * request.</p>
     */
    inline void SetImageRecipeArn(Aws::String&& value) { m_imageRecipeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that was created by this
     * request.</p>
     */
    inline void SetImageRecipeArn(const char* value) { m_imageRecipeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that was created by this
     * request.</p>
     */
    inline CreateImageRecipeResult& WithImageRecipeArn(const Aws::String& value) { SetImageRecipeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that was created by this
     * request.</p>
     */
    inline CreateImageRecipeResult& WithImageRecipeArn(Aws::String&& value) { SetImageRecipeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe that was created by this
     * request.</p>
     */
    inline CreateImageRecipeResult& WithImageRecipeArn(const char* value) { SetImageRecipeArn(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::String m_clientToken;

    Aws::String m_imageRecipeArn;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
