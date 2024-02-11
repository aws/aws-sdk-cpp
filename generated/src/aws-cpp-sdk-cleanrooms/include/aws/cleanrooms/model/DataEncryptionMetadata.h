/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>

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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The settings for client-side encryption for cryptographic
   * computing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DataEncryptionMetadata">AWS
   * API Reference</a></p>
   */
  class DataEncryptionMetadata
  {
  public:
    AWS_CLEANROOMS_API DataEncryptionMetadata();
    AWS_CLEANROOMS_API DataEncryptionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API DataEncryptionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether encrypted tables can contain cleartext data
     * (<code>TRUE</code>) or are to cryptographically process every column
     * (<code>FALSE</code>).</p>
     */
    inline bool GetAllowCleartext() const{ return m_allowCleartext; }

    /**
     * <p>Indicates whether encrypted tables can contain cleartext data
     * (<code>TRUE</code>) or are to cryptographically process every column
     * (<code>FALSE</code>).</p>
     */
    inline bool AllowCleartextHasBeenSet() const { return m_allowCleartextHasBeenSet; }

    /**
     * <p>Indicates whether encrypted tables can contain cleartext data
     * (<code>TRUE</code>) or are to cryptographically process every column
     * (<code>FALSE</code>).</p>
     */
    inline void SetAllowCleartext(bool value) { m_allowCleartextHasBeenSet = true; m_allowCleartext = value; }

    /**
     * <p>Indicates whether encrypted tables can contain cleartext data
     * (<code>TRUE</code>) or are to cryptographically process every column
     * (<code>FALSE</code>).</p>
     */
    inline DataEncryptionMetadata& WithAllowCleartext(bool value) { SetAllowCleartext(value); return *this;}


    /**
     * <p>Indicates whether Fingerprint columns can contain duplicate entries
     * (<code>TRUE</code>) or are to contain only non-repeated values
     * (<code>FALSE</code>).</p>
     */
    inline bool GetAllowDuplicates() const{ return m_allowDuplicates; }

    /**
     * <p>Indicates whether Fingerprint columns can contain duplicate entries
     * (<code>TRUE</code>) or are to contain only non-repeated values
     * (<code>FALSE</code>).</p>
     */
    inline bool AllowDuplicatesHasBeenSet() const { return m_allowDuplicatesHasBeenSet; }

    /**
     * <p>Indicates whether Fingerprint columns can contain duplicate entries
     * (<code>TRUE</code>) or are to contain only non-repeated values
     * (<code>FALSE</code>).</p>
     */
    inline void SetAllowDuplicates(bool value) { m_allowDuplicatesHasBeenSet = true; m_allowDuplicates = value; }

    /**
     * <p>Indicates whether Fingerprint columns can contain duplicate entries
     * (<code>TRUE</code>) or are to contain only non-repeated values
     * (<code>FALSE</code>).</p>
     */
    inline DataEncryptionMetadata& WithAllowDuplicates(bool value) { SetAllowDuplicates(value); return *this;}


    /**
     * <p>Indicates whether Fingerprint columns can be joined on any other Fingerprint
     * column with a different name (<code>TRUE</code>) or can only be joined on
     * Fingerprint columns of the same name (<code>FALSE</code>).</p>
     */
    inline bool GetAllowJoinsOnColumnsWithDifferentNames() const{ return m_allowJoinsOnColumnsWithDifferentNames; }

    /**
     * <p>Indicates whether Fingerprint columns can be joined on any other Fingerprint
     * column with a different name (<code>TRUE</code>) or can only be joined on
     * Fingerprint columns of the same name (<code>FALSE</code>).</p>
     */
    inline bool AllowJoinsOnColumnsWithDifferentNamesHasBeenSet() const { return m_allowJoinsOnColumnsWithDifferentNamesHasBeenSet; }

    /**
     * <p>Indicates whether Fingerprint columns can be joined on any other Fingerprint
     * column with a different name (<code>TRUE</code>) or can only be joined on
     * Fingerprint columns of the same name (<code>FALSE</code>).</p>
     */
    inline void SetAllowJoinsOnColumnsWithDifferentNames(bool value) { m_allowJoinsOnColumnsWithDifferentNamesHasBeenSet = true; m_allowJoinsOnColumnsWithDifferentNames = value; }

    /**
     * <p>Indicates whether Fingerprint columns can be joined on any other Fingerprint
     * column with a different name (<code>TRUE</code>) or can only be joined on
     * Fingerprint columns of the same name (<code>FALSE</code>).</p>
     */
    inline DataEncryptionMetadata& WithAllowJoinsOnColumnsWithDifferentNames(bool value) { SetAllowJoinsOnColumnsWithDifferentNames(value); return *this;}


    /**
     * <p>Indicates whether NULL values are to be copied as NULL to encrypted tables
     * (<code>TRUE</code>) or cryptographically processed (<code>FALSE</code>).</p>
     */
    inline bool GetPreserveNulls() const{ return m_preserveNulls; }

    /**
     * <p>Indicates whether NULL values are to be copied as NULL to encrypted tables
     * (<code>TRUE</code>) or cryptographically processed (<code>FALSE</code>).</p>
     */
    inline bool PreserveNullsHasBeenSet() const { return m_preserveNullsHasBeenSet; }

    /**
     * <p>Indicates whether NULL values are to be copied as NULL to encrypted tables
     * (<code>TRUE</code>) or cryptographically processed (<code>FALSE</code>).</p>
     */
    inline void SetPreserveNulls(bool value) { m_preserveNullsHasBeenSet = true; m_preserveNulls = value; }

    /**
     * <p>Indicates whether NULL values are to be copied as NULL to encrypted tables
     * (<code>TRUE</code>) or cryptographically processed (<code>FALSE</code>).</p>
     */
    inline DataEncryptionMetadata& WithPreserveNulls(bool value) { SetPreserveNulls(value); return *this;}

  private:

    bool m_allowCleartext;
    bool m_allowCleartextHasBeenSet = false;

    bool m_allowDuplicates;
    bool m_allowDuplicatesHasBeenSet = false;

    bool m_allowJoinsOnColumnsWithDifferentNames;
    bool m_allowJoinsOnColumnsWithDifferentNamesHasBeenSet = false;

    bool m_preserveNulls;
    bool m_preserveNullsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
