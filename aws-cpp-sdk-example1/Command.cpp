/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#include <Command.h>

#include <aws/core/utils/StringUtils.h>

#include <unordered_map>

using namespace Aws::Utils;

namespace Aws
{
namespace Example1
{

static std::unordered_map<std::string, Command> commandMap = {
    { "quit", Command::Quit },
    { "status", Command::Status },
    { "update", Command::Update },
    { "login", Command::Login },
    { "help", Command::Help },
    { "forge", Command::Forge }
};

Command CommandFromString(const std::string& commandName)
{
    auto iter = commandMap.find(StringUtils::ToLower(commandName.c_str()).c_str());
    if(iter == commandMap.cend())
    {
        return Command::None;
    }

    return iter->second;
}

} // namespace Example1
} // namespace Aws
