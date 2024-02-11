/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace finspace
{
namespace Model
{

  /**
   */
  class DeleteKxDataviewRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API DeleteKxDataviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteKxDataview"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;

    AWS_FINSPACE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A unique identifier for the kdb environment, from where you want to delete
     * the dataview. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment, from where you want to delete
     * the dataview. </p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>A unique identifier for the kdb environment, from where you want to delete
     * the dataview. </p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment, from where you want to delete
     * the dataview. </p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment, from where you want to delete
     * the dataview. </p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment, from where you want to delete
     * the dataview. </p>
     */
    inline DeleteKxDataviewRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment, from where you want to delete
     * the dataview. </p>
     */
    inline DeleteKxDataviewRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment, from where you want to delete
     * the dataview. </p>
     */
    inline DeleteKxDataviewRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The name of the database whose dataview you want to delete.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database whose dataview you want to delete.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database whose dataview you want to delete.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database whose dataview you want to delete.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database whose dataview you want to delete.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database whose dataview you want to delete.</p>
     */
    inline DeleteKxDataviewRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database whose dataview you want to delete.</p>
     */
    inline DeleteKxDataviewRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database whose dataview you want to delete.</p>
     */
    inline DeleteKxDataviewRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the dataview that you want to delete.</p>
     */
    inline const Aws::String& GetDataviewName() const{ return m_dataviewName; }

    /**
     * <p>The name of the dataview that you want to delete.</p>
     */
    inline bool DataviewNameHasBeenSet() const { return m_dataviewNameHasBeenSet; }

    /**
     * <p>The name of the dataview that you want to delete.</p>
     */
    inline void SetDataviewName(const Aws::String& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = value; }

    /**
     * <p>The name of the dataview that you want to delete.</p>
     */
    inline void SetDataviewName(Aws::String&& value) { m_dataviewNameHasBeenSet = true; m_dataviewName = std::move(value); }

    /**
     * <p>The name of the dataview that you want to delete.</p>
     */
    inline void SetDataviewName(const char* value) { m_dataviewNameHasBeenSet = true; m_dataviewName.assign(value); }

    /**
     * <p>The name of the dataview that you want to delete.</p>
     */
    inline DeleteKxDataviewRequest& WithDataviewName(const Aws::String& value) { SetDataviewName(value); return *this;}

    /**
     * <p>The name of the dataview that you want to delete.</p>
     */
    inline DeleteKxDataviewRequest& WithDataviewName(Aws::String&& value) { SetDataviewName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataview that you want to delete.</p>
     */
    inline DeleteKxDataviewRequest& WithDataviewName(const char* value) { SetDataviewName(value); return *this;}


    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline DeleteKxDataviewRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline DeleteKxDataviewRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline DeleteKxDataviewRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_dataviewName;
    bool m_dataviewNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
