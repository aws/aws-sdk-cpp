/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>

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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The all users grant filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AllUsersGrantFilter">AWS
   * API Reference</a></p>
   */
  class AllUsersGrantFilter
  {
  public:
    AWS_DATAZONE_API AllUsersGrantFilter() = default;
    AWS_DATAZONE_API AllUsersGrantFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AllUsersGrantFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
