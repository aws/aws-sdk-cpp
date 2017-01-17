﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/Array.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
  class AWS_FIREHOSE_API Record
  {
  public:
    Record();
    Record(const Aws::Utils::Json::JsonValue& jsonValue);
    Record& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The data blob, which is base64-encoded when the blob is serialized. The
     * maximum size of the data blob, before base64-encoding, is 1,000 KB.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const{ return m_data; }

    /**
     * <p>The data blob, which is base64-encoded when the blob is serialized. The
     * maximum size of the data blob, before base64-encoding, is 1,000 KB.</p>
     */
    inline void SetData(const Aws::Utils::ByteBuffer& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The data blob, which is base64-encoded when the blob is serialized. The
     * maximum size of the data blob, before base64-encoding, is 1,000 KB.</p>
     */
    inline void SetData(Aws::Utils::ByteBuffer&& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The data blob, which is base64-encoded when the blob is serialized. The
     * maximum size of the data blob, before base64-encoding, is 1,000 KB.</p>
     */
    inline Record& WithData(const Aws::Utils::ByteBuffer& value) { SetData(value); return *this;}

    /**
     * <p>The data blob, which is base64-encoded when the blob is serialized. The
     * maximum size of the data blob, before base64-encoding, is 1,000 KB.</p>
     */
    inline Record& WithData(Aws::Utils::ByteBuffer&& value) { SetData(value); return *this;}

  private:
    Aws::Utils::ByteBuffer m_data;
    bool m_dataHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
