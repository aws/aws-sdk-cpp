/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>The configuration entry associated with the specific portal type. The
   * <code>portalTypeConfiguration</code> is a map of the <code>portalTypeKey</code>
   * to the <code>PortalTypeEntry</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PortalTypeEntry">AWS
   * API Reference</a></p>
   */
  class PortalTypeEntry
  {
  public:
    AWS_IOTSITEWISE_API PortalTypeEntry() = default;
    AWS_IOTSITEWISE_API PortalTypeEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API PortalTypeEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The array of tools associated with the specified portal type. The possible
     * values are <code>ASSISTANT</code> and <code>DASHBOARD</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPortalTools() const { return m_portalTools; }
    inline bool PortalToolsHasBeenSet() const { return m_portalToolsHasBeenSet; }
    template<typename PortalToolsT = Aws::Vector<Aws::String>>
    void SetPortalTools(PortalToolsT&& value) { m_portalToolsHasBeenSet = true; m_portalTools = std::forward<PortalToolsT>(value); }
    template<typename PortalToolsT = Aws::Vector<Aws::String>>
    PortalTypeEntry& WithPortalTools(PortalToolsT&& value) { SetPortalTools(std::forward<PortalToolsT>(value)); return *this;}
    template<typename PortalToolsT = Aws::String>
    PortalTypeEntry& AddPortalTools(PortalToolsT&& value) { m_portalToolsHasBeenSet = true; m_portalTools.emplace_back(std::forward<PortalToolsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_portalTools;
    bool m_portalToolsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
