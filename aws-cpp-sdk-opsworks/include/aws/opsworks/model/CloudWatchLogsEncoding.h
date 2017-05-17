/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{
  enum class CloudWatchLogsEncoding
  {
    NOT_SET,
    ascii,
    big5,
    big5hkscs,
    cp037,
    cp424,
    cp437,
    cp500,
    cp720,
    cp737,
    cp775,
    cp850,
    cp852,
    cp855,
    cp856,
    cp857,
    cp858,
    cp860,
    cp861,
    cp862,
    cp863,
    cp864,
    cp865,
    cp866,
    cp869,
    cp874,
    cp875,
    cp932,
    cp949,
    cp950,
    cp1006,
    cp1026,
    cp1140,
    cp1250,
    cp1251,
    cp1252,
    cp1253,
    cp1254,
    cp1255,
    cp1256,
    cp1257,
    cp1258,
    euc_jp,
    euc_jis_2004,
    euc_jisx0213,
    euc_kr,
    gb2312,
    gbk,
    gb18030,
    hz,
    iso2022_jp,
    iso2022_jp_1,
    iso2022_jp_2,
    iso2022_jp_2004,
    iso2022_jp_3,
    iso2022_jp_ext,
    iso2022_kr,
    latin_1,
    iso8859_2,
    iso8859_3,
    iso8859_4,
    iso8859_5,
    iso8859_6,
    iso8859_7,
    iso8859_8,
    iso8859_9,
    iso8859_10,
    iso8859_13,
    iso8859_14,
    iso8859_15,
    iso8859_16,
    johab,
    koi8_r,
    koi8_u,
    mac_cyrillic,
    mac_greek,
    mac_iceland,
    mac_latin2,
    mac_roman,
    mac_turkish,
    ptcp154,
    shift_jis,
    shift_jis_2004,
    shift_jisx0213,
    utf_32,
    utf_32_be,
    utf_32_le,
    utf_16,
    utf_16_be,
    utf_16_le,
    utf_7,
    utf_8,
    utf_8_sig
  };

namespace CloudWatchLogsEncodingMapper
{
AWS_OPSWORKS_API CloudWatchLogsEncoding GetCloudWatchLogsEncodingForName(const Aws::String& name);

AWS_OPSWORKS_API Aws::String GetNameForCloudWatchLogsEncoding(CloudWatchLogsEncoding value);
} // namespace CloudWatchLogsEncodingMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
