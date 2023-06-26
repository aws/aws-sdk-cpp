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
   * <p>The primary key for a KSDS data set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/PrimaryKey">AWS API
   * Reference</a></p>
   */
  class PrimaryKey
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API PrimaryKey();
    AWS_MAINFRAMEMODERNIZATION_API PrimaryKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API PrimaryKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A strictly positive integer value representing the length of the primary key.
     * </p>
     */
    inline int GetLength() const{ return m_length; }

    /**
     * <p>A strictly positive integer value representing the length of the primary key.
     * </p>
     */
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }

    /**
     * <p>A strictly positive integer value representing the length of the primary key.
     * </p>
     */
    inline void SetLength(int value) { m_lengthHasBeenSet = true; m_length = value; }

    /**
     * <p>A strictly positive integer value representing the length of the primary key.
     * </p>
     */
    inline PrimaryKey& WithLength(int value) { SetLength(value); return *this;}


    /**
     * <p>A name for the Primary Key.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the Primary Key.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the Primary Key.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the Primary Key.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the Primary Key.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the Primary Key.</p>
     */
    inline PrimaryKey& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the Primary Key.</p>
     */
    inline PrimaryKey& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the Primary Key.</p>
     */
    inline PrimaryKey& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A positive integer value representing the offset to mark the start of the
     * primary key in the record byte array.</p>
     */
    inline int GetOffset() const{ return m_offset; }

    /**
     * <p>A positive integer value representing the offset to mark the start of the
     * primary key in the record byte array.</p>
     */
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }

    /**
     * <p>A positive integer value representing the offset to mark the start of the
     * primary key in the record byte array.</p>
     */
    inline void SetOffset(int value) { m_offsetHasBeenSet = true; m_offset = value; }

    /**
     * <p>A positive integer value representing the offset to mark the start of the
     * primary key in the record byte array.</p>
     */
    inline PrimaryKey& WithOffset(int value) { SetOffset(value); return *this;}

  private:

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
