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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/model/SettingName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API ListAccountSettingsRequest : public ECSRequest
  {
  public:
    ListAccountSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccountSettings"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The resource name you want to list the account settings for.</p>
     */
    inline const SettingName& GetName() const{ return m_name; }

    /**
     * <p>The resource name you want to list the account settings for.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The resource name you want to list the account settings for.</p>
     */
    inline void SetName(const SettingName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The resource name you want to list the account settings for.</p>
     */
    inline void SetName(SettingName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The resource name you want to list the account settings for.</p>
     */
    inline ListAccountSettingsRequest& WithName(const SettingName& value) { SetName(value); return *this;}

    /**
     * <p>The resource name you want to list the account settings for.</p>
     */
    inline ListAccountSettingsRequest& WithName(SettingName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the account settings with which to filter results. You must also
     * specify an account setting name to use this parameter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the account settings with which to filter results. You must also
     * specify an account setting name to use this parameter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the account settings with which to filter results. You must also
     * specify an account setting name to use this parameter.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the account settings with which to filter results. You must also
     * specify an account setting name to use this parameter.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the account settings with which to filter results. You must also
     * specify an account setting name to use this parameter.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the account settings with which to filter results. You must also
     * specify an account setting name to use this parameter.</p>
     */
    inline ListAccountSettingsRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the account settings with which to filter results. You must also
     * specify an account setting name to use this parameter.</p>
     */
    inline ListAccountSettingsRequest& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the account settings with which to filter results. You must also
     * specify an account setting name to use this parameter.</p>
     */
    inline ListAccountSettingsRequest& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the account settings are listed only for the
     * authenticated user.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the account settings are listed only for the
     * authenticated user.</p>
     */
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the account settings are listed only for the
     * authenticated user.</p>
     */
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the account settings are listed only for the
     * authenticated user.</p>
     */
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::move(value); }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the account settings are listed only for the
     * authenticated user.</p>
     */
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the account settings are listed only for the
     * authenticated user.</p>
     */
    inline ListAccountSettingsRequest& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the account settings are listed only for the
     * authenticated user.</p>
     */
    inline ListAccountSettingsRequest& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the account settings are listed only for the
     * authenticated user.</p>
     */
    inline ListAccountSettingsRequest& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}


    /**
     * <p>Specifies whether to return the effective settings. If <code>true</code>, the
     * account settings for the root user or the default setting for the
     * <code>principalArn</code> are returned. If <code>false</code>, the account
     * settings for the <code>principalArn</code> are returned if they are set.
     * Otherwise, no account settings are returned.</p>
     */
    inline bool GetEffectiveSettings() const{ return m_effectiveSettings; }

    /**
     * <p>Specifies whether to return the effective settings. If <code>true</code>, the
     * account settings for the root user or the default setting for the
     * <code>principalArn</code> are returned. If <code>false</code>, the account
     * settings for the <code>principalArn</code> are returned if they are set.
     * Otherwise, no account settings are returned.</p>
     */
    inline bool EffectiveSettingsHasBeenSet() const { return m_effectiveSettingsHasBeenSet; }

    /**
     * <p>Specifies whether to return the effective settings. If <code>true</code>, the
     * account settings for the root user or the default setting for the
     * <code>principalArn</code> are returned. If <code>false</code>, the account
     * settings for the <code>principalArn</code> are returned if they are set.
     * Otherwise, no account settings are returned.</p>
     */
    inline void SetEffectiveSettings(bool value) { m_effectiveSettingsHasBeenSet = true; m_effectiveSettings = value; }

    /**
     * <p>Specifies whether to return the effective settings. If <code>true</code>, the
     * account settings for the root user or the default setting for the
     * <code>principalArn</code> are returned. If <code>false</code>, the account
     * settings for the <code>principalArn</code> are returned if they are set.
     * Otherwise, no account settings are returned.</p>
     */
    inline ListAccountSettingsRequest& WithEffectiveSettings(bool value) { SetEffectiveSettings(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAccountSettings</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAccountSettings</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAccountSettings</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAccountSettings</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAccountSettings</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAccountSettings</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListAccountSettingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAccountSettings</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListAccountSettingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAccountSettings</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListAccountSettingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of account setting results returned by
     * <code>ListAccountSettings</code> in paginated output. When this parameter is
     * used, <code>ListAccountSettings</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListAccountSettings</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 10. If this
     * parameter is not used, then <code>ListAccountSettings</code> returns up to 10
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of account setting results returned by
     * <code>ListAccountSettings</code> in paginated output. When this parameter is
     * used, <code>ListAccountSettings</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListAccountSettings</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 10. If this
     * parameter is not used, then <code>ListAccountSettings</code> returns up to 10
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of account setting results returned by
     * <code>ListAccountSettings</code> in paginated output. When this parameter is
     * used, <code>ListAccountSettings</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListAccountSettings</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 10. If this
     * parameter is not used, then <code>ListAccountSettings</code> returns up to 10
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of account setting results returned by
     * <code>ListAccountSettings</code> in paginated output. When this parameter is
     * used, <code>ListAccountSettings</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListAccountSettings</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 10. If this
     * parameter is not used, then <code>ListAccountSettings</code> returns up to 10
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline ListAccountSettingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    SettingName m_name;
    bool m_nameHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet;

    bool m_effectiveSettings;
    bool m_effectiveSettingsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
