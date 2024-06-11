/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/lex-models/model/MigrationSortAttribute.h>
#include <aws/lex-models/model/SortOrder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/MigrationStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class GetMigrationsRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetMigrationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMigrations"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;

    AWS_LEXMODELBUILDINGSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The field to sort the list of migrations by. You can sort by the Amazon Lex
     * V1 bot name or the date and time that the migration was started.</p>
     */
    inline const MigrationSortAttribute& GetSortByAttribute() const{ return m_sortByAttribute; }
    inline bool SortByAttributeHasBeenSet() const { return m_sortByAttributeHasBeenSet; }
    inline void SetSortByAttribute(const MigrationSortAttribute& value) { m_sortByAttributeHasBeenSet = true; m_sortByAttribute = value; }
    inline void SetSortByAttribute(MigrationSortAttribute&& value) { m_sortByAttributeHasBeenSet = true; m_sortByAttribute = std::move(value); }
    inline GetMigrationsRequest& WithSortByAttribute(const MigrationSortAttribute& value) { SetSortByAttribute(value); return *this;}
    inline GetMigrationsRequest& WithSortByAttribute(MigrationSortAttribute&& value) { SetSortByAttribute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order so sort the list.</p>
     */
    inline const SortOrder& GetSortByOrder() const{ return m_sortByOrder; }
    inline bool SortByOrderHasBeenSet() const { return m_sortByOrderHasBeenSet; }
    inline void SetSortByOrder(const SortOrder& value) { m_sortByOrderHasBeenSet = true; m_sortByOrder = value; }
    inline void SetSortByOrder(SortOrder&& value) { m_sortByOrderHasBeenSet = true; m_sortByOrder = std::move(value); }
    inline GetMigrationsRequest& WithSortByOrder(const SortOrder& value) { SetSortByOrder(value); return *this;}
    inline GetMigrationsRequest& WithSortByOrder(SortOrder&& value) { SetSortByOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list to contain only bots whose name contains the specified
     * string. The string is matched anywhere in bot name.</p>
     */
    inline const Aws::String& GetV1BotNameContains() const{ return m_v1BotNameContains; }
    inline bool V1BotNameContainsHasBeenSet() const { return m_v1BotNameContainsHasBeenSet; }
    inline void SetV1BotNameContains(const Aws::String& value) { m_v1BotNameContainsHasBeenSet = true; m_v1BotNameContains = value; }
    inline void SetV1BotNameContains(Aws::String&& value) { m_v1BotNameContainsHasBeenSet = true; m_v1BotNameContains = std::move(value); }
    inline void SetV1BotNameContains(const char* value) { m_v1BotNameContainsHasBeenSet = true; m_v1BotNameContains.assign(value); }
    inline GetMigrationsRequest& WithV1BotNameContains(const Aws::String& value) { SetV1BotNameContains(value); return *this;}
    inline GetMigrationsRequest& WithV1BotNameContains(Aws::String&& value) { SetV1BotNameContains(std::move(value)); return *this;}
    inline GetMigrationsRequest& WithV1BotNameContains(const char* value) { SetV1BotNameContains(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list to contain only migrations in the specified state.</p>
     */
    inline const MigrationStatus& GetMigrationStatusEquals() const{ return m_migrationStatusEquals; }
    inline bool MigrationStatusEqualsHasBeenSet() const { return m_migrationStatusEqualsHasBeenSet; }
    inline void SetMigrationStatusEquals(const MigrationStatus& value) { m_migrationStatusEqualsHasBeenSet = true; m_migrationStatusEquals = value; }
    inline void SetMigrationStatusEquals(MigrationStatus&& value) { m_migrationStatusEqualsHasBeenSet = true; m_migrationStatusEquals = std::move(value); }
    inline GetMigrationsRequest& WithMigrationStatusEquals(const MigrationStatus& value) { SetMigrationStatusEquals(value); return *this;}
    inline GetMigrationsRequest& WithMigrationStatusEquals(MigrationStatus&& value) { SetMigrationStatusEquals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of migrations to return in the response. The default is
     * 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetMigrationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token that fetches the next page of migrations. If the response
     * to this operation is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of migrations, specify the pagination token in
     * the request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetMigrationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetMigrationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetMigrationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    MigrationSortAttribute m_sortByAttribute;
    bool m_sortByAttributeHasBeenSet = false;

    SortOrder m_sortByOrder;
    bool m_sortByOrderHasBeenSet = false;

    Aws::String m_v1BotNameContains;
    bool m_v1BotNameContainsHasBeenSet = false;

    MigrationStatus m_migrationStatusEquals;
    bool m_migrationStatusEqualsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
