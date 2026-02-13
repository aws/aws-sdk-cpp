/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class LocaleCode { NOT_SET, en_US, de_DE, es_ES, fr_FR, id_ID, it_IT, ja_JP, ko_KR, pt_BR, zh_CN, zh_TW };

namespace LocaleCodeMapper {
AWS_CONNECT_API LocaleCode GetLocaleCodeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForLocaleCode(LocaleCode value);
}  // namespace LocaleCodeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
