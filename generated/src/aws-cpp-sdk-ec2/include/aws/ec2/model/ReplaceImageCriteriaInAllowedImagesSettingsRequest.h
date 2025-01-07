﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ImageCriterionRequest.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ReplaceImageCriteriaInAllowedImagesSettingsRequest : public EC2Request
  {
  public:
    AWS_EC2_API ReplaceImageCriteriaInAllowedImagesSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReplaceImageCriteriaInAllowedImagesSettings"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The list of criteria that are evaluated to determine whether AMIs are
     * discoverable and usable in the account in the specified Amazon Web Services
     * Region.</p>
     */
    inline const Aws::Vector<ImageCriterionRequest>& GetImageCriteria() const{ return m_imageCriteria; }
    inline bool ImageCriteriaHasBeenSet() const { return m_imageCriteriaHasBeenSet; }
    inline void SetImageCriteria(const Aws::Vector<ImageCriterionRequest>& value) { m_imageCriteriaHasBeenSet = true; m_imageCriteria = value; }
    inline void SetImageCriteria(Aws::Vector<ImageCriterionRequest>&& value) { m_imageCriteriaHasBeenSet = true; m_imageCriteria = std::move(value); }
    inline ReplaceImageCriteriaInAllowedImagesSettingsRequest& WithImageCriteria(const Aws::Vector<ImageCriterionRequest>& value) { SetImageCriteria(value); return *this;}
    inline ReplaceImageCriteriaInAllowedImagesSettingsRequest& WithImageCriteria(Aws::Vector<ImageCriterionRequest>&& value) { SetImageCriteria(std::move(value)); return *this;}
    inline ReplaceImageCriteriaInAllowedImagesSettingsRequest& AddImageCriteria(const ImageCriterionRequest& value) { m_imageCriteriaHasBeenSet = true; m_imageCriteria.push_back(value); return *this; }
    inline ReplaceImageCriteriaInAllowedImagesSettingsRequest& AddImageCriteria(ImageCriterionRequest&& value) { m_imageCriteriaHasBeenSet = true; m_imageCriteria.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ReplaceImageCriteriaInAllowedImagesSettingsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<ImageCriterionRequest> m_imageCriteria;
    bool m_imageCriteriaHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
