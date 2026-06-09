/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/DSQL_EXPORTS.h>

namespace Aws {
namespace DSQL {
namespace Model {
enum class StreamFormat { NOT_SET, JSON };

namespace StreamFormatMapper {
AWS_DSQL_API StreamFormat GetStreamFormatForName(const Aws::String& name);

AWS_DSQL_API Aws::String GetNameForStreamFormat(StreamFormat value);
}  // namespace StreamFormatMapper
}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
