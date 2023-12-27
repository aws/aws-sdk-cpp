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
   * <p>Information used to sort workflows in the returned list.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/WorkflowSortCriteria">AWS
   * API Reference</a></p>
   */
  class WorkflowSortCriteria
  {
  public:
    AWS_CODECATALYST_API WorkflowSortCriteria();
    AWS_CODECATALYST_API WorkflowSortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API WorkflowSortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
