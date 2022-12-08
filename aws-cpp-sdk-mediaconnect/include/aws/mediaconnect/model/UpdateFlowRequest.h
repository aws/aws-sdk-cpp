/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/UpdateFailoverConfig.h>
#include <aws/mediaconnect/model/UpdateMaintenance.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * A request to update flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowRequest">AWS
   * API Reference</a></p>
   */
  class UpdateFlowRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateFlowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFlow"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    /**
     * The flow that you want to update.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The flow that you want to update.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The flow that you want to update.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The flow that you want to update.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The flow that you want to update.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The flow that you want to update.
     */
    inline UpdateFlowRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The flow that you want to update.
     */
    inline UpdateFlowRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The flow that you want to update.
     */
    inline UpdateFlowRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    
    inline const UpdateFailoverConfig& GetSourceFailoverConfig() const{ return m_sourceFailoverConfig; }

    
    inline bool SourceFailoverConfigHasBeenSet() const { return m_sourceFailoverConfigHasBeenSet; }

    
    inline void SetSourceFailoverConfig(const UpdateFailoverConfig& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = value; }

    
    inline void SetSourceFailoverConfig(UpdateFailoverConfig&& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = std::move(value); }

    
    inline UpdateFlowRequest& WithSourceFailoverConfig(const UpdateFailoverConfig& value) { SetSourceFailoverConfig(value); return *this;}

    
    inline UpdateFlowRequest& WithSourceFailoverConfig(UpdateFailoverConfig&& value) { SetSourceFailoverConfig(std::move(value)); return *this;}


    
    inline const UpdateMaintenance& GetMaintenance() const{ return m_maintenance; }

    
    inline bool MaintenanceHasBeenSet() const { return m_maintenanceHasBeenSet; }

    
    inline void SetMaintenance(const UpdateMaintenance& value) { m_maintenanceHasBeenSet = true; m_maintenance = value; }

    
    inline void SetMaintenance(UpdateMaintenance&& value) { m_maintenanceHasBeenSet = true; m_maintenance = std::move(value); }

    
    inline UpdateFlowRequest& WithMaintenance(const UpdateMaintenance& value) { SetMaintenance(value); return *this;}

    
    inline UpdateFlowRequest& WithMaintenance(UpdateMaintenance&& value) { SetMaintenance(std::move(value)); return *this;}

  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    UpdateFailoverConfig m_sourceFailoverConfig;
    bool m_sourceFailoverConfigHasBeenSet = false;

    UpdateMaintenance m_maintenance;
    bool m_maintenanceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
