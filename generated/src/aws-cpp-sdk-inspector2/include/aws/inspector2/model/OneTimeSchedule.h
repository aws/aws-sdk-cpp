/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>

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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>A one time schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/OneTimeSchedule">AWS
   * API Reference</a></p>
   */
  class OneTimeSchedule
  {
  public:
    AWS_INSPECTOR2_API OneTimeSchedule();
    AWS_INSPECTOR2_API OneTimeSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API OneTimeSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
