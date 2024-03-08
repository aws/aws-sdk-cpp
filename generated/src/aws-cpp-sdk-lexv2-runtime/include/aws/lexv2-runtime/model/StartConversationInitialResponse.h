/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>

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
namespace LexRuntimeV2
{
namespace Model
{

  class StartConversationInitialResponse
  {
  public:
    AWS_LEXRUNTIMEV2_API StartConversationInitialResponse();
    AWS_LEXRUNTIMEV2_API StartConversationInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API StartConversationInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
