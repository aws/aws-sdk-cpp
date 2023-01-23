/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/lakeformation/model/TableResource.h>
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
  class ListDataCellsFilterRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API ListDataCellsFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataCellsFilter"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>A table in the Glue Data Catalog.</p>
     */
    inline const TableResource& GetTable() const{ return m_table; }

    /**
     * <p>A table in the Glue Data Catalog.</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>A table in the Glue Data Catalog.</p>
     */
    inline void SetTable(const TableResource& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>A table in the Glue Data Catalog.</p>
     */
    inline void SetTable(TableResource&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>A table in the Glue Data Catalog.</p>
     */
    inline ListDataCellsFilterRequest& WithTable(const TableResource& value) { SetTable(value); return *this;}

    /**
     * <p>A table in the Glue Data Catalog.</p>
     */
    inline ListDataCellsFilterRequest& WithTable(TableResource&& value) { SetTable(std::move(value)); return *this;}


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
    inline ListDataCellsFilterRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline ListDataCellsFilterRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline ListDataCellsFilterRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum size of the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum size of the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum size of the response.</p>
     */
    inline ListDataCellsFilterRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    TableResource m_table;
    bool m_tableHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
