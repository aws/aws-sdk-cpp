/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class DescribeInsightRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API DescribeInsightRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInsight"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;

    AWS_DEVOPSGURU_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The ID of the insight. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The ID of the insight. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The ID of the insight. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The ID of the insight. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The ID of the insight. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The ID of the insight. </p>
     */
    inline DescribeInsightRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The ID of the insight. </p>
     */
    inline DescribeInsightRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The ID of the insight. </p>
     */
    inline DescribeInsightRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the member account in the organization.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the member account in the organization.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the member account in the organization.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the member account in the organization.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the member account in the organization.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the member account in the organization.</p>
     */
    inline DescribeInsightRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the member account in the organization.</p>
     */
    inline DescribeInsightRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the member account in the organization.</p>
     */
    inline DescribeInsightRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
