/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the installed GuardDuty security agent.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AgentDetails">AWS
   * API Reference</a></p>
   */
  class AgentDetails
  {
  public:
    AWS_GUARDDUTY_API AgentDetails();
    AWS_GUARDDUTY_API AgentDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AgentDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Version of the installed GuardDuty security agent.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Version of the installed GuardDuty security agent.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Version of the installed GuardDuty security agent.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version of the installed GuardDuty security agent.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>Version of the installed GuardDuty security agent.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>Version of the installed GuardDuty security agent.</p>
     */
    inline AgentDetails& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Version of the installed GuardDuty security agent.</p>
     */
    inline AgentDetails& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>Version of the installed GuardDuty security agent.</p>
     */
    inline AgentDetails& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
