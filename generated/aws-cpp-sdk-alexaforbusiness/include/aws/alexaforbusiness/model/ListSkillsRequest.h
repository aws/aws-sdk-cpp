﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/EnablementTypeFilter.h>
#include <aws/alexaforbusiness/model/SkillTypeFilter.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API ListSkillsRequest : public AlexaForBusinessRequest
  {
  public:
    ListSkillsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSkills"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the skill group for which to list enabled skills.</p>
     */
    inline const Aws::String& GetSkillGroupArn() const{ return m_skillGroupArn; }

    /**
     * <p>The ARN of the skill group for which to list enabled skills.</p>
     */
    inline bool SkillGroupArnHasBeenSet() const { return m_skillGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the skill group for which to list enabled skills.</p>
     */
    inline void SetSkillGroupArn(const Aws::String& value) { m_skillGroupArnHasBeenSet = true; m_skillGroupArn = value; }

    /**
     * <p>The ARN of the skill group for which to list enabled skills.</p>
     */
    inline void SetSkillGroupArn(Aws::String&& value) { m_skillGroupArnHasBeenSet = true; m_skillGroupArn = std::move(value); }

    /**
     * <p>The ARN of the skill group for which to list enabled skills.</p>
     */
    inline void SetSkillGroupArn(const char* value) { m_skillGroupArnHasBeenSet = true; m_skillGroupArn.assign(value); }

    /**
     * <p>The ARN of the skill group for which to list enabled skills.</p>
     */
    inline ListSkillsRequest& WithSkillGroupArn(const Aws::String& value) { SetSkillGroupArn(value); return *this;}

    /**
     * <p>The ARN of the skill group for which to list enabled skills.</p>
     */
    inline ListSkillsRequest& WithSkillGroupArn(Aws::String&& value) { SetSkillGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the skill group for which to list enabled skills.</p>
     */
    inline ListSkillsRequest& WithSkillGroupArn(const char* value) { SetSkillGroupArn(value); return *this;}


    /**
     * <p>Whether the skill is enabled under the user's account.</p>
     */
    inline const EnablementTypeFilter& GetEnablementType() const{ return m_enablementType; }

    /**
     * <p>Whether the skill is enabled under the user's account.</p>
     */
    inline bool EnablementTypeHasBeenSet() const { return m_enablementTypeHasBeenSet; }

    /**
     * <p>Whether the skill is enabled under the user's account.</p>
     */
    inline void SetEnablementType(const EnablementTypeFilter& value) { m_enablementTypeHasBeenSet = true; m_enablementType = value; }

    /**
     * <p>Whether the skill is enabled under the user's account.</p>
     */
    inline void SetEnablementType(EnablementTypeFilter&& value) { m_enablementTypeHasBeenSet = true; m_enablementType = std::move(value); }

    /**
     * <p>Whether the skill is enabled under the user's account.</p>
     */
    inline ListSkillsRequest& WithEnablementType(const EnablementTypeFilter& value) { SetEnablementType(value); return *this;}

    /**
     * <p>Whether the skill is enabled under the user's account.</p>
     */
    inline ListSkillsRequest& WithEnablementType(EnablementTypeFilter&& value) { SetEnablementType(std::move(value)); return *this;}


    /**
     * <p>Whether the skill is publicly available or is a private skill.</p>
     */
    inline const SkillTypeFilter& GetSkillType() const{ return m_skillType; }

    /**
     * <p>Whether the skill is publicly available or is a private skill.</p>
     */
    inline bool SkillTypeHasBeenSet() const { return m_skillTypeHasBeenSet; }

    /**
     * <p>Whether the skill is publicly available or is a private skill.</p>
     */
    inline void SetSkillType(const SkillTypeFilter& value) { m_skillTypeHasBeenSet = true; m_skillType = value; }

    /**
     * <p>Whether the skill is publicly available or is a private skill.</p>
     */
    inline void SetSkillType(SkillTypeFilter&& value) { m_skillTypeHasBeenSet = true; m_skillType = std::move(value); }

    /**
     * <p>Whether the skill is publicly available or is a private skill.</p>
     */
    inline ListSkillsRequest& WithSkillType(const SkillTypeFilter& value) { SetSkillType(value); return *this;}

    /**
     * <p>Whether the skill is publicly available or is a private skill.</p>
     */
    inline ListSkillsRequest& WithSkillType(SkillTypeFilter&& value) { SetSkillType(std::move(value)); return *this;}


    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline ListSkillsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline ListSkillsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * <code>MaxResults</code>.</p>
     */
    inline ListSkillsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p>
     */
    inline ListSkillsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_skillGroupArn;
    bool m_skillGroupArnHasBeenSet;

    EnablementTypeFilter m_enablementType;
    bool m_enablementTypeHasBeenSet;

    SkillTypeFilter m_skillType;
    bool m_skillTypeHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
