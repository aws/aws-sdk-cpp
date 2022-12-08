/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RedshiftDataAPIService
{
namespace Model
{
  class ExecuteStatementResult
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API ExecuteStatementResult();
    AWS_REDSHIFTDATAAPISERVICE_API ExecuteStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTDATAAPISERVICE_API ExecuteStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The cluster identifier. This element is not returned when connecting to a
     * serverless workgroup. </p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The cluster identifier. This element is not returned when connecting to a
     * serverless workgroup. </p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifier = value; }

    /**
     * <p>The cluster identifier. This element is not returned when connecting to a
     * serverless workgroup. </p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier. This element is not returned when connecting to a
     * serverless workgroup. </p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier. This element is not returned when connecting to a
     * serverless workgroup. </p>
     */
    inline ExecuteStatementResult& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier. This element is not returned when connecting to a
     * serverless workgroup. </p>
     */
    inline ExecuteStatementResult& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier. This element is not returned when connecting to a
     * serverless workgroup. </p>
     */
    inline ExecuteStatementResult& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The date and time (UTC) the statement was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time (UTC) the statement was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time (UTC) the statement was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time (UTC) the statement was created. </p>
     */
    inline ExecuteStatementResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time (UTC) the statement was created. </p>
     */
    inline ExecuteStatementResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the database.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The name of the database.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_database = value; }

    /**
     * <p>The name of the database.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_database = std::move(value); }

    /**
     * <p>The name of the database.</p>
     */
    inline void SetDatabase(const char* value) { m_database.assign(value); }

    /**
     * <p>The name of the database.</p>
     */
    inline ExecuteStatementResult& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the database.</p>
     */
    inline ExecuteStatementResult& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The name of the database.</p>
     */
    inline ExecuteStatementResult& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>The database user name.</p>
     */
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }

    /**
     * <p>The database user name.</p>
     */
    inline void SetDbUser(const Aws::String& value) { m_dbUser = value; }

    /**
     * <p>The database user name.</p>
     */
    inline void SetDbUser(Aws::String&& value) { m_dbUser = std::move(value); }

    /**
     * <p>The database user name.</p>
     */
    inline void SetDbUser(const char* value) { m_dbUser.assign(value); }

    /**
     * <p>The database user name.</p>
     */
    inline ExecuteStatementResult& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}

    /**
     * <p>The database user name.</p>
     */
    inline ExecuteStatementResult& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}

    /**
     * <p>The database user name.</p>
     */
    inline ExecuteStatementResult& WithDbUser(const char* value) { SetDbUser(value); return *this;}


    /**
     * <p>The identifier of the SQL statement whose results are to be fetched. This
     * value is a universally unique identifier (UUID) generated by Amazon Redshift
     * Data API. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the SQL statement whose results are to be fetched. This
     * value is a universally unique identifier (UUID) generated by Amazon Redshift
     * Data API. </p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the SQL statement whose results are to be fetched. This
     * value is a universally unique identifier (UUID) generated by Amazon Redshift
     * Data API. </p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the SQL statement whose results are to be fetched. This
     * value is a universally unique identifier (UUID) generated by Amazon Redshift
     * Data API. </p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the SQL statement whose results are to be fetched. This
     * value is a universally unique identifier (UUID) generated by Amazon Redshift
     * Data API. </p>
     */
    inline ExecuteStatementResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the SQL statement whose results are to be fetched. This
     * value is a universally unique identifier (UUID) generated by Amazon Redshift
     * Data API. </p>
     */
    inline ExecuteStatementResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the SQL statement whose results are to be fetched. This
     * value is a universally unique identifier (UUID) generated by Amazon Redshift
     * Data API. </p>
     */
    inline ExecuteStatementResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name or ARN of the secret that enables access to the database. </p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The name or ARN of the secret that enables access to the database. </p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArn = value; }

    /**
     * <p>The name or ARN of the secret that enables access to the database. </p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArn = std::move(value); }

    /**
     * <p>The name or ARN of the secret that enables access to the database. </p>
     */
    inline void SetSecretArn(const char* value) { m_secretArn.assign(value); }

    /**
     * <p>The name or ARN of the secret that enables access to the database. </p>
     */
    inline ExecuteStatementResult& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the database. </p>
     */
    inline ExecuteStatementResult& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the secret that enables access to the database. </p>
     */
    inline ExecuteStatementResult& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>The serverless workgroup name. This element is not returned when connecting
     * to a provisioned cluster.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }

    /**
     * <p>The serverless workgroup name. This element is not returned when connecting
     * to a provisioned cluster.</p>
     */
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupName = value; }

    /**
     * <p>The serverless workgroup name. This element is not returned when connecting
     * to a provisioned cluster.</p>
     */
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupName = std::move(value); }

    /**
     * <p>The serverless workgroup name. This element is not returned when connecting
     * to a provisioned cluster.</p>
     */
    inline void SetWorkgroupName(const char* value) { m_workgroupName.assign(value); }

    /**
     * <p>The serverless workgroup name. This element is not returned when connecting
     * to a provisioned cluster.</p>
     */
    inline ExecuteStatementResult& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}

    /**
     * <p>The serverless workgroup name. This element is not returned when connecting
     * to a provisioned cluster.</p>
     */
    inline ExecuteStatementResult& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}

    /**
     * <p>The serverless workgroup name. This element is not returned when connecting
     * to a provisioned cluster.</p>
     */
    inline ExecuteStatementResult& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_database;

    Aws::String m_dbUser;

    Aws::String m_id;

    Aws::String m_secretArn;

    Aws::String m_workgroupName;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
