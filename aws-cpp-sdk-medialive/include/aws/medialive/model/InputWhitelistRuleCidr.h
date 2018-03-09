﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * An IPv4 CIDR to whitelist.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputWhitelistRuleCidr">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API InputWhitelistRuleCidr
  {
  public:
    InputWhitelistRuleCidr();
    InputWhitelistRuleCidr(const Aws::Utils::Json::JsonValue& jsonValue);
    InputWhitelistRuleCidr& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The IPv4 CIDR to whitelist
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * The IPv4 CIDR to whitelist
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * The IPv4 CIDR to whitelist
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * The IPv4 CIDR to whitelist
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * The IPv4 CIDR to whitelist
     */
    inline InputWhitelistRuleCidr& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * The IPv4 CIDR to whitelist
     */
    inline InputWhitelistRuleCidr& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * The IPv4 CIDR to whitelist
     */
    inline InputWhitelistRuleCidr& WithCidr(const char* value) { SetCidr(value); return *this;}

  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
