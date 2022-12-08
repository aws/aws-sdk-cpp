/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityLake
{
namespace Model
{
  class CreateCustomLogSourceResult
  {
  public:
    AWS_SECURITYLAKE_API CreateCustomLogSourceResult();
    AWS_SECURITYLAKE_API CreateCustomLogSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API CreateCustomLogSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The location of the partition in the Security Lake S3 bucket.</p>
     */
    inline const Aws::String& GetCustomDataLocation() const{ return m_customDataLocation; }

    /**
     * <p>The location of the partition in the Security Lake S3 bucket.</p>
     */
    inline void SetCustomDataLocation(const Aws::String& value) { m_customDataLocation = value; }

    /**
     * <p>The location of the partition in the Security Lake S3 bucket.</p>
     */
    inline void SetCustomDataLocation(Aws::String&& value) { m_customDataLocation = std::move(value); }

    /**
     * <p>The location of the partition in the Security Lake S3 bucket.</p>
     */
    inline void SetCustomDataLocation(const char* value) { m_customDataLocation.assign(value); }

    /**
     * <p>The location of the partition in the Security Lake S3 bucket.</p>
     */
    inline CreateCustomLogSourceResult& WithCustomDataLocation(const Aws::String& value) { SetCustomDataLocation(value); return *this;}

    /**
     * <p>The location of the partition in the Security Lake S3 bucket.</p>
     */
    inline CreateCustomLogSourceResult& WithCustomDataLocation(Aws::String&& value) { SetCustomDataLocation(std::move(value)); return *this;}

    /**
     * <p>The location of the partition in the Security Lake S3 bucket.</p>
     */
    inline CreateCustomLogSourceResult& WithCustomDataLocation(const char* value) { SetCustomDataLocation(value); return *this;}


    /**
     * <p>The name of the Glue crawler.</p>
     */
    inline const Aws::String& GetGlueCrawlerName() const{ return m_glueCrawlerName; }

    /**
     * <p>The name of the Glue crawler.</p>
     */
    inline void SetGlueCrawlerName(const Aws::String& value) { m_glueCrawlerName = value; }

    /**
     * <p>The name of the Glue crawler.</p>
     */
    inline void SetGlueCrawlerName(Aws::String&& value) { m_glueCrawlerName = std::move(value); }

    /**
     * <p>The name of the Glue crawler.</p>
     */
    inline void SetGlueCrawlerName(const char* value) { m_glueCrawlerName.assign(value); }

    /**
     * <p>The name of the Glue crawler.</p>
     */
    inline CreateCustomLogSourceResult& WithGlueCrawlerName(const Aws::String& value) { SetGlueCrawlerName(value); return *this;}

    /**
     * <p>The name of the Glue crawler.</p>
     */
    inline CreateCustomLogSourceResult& WithGlueCrawlerName(Aws::String&& value) { SetGlueCrawlerName(std::move(value)); return *this;}

    /**
     * <p>The name of the Glue crawler.</p>
     */
    inline CreateCustomLogSourceResult& WithGlueCrawlerName(const char* value) { SetGlueCrawlerName(value); return *this;}


    /**
     * <p>The Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline const Aws::String& GetGlueDatabaseName() const{ return m_glueDatabaseName; }

    /**
     * <p>The Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline void SetGlueDatabaseName(const Aws::String& value) { m_glueDatabaseName = value; }

    /**
     * <p>The Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline void SetGlueDatabaseName(Aws::String&& value) { m_glueDatabaseName = std::move(value); }

    /**
     * <p>The Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline void SetGlueDatabaseName(const char* value) { m_glueDatabaseName.assign(value); }

    /**
     * <p>The Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline CreateCustomLogSourceResult& WithGlueDatabaseName(const Aws::String& value) { SetGlueDatabaseName(value); return *this;}

    /**
     * <p>The Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline CreateCustomLogSourceResult& WithGlueDatabaseName(Aws::String&& value) { SetGlueDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline CreateCustomLogSourceResult& WithGlueDatabaseName(const char* value) { SetGlueDatabaseName(value); return *this;}


    /**
     * <p>The table name of the Glue crawler.</p>
     */
    inline const Aws::String& GetGlueTableName() const{ return m_glueTableName; }

    /**
     * <p>The table name of the Glue crawler.</p>
     */
    inline void SetGlueTableName(const Aws::String& value) { m_glueTableName = value; }

    /**
     * <p>The table name of the Glue crawler.</p>
     */
    inline void SetGlueTableName(Aws::String&& value) { m_glueTableName = std::move(value); }

    /**
     * <p>The table name of the Glue crawler.</p>
     */
    inline void SetGlueTableName(const char* value) { m_glueTableName.assign(value); }

    /**
     * <p>The table name of the Glue crawler.</p>
     */
    inline CreateCustomLogSourceResult& WithGlueTableName(const Aws::String& value) { SetGlueTableName(value); return *this;}

    /**
     * <p>The table name of the Glue crawler.</p>
     */
    inline CreateCustomLogSourceResult& WithGlueTableName(Aws::String&& value) { SetGlueTableName(std::move(value)); return *this;}

    /**
     * <p>The table name of the Glue crawler.</p>
     */
    inline CreateCustomLogSourceResult& WithGlueTableName(const char* value) { SetGlueTableName(value); return *this;}


    /**
     * <p> IAM Role ARN to be used by the entity putting logs into your Custom Source
     * partition. Security Lake will apply the correct access policies to this Role,
     * but this Role must have the trust policy created manually. This Role's name must
     * start with the text 'Security Lake'. It must trust the
     * <code>logProviderAccountId</code> to assume it.</p>
     */
    inline const Aws::String& GetLogProviderAccessRoleArn() const{ return m_logProviderAccessRoleArn; }

    /**
     * <p> IAM Role ARN to be used by the entity putting logs into your Custom Source
     * partition. Security Lake will apply the correct access policies to this Role,
     * but this Role must have the trust policy created manually. This Role's name must
     * start with the text 'Security Lake'. It must trust the
     * <code>logProviderAccountId</code> to assume it.</p>
     */
    inline void SetLogProviderAccessRoleArn(const Aws::String& value) { m_logProviderAccessRoleArn = value; }

    /**
     * <p> IAM Role ARN to be used by the entity putting logs into your Custom Source
     * partition. Security Lake will apply the correct access policies to this Role,
     * but this Role must have the trust policy created manually. This Role's name must
     * start with the text 'Security Lake'. It must trust the
     * <code>logProviderAccountId</code> to assume it.</p>
     */
    inline void SetLogProviderAccessRoleArn(Aws::String&& value) { m_logProviderAccessRoleArn = std::move(value); }

    /**
     * <p> IAM Role ARN to be used by the entity putting logs into your Custom Source
     * partition. Security Lake will apply the correct access policies to this Role,
     * but this Role must have the trust policy created manually. This Role's name must
     * start with the text 'Security Lake'. It must trust the
     * <code>logProviderAccountId</code> to assume it.</p>
     */
    inline void SetLogProviderAccessRoleArn(const char* value) { m_logProviderAccessRoleArn.assign(value); }

    /**
     * <p> IAM Role ARN to be used by the entity putting logs into your Custom Source
     * partition. Security Lake will apply the correct access policies to this Role,
     * but this Role must have the trust policy created manually. This Role's name must
     * start with the text 'Security Lake'. It must trust the
     * <code>logProviderAccountId</code> to assume it.</p>
     */
    inline CreateCustomLogSourceResult& WithLogProviderAccessRoleArn(const Aws::String& value) { SetLogProviderAccessRoleArn(value); return *this;}

    /**
     * <p> IAM Role ARN to be used by the entity putting logs into your Custom Source
     * partition. Security Lake will apply the correct access policies to this Role,
     * but this Role must have the trust policy created manually. This Role's name must
     * start with the text 'Security Lake'. It must trust the
     * <code>logProviderAccountId</code> to assume it.</p>
     */
    inline CreateCustomLogSourceResult& WithLogProviderAccessRoleArn(Aws::String&& value) { SetLogProviderAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p> IAM Role ARN to be used by the entity putting logs into your Custom Source
     * partition. Security Lake will apply the correct access policies to this Role,
     * but this Role must have the trust policy created manually. This Role's name must
     * start with the text 'Security Lake'. It must trust the
     * <code>logProviderAccountId</code> to assume it.</p>
     */
    inline CreateCustomLogSourceResult& WithLogProviderAccessRoleArn(const char* value) { SetLogProviderAccessRoleArn(value); return *this;}

  private:

    Aws::String m_customDataLocation;

    Aws::String m_glueCrawlerName;

    Aws::String m_glueDatabaseName;

    Aws::String m_glueTableName;

    Aws::String m_logProviderAccessRoleArn;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
