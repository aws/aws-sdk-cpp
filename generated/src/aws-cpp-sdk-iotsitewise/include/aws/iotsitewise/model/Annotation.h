/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>The annotation format configuration for bulk import files.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Annotation">AWS
 * API Reference</a></p>
 */
class Annotation {
 public:
  AWS_IOTSITEWISE_API Annotation() = default;
  AWS_IOTSITEWISE_API Annotation(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Annotation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
