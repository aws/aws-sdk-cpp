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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API GenerateServiceLastAccessedDetailsRequest : public IAMRequest
  {
  public:
    GenerateServiceLastAccessedDetailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateServiceLastAccessedDetails"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN of the IAM resource (user, group, role, or managed policy) used to
     * generate information about when the resource was last used in an attempt to
     * access an AWS service.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the IAM resource (user, group, role, or managed policy) used to
     * generate information about when the resource was last used in an attempt to
     * access an AWS service.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the IAM resource (user, group, role, or managed policy) used to
     * generate information about when the resource was last used in an attempt to
     * access an AWS service.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the IAM resource (user, group, role, or managed policy) used to
     * generate information about when the resource was last used in an attempt to
     * access an AWS service.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the IAM resource (user, group, role, or managed policy) used to
     * generate information about when the resource was last used in an attempt to
     * access an AWS service.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the IAM resource (user, group, role, or managed policy) used to
     * generate information about when the resource was last used in an attempt to
     * access an AWS service.</p>
     */
    inline GenerateServiceLastAccessedDetailsRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the IAM resource (user, group, role, or managed policy) used to
     * generate information about when the resource was last used in an attempt to
     * access an AWS service.</p>
     */
    inline GenerateServiceLastAccessedDetailsRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM resource (user, group, role, or managed policy) used to
     * generate information about when the resource was last used in an attempt to
     * access an AWS service.</p>
     */
    inline GenerateServiceLastAccessedDetailsRequest& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
