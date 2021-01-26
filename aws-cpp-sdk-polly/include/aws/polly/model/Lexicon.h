/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
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
namespace Polly
{
namespace Model
{

  /**
   * <p>Provides lexicon name and lexicon content in string format. For more
   * information, see <a
   * href="https://www.w3.org/TR/pronunciation-lexicon/">Pronunciation Lexicon
   * Specification (PLS) Version 1.0</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/Lexicon">AWS API
   * Reference</a></p>
   */
  class AWS_POLLY_API Lexicon
  {
  public:
    Lexicon();
    Lexicon(Aws::Utils::Json::JsonView jsonValue);
    Lexicon& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lexicon content in string format. The content of a lexicon must be in PLS
     * format.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>Lexicon content in string format. The content of a lexicon must be in PLS
     * format.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>Lexicon content in string format. The content of a lexicon must be in PLS
     * format.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>Lexicon content in string format. The content of a lexicon must be in PLS
     * format.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>Lexicon content in string format. The content of a lexicon must be in PLS
     * format.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>Lexicon content in string format. The content of a lexicon must be in PLS
     * format.</p>
     */
    inline Lexicon& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>Lexicon content in string format. The content of a lexicon must be in PLS
     * format.</p>
     */
    inline Lexicon& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>Lexicon content in string format. The content of a lexicon must be in PLS
     * format.</p>
     */
    inline Lexicon& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>Name of the lexicon.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the lexicon.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the lexicon.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the lexicon.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the lexicon.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the lexicon.</p>
     */
    inline Lexicon& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the lexicon.</p>
     */
    inline Lexicon& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the lexicon.</p>
     */
    inline Lexicon& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
