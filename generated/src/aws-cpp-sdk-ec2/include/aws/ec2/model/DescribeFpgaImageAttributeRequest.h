﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/FpgaImageAttributeName.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeFpgaImageAttributeRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeFpgaImageAttributeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFpgaImageAttribute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeFpgaImageAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AFI.</p>
     */
    inline const Aws::String& GetFpgaImageId() const { return m_fpgaImageId; }
    inline bool FpgaImageIdHasBeenSet() const { return m_fpgaImageIdHasBeenSet; }
    template<typename FpgaImageIdT = Aws::String>
    void SetFpgaImageId(FpgaImageIdT&& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = std::forward<FpgaImageIdT>(value); }
    template<typename FpgaImageIdT = Aws::String>
    DescribeFpgaImageAttributeRequest& WithFpgaImageId(FpgaImageIdT&& value) { SetFpgaImageId(std::forward<FpgaImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AFI attribute.</p>
     */
    inline FpgaImageAttributeName GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(FpgaImageAttributeName value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline DescribeFpgaImageAttributeRequest& WithAttribute(FpgaImageAttributeName value) { SetAttribute(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_fpgaImageId;
    bool m_fpgaImageIdHasBeenSet = false;

    FpgaImageAttributeName m_attribute{FpgaImageAttributeName::NOT_SET};
    bool m_attributeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
