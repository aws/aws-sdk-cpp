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
   * <p>Information used to sort workflow runs in the returned list.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/WorkflowRunSortCriteria">AWS
   * API Reference</a></p>
   */
  class WorkflowRunSortCriteria
  {
  public:
    AWS_CODECATALYST_API WorkflowRunSortCriteria();
    AWS_CODECATALYST_API WorkflowRunSortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API WorkflowRunSortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
