/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about notes for a contact evaluation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationNote">AWS
   * API Reference</a></p>
   */
  class EvaluationNote
  {
  public:
    AWS_CONNECT_API EvaluationNote() = default;
    AWS_CONNECT_API EvaluationNote(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationNote& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The note for an item (section or question) in a contact evaluation.</p>
     *  <p>Even though a note in an evaluation can have up to 3072 chars, there
     * is also a limit on the total number of chars for all the notes in the evaluation
     * combined. Assuming there are N questions in the evaluation being submitted, then
     * the max char limit for all notes combined is N x 1024.</p> 
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    EvaluationNote& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
