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
#include <aws/translate/Translate_EXPORTS.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>The term being translated by the custom terminology.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/Term">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSLATE_API Term
  {
  public:
    Term();
    Term(Aws::Utils::Json::JsonView jsonValue);
    Term& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source text of the term being translated by the custom terminology.</p>
     */
    inline const Aws::String& GetSourceText() const{ return m_sourceText; }

    /**
     * <p>The source text of the term being translated by the custom terminology.</p>
     */
    inline bool SourceTextHasBeenSet() const { return m_sourceTextHasBeenSet; }

    /**
     * <p>The source text of the term being translated by the custom terminology.</p>
     */
    inline void SetSourceText(const Aws::String& value) { m_sourceTextHasBeenSet = true; m_sourceText = value; }

    /**
     * <p>The source text of the term being translated by the custom terminology.</p>
     */
    inline void SetSourceText(Aws::String&& value) { m_sourceTextHasBeenSet = true; m_sourceText = std::move(value); }

    /**
     * <p>The source text of the term being translated by the custom terminology.</p>
     */
    inline void SetSourceText(const char* value) { m_sourceTextHasBeenSet = true; m_sourceText.assign(value); }

    /**
     * <p>The source text of the term being translated by the custom terminology.</p>
     */
    inline Term& WithSourceText(const Aws::String& value) { SetSourceText(value); return *this;}

    /**
     * <p>The source text of the term being translated by the custom terminology.</p>
     */
    inline Term& WithSourceText(Aws::String&& value) { SetSourceText(std::move(value)); return *this;}

    /**
     * <p>The source text of the term being translated by the custom terminology.</p>
     */
    inline Term& WithSourceText(const char* value) { SetSourceText(value); return *this;}


    /**
     * <p>The target text of the term being translated by the custom terminology.</p>
     */
    inline const Aws::String& GetTargetText() const{ return m_targetText; }

    /**
     * <p>The target text of the term being translated by the custom terminology.</p>
     */
    inline bool TargetTextHasBeenSet() const { return m_targetTextHasBeenSet; }

    /**
     * <p>The target text of the term being translated by the custom terminology.</p>
     */
    inline void SetTargetText(const Aws::String& value) { m_targetTextHasBeenSet = true; m_targetText = value; }

    /**
     * <p>The target text of the term being translated by the custom terminology.</p>
     */
    inline void SetTargetText(Aws::String&& value) { m_targetTextHasBeenSet = true; m_targetText = std::move(value); }

    /**
     * <p>The target text of the term being translated by the custom terminology.</p>
     */
    inline void SetTargetText(const char* value) { m_targetTextHasBeenSet = true; m_targetText.assign(value); }

    /**
     * <p>The target text of the term being translated by the custom terminology.</p>
     */
    inline Term& WithTargetText(const Aws::String& value) { SetTargetText(value); return *this;}

    /**
     * <p>The target text of the term being translated by the custom terminology.</p>
     */
    inline Term& WithTargetText(Aws::String&& value) { SetTargetText(std::move(value)); return *this;}

    /**
     * <p>The target text of the term being translated by the custom terminology.</p>
     */
    inline Term& WithTargetText(const char* value) { SetTargetText(value); return *this;}

  private:

    Aws::String m_sourceText;
    bool m_sourceTextHasBeenSet;

    Aws::String m_targetText;
    bool m_targetTextHasBeenSet;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
