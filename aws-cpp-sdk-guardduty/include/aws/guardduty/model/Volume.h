/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/HostPath.h>
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
   * <p>Volume used by the Kubernetes workload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Volume">AWS
   * API Reference</a></p>
   */
  class Volume
  {
  public:
    AWS_GUARDDUTY_API Volume();
    AWS_GUARDDUTY_API Volume(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Volume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Volume name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Volume name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Volume name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Volume name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Volume name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Volume name.</p>
     */
    inline Volume& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Volume name.</p>
     */
    inline Volume& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Volume name.</p>
     */
    inline Volume& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Represents a pre-existing file or directory on the host machine that the
     * volume maps to.</p>
     */
    inline const HostPath& GetHostPath() const{ return m_hostPath; }

    /**
     * <p>Represents a pre-existing file or directory on the host machine that the
     * volume maps to.</p>
     */
    inline bool HostPathHasBeenSet() const { return m_hostPathHasBeenSet; }

    /**
     * <p>Represents a pre-existing file or directory on the host machine that the
     * volume maps to.</p>
     */
    inline void SetHostPath(const HostPath& value) { m_hostPathHasBeenSet = true; m_hostPath = value; }

    /**
     * <p>Represents a pre-existing file or directory on the host machine that the
     * volume maps to.</p>
     */
    inline void SetHostPath(HostPath&& value) { m_hostPathHasBeenSet = true; m_hostPath = std::move(value); }

    /**
     * <p>Represents a pre-existing file or directory on the host machine that the
     * volume maps to.</p>
     */
    inline Volume& WithHostPath(const HostPath& value) { SetHostPath(value); return *this;}

    /**
     * <p>Represents a pre-existing file or directory on the host machine that the
     * volume maps to.</p>
     */
    inline Volume& WithHostPath(HostPath&& value) { SetHostPath(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    HostPath m_hostPath;
    bool m_hostPathHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
