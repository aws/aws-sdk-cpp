/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>

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
namespace BCMDashboards
{
namespace Model
{

  /**
   * <p>Configuration structure for customizing the tabular display of widget
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/TableDisplayConfigStruct">AWS
   * API Reference</a></p>
   */
  class TableDisplayConfigStruct
  {
  public:
    AWS_BCMDASHBOARDS_API TableDisplayConfigStruct() = default;
    AWS_BCMDASHBOARDS_API TableDisplayConfigStruct(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API TableDisplayConfigStruct& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
