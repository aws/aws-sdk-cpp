/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>

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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies the location of an occurrence of sensitive data in an Apache
   * Parquet file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/Record">AWS API
   * Reference</a></p>
   */
  class AWS_MACIE2_API Record
  {
  public:
    Record();
    Record(Aws::Utils::Json::JsonView jsonValue);
    Record& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The row index, starting from 0, for the row that contains the data.</p>
     */
    inline long long GetRecordIndex() const{ return m_recordIndex; }

    /**
     * <p>The row index, starting from 0, for the row that contains the data.</p>
     */
    inline bool RecordIndexHasBeenSet() const { return m_recordIndexHasBeenSet; }

    /**
     * <p>The row index, starting from 0, for the row that contains the data.</p>
     */
    inline void SetRecordIndex(long long value) { m_recordIndexHasBeenSet = true; m_recordIndex = value; }

    /**
     * <p>The row index, starting from 0, for the row that contains the data.</p>
     */
    inline Record& WithRecordIndex(long long value) { SetRecordIndex(value); return *this;}

  private:

    long long m_recordIndex;
    bool m_recordIndexHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
