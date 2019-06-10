/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>When the solution performs AutoML (<code>performAutoML</code> is true in
   * <a>CreateSolution</a>), specifies the recipe that best optimized the specified
   * metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/AutoMLResult">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API AutoMLResult
  {
  public:
    AutoMLResult();
    AutoMLResult(Aws::Utils::Json::JsonView jsonValue);
    AutoMLResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the best recipe.</p>
     */
    inline const Aws::String& GetBestRecipeArn() const{ return m_bestRecipeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the best recipe.</p>
     */
    inline bool BestRecipeArnHasBeenSet() const { return m_bestRecipeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the best recipe.</p>
     */
    inline void SetBestRecipeArn(const Aws::String& value) { m_bestRecipeArnHasBeenSet = true; m_bestRecipeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the best recipe.</p>
     */
    inline void SetBestRecipeArn(Aws::String&& value) { m_bestRecipeArnHasBeenSet = true; m_bestRecipeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the best recipe.</p>
     */
    inline void SetBestRecipeArn(const char* value) { m_bestRecipeArnHasBeenSet = true; m_bestRecipeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the best recipe.</p>
     */
    inline AutoMLResult& WithBestRecipeArn(const Aws::String& value) { SetBestRecipeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the best recipe.</p>
     */
    inline AutoMLResult& WithBestRecipeArn(Aws::String&& value) { SetBestRecipeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the best recipe.</p>
     */
    inline AutoMLResult& WithBestRecipeArn(const char* value) { SetBestRecipeArn(value); return *this;}

  private:

    Aws::String m_bestRecipeArn;
    bool m_bestRecipeArnHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
