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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ResourceDataSyncS3Destination.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API CreateResourceDataSyncRequest : public SSMRequest
  {
  public:
    CreateResourceDataSyncRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResourceDataSync"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the configuration.</p>
     */
    inline const Aws::String& GetSyncName() const{ return m_syncName; }

    /**
     * <p>A name for the configuration.</p>
     */
    inline bool SyncNameHasBeenSet() const { return m_syncNameHasBeenSet; }

    /**
     * <p>A name for the configuration.</p>
     */
    inline void SetSyncName(const Aws::String& value) { m_syncNameHasBeenSet = true; m_syncName = value; }

    /**
     * <p>A name for the configuration.</p>
     */
    inline void SetSyncName(Aws::String&& value) { m_syncNameHasBeenSet = true; m_syncName = std::move(value); }

    /**
     * <p>A name for the configuration.</p>
     */
    inline void SetSyncName(const char* value) { m_syncNameHasBeenSet = true; m_syncName.assign(value); }

    /**
     * <p>A name for the configuration.</p>
     */
    inline CreateResourceDataSyncRequest& WithSyncName(const Aws::String& value) { SetSyncName(value); return *this;}

    /**
     * <p>A name for the configuration.</p>
     */
    inline CreateResourceDataSyncRequest& WithSyncName(Aws::String&& value) { SetSyncName(std::move(value)); return *this;}

    /**
     * <p>A name for the configuration.</p>
     */
    inline CreateResourceDataSyncRequest& WithSyncName(const char* value) { SetSyncName(value); return *this;}


    /**
     * <p>Amazon S3 configuration details for the sync.</p>
     */
    inline const ResourceDataSyncS3Destination& GetS3Destination() const{ return m_s3Destination; }

    /**
     * <p>Amazon S3 configuration details for the sync.</p>
     */
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }

    /**
     * <p>Amazon S3 configuration details for the sync.</p>
     */
    inline void SetS3Destination(const ResourceDataSyncS3Destination& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = value; }

    /**
     * <p>Amazon S3 configuration details for the sync.</p>
     */
    inline void SetS3Destination(ResourceDataSyncS3Destination&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::move(value); }

    /**
     * <p>Amazon S3 configuration details for the sync.</p>
     */
    inline CreateResourceDataSyncRequest& WithS3Destination(const ResourceDataSyncS3Destination& value) { SetS3Destination(value); return *this;}

    /**
     * <p>Amazon S3 configuration details for the sync.</p>
     */
    inline CreateResourceDataSyncRequest& WithS3Destination(ResourceDataSyncS3Destination&& value) { SetS3Destination(std::move(value)); return *this;}

  private:

    Aws::String m_syncName;
    bool m_syncNameHasBeenSet;

    ResourceDataSyncS3Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
