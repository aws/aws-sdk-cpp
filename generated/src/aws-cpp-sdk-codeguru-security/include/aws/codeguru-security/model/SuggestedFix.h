/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
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
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   * <p>Information about the suggested code fix to remediate a
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/SuggestedFix">AWS
   * API Reference</a></p>
   */
  class SuggestedFix
  {
  public:
    AWS_CODEGURUSECURITY_API SuggestedFix();
    AWS_CODEGURUSECURITY_API SuggestedFix(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API SuggestedFix& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The suggested code to add to your file. </p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The suggested code to add to your file. </p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The suggested code to add to your file. </p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The suggested code to add to your file. </p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The suggested code to add to your file. </p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The suggested code to add to your file. </p>
     */
    inline SuggestedFix& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The suggested code to add to your file. </p>
     */
    inline SuggestedFix& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The suggested code to add to your file. </p>
     */
    inline SuggestedFix& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>A description of the suggested code fix and why it is being suggested. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the suggested code fix and why it is being suggested. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the suggested code fix and why it is being suggested. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the suggested code fix and why it is being suggested. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the suggested code fix and why it is being suggested. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the suggested code fix and why it is being suggested. </p>
     */
    inline SuggestedFix& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the suggested code fix and why it is being suggested. </p>
     */
    inline SuggestedFix& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the suggested code fix and why it is being suggested. </p>
     */
    inline SuggestedFix& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
