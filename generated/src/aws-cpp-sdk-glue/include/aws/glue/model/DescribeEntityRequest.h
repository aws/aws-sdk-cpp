/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class DescribeEntityRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API DescribeEntityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEntity"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the connection that contains the connection type credentials.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }
    inline DescribeEntityRequest& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}
    inline DescribeEntityRequest& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}
    inline DescribeEntityRequest& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog ID of the catalog that contains the connection. This can be null,
     * By default, the Amazon Web Services Account ID is the catalog ID.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline DescribeEntityRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline DescribeEntityRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline DescribeEntityRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the entity that you want to describe from the connection
     * type.</p>
     */
    inline const Aws::String& GetEntityName() const{ return m_entityName; }
    inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }
    inline void SetEntityName(const Aws::String& value) { m_entityNameHasBeenSet = true; m_entityName = value; }
    inline void SetEntityName(Aws::String&& value) { m_entityNameHasBeenSet = true; m_entityName = std::move(value); }
    inline void SetEntityName(const char* value) { m_entityNameHasBeenSet = true; m_entityName.assign(value); }
    inline DescribeEntityRequest& WithEntityName(const Aws::String& value) { SetEntityName(value); return *this;}
    inline DescribeEntityRequest& WithEntityName(Aws::String&& value) { SetEntityName(std::move(value)); return *this;}
    inline DescribeEntityRequest& WithEntityName(const char* value) { SetEntityName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A continuation token, included if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeEntityRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeEntityRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeEntityRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the API used for the data store.</p>
     */
    inline const Aws::String& GetDataStoreApiVersion() const{ return m_dataStoreApiVersion; }
    inline bool DataStoreApiVersionHasBeenSet() const { return m_dataStoreApiVersionHasBeenSet; }
    inline void SetDataStoreApiVersion(const Aws::String& value) { m_dataStoreApiVersionHasBeenSet = true; m_dataStoreApiVersion = value; }
    inline void SetDataStoreApiVersion(Aws::String&& value) { m_dataStoreApiVersionHasBeenSet = true; m_dataStoreApiVersion = std::move(value); }
    inline void SetDataStoreApiVersion(const char* value) { m_dataStoreApiVersionHasBeenSet = true; m_dataStoreApiVersion.assign(value); }
    inline DescribeEntityRequest& WithDataStoreApiVersion(const Aws::String& value) { SetDataStoreApiVersion(value); return *this;}
    inline DescribeEntityRequest& WithDataStoreApiVersion(Aws::String&& value) { SetDataStoreApiVersion(std::move(value)); return *this;}
    inline DescribeEntityRequest& WithDataStoreApiVersion(const char* value) { SetDataStoreApiVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_entityName;
    bool m_entityNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_dataStoreApiVersion;
    bool m_dataStoreApiVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
