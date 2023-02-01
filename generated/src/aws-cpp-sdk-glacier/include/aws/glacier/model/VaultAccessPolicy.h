/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Contains the vault access policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/VaultAccessPolicy">AWS
   * API Reference</a></p>
   */
  class VaultAccessPolicy
  {
  public:
    AWS_GLACIER_API VaultAccessPolicy();
    AWS_GLACIER_API VaultAccessPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API VaultAccessPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The vault access policy.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The vault access policy.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The vault access policy.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The vault access policy.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

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
    inline VaultAccessPolicy& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The vault access policy.</p>
     */
    inline VaultAccessPolicy& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
