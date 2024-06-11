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
    AWS_GROUNDSTATION_API ConfigListItem();
    AWS_GROUNDSTATION_API ConfigListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API ConfigListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetConfigArn() const{ return m_configArn; }
    inline bool ConfigArnHasBeenSet() const { return m_configArnHasBeenSet; }
    inline void SetConfigArn(const Aws::String& value) { m_configArnHasBeenSet = true; m_configArn = value; }
    inline void SetConfigArn(Aws::String&& value) { m_configArnHasBeenSet = true; m_configArn = std::move(value); }
    inline void SetConfigArn(const char* value) { m_configArnHasBeenSet = true; m_configArn.assign(value); }
    inline ConfigListItem& WithConfigArn(const Aws::String& value) { SetConfigArn(value); return *this;}
    inline ConfigListItem& WithConfigArn(Aws::String&& value) { SetConfigArn(std::move(value)); return *this;}
    inline ConfigListItem& WithConfigArn(const char* value) { SetConfigArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetConfigId() const{ return m_configId; }
    inline bool ConfigIdHasBeenSet() const { return m_configIdHasBeenSet; }
    inline void SetConfigId(const Aws::String& value) { m_configIdHasBeenSet = true; m_configId = value; }
    inline void SetConfigId(Aws::String&& value) { m_configIdHasBeenSet = true; m_configId = std::move(value); }
    inline void SetConfigId(const char* value) { m_configIdHasBeenSet = true; m_configId.assign(value); }
    inline ConfigListItem& WithConfigId(const Aws::String& value) { SetConfigId(value); return *this;}
    inline ConfigListItem& WithConfigId(Aws::String&& value) { SetConfigId(std::move(value)); return *this;}
    inline ConfigListItem& WithConfigId(const char* value) { SetConfigId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline const ConfigCapabilityType& GetConfigType() const{ return m_configType; }
    inline bool ConfigTypeHasBeenSet() const { return m_configTypeHasBeenSet; }
    inline void SetConfigType(const ConfigCapabilityType& value) { m_configTypeHasBeenSet = true; m_configType = value; }
    inline void SetConfigType(ConfigCapabilityType&& value) { m_configTypeHasBeenSet = true; m_configType = std::move(value); }
    inline ConfigListItem& WithConfigType(const ConfigCapabilityType& value) { SetConfigType(value); return *this;}
    inline ConfigListItem& WithConfigType(ConfigCapabilityType&& value) { SetConfigType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ConfigListItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ConfigListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ConfigListItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_configArn;
    bool m_configArnHasBeenSet = false;

    Aws::String m_configId;
    bool m_configIdHasBeenSet = false;

    ConfigCapabilityType m_configType;
    bool m_configTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
