/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class UpdateDiscoveryJobRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API UpdateDiscoveryJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDiscoveryJob"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that you want
     * to update.</p>
     */
    inline const Aws::String& GetDiscoveryJobArn() const{ return m_discoveryJobArn; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that you want
     * to update.</p>
     */
    inline bool DiscoveryJobArnHasBeenSet() const { return m_discoveryJobArnHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that you want
     * to update.</p>
     */
    inline void SetDiscoveryJobArn(const Aws::String& value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that you want
     * to update.</p>
     */
    inline void SetDiscoveryJobArn(Aws::String&& value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that you want
     * to update.</p>
     */
    inline void SetDiscoveryJobArn(const char* value) { m_discoveryJobArnHasBeenSet = true; m_discoveryJobArn.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that you want
     * to update.</p>
     */
    inline UpdateDiscoveryJobRequest& WithDiscoveryJobArn(const Aws::String& value) { SetDiscoveryJobArn(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that you want
     * to update.</p>
     */
    inline UpdateDiscoveryJobRequest& WithDiscoveryJobArn(Aws::String&& value) { SetDiscoveryJobArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the discovery job that you want
     * to update.</p>
     */
    inline UpdateDiscoveryJobRequest& WithDiscoveryJobArn(const char* value) { SetDiscoveryJobArn(value); return *this;}


    /**
     * <p>Specifies in minutes how long that you want the discovery job to run. (You
     * can't set this parameter to less than the number of minutes that the job has
     * already run for.)</p>
     */
    inline int GetCollectionDurationMinutes() const{ return m_collectionDurationMinutes; }

    /**
     * <p>Specifies in minutes how long that you want the discovery job to run. (You
     * can't set this parameter to less than the number of minutes that the job has
     * already run for.)</p>
     */
    inline bool CollectionDurationMinutesHasBeenSet() const { return m_collectionDurationMinutesHasBeenSet; }

    /**
     * <p>Specifies in minutes how long that you want the discovery job to run. (You
     * can't set this parameter to less than the number of minutes that the job has
     * already run for.)</p>
     */
    inline void SetCollectionDurationMinutes(int value) { m_collectionDurationMinutesHasBeenSet = true; m_collectionDurationMinutes = value; }

    /**
     * <p>Specifies in minutes how long that you want the discovery job to run. (You
     * can't set this parameter to less than the number of minutes that the job has
     * already run for.)</p>
     */
    inline UpdateDiscoveryJobRequest& WithCollectionDurationMinutes(int value) { SetCollectionDurationMinutes(value); return *this;}

  private:

    Aws::String m_discoveryJobArn;
    bool m_discoveryJobArnHasBeenSet = false;

    int m_collectionDurationMinutes;
    bool m_collectionDurationMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
