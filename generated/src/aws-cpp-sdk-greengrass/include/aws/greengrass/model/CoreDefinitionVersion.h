/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/Core.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a core definition version.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CoreDefinitionVersion">AWS
   * API Reference</a></p>
   */
  class CoreDefinitionVersion
  {
  public:
    AWS_GREENGRASS_API CoreDefinitionVersion();
    AWS_GREENGRASS_API CoreDefinitionVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API CoreDefinitionVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A list of cores in the core definition version.
     */
    inline const Aws::Vector<Core>& GetCores() const{ return m_cores; }

    /**
     * A list of cores in the core definition version.
     */
    inline bool CoresHasBeenSet() const { return m_coresHasBeenSet; }

    /**
     * A list of cores in the core definition version.
     */
    inline void SetCores(const Aws::Vector<Core>& value) { m_coresHasBeenSet = true; m_cores = value; }

    /**
     * A list of cores in the core definition version.
     */
    inline void SetCores(Aws::Vector<Core>&& value) { m_coresHasBeenSet = true; m_cores = std::move(value); }

    /**
     * A list of cores in the core definition version.
     */
    inline CoreDefinitionVersion& WithCores(const Aws::Vector<Core>& value) { SetCores(value); return *this;}

    /**
     * A list of cores in the core definition version.
     */
    inline CoreDefinitionVersion& WithCores(Aws::Vector<Core>&& value) { SetCores(std::move(value)); return *this;}

    /**
     * A list of cores in the core definition version.
     */
    inline CoreDefinitionVersion& AddCores(const Core& value) { m_coresHasBeenSet = true; m_cores.push_back(value); return *this; }

    /**
     * A list of cores in the core definition version.
     */
    inline CoreDefinitionVersion& AddCores(Core&& value) { m_coresHasBeenSet = true; m_cores.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Core> m_cores;
    bool m_coresHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
