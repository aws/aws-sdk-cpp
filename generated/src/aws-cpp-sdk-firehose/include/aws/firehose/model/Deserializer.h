/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/OpenXJsonSerDe.h>
#include <aws/firehose/model/HiveJsonSerDe.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>The deserializer you want Kinesis Data Firehose to use for converting the
   * input data from JSON. Kinesis Data Firehose then serializes the data to its
   * final format using the <a>Serializer</a>. Kinesis Data Firehose supports two
   * types of deserializers: the <a
   * href="https://cwiki.apache.org/confluence/display/Hive/LanguageManual+DDL#LanguageManualDDL-JSON">Apache
   * Hive JSON SerDe</a> and the <a
   * href="https://github.com/rcongiu/Hive-JSON-Serde">OpenX JSON
   * SerDe</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/Deserializer">AWS
   * API Reference</a></p>
   */
  class Deserializer
  {
  public:
    AWS_FIREHOSE_API Deserializer();
    AWS_FIREHOSE_API Deserializer(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Deserializer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The OpenX SerDe. Used by Kinesis Data Firehose for deserializing data, which
     * means converting it from the JSON format in preparation for serializing it to
     * the Parquet or ORC format. This is one of two deserializers you can choose,
     * depending on which one offers the functionality you need. The other option is
     * the native Hive / HCatalog JsonSerDe.</p>
     */
    inline const OpenXJsonSerDe& GetOpenXJsonSerDe() const{ return m_openXJsonSerDe; }

    /**
     * <p>The OpenX SerDe. Used by Kinesis Data Firehose for deserializing data, which
     * means converting it from the JSON format in preparation for serializing it to
     * the Parquet or ORC format. This is one of two deserializers you can choose,
     * depending on which one offers the functionality you need. The other option is
     * the native Hive / HCatalog JsonSerDe.</p>
     */
    inline bool OpenXJsonSerDeHasBeenSet() const { return m_openXJsonSerDeHasBeenSet; }

    /**
     * <p>The OpenX SerDe. Used by Kinesis Data Firehose for deserializing data, which
     * means converting it from the JSON format in preparation for serializing it to
     * the Parquet or ORC format. This is one of two deserializers you can choose,
     * depending on which one offers the functionality you need. The other option is
     * the native Hive / HCatalog JsonSerDe.</p>
     */
    inline void SetOpenXJsonSerDe(const OpenXJsonSerDe& value) { m_openXJsonSerDeHasBeenSet = true; m_openXJsonSerDe = value; }

    /**
     * <p>The OpenX SerDe. Used by Kinesis Data Firehose for deserializing data, which
     * means converting it from the JSON format in preparation for serializing it to
     * the Parquet or ORC format. This is one of two deserializers you can choose,
     * depending on which one offers the functionality you need. The other option is
     * the native Hive / HCatalog JsonSerDe.</p>
     */
    inline void SetOpenXJsonSerDe(OpenXJsonSerDe&& value) { m_openXJsonSerDeHasBeenSet = true; m_openXJsonSerDe = std::move(value); }

    /**
     * <p>The OpenX SerDe. Used by Kinesis Data Firehose for deserializing data, which
     * means converting it from the JSON format in preparation for serializing it to
     * the Parquet or ORC format. This is one of two deserializers you can choose,
     * depending on which one offers the functionality you need. The other option is
     * the native Hive / HCatalog JsonSerDe.</p>
     */
    inline Deserializer& WithOpenXJsonSerDe(const OpenXJsonSerDe& value) { SetOpenXJsonSerDe(value); return *this;}

    /**
     * <p>The OpenX SerDe. Used by Kinesis Data Firehose for deserializing data, which
     * means converting it from the JSON format in preparation for serializing it to
     * the Parquet or ORC format. This is one of two deserializers you can choose,
     * depending on which one offers the functionality you need. The other option is
     * the native Hive / HCatalog JsonSerDe.</p>
     */
    inline Deserializer& WithOpenXJsonSerDe(OpenXJsonSerDe&& value) { SetOpenXJsonSerDe(std::move(value)); return *this;}


    /**
     * <p>The native Hive / HCatalog JsonSerDe. Used by Kinesis Data Firehose for
     * deserializing data, which means converting it from the JSON format in
     * preparation for serializing it to the Parquet or ORC format. This is one of two
     * deserializers you can choose, depending on which one offers the functionality
     * you need. The other option is the OpenX SerDe.</p>
     */
    inline const HiveJsonSerDe& GetHiveJsonSerDe() const{ return m_hiveJsonSerDe; }

    /**
     * <p>The native Hive / HCatalog JsonSerDe. Used by Kinesis Data Firehose for
     * deserializing data, which means converting it from the JSON format in
     * preparation for serializing it to the Parquet or ORC format. This is one of two
     * deserializers you can choose, depending on which one offers the functionality
     * you need. The other option is the OpenX SerDe.</p>
     */
    inline bool HiveJsonSerDeHasBeenSet() const { return m_hiveJsonSerDeHasBeenSet; }

    /**
     * <p>The native Hive / HCatalog JsonSerDe. Used by Kinesis Data Firehose for
     * deserializing data, which means converting it from the JSON format in
     * preparation for serializing it to the Parquet or ORC format. This is one of two
     * deserializers you can choose, depending on which one offers the functionality
     * you need. The other option is the OpenX SerDe.</p>
     */
    inline void SetHiveJsonSerDe(const HiveJsonSerDe& value) { m_hiveJsonSerDeHasBeenSet = true; m_hiveJsonSerDe = value; }

    /**
     * <p>The native Hive / HCatalog JsonSerDe. Used by Kinesis Data Firehose for
     * deserializing data, which means converting it from the JSON format in
     * preparation for serializing it to the Parquet or ORC format. This is one of two
     * deserializers you can choose, depending on which one offers the functionality
     * you need. The other option is the OpenX SerDe.</p>
     */
    inline void SetHiveJsonSerDe(HiveJsonSerDe&& value) { m_hiveJsonSerDeHasBeenSet = true; m_hiveJsonSerDe = std::move(value); }

    /**
     * <p>The native Hive / HCatalog JsonSerDe. Used by Kinesis Data Firehose for
     * deserializing data, which means converting it from the JSON format in
     * preparation for serializing it to the Parquet or ORC format. This is one of two
     * deserializers you can choose, depending on which one offers the functionality
     * you need. The other option is the OpenX SerDe.</p>
     */
    inline Deserializer& WithHiveJsonSerDe(const HiveJsonSerDe& value) { SetHiveJsonSerDe(value); return *this;}

    /**
     * <p>The native Hive / HCatalog JsonSerDe. Used by Kinesis Data Firehose for
     * deserializing data, which means converting it from the JSON format in
     * preparation for serializing it to the Parquet or ORC format. This is one of two
     * deserializers you can choose, depending on which one offers the functionality
     * you need. The other option is the OpenX SerDe.</p>
     */
    inline Deserializer& WithHiveJsonSerDe(HiveJsonSerDe&& value) { SetHiveJsonSerDe(std::move(value)); return *this;}

  private:

    OpenXJsonSerDe m_openXJsonSerDe;
    bool m_openXJsonSerDeHasBeenSet = false;

    HiveJsonSerDe m_hiveJsonSerDe;
    bool m_hiveJsonSerDeHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
