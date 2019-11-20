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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QuickSight
{
namespace Model
{

  /**
   */
  class AWS_QUICKSIGHT_API DeleteTemplateRequest : public QuickSightRequest
  {
  public:
    DeleteTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTemplate"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>AWS account ID that contains the template you are deleting.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>AWS account ID that contains the template you are deleting.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>AWS account ID that contains the template you are deleting.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>AWS account ID that contains the template you are deleting.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>AWS account ID that contains the template you are deleting.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>AWS account ID that contains the template you are deleting.</p>
     */
    inline DeleteTemplateRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>AWS account ID that contains the template you are deleting.</p>
     */
    inline DeleteTemplateRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>AWS account ID that contains the template you are deleting.</p>
     */
    inline DeleteTemplateRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>An ID for the template you want to delete.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>An ID for the template you want to delete.</p>
     */
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }

    /**
     * <p>An ID for the template you want to delete.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }

    /**
     * <p>An ID for the template you want to delete.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }

    /**
     * <p>An ID for the template you want to delete.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }

    /**
     * <p>An ID for the template you want to delete.</p>
     */
    inline DeleteTemplateRequest& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>An ID for the template you want to delete.</p>
     */
    inline DeleteTemplateRequest& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>An ID for the template you want to delete.</p>
     */
    inline DeleteTemplateRequest& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>The version number</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The version number</p>
     */
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }

    /**
     * <p>The version number</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }

    /**
     * <p>The version number</p>
     */
    inline DeleteTemplateRequest& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
