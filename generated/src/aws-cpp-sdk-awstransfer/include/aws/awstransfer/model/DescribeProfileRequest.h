/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class DescribeProfileRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API DescribeProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProfile"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the profile that you want described.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p>The identifier of the profile that you want described.</p>
     */
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }

    /**
     * <p>The identifier of the profile that you want described.</p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }

    /**
     * <p>The identifier of the profile that you want described.</p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }

    /**
     * <p>The identifier of the profile that you want described.</p>
     */
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }

    /**
     * <p>The identifier of the profile that you want described.</p>
     */
    inline DescribeProfileRequest& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p>The identifier of the profile that you want described.</p>
     */
    inline DescribeProfileRequest& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the profile that you want described.</p>
     */
    inline DescribeProfileRequest& WithProfileId(const char* value) { SetProfileId(value); return *this;}

  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
