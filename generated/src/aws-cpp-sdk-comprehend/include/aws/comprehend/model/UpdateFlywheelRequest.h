/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/UpdateDataSecurityConfig.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class UpdateFlywheelRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API UpdateFlywheelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFlywheel"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel to update.</p>
     */
    inline const Aws::String& GetFlywheelArn() const{ return m_flywheelArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel to update.</p>
     */
    inline bool FlywheelArnHasBeenSet() const { return m_flywheelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel to update.</p>
     */
    inline void SetFlywheelArn(const Aws::String& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel to update.</p>
     */
    inline void SetFlywheelArn(Aws::String&& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel to update.</p>
     */
    inline void SetFlywheelArn(const char* value) { m_flywheelArnHasBeenSet = true; m_flywheelArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel to update.</p>
     */
    inline UpdateFlywheelRequest& WithFlywheelArn(const Aws::String& value) { SetFlywheelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel to update.</p>
     */
    inline UpdateFlywheelRequest& WithFlywheelArn(Aws::String&& value) { SetFlywheelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel to update.</p>
     */
    inline UpdateFlywheelRequest& WithFlywheelArn(const char* value) { SetFlywheelArn(value); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline const Aws::String& GetActiveModelArn() const{ return m_activeModelArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline bool ActiveModelArnHasBeenSet() const { return m_activeModelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline void SetActiveModelArn(const Aws::String& value) { m_activeModelArnHasBeenSet = true; m_activeModelArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline void SetActiveModelArn(Aws::String&& value) { m_activeModelArnHasBeenSet = true; m_activeModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline void SetActiveModelArn(const char* value) { m_activeModelArnHasBeenSet = true; m_activeModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline UpdateFlywheelRequest& WithActiveModelArn(const Aws::String& value) { SetActiveModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline UpdateFlywheelRequest& WithActiveModelArn(Aws::String&& value) { SetActiveModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline UpdateFlywheelRequest& WithActiveModelArn(const char* value) { SetActiveModelArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline UpdateFlywheelRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline UpdateFlywheelRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline UpdateFlywheelRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>Flywheel data security configuration.</p>
     */
    inline const UpdateDataSecurityConfig& GetDataSecurityConfig() const{ return m_dataSecurityConfig; }

    /**
     * <p>Flywheel data security configuration.</p>
     */
    inline bool DataSecurityConfigHasBeenSet() const { return m_dataSecurityConfigHasBeenSet; }

    /**
     * <p>Flywheel data security configuration.</p>
     */
    inline void SetDataSecurityConfig(const UpdateDataSecurityConfig& value) { m_dataSecurityConfigHasBeenSet = true; m_dataSecurityConfig = value; }

    /**
     * <p>Flywheel data security configuration.</p>
     */
    inline void SetDataSecurityConfig(UpdateDataSecurityConfig&& value) { m_dataSecurityConfigHasBeenSet = true; m_dataSecurityConfig = std::move(value); }

    /**
     * <p>Flywheel data security configuration.</p>
     */
    inline UpdateFlywheelRequest& WithDataSecurityConfig(const UpdateDataSecurityConfig& value) { SetDataSecurityConfig(value); return *this;}

    /**
     * <p>Flywheel data security configuration.</p>
     */
    inline UpdateFlywheelRequest& WithDataSecurityConfig(UpdateDataSecurityConfig&& value) { SetDataSecurityConfig(std::move(value)); return *this;}

  private:

    Aws::String m_flywheelArn;
    bool m_flywheelArnHasBeenSet = false;

    Aws::String m_activeModelArn;
    bool m_activeModelArnHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    UpdateDataSecurityConfig m_dataSecurityConfig;
    bool m_dataSecurityConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
