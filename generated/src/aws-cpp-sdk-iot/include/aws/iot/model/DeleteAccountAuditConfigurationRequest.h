/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class DeleteAccountAuditConfigurationRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DeleteAccountAuditConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAccountAuditConfiguration"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>If true, all scheduled audits are deleted.</p>
     */
    inline bool GetDeleteScheduledAudits() const{ return m_deleteScheduledAudits; }

    /**
     * <p>If true, all scheduled audits are deleted.</p>
     */
    inline bool DeleteScheduledAuditsHasBeenSet() const { return m_deleteScheduledAuditsHasBeenSet; }

    /**
     * <p>If true, all scheduled audits are deleted.</p>
     */
    inline void SetDeleteScheduledAudits(bool value) { m_deleteScheduledAuditsHasBeenSet = true; m_deleteScheduledAudits = value; }

    /**
     * <p>If true, all scheduled audits are deleted.</p>
     */
    inline DeleteAccountAuditConfigurationRequest& WithDeleteScheduledAudits(bool value) { SetDeleteScheduledAudits(value); return *this;}

  private:

    bool m_deleteScheduledAudits;
    bool m_deleteScheduledAuditsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
