/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/ConfigCapabilityType.h>
#include <utility>

namespace Aws
{
namespace GroundStation
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteConfigRequest">AWS
   * API Reference</a></p>
   */
  class DeleteConfigRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API DeleteConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConfig"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>UUID of a <code>Config</code>.</p>
     */
    inline const Aws::String& GetConfigId() const{ return m_configId; }
    inline bool ConfigIdHasBeenSet() const { return m_configIdHasBeenSet; }
    inline void SetConfigId(const Aws::String& value) { m_configIdHasBeenSet = true; m_configId = value; }
    inline void SetConfigId(Aws::String&& value) { m_configIdHasBeenSet = true; m_configId = std::move(value); }
    inline void SetConfigId(const char* value) { m_configIdHasBeenSet = true; m_configId.assign(value); }
    inline DeleteConfigRequest& WithConfigId(const Aws::String& value) { SetConfigId(value); return *this;}
    inline DeleteConfigRequest& WithConfigId(Aws::String&& value) { SetConfigId(std::move(value)); return *this;}
    inline DeleteConfigRequest& WithConfigId(const char* value) { SetConfigId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of a <code>Config</code>.</p>
     */
    inline const ConfigCapabilityType& GetConfigType() const{ return m_configType; }
    inline bool ConfigTypeHasBeenSet() const { return m_configTypeHasBeenSet; }
    inline void SetConfigType(const ConfigCapabilityType& value) { m_configTypeHasBeenSet = true; m_configType = value; }
    inline void SetConfigType(ConfigCapabilityType&& value) { m_configTypeHasBeenSet = true; m_configType = std::move(value); }
    inline DeleteConfigRequest& WithConfigType(const ConfigCapabilityType& value) { SetConfigType(value); return *this;}
    inline DeleteConfigRequest& WithConfigType(ConfigCapabilityType&& value) { SetConfigType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_configId;
    bool m_configIdHasBeenSet = false;

    ConfigCapabilityType m_configType;
    bool m_configTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
