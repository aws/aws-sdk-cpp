/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/ImagebuilderEndpointProvider.h>
#include <aws/imagebuilder/internal/ImagebuilderEndpointRules.h>

namespace Aws {
namespace imagebuilder {
namespace Endpoint {
ImagebuilderEndpointProvider::ImagebuilderEndpointProvider()
    : ImagebuilderDefaultEpProviderBase(Aws::imagebuilder::ImagebuilderEndpointRules::GetRulesBlob(),
                                        Aws::imagebuilder::ImagebuilderEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace imagebuilder
}  // namespace Aws
