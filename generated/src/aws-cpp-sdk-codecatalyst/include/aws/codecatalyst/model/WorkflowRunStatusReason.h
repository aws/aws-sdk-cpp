/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>

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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about the status of a workflow run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/WorkflowRunStatusReason">AWS
   * API Reference</a></p>
   */
  class WorkflowRunStatusReason
  {
  public:
    AWS_CODECATALYST_API WorkflowRunStatusReason();
    AWS_CODECATALYST_API WorkflowRunStatusReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API WorkflowRunStatusReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
