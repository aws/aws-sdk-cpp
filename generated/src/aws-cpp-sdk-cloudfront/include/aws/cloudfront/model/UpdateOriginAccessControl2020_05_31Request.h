﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/OriginAccessControlConfig.h>
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
  class UpdateOriginAccessControl2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API UpdateOriginAccessControl2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOriginAccessControl"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An origin access control.</p>
     */
    inline const OriginAccessControlConfig& GetOriginAccessControlConfig() const{ return m_originAccessControlConfig; }
    inline bool OriginAccessControlConfigHasBeenSet() const { return m_originAccessControlConfigHasBeenSet; }
    inline void SetOriginAccessControlConfig(const OriginAccessControlConfig& value) { m_originAccessControlConfigHasBeenSet = true; m_originAccessControlConfig = value; }
    inline void SetOriginAccessControlConfig(OriginAccessControlConfig&& value) { m_originAccessControlConfigHasBeenSet = true; m_originAccessControlConfig = std::move(value); }
    inline UpdateOriginAccessControl2020_05_31Request& WithOriginAccessControlConfig(const OriginAccessControlConfig& value) { SetOriginAccessControlConfig(value); return *this;}
    inline UpdateOriginAccessControl2020_05_31Request& WithOriginAccessControlConfig(OriginAccessControlConfig&& value) { SetOriginAccessControlConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the origin access control that you are updating.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateOriginAccessControl2020_05_31Request& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateOriginAccessControl2020_05_31Request& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateOriginAccessControl2020_05_31Request& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version (<code>ETag</code> value) of the origin access control
     * that you are updating.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }
    inline UpdateOriginAccessControl2020_05_31Request& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}
    inline UpdateOriginAccessControl2020_05_31Request& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}
    inline UpdateOriginAccessControl2020_05_31Request& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}
    ///@}
  private:

    OriginAccessControlConfig m_originAccessControlConfig;
    bool m_originAccessControlConfigHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
