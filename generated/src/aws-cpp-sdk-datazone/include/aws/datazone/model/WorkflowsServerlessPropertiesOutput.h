/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The MWAA serverless properties.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/WorkflowsServerlessPropertiesOutput">AWS
 * API Reference</a></p>
 */
class WorkflowsServerlessPropertiesOutput {
 public:
  AWS_DATAZONE_API WorkflowsServerlessPropertiesOutput() = default;
  AWS_DATAZONE_API WorkflowsServerlessPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API WorkflowsServerlessPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
