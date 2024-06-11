/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class DescribeQueryRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API DescribeQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeQuery"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The query ID.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
    inline void SetQueryId(const Aws::String& value) { m_queryIdHasBeenSet = true; m_queryId = value; }
    inline void SetQueryId(Aws::String&& value) { m_queryIdHasBeenSet = true; m_queryId = std::move(value); }
    inline void SetQueryId(const char* value) { m_queryIdHasBeenSet = true; m_queryId.assign(value); }
    inline DescribeQueryRequest& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}
    inline DescribeQueryRequest& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}
    inline DescribeQueryRequest& WithQueryId(const char* value) { SetQueryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The alias that identifies a query template. </p>
     */
    inline const Aws::String& GetQueryAlias() const{ return m_queryAlias; }
    inline bool QueryAliasHasBeenSet() const { return m_queryAliasHasBeenSet; }
    inline void SetQueryAlias(const Aws::String& value) { m_queryAliasHasBeenSet = true; m_queryAlias = value; }
    inline void SetQueryAlias(Aws::String&& value) { m_queryAliasHasBeenSet = true; m_queryAlias = std::move(value); }
    inline void SetQueryAlias(const char* value) { m_queryAliasHasBeenSet = true; m_queryAlias.assign(value); }
    inline DescribeQueryRequest& WithQueryAlias(const Aws::String& value) { SetQueryAlias(value); return *this;}
    inline DescribeQueryRequest& WithQueryAlias(Aws::String&& value) { SetQueryAlias(std::move(value)); return *this;}
    inline DescribeQueryRequest& WithQueryAlias(const char* value) { SetQueryAlias(value); return *this;}
    ///@}
  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    Aws::String m_queryAlias;
    bool m_queryAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
