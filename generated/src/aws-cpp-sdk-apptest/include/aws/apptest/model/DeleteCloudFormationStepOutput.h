/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppTest
{
namespace Model
{

  /**
   * <p>Deletes the CloudFormation summary step output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/DeleteCloudFormationStepOutput">AWS
   * API Reference</a></p>
   */
  class DeleteCloudFormationStepOutput
  {
  public:
    AWS_APPTEST_API DeleteCloudFormationStepOutput() = default;
    AWS_APPTEST_API DeleteCloudFormationStepOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API DeleteCloudFormationStepOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
