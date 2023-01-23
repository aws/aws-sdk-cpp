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
  class CreateContainerRecipeResult
  {
  public:
    AWS_IMAGEBUILDER_API CreateContainerRecipeResult();
    AWS_IMAGEBUILDER_API CreateContainerRecipeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API CreateContainerRecipeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateContainerRecipeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline CreateContainerRecipeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline CreateContainerRecipeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The client token used to make this request idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>The client token used to make this request idempotent.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>The client token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>The client token used to make this request idempotent.</p>
     */
    inline CreateContainerRecipeResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token used to make this request idempotent.</p>
     */
    inline CreateContainerRecipeResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token used to make this request idempotent.</p>
     */
    inline CreateContainerRecipeResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Returns the Amazon Resource Name (ARN) of the container recipe that the
     * request created.</p>
     */
    inline const Aws::String& GetContainerRecipeArn() const{ return m_containerRecipeArn; }

    /**
     * <p>Returns the Amazon Resource Name (ARN) of the container recipe that the
     * request created.</p>
     */
    inline void SetContainerRecipeArn(const Aws::String& value) { m_containerRecipeArn = value; }

    /**
     * <p>Returns the Amazon Resource Name (ARN) of the container recipe that the
     * request created.</p>
     */
    inline void SetContainerRecipeArn(Aws::String&& value) { m_containerRecipeArn = std::move(value); }

    /**
     * <p>Returns the Amazon Resource Name (ARN) of the container recipe that the
     * request created.</p>
     */
    inline void SetContainerRecipeArn(const char* value) { m_containerRecipeArn.assign(value); }

    /**
     * <p>Returns the Amazon Resource Name (ARN) of the container recipe that the
     * request created.</p>
     */
    inline CreateContainerRecipeResult& WithContainerRecipeArn(const Aws::String& value) { SetContainerRecipeArn(value); return *this;}

    /**
     * <p>Returns the Amazon Resource Name (ARN) of the container recipe that the
     * request created.</p>
     */
    inline CreateContainerRecipeResult& WithContainerRecipeArn(Aws::String&& value) { SetContainerRecipeArn(std::move(value)); return *this;}

    /**
     * <p>Returns the Amazon Resource Name (ARN) of the container recipe that the
     * request created.</p>
     */
    inline CreateContainerRecipeResult& WithContainerRecipeArn(const char* value) { SetContainerRecipeArn(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::String m_clientToken;

    Aws::String m_containerRecipeArn;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
