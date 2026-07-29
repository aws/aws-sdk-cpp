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
 * <p>The MP4 video format configuration for bulk import files.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Mp4">AWS API
 * Reference</a></p>
 */
class Mp4 {
 public:
  AWS_IOTSITEWISE_API Mp4() = default;
  AWS_IOTSITEWISE_API Mp4(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Mp4& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
