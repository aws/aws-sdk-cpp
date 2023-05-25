/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CreateRelationalDatabaseRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateRelationalDatabaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRelationalDatabase"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name to use for your new Lightsail database resource.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline const Aws::String& GetRelationalDatabaseName() const{ return m_relationalDatabaseName; }

    /**
     * <p>The name to use for your new Lightsail database resource.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }

    /**
     * <p>The name to use for your new Lightsail database resource.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline void SetRelationalDatabaseName(const Aws::String& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = value; }

    /**
     * <p>The name to use for your new Lightsail database resource.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline void SetRelationalDatabaseName(Aws::String&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::move(value); }

    /**
     * <p>The name to use for your new Lightsail database resource.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline void SetRelationalDatabaseName(const char* value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName.assign(value); }

    /**
     * <p>The name to use for your new Lightsail database resource.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseRequest& WithRelationalDatabaseName(const Aws::String& value) { SetRelationalDatabaseName(value); return *this;}

    /**
     * <p>The name to use for your new Lightsail database resource.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseRequest& WithRelationalDatabaseName(Aws::String&& value) { SetRelationalDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name to use for your new Lightsail database resource.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 2 to 255 alphanumeric
     * characters, or hyphens.</p> </li> <li> <p>The first and last character must be a
     * letter or number.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseRequest& WithRelationalDatabaseName(const char* value) { SetRelationalDatabaseName(value); return *this;}


    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline CreateRelationalDatabaseRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline CreateRelationalDatabaseRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which to create your new database. Use the
     * <code>us-east-2a</code> case-sensitive format.</p> <p>You can get a list of
     * Availability Zones by using the <code>get regions</code> operation. Be sure to
     * add the <code>include relational database Availability Zones</code> parameter to
     * your request.</p>
     */
    inline CreateRelationalDatabaseRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The blueprint ID for your new database. A blueprint describes the major
     * engine version of a database.</p> <p>You can get a list of database blueprints
     * IDs by using the <code>get relational database blueprints</code> operation.</p>
     */
    inline const Aws::String& GetRelationalDatabaseBlueprintId() const{ return m_relationalDatabaseBlueprintId; }

    /**
     * <p>The blueprint ID for your new database. A blueprint describes the major
     * engine version of a database.</p> <p>You can get a list of database blueprints
     * IDs by using the <code>get relational database blueprints</code> operation.</p>
     */
    inline bool RelationalDatabaseBlueprintIdHasBeenSet() const { return m_relationalDatabaseBlueprintIdHasBeenSet; }

    /**
     * <p>The blueprint ID for your new database. A blueprint describes the major
     * engine version of a database.</p> <p>You can get a list of database blueprints
     * IDs by using the <code>get relational database blueprints</code> operation.</p>
     */
    inline void SetRelationalDatabaseBlueprintId(const Aws::String& value) { m_relationalDatabaseBlueprintIdHasBeenSet = true; m_relationalDatabaseBlueprintId = value; }

    /**
     * <p>The blueprint ID for your new database. A blueprint describes the major
     * engine version of a database.</p> <p>You can get a list of database blueprints
     * IDs by using the <code>get relational database blueprints</code> operation.</p>
     */
    inline void SetRelationalDatabaseBlueprintId(Aws::String&& value) { m_relationalDatabaseBlueprintIdHasBeenSet = true; m_relationalDatabaseBlueprintId = std::move(value); }

    /**
     * <p>The blueprint ID for your new database. A blueprint describes the major
     * engine version of a database.</p> <p>You can get a list of database blueprints
     * IDs by using the <code>get relational database blueprints</code> operation.</p>
     */
    inline void SetRelationalDatabaseBlueprintId(const char* value) { m_relationalDatabaseBlueprintIdHasBeenSet = true; m_relationalDatabaseBlueprintId.assign(value); }

    /**
     * <p>The blueprint ID for your new database. A blueprint describes the major
     * engine version of a database.</p> <p>You can get a list of database blueprints
     * IDs by using the <code>get relational database blueprints</code> operation.</p>
     */
    inline CreateRelationalDatabaseRequest& WithRelationalDatabaseBlueprintId(const Aws::String& value) { SetRelationalDatabaseBlueprintId(value); return *this;}

    /**
     * <p>The blueprint ID for your new database. A blueprint describes the major
     * engine version of a database.</p> <p>You can get a list of database blueprints
     * IDs by using the <code>get relational database blueprints</code> operation.</p>
     */
    inline CreateRelationalDatabaseRequest& WithRelationalDatabaseBlueprintId(Aws::String&& value) { SetRelationalDatabaseBlueprintId(std::move(value)); return *this;}

    /**
     * <p>The blueprint ID for your new database. A blueprint describes the major
     * engine version of a database.</p> <p>You can get a list of database blueprints
     * IDs by using the <code>get relational database blueprints</code> operation.</p>
     */
    inline CreateRelationalDatabaseRequest& WithRelationalDatabaseBlueprintId(const char* value) { SetRelationalDatabaseBlueprintId(value); return *this;}


    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     */
    inline const Aws::String& GetRelationalDatabaseBundleId() const{ return m_relationalDatabaseBundleId; }

    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     */
    inline bool RelationalDatabaseBundleIdHasBeenSet() const { return m_relationalDatabaseBundleIdHasBeenSet; }

    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     */
    inline void SetRelationalDatabaseBundleId(const Aws::String& value) { m_relationalDatabaseBundleIdHasBeenSet = true; m_relationalDatabaseBundleId = value; }

    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     */
    inline void SetRelationalDatabaseBundleId(Aws::String&& value) { m_relationalDatabaseBundleIdHasBeenSet = true; m_relationalDatabaseBundleId = std::move(value); }

    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     */
    inline void SetRelationalDatabaseBundleId(const char* value) { m_relationalDatabaseBundleIdHasBeenSet = true; m_relationalDatabaseBundleId.assign(value); }

    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     */
    inline CreateRelationalDatabaseRequest& WithRelationalDatabaseBundleId(const Aws::String& value) { SetRelationalDatabaseBundleId(value); return *this;}

    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     */
    inline CreateRelationalDatabaseRequest& WithRelationalDatabaseBundleId(Aws::String&& value) { SetRelationalDatabaseBundleId(std::move(value)); return *this;}

    /**
     * <p>The bundle ID for your new database. A bundle describes the performance
     * specifications for your database.</p> <p>You can get a list of database bundle
     * IDs by using the <code>get relational database bundles</code> operation.</p>
     */
    inline CreateRelationalDatabaseRequest& WithRelationalDatabaseBundleId(const char* value) { SetRelationalDatabaseBundleId(value); return *this;}


    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL</b> </p> <p>The name of the database to create when the
     * Lightsail database resource is created. If this parameter isn't specified, no
     * database is created in the database resource.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain 1 to 64 letters or numbers.</p> </li> <li> <p>Must begin with a
     * letter. Subsequent characters can be letters, underscores, or digits (0- 9).</p>
     * </li> <li> <p>Can't be a word reserved by the specified database engine.</p>
     * <p>For more information about reserved words in MySQL, see the Keywords and
     * Reserved Words articles for <a
     * href="https://dev.mysql.com/doc/refman/5.6/en/keywords.html">MySQL 5.6</a>, <a
     * href="https://dev.mysql.com/doc/refman/5.7/en/keywords.html">MySQL 5.7</a>, and
     * <a href="https://dev.mysql.com/doc/refman/8.0/en/keywords.html">MySQL
     * 8.0</a>.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>The name of the database
     * to create when the Lightsail database resource is created. If this parameter
     * isn't specified, a database named <code>postgres</code> is created in the
     * database resource.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 63
     * letters or numbers.</p> </li> <li> <p>Must begin with a letter. Subsequent
     * characters can be letters, underscores, or digits (0- 9).</p> </li> <li>
     * <p>Can't be a word reserved by the specified database engine.</p> <p>For more
     * information about reserved words in PostgreSQL, see the SQL Key Words articles
     * for <a
     * href="https://www.postgresql.org/docs/9.6/sql-keywords-appendix.html">PostgreSQL
     * 9.6</a>, <a
     * href="https://www.postgresql.org/docs/10/sql-keywords-appendix.html">PostgreSQL
     * 10</a>, <a
     * href="https://www.postgresql.org/docs/11/sql-keywords-appendix.html">PostgreSQL
     * 11</a>, and <a
     * href="https://www.postgresql.org/docs/12/sql-keywords-appendix.html">PostgreSQL
     * 12</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterDatabaseName() const{ return m_masterDatabaseName; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL</b> </p> <p>The name of the database to create when the
     * Lightsail database resource is created. If this parameter isn't specified, no
     * database is created in the database resource.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain 1 to 64 letters or numbers.</p> </li> <li> <p>Must begin with a
     * letter. Subsequent characters can be letters, underscores, or digits (0- 9).</p>
     * </li> <li> <p>Can't be a word reserved by the specified database engine.</p>
     * <p>For more information about reserved words in MySQL, see the Keywords and
     * Reserved Words articles for <a
     * href="https://dev.mysql.com/doc/refman/5.6/en/keywords.html">MySQL 5.6</a>, <a
     * href="https://dev.mysql.com/doc/refman/5.7/en/keywords.html">MySQL 5.7</a>, and
     * <a href="https://dev.mysql.com/doc/refman/8.0/en/keywords.html">MySQL
     * 8.0</a>.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>The name of the database
     * to create when the Lightsail database resource is created. If this parameter
     * isn't specified, a database named <code>postgres</code> is created in the
     * database resource.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 63
     * letters or numbers.</p> </li> <li> <p>Must begin with a letter. Subsequent
     * characters can be letters, underscores, or digits (0- 9).</p> </li> <li>
     * <p>Can't be a word reserved by the specified database engine.</p> <p>For more
     * information about reserved words in PostgreSQL, see the SQL Key Words articles
     * for <a
     * href="https://www.postgresql.org/docs/9.6/sql-keywords-appendix.html">PostgreSQL
     * 9.6</a>, <a
     * href="https://www.postgresql.org/docs/10/sql-keywords-appendix.html">PostgreSQL
     * 10</a>, <a
     * href="https://www.postgresql.org/docs/11/sql-keywords-appendix.html">PostgreSQL
     * 11</a>, and <a
     * href="https://www.postgresql.org/docs/12/sql-keywords-appendix.html">PostgreSQL
     * 12</a>.</p> </li> </ul>
     */
    inline bool MasterDatabaseNameHasBeenSet() const { return m_masterDatabaseNameHasBeenSet; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL</b> </p> <p>The name of the database to create when the
     * Lightsail database resource is created. If this parameter isn't specified, no
     * database is created in the database resource.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain 1 to 64 letters or numbers.</p> </li> <li> <p>Must begin with a
     * letter. Subsequent characters can be letters, underscores, or digits (0- 9).</p>
     * </li> <li> <p>Can't be a word reserved by the specified database engine.</p>
     * <p>For more information about reserved words in MySQL, see the Keywords and
     * Reserved Words articles for <a
     * href="https://dev.mysql.com/doc/refman/5.6/en/keywords.html">MySQL 5.6</a>, <a
     * href="https://dev.mysql.com/doc/refman/5.7/en/keywords.html">MySQL 5.7</a>, and
     * <a href="https://dev.mysql.com/doc/refman/8.0/en/keywords.html">MySQL
     * 8.0</a>.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>The name of the database
     * to create when the Lightsail database resource is created. If this parameter
     * isn't specified, a database named <code>postgres</code> is created in the
     * database resource.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 63
     * letters or numbers.</p> </li> <li> <p>Must begin with a letter. Subsequent
     * characters can be letters, underscores, or digits (0- 9).</p> </li> <li>
     * <p>Can't be a word reserved by the specified database engine.</p> <p>For more
     * information about reserved words in PostgreSQL, see the SQL Key Words articles
     * for <a
     * href="https://www.postgresql.org/docs/9.6/sql-keywords-appendix.html">PostgreSQL
     * 9.6</a>, <a
     * href="https://www.postgresql.org/docs/10/sql-keywords-appendix.html">PostgreSQL
     * 10</a>, <a
     * href="https://www.postgresql.org/docs/11/sql-keywords-appendix.html">PostgreSQL
     * 11</a>, and <a
     * href="https://www.postgresql.org/docs/12/sql-keywords-appendix.html">PostgreSQL
     * 12</a>.</p> </li> </ul>
     */
    inline void SetMasterDatabaseName(const Aws::String& value) { m_masterDatabaseNameHasBeenSet = true; m_masterDatabaseName = value; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL</b> </p> <p>The name of the database to create when the
     * Lightsail database resource is created. If this parameter isn't specified, no
     * database is created in the database resource.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain 1 to 64 letters or numbers.</p> </li> <li> <p>Must begin with a
     * letter. Subsequent characters can be letters, underscores, or digits (0- 9).</p>
     * </li> <li> <p>Can't be a word reserved by the specified database engine.</p>
     * <p>For more information about reserved words in MySQL, see the Keywords and
     * Reserved Words articles for <a
     * href="https://dev.mysql.com/doc/refman/5.6/en/keywords.html">MySQL 5.6</a>, <a
     * href="https://dev.mysql.com/doc/refman/5.7/en/keywords.html">MySQL 5.7</a>, and
     * <a href="https://dev.mysql.com/doc/refman/8.0/en/keywords.html">MySQL
     * 8.0</a>.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>The name of the database
     * to create when the Lightsail database resource is created. If this parameter
     * isn't specified, a database named <code>postgres</code> is created in the
     * database resource.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 63
     * letters or numbers.</p> </li> <li> <p>Must begin with a letter. Subsequent
     * characters can be letters, underscores, or digits (0- 9).</p> </li> <li>
     * <p>Can't be a word reserved by the specified database engine.</p> <p>For more
     * information about reserved words in PostgreSQL, see the SQL Key Words articles
     * for <a
     * href="https://www.postgresql.org/docs/9.6/sql-keywords-appendix.html">PostgreSQL
     * 9.6</a>, <a
     * href="https://www.postgresql.org/docs/10/sql-keywords-appendix.html">PostgreSQL
     * 10</a>, <a
     * href="https://www.postgresql.org/docs/11/sql-keywords-appendix.html">PostgreSQL
     * 11</a>, and <a
     * href="https://www.postgresql.org/docs/12/sql-keywords-appendix.html">PostgreSQL
     * 12</a>.</p> </li> </ul>
     */
    inline void SetMasterDatabaseName(Aws::String&& value) { m_masterDatabaseNameHasBeenSet = true; m_masterDatabaseName = std::move(value); }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL</b> </p> <p>The name of the database to create when the
     * Lightsail database resource is created. If this parameter isn't specified, no
     * database is created in the database resource.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain 1 to 64 letters or numbers.</p> </li> <li> <p>Must begin with a
     * letter. Subsequent characters can be letters, underscores, or digits (0- 9).</p>
     * </li> <li> <p>Can't be a word reserved by the specified database engine.</p>
     * <p>For more information about reserved words in MySQL, see the Keywords and
     * Reserved Words articles for <a
     * href="https://dev.mysql.com/doc/refman/5.6/en/keywords.html">MySQL 5.6</a>, <a
     * href="https://dev.mysql.com/doc/refman/5.7/en/keywords.html">MySQL 5.7</a>, and
     * <a href="https://dev.mysql.com/doc/refman/8.0/en/keywords.html">MySQL
     * 8.0</a>.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>The name of the database
     * to create when the Lightsail database resource is created. If this parameter
     * isn't specified, a database named <code>postgres</code> is created in the
     * database resource.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 63
     * letters or numbers.</p> </li> <li> <p>Must begin with a letter. Subsequent
     * characters can be letters, underscores, or digits (0- 9).</p> </li> <li>
     * <p>Can't be a word reserved by the specified database engine.</p> <p>For more
     * information about reserved words in PostgreSQL, see the SQL Key Words articles
     * for <a
     * href="https://www.postgresql.org/docs/9.6/sql-keywords-appendix.html">PostgreSQL
     * 9.6</a>, <a
     * href="https://www.postgresql.org/docs/10/sql-keywords-appendix.html">PostgreSQL
     * 10</a>, <a
     * href="https://www.postgresql.org/docs/11/sql-keywords-appendix.html">PostgreSQL
     * 11</a>, and <a
     * href="https://www.postgresql.org/docs/12/sql-keywords-appendix.html">PostgreSQL
     * 12</a>.</p> </li> </ul>
     */
    inline void SetMasterDatabaseName(const char* value) { m_masterDatabaseNameHasBeenSet = true; m_masterDatabaseName.assign(value); }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL</b> </p> <p>The name of the database to create when the
     * Lightsail database resource is created. If this parameter isn't specified, no
     * database is created in the database resource.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain 1 to 64 letters or numbers.</p> </li> <li> <p>Must begin with a
     * letter. Subsequent characters can be letters, underscores, or digits (0- 9).</p>
     * </li> <li> <p>Can't be a word reserved by the specified database engine.</p>
     * <p>For more information about reserved words in MySQL, see the Keywords and
     * Reserved Words articles for <a
     * href="https://dev.mysql.com/doc/refman/5.6/en/keywords.html">MySQL 5.6</a>, <a
     * href="https://dev.mysql.com/doc/refman/5.7/en/keywords.html">MySQL 5.7</a>, and
     * <a href="https://dev.mysql.com/doc/refman/8.0/en/keywords.html">MySQL
     * 8.0</a>.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>The name of the database
     * to create when the Lightsail database resource is created. If this parameter
     * isn't specified, a database named <code>postgres</code> is created in the
     * database resource.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 63
     * letters or numbers.</p> </li> <li> <p>Must begin with a letter. Subsequent
     * characters can be letters, underscores, or digits (0- 9).</p> </li> <li>
     * <p>Can't be a word reserved by the specified database engine.</p> <p>For more
     * information about reserved words in PostgreSQL, see the SQL Key Words articles
     * for <a
     * href="https://www.postgresql.org/docs/9.6/sql-keywords-appendix.html">PostgreSQL
     * 9.6</a>, <a
     * href="https://www.postgresql.org/docs/10/sql-keywords-appendix.html">PostgreSQL
     * 10</a>, <a
     * href="https://www.postgresql.org/docs/11/sql-keywords-appendix.html">PostgreSQL
     * 11</a>, and <a
     * href="https://www.postgresql.org/docs/12/sql-keywords-appendix.html">PostgreSQL
     * 12</a>.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseRequest& WithMasterDatabaseName(const Aws::String& value) { SetMasterDatabaseName(value); return *this;}

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL</b> </p> <p>The name of the database to create when the
     * Lightsail database resource is created. If this parameter isn't specified, no
     * database is created in the database resource.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain 1 to 64 letters or numbers.</p> </li> <li> <p>Must begin with a
     * letter. Subsequent characters can be letters, underscores, or digits (0- 9).</p>
     * </li> <li> <p>Can't be a word reserved by the specified database engine.</p>
     * <p>For more information about reserved words in MySQL, see the Keywords and
     * Reserved Words articles for <a
     * href="https://dev.mysql.com/doc/refman/5.6/en/keywords.html">MySQL 5.6</a>, <a
     * href="https://dev.mysql.com/doc/refman/5.7/en/keywords.html">MySQL 5.7</a>, and
     * <a href="https://dev.mysql.com/doc/refman/8.0/en/keywords.html">MySQL
     * 8.0</a>.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>The name of the database
     * to create when the Lightsail database resource is created. If this parameter
     * isn't specified, a database named <code>postgres</code> is created in the
     * database resource.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 63
     * letters or numbers.</p> </li> <li> <p>Must begin with a letter. Subsequent
     * characters can be letters, underscores, or digits (0- 9).</p> </li> <li>
     * <p>Can't be a word reserved by the specified database engine.</p> <p>For more
     * information about reserved words in PostgreSQL, see the SQL Key Words articles
     * for <a
     * href="https://www.postgresql.org/docs/9.6/sql-keywords-appendix.html">PostgreSQL
     * 9.6</a>, <a
     * href="https://www.postgresql.org/docs/10/sql-keywords-appendix.html">PostgreSQL
     * 10</a>, <a
     * href="https://www.postgresql.org/docs/11/sql-keywords-appendix.html">PostgreSQL
     * 11</a>, and <a
     * href="https://www.postgresql.org/docs/12/sql-keywords-appendix.html">PostgreSQL
     * 12</a>.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseRequest& WithMasterDatabaseName(Aws::String&& value) { SetMasterDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL</b> </p> <p>The name of the database to create when the
     * Lightsail database resource is created. If this parameter isn't specified, no
     * database is created in the database resource.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain 1 to 64 letters or numbers.</p> </li> <li> <p>Must begin with a
     * letter. Subsequent characters can be letters, underscores, or digits (0- 9).</p>
     * </li> <li> <p>Can't be a word reserved by the specified database engine.</p>
     * <p>For more information about reserved words in MySQL, see the Keywords and
     * Reserved Words articles for <a
     * href="https://dev.mysql.com/doc/refman/5.6/en/keywords.html">MySQL 5.6</a>, <a
     * href="https://dev.mysql.com/doc/refman/5.7/en/keywords.html">MySQL 5.7</a>, and
     * <a href="https://dev.mysql.com/doc/refman/8.0/en/keywords.html">MySQL
     * 8.0</a>.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>The name of the database
     * to create when the Lightsail database resource is created. If this parameter
     * isn't specified, a database named <code>postgres</code> is created in the
     * database resource.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 63
     * letters or numbers.</p> </li> <li> <p>Must begin with a letter. Subsequent
     * characters can be letters, underscores, or digits (0- 9).</p> </li> <li>
     * <p>Can't be a word reserved by the specified database engine.</p> <p>For more
     * information about reserved words in PostgreSQL, see the SQL Key Words articles
     * for <a
     * href="https://www.postgresql.org/docs/9.6/sql-keywords-appendix.html">PostgreSQL
     * 9.6</a>, <a
     * href="https://www.postgresql.org/docs/10/sql-keywords-appendix.html">PostgreSQL
     * 10</a>, <a
     * href="https://www.postgresql.org/docs/11/sql-keywords-appendix.html">PostgreSQL
     * 11</a>, and <a
     * href="https://www.postgresql.org/docs/12/sql-keywords-appendix.html">PostgreSQL
     * 12</a>.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseRequest& WithMasterDatabaseName(const char* value) { SetMasterDatabaseName(value); return *this;}


    /**
     * <p>The name for the master user.</p> <p> <b>MySQL</b> </p> <p>Constraints:</p>
     * <ul> <li> <p>Required for MySQL.</p> </li> <li> <p>Must be 1 to 16 letters or
     * numbers. Can contain underscores.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> <p>For more information about reserved words in MySQL 5.6 or 5.7,
     * see the Keywords and Reserved Words articles for <a
     * href="https://dev.mysql.com/doc/refman/5.6/en/keywords.html">MySQL 5.6</a>, <a
     * href="https://dev.mysql.com/doc/refman/5.7/en/keywords.html">MySQL 5.7</a>, or
     * <a href="https://dev.mysql.com/doc/refman/8.0/en/keywords.html">MySQL
     * 8.0</a>.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints:</p> <ul>
     * <li> <p>Required for PostgreSQL.</p> </li> <li> <p>Must be 1 to 63 letters or
     * numbers. Can contain underscores.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> <p>For more information about reserved words in MySQL 5.6 or 5.7,
     * see the Keywords and Reserved Words articles for <a
     * href="https://www.postgresql.org/docs/9.6/sql-keywords-appendix.html">PostgreSQL
     * 9.6</a>, <a
     * href="https://www.postgresql.org/docs/10/sql-keywords-appendix.html">PostgreSQL
     * 10</a>, <a
     * href="https://www.postgresql.org/docs/11/sql-keywords-appendix.html">PostgreSQL
     * 11</a>, and <a
     * href="https://www.postgresql.org/docs/12/sql-keywords-appendix.html">PostgreSQL
     * 12</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The name for the master user.</p> <p> <b>MySQL</b> </p> <p>Constraints:</p>
     * <ul> <li> <p>Required for MySQL.</p> </li> <li> <p>Must be 1 to 16 letters or
     * numbers. Can contain underscores.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> <p>For more information about reserved words in MySQL 5.6 or 5.7,
     * see the Keywords and Reserved Words articles for <a
     * href="https://dev.mysql.com/doc/refman/5.6/en/keywords.html">MySQL 5.6</a>, <a
     * href="https://dev.mysql.com/doc/refman/5.7/en/keywords.html">MySQL 5.7</a>, or
     * <a href="https://dev.mysql.com/doc/refman/8.0/en/keywords.html">MySQL
     * 8.0</a>.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints:</p> <ul>
     * <li> <p>Required for PostgreSQL.</p> </li> <li> <p>Must be 1 to 63 letters or
     * numbers. Can contain underscores.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> <p>For more information about reserved words in MySQL 5.6 or 5.7,
     * see the Keywords and Reserved Words articles for <a
     * href="https://www.postgresql.org/docs/9.6/sql-keywords-appendix.html">PostgreSQL
     * 9.6</a>, <a
     * href="https://www.postgresql.org/docs/10/sql-keywords-appendix.html">PostgreSQL
     * 10</a>, <a
     * href="https://www.postgresql.org/docs/11/sql-keywords-appendix.html">PostgreSQL
     * 11</a>, and <a
     * href="https://www.postgresql.org/docs/12/sql-keywords-appendix.html">PostgreSQL
     * 12</a>.</p> </li> </ul>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p>The name for the master user.</p> <p> <b>MySQL</b> </p> <p>Constraints:</p>
     * <ul> <li> <p>Required for MySQL.</p> </li> <li> <p>Must be 1 to 16 letters or
     * numbers. Can contain underscores.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> <p>For more information about reserved words in MySQL 5.6 or 5.7,
     * see the Keywords and Reserved Words articles for <a
     * href="https://dev.mysql.com/doc/refman/5.6/en/keywords.html">MySQL 5.6</a>, <a
     * href="https://dev.mysql.com/doc/refman/5.7/en/keywords.html">MySQL 5.7</a>, or
     * <a href="https://dev.mysql.com/doc/refman/8.0/en/keywords.html">MySQL
     * 8.0</a>.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints:</p> <ul>
     * <li> <p>Required for PostgreSQL.</p> </li> <li> <p>Must be 1 to 63 letters or
     * numbers. Can contain underscores.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> <p>For more information about reserved words in MySQL 5.6 or 5.7,
     * see the Keywords and Reserved Words articles for <a
     * href="https://www.postgresql.org/docs/9.6/sql-keywords-appendix.html">PostgreSQL
     * 9.6</a>, <a
     * href="https://www.postgresql.org/docs/10/sql-keywords-appendix.html">PostgreSQL
     * 10</a>, <a
     * href="https://www.postgresql.org/docs/11/sql-keywords-appendix.html">PostgreSQL
     * 11</a>, and <a
     * href="https://www.postgresql.org/docs/12/sql-keywords-appendix.html">PostgreSQL
     * 12</a>.</p> </li> </ul>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The name for the master user.</p> <p> <b>MySQL</b> </p> <p>Constraints:</p>
     * <ul> <li> <p>Required for MySQL.</p> </li> <li> <p>Must be 1 to 16 letters or
     * numbers. Can contain underscores.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> <p>For more information about reserved words in MySQL 5.6 or 5.7,
     * see the Keywords and Reserved Words articles for <a
     * href="https://dev.mysql.com/doc/refman/5.6/en/keywords.html">MySQL 5.6</a>, <a
     * href="https://dev.mysql.com/doc/refman/5.7/en/keywords.html">MySQL 5.7</a>, or
     * <a href="https://dev.mysql.com/doc/refman/8.0/en/keywords.html">MySQL
     * 8.0</a>.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints:</p> <ul>
     * <li> <p>Required for PostgreSQL.</p> </li> <li> <p>Must be 1 to 63 letters or
     * numbers. Can contain underscores.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> <p>For more information about reserved words in MySQL 5.6 or 5.7,
     * see the Keywords and Reserved Words articles for <a
     * href="https://www.postgresql.org/docs/9.6/sql-keywords-appendix.html">PostgreSQL
     * 9.6</a>, <a
     * href="https://www.postgresql.org/docs/10/sql-keywords-appendix.html">PostgreSQL
     * 10</a>, <a
     * href="https://www.postgresql.org/docs/11/sql-keywords-appendix.html">PostgreSQL
     * 11</a>, and <a
     * href="https://www.postgresql.org/docs/12/sql-keywords-appendix.html">PostgreSQL
     * 12</a>.</p> </li> </ul>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>The name for the master user.</p> <p> <b>MySQL</b> </p> <p>Constraints:</p>
     * <ul> <li> <p>Required for MySQL.</p> </li> <li> <p>Must be 1 to 16 letters or
     * numbers. Can contain underscores.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> <p>For more information about reserved words in MySQL 5.6 or 5.7,
     * see the Keywords and Reserved Words articles for <a
     * href="https://dev.mysql.com/doc/refman/5.6/en/keywords.html">MySQL 5.6</a>, <a
     * href="https://dev.mysql.com/doc/refman/5.7/en/keywords.html">MySQL 5.7</a>, or
     * <a href="https://dev.mysql.com/doc/refman/8.0/en/keywords.html">MySQL
     * 8.0</a>.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints:</p> <ul>
     * <li> <p>Required for PostgreSQL.</p> </li> <li> <p>Must be 1 to 63 letters or
     * numbers. Can contain underscores.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> <p>For more information about reserved words in MySQL 5.6 or 5.7,
     * see the Keywords and Reserved Words articles for <a
     * href="https://www.postgresql.org/docs/9.6/sql-keywords-appendix.html">PostgreSQL
     * 9.6</a>, <a
     * href="https://www.postgresql.org/docs/10/sql-keywords-appendix.html">PostgreSQL
     * 10</a>, <a
     * href="https://www.postgresql.org/docs/11/sql-keywords-appendix.html">PostgreSQL
     * 11</a>, and <a
     * href="https://www.postgresql.org/docs/12/sql-keywords-appendix.html">PostgreSQL
     * 12</a>.</p> </li> </ul>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The name for the master user.</p> <p> <b>MySQL</b> </p> <p>Constraints:</p>
     * <ul> <li> <p>Required for MySQL.</p> </li> <li> <p>Must be 1 to 16 letters or
     * numbers. Can contain underscores.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> <p>For more information about reserved words in MySQL 5.6 or 5.7,
     * see the Keywords and Reserved Words articles for <a
     * href="https://dev.mysql.com/doc/refman/5.6/en/keywords.html">MySQL 5.6</a>, <a
     * href="https://dev.mysql.com/doc/refman/5.7/en/keywords.html">MySQL 5.7</a>, or
     * <a href="https://dev.mysql.com/doc/refman/8.0/en/keywords.html">MySQL
     * 8.0</a>.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints:</p> <ul>
     * <li> <p>Required for PostgreSQL.</p> </li> <li> <p>Must be 1 to 63 letters or
     * numbers. Can contain underscores.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> <p>For more information about reserved words in MySQL 5.6 or 5.7,
     * see the Keywords and Reserved Words articles for <a
     * href="https://www.postgresql.org/docs/9.6/sql-keywords-appendix.html">PostgreSQL
     * 9.6</a>, <a
     * href="https://www.postgresql.org/docs/10/sql-keywords-appendix.html">PostgreSQL
     * 10</a>, <a
     * href="https://www.postgresql.org/docs/11/sql-keywords-appendix.html">PostgreSQL
     * 11</a>, and <a
     * href="https://www.postgresql.org/docs/12/sql-keywords-appendix.html">PostgreSQL
     * 12</a>.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseRequest& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The name for the master user.</p> <p> <b>MySQL</b> </p> <p>Constraints:</p>
     * <ul> <li> <p>Required for MySQL.</p> </li> <li> <p>Must be 1 to 16 letters or
     * numbers. Can contain underscores.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> <p>For more information about reserved words in MySQL 5.6 or 5.7,
     * see the Keywords and Reserved Words articles for <a
     * href="https://dev.mysql.com/doc/refman/5.6/en/keywords.html">MySQL 5.6</a>, <a
     * href="https://dev.mysql.com/doc/refman/5.7/en/keywords.html">MySQL 5.7</a>, or
     * <a href="https://dev.mysql.com/doc/refman/8.0/en/keywords.html">MySQL
     * 8.0</a>.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints:</p> <ul>
     * <li> <p>Required for PostgreSQL.</p> </li> <li> <p>Must be 1 to 63 letters or
     * numbers. Can contain underscores.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> <p>For more information about reserved words in MySQL 5.6 or 5.7,
     * see the Keywords and Reserved Words articles for <a
     * href="https://www.postgresql.org/docs/9.6/sql-keywords-appendix.html">PostgreSQL
     * 9.6</a>, <a
     * href="https://www.postgresql.org/docs/10/sql-keywords-appendix.html">PostgreSQL
     * 10</a>, <a
     * href="https://www.postgresql.org/docs/11/sql-keywords-appendix.html">PostgreSQL
     * 11</a>, and <a
     * href="https://www.postgresql.org/docs/12/sql-keywords-appendix.html">PostgreSQL
     * 12</a>.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseRequest& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>The name for the master user.</p> <p> <b>MySQL</b> </p> <p>Constraints:</p>
     * <ul> <li> <p>Required for MySQL.</p> </li> <li> <p>Must be 1 to 16 letters or
     * numbers. Can contain underscores.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> <p>For more information about reserved words in MySQL 5.6 or 5.7,
     * see the Keywords and Reserved Words articles for <a
     * href="https://dev.mysql.com/doc/refman/5.6/en/keywords.html">MySQL 5.6</a>, <a
     * href="https://dev.mysql.com/doc/refman/5.7/en/keywords.html">MySQL 5.7</a>, or
     * <a href="https://dev.mysql.com/doc/refman/8.0/en/keywords.html">MySQL
     * 8.0</a>.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints:</p> <ul>
     * <li> <p>Required for PostgreSQL.</p> </li> <li> <p>Must be 1 to 63 letters or
     * numbers. Can contain underscores.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> <p>For more information about reserved words in MySQL 5.6 or 5.7,
     * see the Keywords and Reserved Words articles for <a
     * href="https://www.postgresql.org/docs/9.6/sql-keywords-appendix.html">PostgreSQL
     * 9.6</a>, <a
     * href="https://www.postgresql.org/docs/10/sql-keywords-appendix.html">PostgreSQL
     * 10</a>, <a
     * href="https://www.postgresql.org/docs/11/sql-keywords-appendix.html">PostgreSQL
     * 11</a>, and <a
     * href="https://www.postgresql.org/docs/12/sql-keywords-appendix.html">PostgreSQL
     * 12</a>.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseRequest& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@". It cannot contain spaces.</p> <p>
     * <b>MySQL</b> </p> <p>Constraints: Must contain from 8 to 41 characters.</p> <p>
     * <b>PostgreSQL</b> </p> <p>Constraints: Must contain from 8 to 128
     * characters.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@". It cannot contain spaces.</p> <p>
     * <b>MySQL</b> </p> <p>Constraints: Must contain from 8 to 41 characters.</p> <p>
     * <b>PostgreSQL</b> </p> <p>Constraints: Must contain from 8 to 128
     * characters.</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@". It cannot contain spaces.</p> <p>
     * <b>MySQL</b> </p> <p>Constraints: Must contain from 8 to 41 characters.</p> <p>
     * <b>PostgreSQL</b> </p> <p>Constraints: Must contain from 8 to 128
     * characters.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@". It cannot contain spaces.</p> <p>
     * <b>MySQL</b> </p> <p>Constraints: Must contain from 8 to 41 characters.</p> <p>
     * <b>PostgreSQL</b> </p> <p>Constraints: Must contain from 8 to 128
     * characters.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@". It cannot contain spaces.</p> <p>
     * <b>MySQL</b> </p> <p>Constraints: Must contain from 8 to 41 characters.</p> <p>
     * <b>PostgreSQL</b> </p> <p>Constraints: Must contain from 8 to 128
     * characters.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@". It cannot contain spaces.</p> <p>
     * <b>MySQL</b> </p> <p>Constraints: Must contain from 8 to 41 characters.</p> <p>
     * <b>PostgreSQL</b> </p> <p>Constraints: Must contain from 8 to 128
     * characters.</p>
     */
    inline CreateRelationalDatabaseRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@". It cannot contain spaces.</p> <p>
     * <b>MySQL</b> </p> <p>Constraints: Must contain from 8 to 41 characters.</p> <p>
     * <b>PostgreSQL</b> </p> <p>Constraints: Must contain from 8 to 128
     * characters.</p>
     */
    inline CreateRelationalDatabaseRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@". It cannot contain spaces.</p> <p>
     * <b>MySQL</b> </p> <p>Constraints: Must contain from 8 to 41 characters.</p> <p>
     * <b>PostgreSQL</b> </p> <p>Constraints: Must contain from 8 to 128
     * characters.</p>
     */
    inline CreateRelationalDatabaseRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>The daily time range during which automated backups are created for your new
     * database if automated backups are enabled.</p> <p>The default is a 30-minute
     * window selected at random from an 8-hour block of time for each AWS Region. For
     * more information about the preferred backup window time blocks for each region,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">Working
     * With Backups</a> guide in the Amazon Relational Database Service
     * documentation.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>hh24:mi-hh24:mi</code> format.</p> <p>Example: <code>16:00-16:30</code>
     * </p> </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Must not conflict with the preferred maintenance window.</p> </li> <li>
     * <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p>The daily time range during which automated backups are created for your new
     * database if automated backups are enabled.</p> <p>The default is a 30-minute
     * window selected at random from an 8-hour block of time for each AWS Region. For
     * more information about the preferred backup window time blocks for each region,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">Working
     * With Backups</a> guide in the Amazon Relational Database Service
     * documentation.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>hh24:mi-hh24:mi</code> format.</p> <p>Example: <code>16:00-16:30</code>
     * </p> </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Must not conflict with the preferred maintenance window.</p> </li> <li>
     * <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p>The daily time range during which automated backups are created for your new
     * database if automated backups are enabled.</p> <p>The default is a 30-minute
     * window selected at random from an 8-hour block of time for each AWS Region. For
     * more information about the preferred backup window time blocks for each region,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">Working
     * With Backups</a> guide in the Amazon Relational Database Service
     * documentation.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>hh24:mi-hh24:mi</code> format.</p> <p>Example: <code>16:00-16:30</code>
     * </p> </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Must not conflict with the preferred maintenance window.</p> </li> <li>
     * <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>The daily time range during which automated backups are created for your new
     * database if automated backups are enabled.</p> <p>The default is a 30-minute
     * window selected at random from an 8-hour block of time for each AWS Region. For
     * more information about the preferred backup window time blocks for each region,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">Working
     * With Backups</a> guide in the Amazon Relational Database Service
     * documentation.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>hh24:mi-hh24:mi</code> format.</p> <p>Example: <code>16:00-16:30</code>
     * </p> </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Must not conflict with the preferred maintenance window.</p> </li> <li>
     * <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p>The daily time range during which automated backups are created for your new
     * database if automated backups are enabled.</p> <p>The default is a 30-minute
     * window selected at random from an 8-hour block of time for each AWS Region. For
     * more information about the preferred backup window time blocks for each region,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">Working
     * With Backups</a> guide in the Amazon Relational Database Service
     * documentation.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>hh24:mi-hh24:mi</code> format.</p> <p>Example: <code>16:00-16:30</code>
     * </p> </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Must not conflict with the preferred maintenance window.</p> </li> <li>
     * <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p>The daily time range during which automated backups are created for your new
     * database if automated backups are enabled.</p> <p>The default is a 30-minute
     * window selected at random from an 8-hour block of time for each AWS Region. For
     * more information about the preferred backup window time blocks for each region,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">Working
     * With Backups</a> guide in the Amazon Relational Database Service
     * documentation.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>hh24:mi-hh24:mi</code> format.</p> <p>Example: <code>16:00-16:30</code>
     * </p> </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Must not conflict with the preferred maintenance window.</p> </li> <li>
     * <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The daily time range during which automated backups are created for your new
     * database if automated backups are enabled.</p> <p>The default is a 30-minute
     * window selected at random from an 8-hour block of time for each AWS Region. For
     * more information about the preferred backup window time blocks for each region,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">Working
     * With Backups</a> guide in the Amazon Relational Database Service
     * documentation.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>hh24:mi-hh24:mi</code> format.</p> <p>Example: <code>16:00-16:30</code>
     * </p> </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Must not conflict with the preferred maintenance window.</p> </li> <li>
     * <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p>The daily time range during which automated backups are created for your new
     * database if automated backups are enabled.</p> <p>The default is a 30-minute
     * window selected at random from an 8-hour block of time for each AWS Region. For
     * more information about the preferred backup window time blocks for each region,
     * see the <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">Working
     * With Backups</a> guide in the Amazon Relational Database Service
     * documentation.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>hh24:mi-hh24:mi</code> format.</p> <p>Example: <code>16:00-16:30</code>
     * </p> </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Must not conflict with the preferred maintenance window.</p> </li> <li>
     * <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline CreateRelationalDatabaseRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The weekly time range during which system maintenance can occur on your new
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each AWS Region, occurring on a random day of the
     * week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur on your new
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each AWS Region, occurring on a random day of the
     * week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur on your new
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each AWS Region, occurring on a random day of the
     * week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur on your new
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each AWS Region, occurring on a random day of the
     * week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur on your new
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each AWS Region, occurring on a random day of the
     * week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur on your new
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each AWS Region, occurring on a random day of the
     * week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline CreateRelationalDatabaseRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur on your new
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each AWS Region, occurring on a random day of the
     * week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline CreateRelationalDatabaseRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur on your new
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each AWS Region, occurring on a random day of the
     * week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline CreateRelationalDatabaseRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>Specifies the accessibility options for your new database. A value of
     * <code>true</code> specifies a database that is available to resources outside of
     * your Lightsail account. A value of <code>false</code> specifies a database that
     * is available only to your Lightsail resources in the same region as your
     * database.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Specifies the accessibility options for your new database. A value of
     * <code>true</code> specifies a database that is available to resources outside of
     * your Lightsail account. A value of <code>false</code> specifies a database that
     * is available only to your Lightsail resources in the same region as your
     * database.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>Specifies the accessibility options for your new database. A value of
     * <code>true</code> specifies a database that is available to resources outside of
     * your Lightsail account. A value of <code>false</code> specifies a database that
     * is available only to your Lightsail resources in the same region as your
     * database.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>Specifies the accessibility options for your new database. A value of
     * <code>true</code> specifies a database that is available to resources outside of
     * your Lightsail account. A value of <code>false</code> specifies a database that
     * is available only to your Lightsail resources in the same region as your
     * database.</p>
     */
    inline CreateRelationalDatabaseRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateRelationalDatabaseRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateRelationalDatabaseRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateRelationalDatabaseRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline CreateRelationalDatabaseRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_relationalDatabaseBlueprintId;
    bool m_relationalDatabaseBlueprintIdHasBeenSet = false;

    Aws::String m_relationalDatabaseBundleId;
    bool m_relationalDatabaseBundleIdHasBeenSet = false;

    Aws::String m_masterDatabaseName;
    bool m_masterDatabaseNameHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
