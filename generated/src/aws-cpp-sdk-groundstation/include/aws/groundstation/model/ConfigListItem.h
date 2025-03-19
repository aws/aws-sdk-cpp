/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/ConfigCapabilityType.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>An item in a list of <code>Config</code> objects.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ConfigListItem">AWS
   * API Reference</a></p>
   */
  class ConfigListItem
  {
  public:
    AWS_GROUNDSTATION_API ConfigListItem() = default;
    AWS_GROUNDSTATION_API ConfigListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API ConfigListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetConfigArn() const { return m_configArn; }
    inline bool ConfigArnHasBeenSet() const { return m_configArnHasBeenSet; }
    template<typename ConfigArnT = Aws::String>
    void SetConfigArn(ConfigArnT&& value) { m_configArnHasBeenSet = true; m_configArn = std::forward<ConfigArnT>(value); }
    template<typename ConfigArnT = Aws::String>
    ConfigListItem& WithConfigArn(ConfigArnT&& value) { SetConfigArn(std::forward<ConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetConfigId() const { return m_configId; }
    inline bool ConfigIdHasBeenSet() const { return m_configIdHasBeenSet; }
    template<typename ConfigIdT = Aws::String>
    void SetConfigId(ConfigIdT&& value) { m_configIdHasBeenSet = true; m_configId = std::forward<ConfigIdT>(value); }
    template<typename ConfigIdT = Aws::String>
    ConfigListItem& WithConfigId(ConfigIdT&& value) { SetConfigId(std::forward<ConfigIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline ConfigCapabilityType GetConfigType() const { return m_configType; }
    inline bool ConfigTypeHasBeenSet() const { return m_configTypeHasBeenSet; }
    inline void SetConfigType(ConfigCapabilityType value) { m_configTypeHasBeenSet = true; m_configType = value; }
    inline ConfigListItem& WithConfigType(ConfigCapabilityType value) { SetConfigType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConfigListItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configArn;
    bool m_configArnHasBeenSet = false;

    Aws::String m_configId;
    bool m_configIdHasBeenSet = false;

    ConfigCapabilityType m_configType{ConfigCapabilityType::NOT_SET};
    bool m_configTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
