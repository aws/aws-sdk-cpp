/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/rbin/model/UnlockDelay.h>
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
namespace RecycleBin
{
namespace Model
{

  /**
   * <p>Information about a retention rule lock configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/LockConfiguration">AWS
   * API Reference</a></p>
   */
  class LockConfiguration
  {
  public:
    AWS_RECYCLEBIN_API LockConfiguration();
    AWS_RECYCLEBIN_API LockConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_RECYCLEBIN_API LockConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RECYCLEBIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the retention rule unlock delay.</p>
     */
    inline const UnlockDelay& GetUnlockDelay() const{ return m_unlockDelay; }

    /**
     * <p>Information about the retention rule unlock delay.</p>
     */
    inline bool UnlockDelayHasBeenSet() const { return m_unlockDelayHasBeenSet; }

    /**
     * <p>Information about the retention rule unlock delay.</p>
     */
    inline void SetUnlockDelay(const UnlockDelay& value) { m_unlockDelayHasBeenSet = true; m_unlockDelay = value; }

    /**
     * <p>Information about the retention rule unlock delay.</p>
     */
    inline void SetUnlockDelay(UnlockDelay&& value) { m_unlockDelayHasBeenSet = true; m_unlockDelay = std::move(value); }

    /**
     * <p>Information about the retention rule unlock delay.</p>
     */
    inline LockConfiguration& WithUnlockDelay(const UnlockDelay& value) { SetUnlockDelay(value); return *this;}

    /**
     * <p>Information about the retention rule unlock delay.</p>
     */
    inline LockConfiguration& WithUnlockDelay(UnlockDelay&& value) { SetUnlockDelay(std::move(value)); return *this;}

  private:

    UnlockDelay m_unlockDelay;
    bool m_unlockDelayHasBeenSet = false;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
