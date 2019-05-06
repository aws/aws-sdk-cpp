/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class AWS_CONFIGSERVICE_API DeleteRetentionConfigurationRequest : public ConfigServiceRequest
  {
  public:
    DeleteRetentionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRetentionConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the retention configuration to delete.</p>
     */
    inline const Aws::String& GetRetentionConfigurationName() const{ return m_retentionConfigurationName; }

    /**
     * <p>The name of the retention configuration to delete.</p>
     */
    inline bool RetentionConfigurationNameHasBeenSet() const { return m_retentionConfigurationNameHasBeenSet; }

    /**
     * <p>The name of the retention configuration to delete.</p>
     */
    inline void SetRetentionConfigurationName(const Aws::String& value) { m_retentionConfigurationNameHasBeenSet = true; m_retentionConfigurationName = value; }

    /**
     * <p>The name of the retention configuration to delete.</p>
     */
    inline void SetRetentionConfigurationName(Aws::String&& value) { m_retentionConfigurationNameHasBeenSet = true; m_retentionConfigurationName = std::move(value); }

    /**
     * <p>The name of the retention configuration to delete.</p>
     */
    inline void SetRetentionConfigurationName(const char* value) { m_retentionConfigurationNameHasBeenSet = true; m_retentionConfigurationName.assign(value); }

    /**
     * <p>The name of the retention configuration to delete.</p>
     */
    inline DeleteRetentionConfigurationRequest& WithRetentionConfigurationName(const Aws::String& value) { SetRetentionConfigurationName(value); return *this;}

    /**
     * <p>The name of the retention configuration to delete.</p>
     */
    inline DeleteRetentionConfigurationRequest& WithRetentionConfigurationName(Aws::String&& value) { SetRetentionConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the retention configuration to delete.</p>
     */
    inline DeleteRetentionConfigurationRequest& WithRetentionConfigurationName(const char* value) { SetRetentionConfigurationName(value); return *this;}

  private:

    Aws::String m_retentionConfigurationName;
    bool m_retentionConfigurationNameHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
