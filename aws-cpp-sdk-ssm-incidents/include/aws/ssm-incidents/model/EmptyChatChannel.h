/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>

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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Used to remove the chat channel from an incident record or response
   * plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/EmptyChatChannel">AWS
   * API Reference</a></p>
   */
  class AWS_SSMINCIDENTS_API EmptyChatChannel
  {
  public:
    EmptyChatChannel();
    EmptyChatChannel(Aws::Utils::Json::JsonView jsonValue);
    EmptyChatChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
