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
    AWS_MAINFRAMEMODERNIZATION_API AlternateKey();
    AWS_MAINFRAMEMODERNIZATION_API AlternateKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API AlternateKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the alternate key values are supposed to be unique for the
     * given data set.</p>
     */
    inline bool GetAllowDuplicates() const{ return m_allowDuplicates; }

    /**
     * <p>Indicates whether the alternate key values are supposed to be unique for the
     * given data set.</p>
     */
    inline bool AllowDuplicatesHasBeenSet() const { return m_allowDuplicatesHasBeenSet; }

    /**
     * <p>Indicates whether the alternate key values are supposed to be unique for the
     * given data set.</p>
     */
    inline void SetAllowDuplicates(bool value) { m_allowDuplicatesHasBeenSet = true; m_allowDuplicates = value; }

    /**
     * <p>Indicates whether the alternate key values are supposed to be unique for the
     * given data set.</p>
     */
    inline AlternateKey& WithAllowDuplicates(bool value) { SetAllowDuplicates(value); return *this;}


    /**
     * <p>A strictly positive integer value representing the length of the alternate
     * key.</p>
     */
    inline int GetLength() const{ return m_length; }

    /**
     * <p>A strictly positive integer value representing the length of the alternate
     * key.</p>
     */
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }

    /**
     * <p>A strictly positive integer value representing the length of the alternate
     * key.</p>
     */
    inline void SetLength(int value) { m_lengthHasBeenSet = true; m_length = value; }

    /**
     * <p>A strictly positive integer value representing the length of the alternate
     * key.</p>
     */
    inline AlternateKey& WithLength(int value) { SetLength(value); return *this;}


    /**
     * <p>The name of the alternate key.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the alternate key.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the alternate key.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the alternate key.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the alternate key.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the alternate key.</p>
     */
    inline AlternateKey& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the alternate key.</p>
     */
    inline AlternateKey& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the alternate key.</p>
     */
    inline AlternateKey& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A positive integer value representing the offset to mark the start of the
     * alternate key part in the record byte array.</p>
     */
    inline int GetOffset() const{ return m_offset; }

    /**
     * <p>A positive integer value representing the offset to mark the start of the
     * alternate key part in the record byte array.</p>
     */
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }

    /**
     * <p>A positive integer value representing the offset to mark the start of the
     * alternate key part in the record byte array.</p>
     */
    inline void SetOffset(int value) { m_offsetHasBeenSet = true; m_offset = value; }

    /**
     * <p>A positive integer value representing the offset to mark the start of the
     * alternate key part in the record byte array.</p>
     */
    inline AlternateKey& WithOffset(int value) { SetOffset(value); return *this;}

  private:

    bool m_allowDuplicates;
    bool m_allowDuplicatesHasBeenSet = false;

    int m_length;
    bool m_lengthHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_offset;
    bool m_offsetHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
