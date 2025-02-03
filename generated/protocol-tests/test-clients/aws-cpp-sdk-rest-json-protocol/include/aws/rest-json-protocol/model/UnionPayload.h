/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace RestJsonProtocol
{
namespace Model
{

  class UnionPayload
  {
  public:
    AWS_RESTJSONPROTOCOL_API UnionPayload();
    AWS_RESTJSONPROTOCOL_API UnionPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESTJSONPROTOCOL_API UnionPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetGreeting() const{ return m_greeting; }
    inline bool GreetingHasBeenSet() const { return m_greetingHasBeenSet; }
    inline void SetGreeting(const Aws::String& value) { m_greetingHasBeenSet = true; m_greeting = value; }
    inline void SetGreeting(Aws::String&& value) { m_greetingHasBeenSet = true; m_greeting = std::move(value); }
    inline void SetGreeting(const char* value) { m_greetingHasBeenSet = true; m_greeting.assign(value); }
    inline UnionPayload& WithGreeting(const Aws::String& value) { SetGreeting(value); return *this;}
    inline UnionPayload& WithGreeting(Aws::String&& value) { SetGreeting(std::move(value)); return *this;}
    inline UnionPayload& WithGreeting(const char* value) { SetGreeting(value); return *this;}
    ///@}
  private:

    Aws::String m_greeting;
    bool m_greetingHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
