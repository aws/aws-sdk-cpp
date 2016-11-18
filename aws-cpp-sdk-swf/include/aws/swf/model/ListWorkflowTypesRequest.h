﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/RegistrationStatus.h>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class AWS_SWF_API ListWorkflowTypesRequest : public SWFRequest
  {
  public:
    ListWorkflowTypesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the domain in which the workflow types have been registered.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain in which the workflow types have been registered.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain in which the workflow types have been registered.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain in which the workflow types have been registered.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain in which the workflow types have been registered.</p>
     */
    inline ListWorkflowTypesRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain in which the workflow types have been registered.</p>
     */
    inline ListWorkflowTypesRequest& WithDomain(Aws::String&& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain in which the workflow types have been registered.</p>
     */
    inline ListWorkflowTypesRequest& WithDomain(const char* value) { SetDomain(value); return *this;}

    /**
     * <p>If specified, lists the workflow type with this name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>If specified, lists the workflow type with this name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>If specified, lists the workflow type with this name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>If specified, lists the workflow type with this name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>If specified, lists the workflow type with this name.</p>
     */
    inline ListWorkflowTypesRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>If specified, lists the workflow type with this name.</p>
     */
    inline ListWorkflowTypesRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>If specified, lists the workflow type with this name.</p>
     */
    inline ListWorkflowTypesRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Specifies the registration status of the workflow types to list.</p>
     */
    inline const RegistrationStatus& GetRegistrationStatus() const{ return m_registrationStatus; }

    /**
     * <p>Specifies the registration status of the workflow types to list.</p>
     */
    inline void SetRegistrationStatus(const RegistrationStatus& value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = value; }

    /**
     * <p>Specifies the registration status of the workflow types to list.</p>
     */
    inline void SetRegistrationStatus(RegistrationStatus&& value) { m_registrationStatusHasBeenSet = true; m_registrationStatus = value; }

    /**
     * <p>Specifies the registration status of the workflow types to list.</p>
     */
    inline ListWorkflowTypesRequest& WithRegistrationStatus(const RegistrationStatus& value) { SetRegistrationStatus(value); return *this;}

    /**
     * <p>Specifies the registration status of the workflow types to list.</p>
     */
    inline ListWorkflowTypesRequest& WithRegistrationStatus(RegistrationStatus&& value) { SetRegistrationStatus(value); return *this;}

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline ListWorkflowTypesRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline ListWorkflowTypesRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline ListWorkflowTypesRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The maximum number of results that will be returned per call.
     * <code>nextPageToken</code> can be used to obtain futher pages of results. The
     * default is 1000, which is the maximum allowed page size. You can, however,
     * specify a page size <i>smaller</i> than the maximum.</p> <p>This is an upper
     * limit only; the actual number of results returned per call may be fewer than the
     * specified maximum.</p>
     */
    inline int GetMaximumPageSize() const{ return m_maximumPageSize; }

    /**
     * <p>The maximum number of results that will be returned per call.
     * <code>nextPageToken</code> can be used to obtain futher pages of results. The
     * default is 1000, which is the maximum allowed page size. You can, however,
     * specify a page size <i>smaller</i> than the maximum.</p> <p>This is an upper
     * limit only; the actual number of results returned per call may be fewer than the
     * specified maximum.</p>
     */
    inline void SetMaximumPageSize(int value) { m_maximumPageSizeHasBeenSet = true; m_maximumPageSize = value; }

    /**
     * <p>The maximum number of results that will be returned per call.
     * <code>nextPageToken</code> can be used to obtain futher pages of results. The
     * default is 1000, which is the maximum allowed page size. You can, however,
     * specify a page size <i>smaller</i> than the maximum.</p> <p>This is an upper
     * limit only; the actual number of results returned per call may be fewer than the
     * specified maximum.</p>
     */
    inline ListWorkflowTypesRequest& WithMaximumPageSize(int value) { SetMaximumPageSize(value); return *this;}

    /**
     * <p>When set to <code>true</code>, returns the results in reverse order. By
     * default the results are returned in ascending alphabetical order of the
     * <code>name</code> of the workflow types.</p>
     */
    inline bool GetReverseOrder() const{ return m_reverseOrder; }

    /**
     * <p>When set to <code>true</code>, returns the results in reverse order. By
     * default the results are returned in ascending alphabetical order of the
     * <code>name</code> of the workflow types.</p>
     */
    inline void SetReverseOrder(bool value) { m_reverseOrderHasBeenSet = true; m_reverseOrder = value; }

    /**
     * <p>When set to <code>true</code>, returns the results in reverse order. By
     * default the results are returned in ascending alphabetical order of the
     * <code>name</code> of the workflow types.</p>
     */
    inline ListWorkflowTypesRequest& WithReverseOrder(bool value) { SetReverseOrder(value); return *this;}

  private:
    Aws::String m_domain;
    bool m_domainHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    RegistrationStatus m_registrationStatus;
    bool m_registrationStatusHasBeenSet;
    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet;
    int m_maximumPageSize;
    bool m_maximumPageSizeHasBeenSet;
    bool m_reverseOrder;
    bool m_reverseOrderHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
