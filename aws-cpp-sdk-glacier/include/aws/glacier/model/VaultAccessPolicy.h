﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glacier
{
namespace Model
{

  /**
   * <p>Contains the vault access policy. </p>
   */
  class AWS_GLACIER_API VaultAccessPolicy
  {
  public:
    VaultAccessPolicy();
    VaultAccessPolicy(const Aws::Utils::Json::JsonValue& jsonValue);
    VaultAccessPolicy& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The vault access policy.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The vault access policy.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The vault access policy.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The vault access policy.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The vault access policy.</p>
     */
    inline VaultAccessPolicy& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The vault access policy.</p>
     */
    inline VaultAccessPolicy& WithPolicy(Aws::String&& value) { SetPolicy(value); return *this;}

    /**
     * <p>The vault access policy.</p>
     */
    inline VaultAccessPolicy& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:
    Aws::String m_policy;
    bool m_policyHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
