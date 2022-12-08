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
   * <p>Represents a pre-existing file or directory on the host machine that the
   * volume maps to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/HostPath">AWS
   * API Reference</a></p>
   */
  class HostPath
  {
  public:
    AWS_GUARDDUTY_API HostPath();
    AWS_GUARDDUTY_API HostPath(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API HostPath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Path of the file or directory on the host that the volume maps to.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>Path of the file or directory on the host that the volume maps to.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>Path of the file or directory on the host that the volume maps to.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>Path of the file or directory on the host that the volume maps to.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>Path of the file or directory on the host that the volume maps to.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>Path of the file or directory on the host that the volume maps to.</p>
     */
    inline HostPath& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>Path of the file or directory on the host that the volume maps to.</p>
     */
    inline HostPath& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>Path of the file or directory on the host that the volume maps to.</p>
     */
    inline HostPath& WithPath(const char* value) { SetPath(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
