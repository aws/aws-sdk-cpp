/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/MediaPackageRequest.h>
#include <aws/mediapackage/model/EgressAccessLogs.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/IngressAccessLogs.h>
#include <utility>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

  /**
   * the option to configure log subscription.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/ConfigureLogsRequest">AWS
   * API Reference</a></p>
   */
  class ConfigureLogsRequest : public MediaPackageRequest
  {
  public:
    AWS_MEDIAPACKAGE_API ConfigureLogsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfigureLogs"; }

    AWS_MEDIAPACKAGE_API Aws::String SerializePayload() const override;


    
    inline const EgressAccessLogs& GetEgressAccessLogs() const{ return m_egressAccessLogs; }

    
    inline bool EgressAccessLogsHasBeenSet() const { return m_egressAccessLogsHasBeenSet; }

    
    inline void SetEgressAccessLogs(const EgressAccessLogs& value) { m_egressAccessLogsHasBeenSet = true; m_egressAccessLogs = value; }

    
    inline void SetEgressAccessLogs(EgressAccessLogs&& value) { m_egressAccessLogsHasBeenSet = true; m_egressAccessLogs = std::move(value); }

    
    inline ConfigureLogsRequest& WithEgressAccessLogs(const EgressAccessLogs& value) { SetEgressAccessLogs(value); return *this;}

    
    inline ConfigureLogsRequest& WithEgressAccessLogs(EgressAccessLogs&& value) { SetEgressAccessLogs(std::move(value)); return *this;}


    /**
     * The ID of the channel to log subscription.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the channel to log subscription.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the channel to log subscription.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the channel to log subscription.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the channel to log subscription.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the channel to log subscription.
     */
    inline ConfigureLogsRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the channel to log subscription.
     */
    inline ConfigureLogsRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the channel to log subscription.
     */
    inline ConfigureLogsRequest& WithId(const char* value) { SetId(value); return *this;}


    
    inline const IngressAccessLogs& GetIngressAccessLogs() const{ return m_ingressAccessLogs; }

    
    inline bool IngressAccessLogsHasBeenSet() const { return m_ingressAccessLogsHasBeenSet; }

    
    inline void SetIngressAccessLogs(const IngressAccessLogs& value) { m_ingressAccessLogsHasBeenSet = true; m_ingressAccessLogs = value; }

    
    inline void SetIngressAccessLogs(IngressAccessLogs&& value) { m_ingressAccessLogsHasBeenSet = true; m_ingressAccessLogs = std::move(value); }

    
    inline ConfigureLogsRequest& WithIngressAccessLogs(const IngressAccessLogs& value) { SetIngressAccessLogs(value); return *this;}

    
    inline ConfigureLogsRequest& WithIngressAccessLogs(IngressAccessLogs&& value) { SetIngressAccessLogs(std::move(value)); return *this;}

  private:

    EgressAccessLogs m_egressAccessLogs;
    bool m_egressAccessLogsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    IngressAccessLogs m_ingressAccessLogs;
    bool m_ingressAccessLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
