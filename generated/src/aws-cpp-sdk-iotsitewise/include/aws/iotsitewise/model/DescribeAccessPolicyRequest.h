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
    AWS_IOTSITEWISE_API DescribeAccessPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAccessPolicy"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the access policy.</p>
     */
    inline const Aws::String& GetAccessPolicyId() const { return m_accessPolicyId; }
    inline bool AccessPolicyIdHasBeenSet() const { return m_accessPolicyIdHasBeenSet; }
    template<typename AccessPolicyIdT = Aws::String>
    void SetAccessPolicyId(AccessPolicyIdT&& value) { m_accessPolicyIdHasBeenSet = true; m_accessPolicyId = std::forward<AccessPolicyIdT>(value); }
    template<typename AccessPolicyIdT = Aws::String>
    DescribeAccessPolicyRequest& WithAccessPolicyId(AccessPolicyIdT&& value) { SetAccessPolicyId(std::forward<AccessPolicyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessPolicyId;
    bool m_accessPolicyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
