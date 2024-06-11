/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class GetDatabaseRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API GetDatabaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDatabase"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the data catalog that contains the database to return.</p>
     */
    inline const Aws::String& GetCatalogName() const{ return m_catalogName; }
    inline bool CatalogNameHasBeenSet() const { return m_catalogNameHasBeenSet; }
    inline void SetCatalogName(const Aws::String& value) { m_catalogNameHasBeenSet = true; m_catalogName = value; }
    inline void SetCatalogName(Aws::String&& value) { m_catalogNameHasBeenSet = true; m_catalogName = std::move(value); }
    inline void SetCatalogName(const char* value) { m_catalogNameHasBeenSet = true; m_catalogName.assign(value); }
    inline GetDatabaseRequest& WithCatalogName(const Aws::String& value) { SetCatalogName(value); return *this;}
    inline GetDatabaseRequest& WithCatalogName(Aws::String&& value) { SetCatalogName(std::move(value)); return *this;}
    inline GetDatabaseRequest& WithCatalogName(const char* value) { SetCatalogName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database to return.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline GetDatabaseRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline GetDatabaseRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline GetDatabaseRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup for which the metadata is being fetched. Required
     * if requesting an IAM Identity Center enabled Glue Data Catalog.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }
    inline GetDatabaseRequest& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}
    inline GetDatabaseRequest& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}
    inline GetDatabaseRequest& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogName;
    bool m_catalogNameHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
