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

  class NestedPayload
  {
  public:
    AWS_RESTJSONPROTOCOL_API NestedPayload();
    AWS_RESTJSONPROTOCOL_API NestedPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESTJSONPROTOCOL_API NestedPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetGreeting() const{ return m_greeting; }
    inline bool GreetingHasBeenSet() const { return m_greetingHasBeenSet; }
    inline void SetGreeting(const Aws::String& value) { m_greetingHasBeenSet = true; m_greeting = value; }
    inline void SetGreeting(Aws::String&& value) { m_greetingHasBeenSet = true; m_greeting = std::move(value); }
    inline void SetGreeting(const char* value) { m_greetingHasBeenSet = true; m_greeting.assign(value); }
    inline NestedPayload& WithGreeting(const Aws::String& value) { SetGreeting(value); return *this;}
    inline NestedPayload& WithGreeting(Aws::String&& value) { SetGreeting(std::move(value)); return *this;}
    inline NestedPayload& WithGreeting(const char* value) { SetGreeting(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline NestedPayload& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline NestedPayload& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline NestedPayload& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_greeting;
    bool m_greetingHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
