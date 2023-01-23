/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class DeleteStoredQueryRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DeleteStoredQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteStoredQuery"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the query that you want to delete.</p>
     */
    inline const Aws::String& GetQueryName() const{ return m_queryName; }

    /**
     * <p>The name of the query that you want to delete.</p>
     */
    inline bool QueryNameHasBeenSet() const { return m_queryNameHasBeenSet; }

    /**
     * <p>The name of the query that you want to delete.</p>
     */
    inline void SetQueryName(const Aws::String& value) { m_queryNameHasBeenSet = true; m_queryName = value; }

    /**
     * <p>The name of the query that you want to delete.</p>
     */
    inline void SetQueryName(Aws::String&& value) { m_queryNameHasBeenSet = true; m_queryName = std::move(value); }

    /**
     * <p>The name of the query that you want to delete.</p>
     */
    inline void SetQueryName(const char* value) { m_queryNameHasBeenSet = true; m_queryName.assign(value); }

    /**
     * <p>The name of the query that you want to delete.</p>
     */
    inline DeleteStoredQueryRequest& WithQueryName(const Aws::String& value) { SetQueryName(value); return *this;}

    /**
     * <p>The name of the query that you want to delete.</p>
     */
    inline DeleteStoredQueryRequest& WithQueryName(Aws::String&& value) { SetQueryName(std::move(value)); return *this;}

    /**
     * <p>The name of the query that you want to delete.</p>
     */
    inline DeleteStoredQueryRequest& WithQueryName(const char* value) { SetQueryName(value); return *this;}

  private:

    Aws::String m_queryName;
    bool m_queryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
