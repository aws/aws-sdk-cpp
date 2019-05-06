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

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class AWS_CONFIGSERVICE_API PutRetentionConfigurationRequest : public ConfigServiceRequest
  {
  public:
    PutRetentionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRetentionConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Number of days AWS Config stores your historical information.</p> <note>
     * <p>Currently, only applicable to the configuration item history.</p> </note>
     */
    inline int GetRetentionPeriodInDays() const{ return m_retentionPeriodInDays; }

    /**
     * <p>Number of days AWS Config stores your historical information.</p> <note>
     * <p>Currently, only applicable to the configuration item history.</p> </note>
     */
    inline bool RetentionPeriodInDaysHasBeenSet() const { return m_retentionPeriodInDaysHasBeenSet; }

    /**
     * <p>Number of days AWS Config stores your historical information.</p> <note>
     * <p>Currently, only applicable to the configuration item history.</p> </note>
     */
    inline void SetRetentionPeriodInDays(int value) { m_retentionPeriodInDaysHasBeenSet = true; m_retentionPeriodInDays = value; }

    /**
     * <p>Number of days AWS Config stores your historical information.</p> <note>
     * <p>Currently, only applicable to the configuration item history.</p> </note>
     */
    inline PutRetentionConfigurationRequest& WithRetentionPeriodInDays(int value) { SetRetentionPeriodInDays(value); return *this;}

  private:

    int m_retentionPeriodInDays;
    bool m_retentionPeriodInDaysHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
