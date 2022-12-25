/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class DescribePrincipalMappingRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API DescribePrincipalMappingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePrincipalMapping"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index required to check the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index required to check the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index required to check the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index required to check the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index required to check the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index required to check the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline DescribePrincipalMappingRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index required to check the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline DescribePrincipalMappingRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index required to check the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline DescribePrincipalMappingRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The identifier of the data source to check the processing of <code>PUT</code>
     * and <code>DELETE</code> actions for mapping users to their groups.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The identifier of the data source to check the processing of <code>PUT</code>
     * and <code>DELETE</code> actions for mapping users to their groups.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The identifier of the data source to check the processing of <code>PUT</code>
     * and <code>DELETE</code> actions for mapping users to their groups.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The identifier of the data source to check the processing of <code>PUT</code>
     * and <code>DELETE</code> actions for mapping users to their groups.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The identifier of the data source to check the processing of <code>PUT</code>
     * and <code>DELETE</code> actions for mapping users to their groups.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The identifier of the data source to check the processing of <code>PUT</code>
     * and <code>DELETE</code> actions for mapping users to their groups.</p>
     */
    inline DescribePrincipalMappingRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The identifier of the data source to check the processing of <code>PUT</code>
     * and <code>DELETE</code> actions for mapping users to their groups.</p>
     */
    inline DescribePrincipalMappingRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source to check the processing of <code>PUT</code>
     * and <code>DELETE</code> actions for mapping users to their groups.</p>
     */
    inline DescribePrincipalMappingRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>The identifier of the group required to check the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The identifier of the group required to check the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The identifier of the group required to check the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The identifier of the group required to check the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The identifier of the group required to check the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The identifier of the group required to check the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline DescribePrincipalMappingRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The identifier of the group required to check the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline DescribePrincipalMappingRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the group required to check the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline DescribePrincipalMappingRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
