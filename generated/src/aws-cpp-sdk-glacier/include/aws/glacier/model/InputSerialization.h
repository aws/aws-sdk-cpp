/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/CSVInput.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Describes how the archive is serialized.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/InputSerialization">AWS
   * API Reference</a></p>
   */
  class InputSerialization
  {
  public:
    AWS_GLACIER_API InputSerialization();
    AWS_GLACIER_API InputSerialization(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API InputSerialization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the serialization of a CSV-encoded object.</p>
     */
    inline const CSVInput& GetCsv() const{ return m_csv; }

    /**
     * <p>Describes the serialization of a CSV-encoded object.</p>
     */
    inline bool CsvHasBeenSet() const { return m_csvHasBeenSet; }

    /**
     * <p>Describes the serialization of a CSV-encoded object.</p>
     */
    inline void SetCsv(const CSVInput& value) { m_csvHasBeenSet = true; m_csv = value; }

    /**
     * <p>Describes the serialization of a CSV-encoded object.</p>
     */
    inline void SetCsv(CSVInput&& value) { m_csvHasBeenSet = true; m_csv = std::move(value); }

    /**
     * <p>Describes the serialization of a CSV-encoded object.</p>
     */
    inline InputSerialization& WithCsv(const CSVInput& value) { SetCsv(value); return *this;}

    /**
     * <p>Describes the serialization of a CSV-encoded object.</p>
     */
    inline InputSerialization& WithCsv(CSVInput&& value) { SetCsv(std::move(value)); return *this;}

  private:

    CSVInput m_csv;
    bool m_csvHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
