/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>Defines an alternate key. This value is optional. A legacy data set might not
   * have any alternate key defined but if those alternate keys definitions exist,
   * provide them, as some applications will make use of them.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/AlternateKey">AWS API
   * Reference</a></p>
   */
  class AlternateKey
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API AlternateKey() = default;
    AWS_MAINFRAMEMODERNIZATION_API AlternateKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API AlternateKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the alternate key values are supposed to be unique for the
     * given data set.</p>
     */
    inline bool GetAllowDuplicates() const { return m_allowDuplicates; }
    inline bool AllowDuplicatesHasBeenSet() const { return m_allowDuplicatesHasBeenSet; }
    inline void SetAllowDuplicates(bool value) { m_allowDuplicatesHasBeenSet = true; m_allowDuplicates = value; }
    inline AlternateKey& WithAllowDuplicates(bool value) { SetAllowDuplicates(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A strictly positive integer value representing the length of the alternate
     * key.</p>
     */
    inline int GetLength() const { return m_length; }
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }
    inline void SetLength(int value) { m_lengthHasBeenSet = true; m_length = value; }
    inline AlternateKey& WithLength(int value) { SetLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the alternate key.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AlternateKey& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A positive integer value representing the offset to mark the start of the
     * alternate key part in the record byte array.</p>
     */
    inline int GetOffset() const { return m_offset; }
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }
    inline void SetOffset(int value) { m_offsetHasBeenSet = true; m_offset = value; }
    inline AlternateKey& WithOffset(int value) { SetOffset(value); return *this;}
    ///@}
  private:

    bool m_allowDuplicates{false};
    bool m_allowDuplicatesHasBeenSet = false;

    int m_length{0};
    bool m_lengthHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_offset{0};
    bool m_offsetHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
