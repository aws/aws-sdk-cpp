/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class DescribeAccessPolicyRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API DescribeAccessPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAccessPolicy"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the access policy.</p>
     */
    inline const Aws::String& GetAccessPolicyId() const{ return m_accessPolicyId; }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline bool AccessPolicyIdHasBeenSet() const { return m_accessPolicyIdHasBeenSet; }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline void SetAccessPolicyId(const Aws::String& value) { m_accessPolicyIdHasBeenSet = true; m_accessPolicyId = value; }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline void SetAccessPolicyId(Aws::String&& value) { m_accessPolicyIdHasBeenSet = true; m_accessPolicyId = std::move(value); }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline void SetAccessPolicyId(const char* value) { m_accessPolicyIdHasBeenSet = true; m_accessPolicyId.assign(value); }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline DescribeAccessPolicyRequest& WithAccessPolicyId(const Aws::String& value) { SetAccessPolicyId(value); return *this;}

    /**
     * <p>The ID of the access policy.</p>
     */
    inline DescribeAccessPolicyRequest& WithAccessPolicyId(Aws::String&& value) { SetAccessPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the access policy.</p>
     */
    inline DescribeAccessPolicyRequest& WithAccessPolicyId(const char* value) { SetAccessPolicyId(value); return *this;}

  private:

    Aws::String m_accessPolicyId;
    bool m_accessPolicyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
