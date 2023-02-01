/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class GetContinuousDeploymentPolicy2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API GetContinuousDeploymentPolicy2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetContinuousDeploymentPolicy"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the continuous deployment policy that you are getting.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the continuous deployment policy that you are getting.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the continuous deployment policy that you are getting.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the continuous deployment policy that you are getting.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the continuous deployment policy that you are getting.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the continuous deployment policy that you are getting.</p>
     */
    inline GetContinuousDeploymentPolicy2020_05_31Request& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the continuous deployment policy that you are getting.</p>
     */
    inline GetContinuousDeploymentPolicy2020_05_31Request& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the continuous deployment policy that you are getting.</p>
     */
    inline GetContinuousDeploymentPolicy2020_05_31Request& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
