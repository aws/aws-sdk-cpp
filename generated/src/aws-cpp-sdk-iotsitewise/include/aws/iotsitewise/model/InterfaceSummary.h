/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
   * <p>Contains summary information about an interface that a property belongs
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/InterfaceSummary">AWS
   * API Reference</a></p>
   */
  class InterfaceSummary
  {
  public:
    AWS_IOTSITEWISE_API InterfaceSummary() = default;
    AWS_IOTSITEWISE_API InterfaceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API InterfaceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the interface asset model that contains this property.</p>
     */
    inline const Aws::String& GetInterfaceAssetModelId() const { return m_interfaceAssetModelId; }
    inline bool InterfaceAssetModelIdHasBeenSet() const { return m_interfaceAssetModelIdHasBeenSet; }
    template<typename InterfaceAssetModelIdT = Aws::String>
    void SetInterfaceAssetModelId(InterfaceAssetModelIdT&& value) { m_interfaceAssetModelIdHasBeenSet = true; m_interfaceAssetModelId = std::forward<InterfaceAssetModelIdT>(value); }
    template<typename InterfaceAssetModelIdT = Aws::String>
    InterfaceSummary& WithInterfaceAssetModelId(InterfaceAssetModelIdT&& value) { SetInterfaceAssetModelId(std::forward<InterfaceAssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the property in the interface asset model that corresponds to this
     * property.</p>
     */
    inline const Aws::String& GetInterfaceAssetModelPropertyId() const { return m_interfaceAssetModelPropertyId; }
    inline bool InterfaceAssetModelPropertyIdHasBeenSet() const { return m_interfaceAssetModelPropertyIdHasBeenSet; }
    template<typename InterfaceAssetModelPropertyIdT = Aws::String>
    void SetInterfaceAssetModelPropertyId(InterfaceAssetModelPropertyIdT&& value) { m_interfaceAssetModelPropertyIdHasBeenSet = true; m_interfaceAssetModelPropertyId = std::forward<InterfaceAssetModelPropertyIdT>(value); }
    template<typename InterfaceAssetModelPropertyIdT = Aws::String>
    InterfaceSummary& WithInterfaceAssetModelPropertyId(InterfaceAssetModelPropertyIdT&& value) { SetInterfaceAssetModelPropertyId(std::forward<InterfaceAssetModelPropertyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_interfaceAssetModelId;
    bool m_interfaceAssetModelIdHasBeenSet = false;

    Aws::String m_interfaceAssetModelPropertyId;
    bool m_interfaceAssetModelPropertyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
