﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/model/RecipeVersionErrorDetail.h>
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
namespace GlueDataBrew
{
namespace Model
{
  class BatchDeleteRecipeVersionResult
  {
  public:
    AWS_GLUEDATABREW_API BatchDeleteRecipeVersionResult();
    AWS_GLUEDATABREW_API BatchDeleteRecipeVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API BatchDeleteRecipeVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the recipe that was modified.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline BatchDeleteRecipeVersionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline BatchDeleteRecipeVersionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline BatchDeleteRecipeVersionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Errors, if any, that occurred while attempting to delete the recipe
     * versions.</p>
     */
    inline const Aws::Vector<RecipeVersionErrorDetail>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<RecipeVersionErrorDetail>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<RecipeVersionErrorDetail>&& value) { m_errors = std::move(value); }
    inline BatchDeleteRecipeVersionResult& WithErrors(const Aws::Vector<RecipeVersionErrorDetail>& value) { SetErrors(value); return *this;}
    inline BatchDeleteRecipeVersionResult& WithErrors(Aws::Vector<RecipeVersionErrorDetail>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDeleteRecipeVersionResult& AddErrors(const RecipeVersionErrorDetail& value) { m_errors.push_back(value); return *this; }
    inline BatchDeleteRecipeVersionResult& AddErrors(RecipeVersionErrorDetail&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteRecipeVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteRecipeVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteRecipeVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::Vector<RecipeVersionErrorDetail> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
