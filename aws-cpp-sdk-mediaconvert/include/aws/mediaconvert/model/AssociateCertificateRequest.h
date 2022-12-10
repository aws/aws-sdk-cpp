/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class AssociateCertificateRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API AssociateCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateCertificate"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    /**
     * The ARN of the ACM certificate that you want to associate with your MediaConvert
     * resource.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The ARN of the ACM certificate that you want to associate with your MediaConvert
     * resource.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * The ARN of the ACM certificate that you want to associate with your MediaConvert
     * resource.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The ARN of the ACM certificate that you want to associate with your MediaConvert
     * resource.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The ARN of the ACM certificate that you want to associate with your MediaConvert
     * resource.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The ARN of the ACM certificate that you want to associate with your MediaConvert
     * resource.
     */
    inline AssociateCertificateRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The ARN of the ACM certificate that you want to associate with your MediaConvert
     * resource.
     */
    inline AssociateCertificateRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The ARN of the ACM certificate that you want to associate with your MediaConvert
     * resource.
     */
    inline AssociateCertificateRequest& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
