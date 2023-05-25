/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class PutRetentionConfigurationRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API PutRetentionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRetentionConfiguration"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Number of days Config stores your historical information.</p> 
     * <p>Currently, only applicable to the configuration item history.</p> 
     */
    inline int GetRetentionPeriodInDays() const{ return m_retentionPeriodInDays; }

    /**
     * <p>Number of days Config stores your historical information.</p> 
     * <p>Currently, only applicable to the configuration item history.</p> 
     */
    inline bool RetentionPeriodInDaysHasBeenSet() const { return m_retentionPeriodInDaysHasBeenSet; }

    /**
     * <p>Number of days Config stores your historical information.</p> 
     * <p>Currently, only applicable to the configuration item history.</p> 
     */
    inline void SetRetentionPeriodInDays(int value) { m_retentionPeriodInDaysHasBeenSet = true; m_retentionPeriodInDays = value; }

    /**
     * <p>Number of days Config stores your historical information.</p> 
     * <p>Currently, only applicable to the configuration item history.</p> 
     */
    inline PutRetentionConfigurationRequest& WithRetentionPeriodInDays(int value) { SetRetentionPeriodInDays(value); return *this;}

  private:

    int m_retentionPeriodInDays;
    bool m_retentionPeriodInDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
