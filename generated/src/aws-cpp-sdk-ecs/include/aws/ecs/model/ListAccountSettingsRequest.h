/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListAccountSettingsRequest : public ECSRequest
  {
  public:
    AWS_ECS_API ListAccountSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccountSettings"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the account setting you want to list the settings for.</p>
     */
    inline const SettingName& GetName() const{ return m_name; }

    /**
     * <p>The name of the account setting you want to list the settings for.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the account setting you want to list the settings for.</p>
     */
    inline void SetName(const SettingName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the account setting you want to list the settings for.</p>
     */
    inline void SetName(SettingName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the account setting you want to list the settings for.</p>
     */
    inline ListAccountSettingsRequest& WithName(const SettingName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the account setting you want to list the settings for.</p>
     */
    inline ListAccountSettingsRequest& WithName(SettingName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the account settings to filter results with. You must also
     * specify an account setting name to use this parameter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the account settings to filter results with. You must also
     * specify an account setting name to use this parameter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the account settings to filter results with. You must also
     * specify an account setting name to use this parameter.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the account settings to filter results with. You must also
     * specify an account setting name to use this parameter.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the account settings to filter results with. You must also
     * specify an account setting name to use this parameter.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the account settings to filter results with. You must also
     * specify an account setting name to use this parameter.</p>
     */
    inline ListAccountSettingsRequest& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the account settings to filter results with. You must also
     * specify an account setting name to use this parameter.</p>
     */
    inline ListAccountSettingsRequest& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the account settings to filter results with. You must also
     * specify an account setting name to use this parameter.</p>
     */
    inline ListAccountSettingsRequest& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the account settings are listed only for the
     * authenticated user.</p>  <p>Federated users assume the account setting of
     * the root user and can't have explicit account settings set for them.</p> 
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the account settings are listed only for the
     * authenticated user.</p>  <p>Federated users assume the account setting of
     * the root user and can't have explicit account settings set for them.</p> 
     */
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the account settings are listed only for the
     * authenticated user.</p>  <p>Federated users assume the account setting of
     * the root user and can't have explicit account settings set for them.</p> 
     */
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the account settings are listed only for the
     * authenticated user.</p>  <p>Federated users assume the account setting of
     * the root user and can't have explicit account settings set for them.</p> 
     */
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::move(value); }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the account settings are listed only for the
     * authenticated user.</p>  <p>Federated users assume the account setting of
     * the root user and can't have explicit account settings set for them.</p> 
     */
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the account settings are listed only for the
     * authenticated user.</p>  <p>Federated users assume the account setting of
     * the root user and can't have explicit account settings set for them.</p> 
     */
    inline ListAccountSettingsRequest& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the account settings are listed only for the
     * authenticated user.</p>  <p>Federated users assume the account setting of
     * the root user and can't have explicit account settings set for them.</p> 
     */
    inline ListAccountSettingsRequest& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the principal, which can be an IAM user, IAM role, or the root
     * user. If this field is omitted, the account settings are listed only for the
     * authenticated user.</p>  <p>Federated users assume the account setting of
     * the root user and can't have explicit account settings set for them.</p> 
     */
    inline ListAccountSettingsRequest& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}


    /**
     * <p>Determines whether to return the effective settings. If <code>true</code>,
     * the account settings for the root user or the default setting for the
     * <code>principalArn</code> are returned. If <code>false</code>, the account
     * settings for the <code>principalArn</code> are returned if they're set.
     * Otherwise, no account settings are returned.</p>
     */
    inline bool GetEffectiveSettings() const{ return m_effectiveSettings; }

    /**
     * <p>Determines whether to return the effective settings. If <code>true</code>,
     * the account settings for the root user or the default setting for the
     * <code>principalArn</code> are returned. If <code>false</code>, the account
     * settings for the <code>principalArn</code> are returned if they're set.
     * Otherwise, no account settings are returned.</p>
     */
    inline bool EffectiveSettingsHasBeenSet() const { return m_effectiveSettingsHasBeenSet; }

    /**
     * <p>Determines whether to return the effective settings. If <code>true</code>,
     * the account settings for the root user or the default setting for the
     * <code>principalArn</code> are returned. If <code>false</code>, the account
     * settings for the <code>principalArn</code> are returned if they're set.
     * Otherwise, no account settings are returned.</p>
     */
    inline void SetEffectiveSettings(bool value) { m_effectiveSettingsHasBeenSet = true; m_effectiveSettings = value; }

    /**
     * <p>Determines whether to return the effective settings. If <code>true</code>,
     * the account settings for the root user or the default setting for the
     * <code>principalArn</code> are returned. If <code>false</code>, the account
     * settings for the <code>principalArn</code> are returned if they're set.
     * Otherwise, no account settings are returned.</p>
     */
    inline ListAccountSettingsRequest& WithEffectiveSettings(bool value) { SetEffectiveSettings(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListAccountSettings</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it's possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListAccountSettings</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it's possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListAccountSettings</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it's possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListAccountSettings</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it's possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListAccountSettings</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it's possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListAccountSettings</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it's possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline ListAccountSettingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListAccountSettings</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it's possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline ListAccountSettingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListAccountSettings</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it's possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
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
     * parameter isn't used, then <code>ListAccountSettings</code> returns up to 10
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
     * parameter isn't used, then <code>ListAccountSettings</code> returns up to 10
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
     * parameter isn't used, then <code>ListAccountSettings</code> returns up to 10
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
     * parameter isn't used, then <code>ListAccountSettings</code> returns up to 10
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline ListAccountSettingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    SettingName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;

    bool m_effectiveSettings;
    bool m_effectiveSettingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
