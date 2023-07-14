﻿/**
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
  class AWS_DATASYNC_API DescribeLocationFsxWindowsRequest : public DataSyncRequest
  {
  public:
    DescribeLocationFsxWindowsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLocationFsxWindows"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the FSx for Windows File Server location to
     * describe.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the FSx for Windows File Server location to
     * describe.</p>
     */
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the FSx for Windows File Server location to
     * describe.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArnHasBeenSet = true; m_locationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the FSx for Windows File Server location to
     * describe.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the FSx for Windows File Server location to
     * describe.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArnHasBeenSet = true; m_locationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the FSx for Windows File Server location to
     * describe.</p>
     */
    inline DescribeLocationFsxWindowsRequest& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the FSx for Windows File Server location to
     * describe.</p>
     */
    inline DescribeLocationFsxWindowsRequest& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the FSx for Windows File Server location to
     * describe.</p>
     */
    inline DescribeLocationFsxWindowsRequest& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}

  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
