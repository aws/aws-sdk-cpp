﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/ParquetSerDe.h>
#include <aws/firehose/model/OrcSerDe.h>
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
   * <p>The serializer that you want Firehose to use to convert data to the target
   * format before writing it to Amazon S3. Firehose supports two types of
   * serializers: the ORC SerDe and the Parquet SerDe.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/Serializer">AWS
   * API Reference</a></p>
   */
  class Serializer
  {
  public:
    AWS_FIREHOSE_API Serializer();
    AWS_FIREHOSE_API Serializer(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Serializer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A serializer to use for converting data to the Parquet format before storing
     * it in Amazon S3. For more information, see <a
     * href="https://parquet.apache.org/docs/contribution-guidelines/">Apache
     * Parquet</a>.</p>
     */
    inline const ParquetSerDe& GetParquetSerDe() const{ return m_parquetSerDe; }
    inline bool ParquetSerDeHasBeenSet() const { return m_parquetSerDeHasBeenSet; }
    inline void SetParquetSerDe(const ParquetSerDe& value) { m_parquetSerDeHasBeenSet = true; m_parquetSerDe = value; }
    inline void SetParquetSerDe(ParquetSerDe&& value) { m_parquetSerDeHasBeenSet = true; m_parquetSerDe = std::move(value); }
    inline Serializer& WithParquetSerDe(const ParquetSerDe& value) { SetParquetSerDe(value); return *this;}
    inline Serializer& WithParquetSerDe(ParquetSerDe&& value) { SetParquetSerDe(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A serializer to use for converting data to the ORC format before storing it
     * in Amazon S3. For more information, see <a
     * href="https://orc.apache.org/docs/">Apache ORC</a>.</p>
     */
    inline const OrcSerDe& GetOrcSerDe() const{ return m_orcSerDe; }
    inline bool OrcSerDeHasBeenSet() const { return m_orcSerDeHasBeenSet; }
    inline void SetOrcSerDe(const OrcSerDe& value) { m_orcSerDeHasBeenSet = true; m_orcSerDe = value; }
    inline void SetOrcSerDe(OrcSerDe&& value) { m_orcSerDeHasBeenSet = true; m_orcSerDe = std::move(value); }
    inline Serializer& WithOrcSerDe(const OrcSerDe& value) { SetOrcSerDe(value); return *this;}
    inline Serializer& WithOrcSerDe(OrcSerDe&& value) { SetOrcSerDe(std::move(value)); return *this;}
    ///@}
  private:

    ParquetSerDe m_parquetSerDe;
    bool m_parquetSerDeHasBeenSet = false;

    OrcSerDe m_orcSerDe;
    bool m_orcSerDeHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
