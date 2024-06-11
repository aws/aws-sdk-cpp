/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents any errors encountered when attempting to delete multiple recipe
   * versions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/RecipeVersionErrorDetail">AWS
   * API Reference</a></p>
   */
  class RecipeVersionErrorDetail
  {
  public:
    AWS_GLUEDATABREW_API RecipeVersionErrorDetail();
    AWS_GLUEDATABREW_API RecipeVersionErrorDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API RecipeVersionErrorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The HTTP status code for the error.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline RecipeVersionErrorDetail& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline RecipeVersionErrorDetail& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline RecipeVersionErrorDetail& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline RecipeVersionErrorDetail& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline RecipeVersionErrorDetail& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline RecipeVersionErrorDetail& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the recipe version associated with this error.</p>
     */
    inline const Aws::String& GetRecipeVersion() const{ return m_recipeVersion; }
    inline bool RecipeVersionHasBeenSet() const { return m_recipeVersionHasBeenSet; }
    inline void SetRecipeVersion(const Aws::String& value) { m_recipeVersionHasBeenSet = true; m_recipeVersion = value; }
    inline void SetRecipeVersion(Aws::String&& value) { m_recipeVersionHasBeenSet = true; m_recipeVersion = std::move(value); }
    inline void SetRecipeVersion(const char* value) { m_recipeVersionHasBeenSet = true; m_recipeVersion.assign(value); }
    inline RecipeVersionErrorDetail& WithRecipeVersion(const Aws::String& value) { SetRecipeVersion(value); return *this;}
    inline RecipeVersionErrorDetail& WithRecipeVersion(Aws::String&& value) { SetRecipeVersion(std::move(value)); return *this;}
    inline RecipeVersionErrorDetail& WithRecipeVersion(const char* value) { SetRecipeVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_recipeVersion;
    bool m_recipeVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
