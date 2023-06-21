/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>A suggested fix for a vulnerability in your Lambda function
   * code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/SuggestedFix">AWS
   * API Reference</a></p>
   */
  class SuggestedFix
  {
  public:
    AWS_INSPECTOR2_API SuggestedFix();
    AWS_INSPECTOR2_API SuggestedFix(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API SuggestedFix& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fix's code.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The fix's code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The fix's code.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The fix's code.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The fix's code.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The fix's code.</p>
     */
    inline SuggestedFix& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The fix's code.</p>
     */
    inline SuggestedFix& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The fix's code.</p>
     */
    inline SuggestedFix& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The fix's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The fix's description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The fix's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The fix's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The fix's description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The fix's description.</p>
     */
    inline SuggestedFix& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The fix's description.</p>
     */
    inline SuggestedFix& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The fix's description.</p>
     */
    inline SuggestedFix& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
