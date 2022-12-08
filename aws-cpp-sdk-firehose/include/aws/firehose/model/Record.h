/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
   * <p>The unit of data in a delivery stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/Record">AWS API
   * Reference</a></p>
   */
  class Record
  {
  public:
    AWS_FIREHOSE_API Record();
    AWS_FIREHOSE_API Record(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Record& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data blob, which is base64-encoded when the blob is serialized. The
     * maximum size of the data blob, before base64-encoding, is 1,000 KiB.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const{ return m_data; }

    /**
     * <p>The data blob, which is base64-encoded when the blob is serialized. The
     * maximum size of the data blob, before base64-encoding, is 1,000 KiB.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The data blob, which is base64-encoded when the blob is serialized. The
     * maximum size of the data blob, before base64-encoding, is 1,000 KiB.</p>
     */
    inline void SetData(const Aws::Utils::ByteBuffer& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The data blob, which is base64-encoded when the blob is serialized. The
     * maximum size of the data blob, before base64-encoding, is 1,000 KiB.</p>
     */
    inline void SetData(Aws::Utils::ByteBuffer&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The data blob, which is base64-encoded when the blob is serialized. The
     * maximum size of the data blob, before base64-encoding, is 1,000 KiB.</p>
     */
    inline Record& WithData(const Aws::Utils::ByteBuffer& value) { SetData(value); return *this;}

    /**
     * <p>The data blob, which is base64-encoded when the blob is serialized. The
     * maximum size of the data blob, before base64-encoding, is 1,000 KiB.</p>
     */
    inline Record& WithData(Aws::Utils::ByteBuffer&& value) { SetData(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
