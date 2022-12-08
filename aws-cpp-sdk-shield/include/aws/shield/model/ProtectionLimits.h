/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/Limit.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>Limits settings on protections for your subscription. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ProtectionLimits">AWS
   * API Reference</a></p>
   */
  class ProtectionLimits
  {
  public:
    AWS_SHIELD_API ProtectionLimits();
    AWS_SHIELD_API ProtectionLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API ProtectionLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of resource types that you can specify in a
     * protection.</p>
     */
    inline const Aws::Vector<Limit>& GetProtectedResourceTypeLimits() const{ return m_protectedResourceTypeLimits; }

    /**
     * <p>The maximum number of resource types that you can specify in a
     * protection.</p>
     */
    inline bool ProtectedResourceTypeLimitsHasBeenSet() const { return m_protectedResourceTypeLimitsHasBeenSet; }

    /**
     * <p>The maximum number of resource types that you can specify in a
     * protection.</p>
     */
    inline void SetProtectedResourceTypeLimits(const Aws::Vector<Limit>& value) { m_protectedResourceTypeLimitsHasBeenSet = true; m_protectedResourceTypeLimits = value; }

    /**
     * <p>The maximum number of resource types that you can specify in a
     * protection.</p>
     */
    inline void SetProtectedResourceTypeLimits(Aws::Vector<Limit>&& value) { m_protectedResourceTypeLimitsHasBeenSet = true; m_protectedResourceTypeLimits = std::move(value); }

    /**
     * <p>The maximum number of resource types that you can specify in a
     * protection.</p>
     */
    inline ProtectionLimits& WithProtectedResourceTypeLimits(const Aws::Vector<Limit>& value) { SetProtectedResourceTypeLimits(value); return *this;}

    /**
     * <p>The maximum number of resource types that you can specify in a
     * protection.</p>
     */
    inline ProtectionLimits& WithProtectedResourceTypeLimits(Aws::Vector<Limit>&& value) { SetProtectedResourceTypeLimits(std::move(value)); return *this;}

    /**
     * <p>The maximum number of resource types that you can specify in a
     * protection.</p>
     */
    inline ProtectionLimits& AddProtectedResourceTypeLimits(const Limit& value) { m_protectedResourceTypeLimitsHasBeenSet = true; m_protectedResourceTypeLimits.push_back(value); return *this; }

    /**
     * <p>The maximum number of resource types that you can specify in a
     * protection.</p>
     */
    inline ProtectionLimits& AddProtectedResourceTypeLimits(Limit&& value) { m_protectedResourceTypeLimitsHasBeenSet = true; m_protectedResourceTypeLimits.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Limit> m_protectedResourceTypeLimits;
    bool m_protectedResourceTypeLimitsHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
