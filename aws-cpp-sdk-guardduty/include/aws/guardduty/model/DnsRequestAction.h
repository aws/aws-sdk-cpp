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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * Information about the DNS_REQUEST action described in this finding.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DnsRequestAction">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API DnsRequestAction
  {
  public:
    DnsRequestAction();
    DnsRequestAction(const Aws::Utils::Json::JsonValue& jsonValue);
    DnsRequestAction& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Domain information for the DNS request.
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * Domain information for the DNS request.
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * Domain information for the DNS request.
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * Domain information for the DNS request.
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * Domain information for the DNS request.
     */
    inline DnsRequestAction& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * Domain information for the DNS request.
     */
    inline DnsRequestAction& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * Domain information for the DNS request.
     */
    inline DnsRequestAction& WithDomain(const char* value) { SetDomain(value); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
