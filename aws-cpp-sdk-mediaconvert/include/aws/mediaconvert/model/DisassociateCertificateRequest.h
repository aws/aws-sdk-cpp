/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_MEDIACONVERT_API DisassociateCertificateRequest : public MediaConvertRequest
  {
  public:
    DisassociateCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateCertificate"; }

    Aws::String SerializePayload() const override;


    /**
     * The ARN of the ACM certificate that you want to disassociate from your
     * MediaConvert resource.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The ARN of the ACM certificate that you want to disassociate from your
     * MediaConvert resource.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * The ARN of the ACM certificate that you want to disassociate from your
     * MediaConvert resource.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The ARN of the ACM certificate that you want to disassociate from your
     * MediaConvert resource.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The ARN of the ACM certificate that you want to disassociate from your
     * MediaConvert resource.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The ARN of the ACM certificate that you want to disassociate from your
     * MediaConvert resource.
     */
    inline DisassociateCertificateRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The ARN of the ACM certificate that you want to disassociate from your
     * MediaConvert resource.
     */
    inline DisassociateCertificateRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The ARN of the ACM certificate that you want to disassociate from your
     * MediaConvert resource.
     */
    inline DisassociateCertificateRequest& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
