/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ContainerRecipe.h>
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
  class GetContainerRecipeResult
  {
  public:
    AWS_IMAGEBUILDER_API GetContainerRecipeResult();
    AWS_IMAGEBUILDER_API GetContainerRecipeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetContainerRecipeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetContainerRecipeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetContainerRecipeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetContainerRecipeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container recipe object that is returned.</p>
     */
    inline const ContainerRecipe& GetContainerRecipe() const{ return m_containerRecipe; }
    inline void SetContainerRecipe(const ContainerRecipe& value) { m_containerRecipe = value; }
    inline void SetContainerRecipe(ContainerRecipe&& value) { m_containerRecipe = std::move(value); }
    inline GetContainerRecipeResult& WithContainerRecipe(const ContainerRecipe& value) { SetContainerRecipe(value); return *this;}
    inline GetContainerRecipeResult& WithContainerRecipe(ContainerRecipe&& value) { SetContainerRecipe(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    ContainerRecipe m_containerRecipe;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
