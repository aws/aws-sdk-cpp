/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class GetWorkUnitsRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API GetWorkUnitsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkUnits"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline GetWorkUnitsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline GetWorkUnitsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline GetWorkUnitsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The size of each page to get in the Amazon Web Services service call. This
     * does not affect the number of items returned in the command's output. Setting a
     * smaller page size results in more calls to the Amazon Web Services service,
     * retrieving fewer items in each call. This can help prevent the Amazon Web
     * Services service calls from timing out.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The size of each page to get in the Amazon Web Services service call. This
     * does not affect the number of items returned in the command's output. Setting a
     * smaller page size results in more calls to the Amazon Web Services service,
     * retrieving fewer items in each call. This can help prevent the Amazon Web
     * Services service calls from timing out.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The size of each page to get in the Amazon Web Services service call. This
     * does not affect the number of items returned in the command's output. Setting a
     * smaller page size results in more calls to the Amazon Web Services service,
     * retrieving fewer items in each call. This can help prevent the Amazon Web
     * Services service calls from timing out.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The size of each page to get in the Amazon Web Services service call. This
     * does not affect the number of items returned in the command's output. Setting a
     * smaller page size results in more calls to the Amazon Web Services service,
     * retrieving fewer items in each call. This can help prevent the Amazon Web
     * Services service calls from timing out.</p>
     */
    inline GetWorkUnitsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryIdHasBeenSet = true; m_queryId = value; }

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryIdHasBeenSet = true; m_queryId = std::move(value); }

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline void SetQueryId(const char* value) { m_queryIdHasBeenSet = true; m_queryId.assign(value); }

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline GetWorkUnitsRequest& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline GetWorkUnitsRequest& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the plan query operation.</p>
     */
    inline GetWorkUnitsRequest& WithQueryId(const char* value) { SetQueryId(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
