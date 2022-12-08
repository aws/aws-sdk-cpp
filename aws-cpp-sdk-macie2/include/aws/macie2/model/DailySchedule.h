/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>

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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies that a classification job runs once a day, every day. This is an
   * empty object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/DailySchedule">AWS
   * API Reference</a></p>
   */
  class DailySchedule
  {
  public:
    AWS_MACIE2_API DailySchedule();
    AWS_MACIE2_API DailySchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API DailySchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
