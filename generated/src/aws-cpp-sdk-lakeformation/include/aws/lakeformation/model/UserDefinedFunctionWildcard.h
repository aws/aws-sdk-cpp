/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LakeFormation {
namespace Model {

/**
 * <p>A wildcard object representing every user-defined function in a
 * database.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UserDefinedFunctionWildcard">AWS
 * API Reference</a></p>
 */
class UserDefinedFunctionWildcard {
 public:
  AWS_LAKEFORMATION_API UserDefinedFunctionWildcard() = default;
  AWS_LAKEFORMATION_API UserDefinedFunctionWildcard(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API UserDefinedFunctionWildcard& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
