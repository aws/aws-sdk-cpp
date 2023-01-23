/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

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
namespace Connect
{
namespace Model
{

  /**
   * <p>This action must be set if <code>TriggerEventSource</code> is one of the
   * following values: <code>OnPostCallAnalysisAvailable</code> |
   * <code>OnRealTimeCallAnalysisAvailable</code> |
   * <code>OnPostChatAnalysisAvailable</code>. Contact is categorized using the rule
   * name.</p> <p> <code>RuleName</code> is used as
   * <code>ContactCategory</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssignContactCategoryActionDefinition">AWS
   * API Reference</a></p>
   */
  class AssignContactCategoryActionDefinition
  {
  public:
    AWS_CONNECT_API AssignContactCategoryActionDefinition();
    AWS_CONNECT_API AssignContactCategoryActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AssignContactCategoryActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace Connect
} // namespace Aws
