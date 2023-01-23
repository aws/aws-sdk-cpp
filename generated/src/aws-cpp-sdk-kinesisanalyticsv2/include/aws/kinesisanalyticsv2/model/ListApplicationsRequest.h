/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class ListApplicationsRequest : public KinesisAnalyticsV2Request
  {
  public:
    AWS_KINESISANALYTICSV2_API ListApplicationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApplications"; }

    AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of applications to list.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of applications to list.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of applications to list.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of applications to list.</p>
     */
    inline ListApplicationsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>If a previous command returned a pagination token, pass it into this value to
     * retrieve the next set of results. For more information about pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the Amazon Command Line Interface's Pagination Options</a>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a previous command returned a pagination token, pass it into this value to
     * retrieve the next set of results. For more information about pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the Amazon Command Line Interface's Pagination Options</a>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If a previous command returned a pagination token, pass it into this value to
     * retrieve the next set of results. For more information about pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the Amazon Command Line Interface's Pagination Options</a>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If a previous command returned a pagination token, pass it into this value to
     * retrieve the next set of results. For more information about pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the Amazon Command Line Interface's Pagination Options</a>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If a previous command returned a pagination token, pass it into this value to
     * retrieve the next set of results. For more information about pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the Amazon Command Line Interface's Pagination Options</a>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If a previous command returned a pagination token, pass it into this value to
     * retrieve the next set of results. For more information about pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the Amazon Command Line Interface's Pagination Options</a>.</p>
     */
    inline ListApplicationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a previous command returned a pagination token, pass it into this value to
     * retrieve the next set of results. For more information about pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the Amazon Command Line Interface's Pagination Options</a>.</p>
     */
    inline ListApplicationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If a previous command returned a pagination token, pass it into this value to
     * retrieve the next set of results. For more information about pagination, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/pagination.html">Using
     * the Amazon Command Line Interface's Pagination Options</a>.</p>
     */
    inline ListApplicationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
