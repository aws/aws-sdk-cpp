/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/MediaPackageVodRequest.h>
#include <aws/mediapackage-vod/model/EgressAccessLogs.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

  /**
   * The option to configure log subscription.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/ConfigureLogsRequest">AWS
   * API Reference</a></p>
   */
  class ConfigureLogsRequest : public MediaPackageVodRequest
  {
  public:
    AWS_MEDIAPACKAGEVOD_API ConfigureLogsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfigureLogs"; }

    AWS_MEDIAPACKAGEVOD_API Aws::String SerializePayload() const override;


    
    inline const EgressAccessLogs& GetEgressAccessLogs() const{ return m_egressAccessLogs; }

    
    inline bool EgressAccessLogsHasBeenSet() const { return m_egressAccessLogsHasBeenSet; }

    
    inline void SetEgressAccessLogs(const EgressAccessLogs& value) { m_egressAccessLogsHasBeenSet = true; m_egressAccessLogs = value; }

    
    inline void SetEgressAccessLogs(EgressAccessLogs&& value) { m_egressAccessLogsHasBeenSet = true; m_egressAccessLogs = std::move(value); }

    
    inline ConfigureLogsRequest& WithEgressAccessLogs(const EgressAccessLogs& value) { SetEgressAccessLogs(value); return *this;}

    
    inline ConfigureLogsRequest& WithEgressAccessLogs(EgressAccessLogs&& value) { SetEgressAccessLogs(std::move(value)); return *this;}


    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline ConfigureLogsRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline ConfigureLogsRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of a MediaPackage VOD PackagingGroup resource.
     */
    inline ConfigureLogsRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    EgressAccessLogs m_egressAccessLogs;
    bool m_egressAccessLogsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
