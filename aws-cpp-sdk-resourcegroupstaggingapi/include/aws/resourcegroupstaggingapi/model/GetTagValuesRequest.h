/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   */
  class GetTagValuesRequest : public ResourceGroupsTaggingAPIRequest
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetTagValuesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTagValues"; }

    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::String SerializePayload() const override;

    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline bool PaginationTokenHasBeenSet() const { return m_paginationTokenHasBeenSet; }

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = value; }

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = std::move(value); }

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline void SetPaginationToken(const char* value) { m_paginationTokenHasBeenSet = true; m_paginationToken.assign(value); }

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline GetTagValuesRequest& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline GetTagValuesRequest& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}

    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline GetTagValuesRequest& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}


    /**
     * <p>Specifies the tag key for which you want to list all existing values that are
     * currently used in the specified Amazon Web Services Region for the calling
     * account.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Specifies the tag key for which you want to list all existing values that are
     * currently used in the specified Amazon Web Services Region for the calling
     * account.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Specifies the tag key for which you want to list all existing values that are
     * currently used in the specified Amazon Web Services Region for the calling
     * account.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Specifies the tag key for which you want to list all existing values that are
     * currently used in the specified Amazon Web Services Region for the calling
     * account.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Specifies the tag key for which you want to list all existing values that are
     * currently used in the specified Amazon Web Services Region for the calling
     * account.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Specifies the tag key for which you want to list all existing values that are
     * currently used in the specified Amazon Web Services Region for the calling
     * account.</p>
     */
    inline GetTagValuesRequest& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Specifies the tag key for which you want to list all existing values that are
     * currently used in the specified Amazon Web Services Region for the calling
     * account.</p>
     */
    inline GetTagValuesRequest& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Specifies the tag key for which you want to list all existing values that are
     * currently used in the specified Amazon Web Services Region for the calling
     * account.</p>
     */
    inline GetTagValuesRequest& WithKey(const char* value) { SetKey(value); return *this;}

  private:

    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
