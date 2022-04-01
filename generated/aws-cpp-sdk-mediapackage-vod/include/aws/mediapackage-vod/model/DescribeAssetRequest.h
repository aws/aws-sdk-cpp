﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/MediaPackageVodRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

  /**
   */
  class AWS_MEDIAPACKAGEVOD_API DescribeAssetRequest : public MediaPackageVodRequest
  {
  public:
    DescribeAssetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAsset"; }

    Aws::String SerializePayload() const override;


    /**
     * The ID of an MediaPackage VOD Asset resource.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of an MediaPackage VOD Asset resource.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of an MediaPackage VOD Asset resource.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of an MediaPackage VOD Asset resource.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of an MediaPackage VOD Asset resource.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of an MediaPackage VOD Asset resource.
     */
    inline DescribeAssetRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of an MediaPackage VOD Asset resource.
     */
    inline DescribeAssetRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of an MediaPackage VOD Asset resource.
     */
    inline DescribeAssetRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
