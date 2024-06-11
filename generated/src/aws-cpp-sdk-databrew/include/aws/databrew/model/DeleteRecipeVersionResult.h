﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
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
namespace GlueDataBrew
{
namespace Model
{
  class DeleteRecipeVersionResult
  {
  public:
    AWS_GLUEDATABREW_API DeleteRecipeVersionResult();
    AWS_GLUEDATABREW_API DeleteRecipeVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUEDATABREW_API DeleteRecipeVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the recipe that was deleted.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DeleteRecipeVersionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DeleteRecipeVersionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DeleteRecipeVersionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the recipe that was deleted.</p>
     */
    inline const Aws::String& GetRecipeVersion() const{ return m_recipeVersion; }
    inline void SetRecipeVersion(const Aws::String& value) { m_recipeVersion = value; }
    inline void SetRecipeVersion(Aws::String&& value) { m_recipeVersion = std::move(value); }
    inline void SetRecipeVersion(const char* value) { m_recipeVersion.assign(value); }
    inline DeleteRecipeVersionResult& WithRecipeVersion(const Aws::String& value) { SetRecipeVersion(value); return *this;}
    inline DeleteRecipeVersionResult& WithRecipeVersion(Aws::String&& value) { SetRecipeVersion(std::move(value)); return *this;}
    inline DeleteRecipeVersionResult& WithRecipeVersion(const char* value) { SetRecipeVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteRecipeVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteRecipeVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteRecipeVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_recipeVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
