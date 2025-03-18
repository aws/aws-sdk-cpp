/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The code execution output in JSON format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StatementOutputData">AWS
   * API Reference</a></p>
   */
  class StatementOutputData
  {
  public:
    AWS_GLUE_API StatementOutputData() = default;
    AWS_GLUE_API StatementOutputData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API StatementOutputData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code execution output in text format.</p>
     */
    inline const Aws::String& GetTextPlain() const { return m_textPlain; }
    inline bool TextPlainHasBeenSet() const { return m_textPlainHasBeenSet; }
    template<typename TextPlainT = Aws::String>
    void SetTextPlain(TextPlainT&& value) { m_textPlainHasBeenSet = true; m_textPlain = std::forward<TextPlainT>(value); }
    template<typename TextPlainT = Aws::String>
    StatementOutputData& WithTextPlain(TextPlainT&& value) { SetTextPlain(std::forward<TextPlainT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_textPlain;
    bool m_textPlainHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
