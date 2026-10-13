/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AppStream {
namespace Model {
enum class StorageConnectorAuthentication { NOT_SET, FORCE_REAUTHENTICATION, REUSE_CREDENTIALS };

namespace StorageConnectorAuthenticationMapper {
AWS_APPSTREAM_API StorageConnectorAuthentication GetStorageConnectorAuthenticationForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForStorageConnectorAuthentication(StorageConnectorAuthentication value);
}  // namespace StorageConnectorAuthenticationMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
