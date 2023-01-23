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
  class DeleteContainerRecipeResult
  {
  public:
    AWS_IMAGEBUILDER_API DeleteContainerRecipeResult();
    AWS_IMAGEBUILDER_API DeleteContainerRecipeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API DeleteContainerRecipeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DeleteContainerRecipeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline DeleteContainerRecipeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline DeleteContainerRecipeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that was deleted.</p>
     */
    inline const Aws::String& GetContainerRecipeArn() const{ return m_containerRecipeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that was deleted.</p>
     */
    inline void SetContainerRecipeArn(const Aws::String& value) { m_containerRecipeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that was deleted.</p>
     */
    inline void SetContainerRecipeArn(Aws::String&& value) { m_containerRecipeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that was deleted.</p>
     */
    inline void SetContainerRecipeArn(const char* value) { m_containerRecipeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that was deleted.</p>
     */
    inline DeleteContainerRecipeResult& WithContainerRecipeArn(const Aws::String& value) { SetContainerRecipeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that was deleted.</p>
     */
    inline DeleteContainerRecipeResult& WithContainerRecipeArn(Aws::String&& value) { SetContainerRecipeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe that was deleted.</p>
     */
    inline DeleteContainerRecipeResult& WithContainerRecipeArn(const char* value) { SetContainerRecipeArn(value); return *this;}

  private:

    Aws::String m_requestId;

    Aws::String m_containerRecipeArn;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
