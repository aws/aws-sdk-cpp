/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ConnectionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/PhysicalConnectionRequirements.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/ConnectionPropertyKey.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Defines a connection to a data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Connection">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API Connection
  {
  public:
    Connection();
    Connection(Aws::Utils::Json::JsonView jsonValue);
    Connection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the connection definition.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the connection definition.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the connection definition.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the connection definition.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the connection definition.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the connection definition.</p>
     */
    inline Connection& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the connection definition.</p>
     */
    inline Connection& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection definition.</p>
     */
    inline Connection& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the connection.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the connection.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the connection.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the connection.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the connection.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the connection.</p>
     */
    inline Connection& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the connection.</p>
     */
    inline Connection& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the connection.</p>
     */
    inline Connection& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of the connection. Currently, only JDBC is supported; SFTP is not
     * supported.</p>
     */
    inline const ConnectionType& GetConnectionType() const{ return m_connectionType; }

    /**
     * <p>The type of the connection. Currently, only JDBC is supported; SFTP is not
     * supported.</p>
     */
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }

    /**
     * <p>The type of the connection. Currently, only JDBC is supported; SFTP is not
     * supported.</p>
     */
    inline void SetConnectionType(const ConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }

    /**
     * <p>The type of the connection. Currently, only JDBC is supported; SFTP is not
     * supported.</p>
     */
    inline void SetConnectionType(ConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }

    /**
     * <p>The type of the connection. Currently, only JDBC is supported; SFTP is not
     * supported.</p>
     */
    inline Connection& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}

    /**
     * <p>The type of the connection. Currently, only JDBC is supported; SFTP is not
     * supported.</p>
     */
    inline Connection& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}


    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchCriteria() const{ return m_matchCriteria; }

    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline bool MatchCriteriaHasBeenSet() const { return m_matchCriteriaHasBeenSet; }

    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline void SetMatchCriteria(const Aws::Vector<Aws::String>& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = value; }

    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline void SetMatchCriteria(Aws::Vector<Aws::String>&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria = std::move(value); }

    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline Connection& WithMatchCriteria(const Aws::Vector<Aws::String>& value) { SetMatchCriteria(value); return *this;}

    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline Connection& WithMatchCriteria(Aws::Vector<Aws::String>&& value) { SetMatchCriteria(std::move(value)); return *this;}

    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline Connection& AddMatchCriteria(const Aws::String& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(value); return *this; }

    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline Connection& AddMatchCriteria(Aws::String&& value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of criteria that can be used in selecting this connection.</p>
     */
    inline Connection& AddMatchCriteria(const char* value) { m_matchCriteriaHasBeenSet = true; m_matchCriteria.push_back(value); return *this; }


    /**
     * <p>These key-value pairs define parameters for the connection:</p> <ul> <li> <p>
     * <code>HOST</code> - The host URI: either the fully qualified domain name (FQDN)
     * or the IPv4 address of the database host.</p> </li> <li> <p> <code>PORT</code> -
     * The port number, between 1024 and 65535, of the port on which the database host
     * is listening for database connections.</p> </li> <li> <p> <code>USER_NAME</code>
     * - The name under which to log in to the database. The value string for
     * <code>USER_NAME</code> is "<code>USERNAME</code>".</p> </li> <li> <p>
     * <code>PASSWORD</code> - A password, if one is used, for the user name.</p> </li>
     * <li> <p> <code>ENCRYPTED_PASSWORD</code> - When you enable connection password
     * protection by setting <code>ConnectionPasswordEncryption</code> in the Data
     * Catalog encryption settings, this field stores the encrypted password.</p> </li>
     * <li> <p> <code>JDBC_DRIVER_JAR_URI</code> - The Amazon S3 path of the JAR file
     * that contains the JDBC driver to use.</p> </li> <li> <p>
     * <code>JDBC_DRIVER_CLASS_NAME</code> - The class name of the JDBC driver to
     * use.</p> </li> <li> <p> <code>JDBC_ENGINE</code> - The name of the JDBC engine
     * to use.</p> </li> <li> <p> <code>JDBC_ENGINE_VERSION</code> - The version of the
     * JDBC engine to use.</p> </li> <li> <p> <code>CONFIG_FILES</code> - (Reserved for
     * future use).</p> </li> <li> <p> <code>INSTANCE_ID</code> - The instance ID to
     * use.</p> </li> <li> <p> <code>JDBC_CONNECTION_URL</code> - The URL for the JDBC
     * connection.</p> </li> <li> <p> <code>JDBC_ENFORCE_SSL</code> - A Boolean string
     * (true, false) specifying whether Secure Sockets Layer (SSL) with hostname
     * matching will be enforced for the JDBC connection on the client. The default is
     * false.</p> </li> </ul>
     */
    inline const Aws::Map<ConnectionPropertyKey, Aws::String>& GetConnectionProperties() const{ return m_connectionProperties; }

    /**
     * <p>These key-value pairs define parameters for the connection:</p> <ul> <li> <p>
     * <code>HOST</code> - The host URI: either the fully qualified domain name (FQDN)
     * or the IPv4 address of the database host.</p> </li> <li> <p> <code>PORT</code> -
     * The port number, between 1024 and 65535, of the port on which the database host
     * is listening for database connections.</p> </li> <li> <p> <code>USER_NAME</code>
     * - The name under which to log in to the database. The value string for
     * <code>USER_NAME</code> is "<code>USERNAME</code>".</p> </li> <li> <p>
     * <code>PASSWORD</code> - A password, if one is used, for the user name.</p> </li>
     * <li> <p> <code>ENCRYPTED_PASSWORD</code> - When you enable connection password
     * protection by setting <code>ConnectionPasswordEncryption</code> in the Data
     * Catalog encryption settings, this field stores the encrypted password.</p> </li>
     * <li> <p> <code>JDBC_DRIVER_JAR_URI</code> - The Amazon S3 path of the JAR file
     * that contains the JDBC driver to use.</p> </li> <li> <p>
     * <code>JDBC_DRIVER_CLASS_NAME</code> - The class name of the JDBC driver to
     * use.</p> </li> <li> <p> <code>JDBC_ENGINE</code> - The name of the JDBC engine
     * to use.</p> </li> <li> <p> <code>JDBC_ENGINE_VERSION</code> - The version of the
     * JDBC engine to use.</p> </li> <li> <p> <code>CONFIG_FILES</code> - (Reserved for
     * future use).</p> </li> <li> <p> <code>INSTANCE_ID</code> - The instance ID to
     * use.</p> </li> <li> <p> <code>JDBC_CONNECTION_URL</code> - The URL for the JDBC
     * connection.</p> </li> <li> <p> <code>JDBC_ENFORCE_SSL</code> - A Boolean string
     * (true, false) specifying whether Secure Sockets Layer (SSL) with hostname
     * matching will be enforced for the JDBC connection on the client. The default is
     * false.</p> </li> </ul>
     */
    inline bool ConnectionPropertiesHasBeenSet() const { return m_connectionPropertiesHasBeenSet; }

    /**
     * <p>These key-value pairs define parameters for the connection:</p> <ul> <li> <p>
     * <code>HOST</code> - The host URI: either the fully qualified domain name (FQDN)
     * or the IPv4 address of the database host.</p> </li> <li> <p> <code>PORT</code> -
     * The port number, between 1024 and 65535, of the port on which the database host
     * is listening for database connections.</p> </li> <li> <p> <code>USER_NAME</code>
     * - The name under which to log in to the database. The value string for
     * <code>USER_NAME</code> is "<code>USERNAME</code>".</p> </li> <li> <p>
     * <code>PASSWORD</code> - A password, if one is used, for the user name.</p> </li>
     * <li> <p> <code>ENCRYPTED_PASSWORD</code> - When you enable connection password
     * protection by setting <code>ConnectionPasswordEncryption</code> in the Data
     * Catalog encryption settings, this field stores the encrypted password.</p> </li>
     * <li> <p> <code>JDBC_DRIVER_JAR_URI</code> - The Amazon S3 path of the JAR file
     * that contains the JDBC driver to use.</p> </li> <li> <p>
     * <code>JDBC_DRIVER_CLASS_NAME</code> - The class name of the JDBC driver to
     * use.</p> </li> <li> <p> <code>JDBC_ENGINE</code> - The name of the JDBC engine
     * to use.</p> </li> <li> <p> <code>JDBC_ENGINE_VERSION</code> - The version of the
     * JDBC engine to use.</p> </li> <li> <p> <code>CONFIG_FILES</code> - (Reserved for
     * future use).</p> </li> <li> <p> <code>INSTANCE_ID</code> - The instance ID to
     * use.</p> </li> <li> <p> <code>JDBC_CONNECTION_URL</code> - The URL for the JDBC
     * connection.</p> </li> <li> <p> <code>JDBC_ENFORCE_SSL</code> - A Boolean string
     * (true, false) specifying whether Secure Sockets Layer (SSL) with hostname
     * matching will be enforced for the JDBC connection on the client. The default is
     * false.</p> </li> </ul>
     */
    inline void SetConnectionProperties(const Aws::Map<ConnectionPropertyKey, Aws::String>& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = value; }

    /**
     * <p>These key-value pairs define parameters for the connection:</p> <ul> <li> <p>
     * <code>HOST</code> - The host URI: either the fully qualified domain name (FQDN)
     * or the IPv4 address of the database host.</p> </li> <li> <p> <code>PORT</code> -
     * The port number, between 1024 and 65535, of the port on which the database host
     * is listening for database connections.</p> </li> <li> <p> <code>USER_NAME</code>
     * - The name under which to log in to the database. The value string for
     * <code>USER_NAME</code> is "<code>USERNAME</code>".</p> </li> <li> <p>
     * <code>PASSWORD</code> - A password, if one is used, for the user name.</p> </li>
     * <li> <p> <code>ENCRYPTED_PASSWORD</code> - When you enable connection password
     * protection by setting <code>ConnectionPasswordEncryption</code> in the Data
     * Catalog encryption settings, this field stores the encrypted password.</p> </li>
     * <li> <p> <code>JDBC_DRIVER_JAR_URI</code> - The Amazon S3 path of the JAR file
     * that contains the JDBC driver to use.</p> </li> <li> <p>
     * <code>JDBC_DRIVER_CLASS_NAME</code> - The class name of the JDBC driver to
     * use.</p> </li> <li> <p> <code>JDBC_ENGINE</code> - The name of the JDBC engine
     * to use.</p> </li> <li> <p> <code>JDBC_ENGINE_VERSION</code> - The version of the
     * JDBC engine to use.</p> </li> <li> <p> <code>CONFIG_FILES</code> - (Reserved for
     * future use).</p> </li> <li> <p> <code>INSTANCE_ID</code> - The instance ID to
     * use.</p> </li> <li> <p> <code>JDBC_CONNECTION_URL</code> - The URL for the JDBC
     * connection.</p> </li> <li> <p> <code>JDBC_ENFORCE_SSL</code> - A Boolean string
     * (true, false) specifying whether Secure Sockets Layer (SSL) with hostname
     * matching will be enforced for the JDBC connection on the client. The default is
     * false.</p> </li> </ul>
     */
    inline void SetConnectionProperties(Aws::Map<ConnectionPropertyKey, Aws::String>&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties = std::move(value); }

    /**
     * <p>These key-value pairs define parameters for the connection:</p> <ul> <li> <p>
     * <code>HOST</code> - The host URI: either the fully qualified domain name (FQDN)
     * or the IPv4 address of the database host.</p> </li> <li> <p> <code>PORT</code> -
     * The port number, between 1024 and 65535, of the port on which the database host
     * is listening for database connections.</p> </li> <li> <p> <code>USER_NAME</code>
     * - The name under which to log in to the database. The value string for
     * <code>USER_NAME</code> is "<code>USERNAME</code>".</p> </li> <li> <p>
     * <code>PASSWORD</code> - A password, if one is used, for the user name.</p> </li>
     * <li> <p> <code>ENCRYPTED_PASSWORD</code> - When you enable connection password
     * protection by setting <code>ConnectionPasswordEncryption</code> in the Data
     * Catalog encryption settings, this field stores the encrypted password.</p> </li>
     * <li> <p> <code>JDBC_DRIVER_JAR_URI</code> - The Amazon S3 path of the JAR file
     * that contains the JDBC driver to use.</p> </li> <li> <p>
     * <code>JDBC_DRIVER_CLASS_NAME</code> - The class name of the JDBC driver to
     * use.</p> </li> <li> <p> <code>JDBC_ENGINE</code> - The name of the JDBC engine
     * to use.</p> </li> <li> <p> <code>JDBC_ENGINE_VERSION</code> - The version of the
     * JDBC engine to use.</p> </li> <li> <p> <code>CONFIG_FILES</code> - (Reserved for
     * future use).</p> </li> <li> <p> <code>INSTANCE_ID</code> - The instance ID to
     * use.</p> </li> <li> <p> <code>JDBC_CONNECTION_URL</code> - The URL for the JDBC
     * connection.</p> </li> <li> <p> <code>JDBC_ENFORCE_SSL</code> - A Boolean string
     * (true, false) specifying whether Secure Sockets Layer (SSL) with hostname
     * matching will be enforced for the JDBC connection on the client. The default is
     * false.</p> </li> </ul>
     */
    inline Connection& WithConnectionProperties(const Aws::Map<ConnectionPropertyKey, Aws::String>& value) { SetConnectionProperties(value); return *this;}

    /**
     * <p>These key-value pairs define parameters for the connection:</p> <ul> <li> <p>
     * <code>HOST</code> - The host URI: either the fully qualified domain name (FQDN)
     * or the IPv4 address of the database host.</p> </li> <li> <p> <code>PORT</code> -
     * The port number, between 1024 and 65535, of the port on which the database host
     * is listening for database connections.</p> </li> <li> <p> <code>USER_NAME</code>
     * - The name under which to log in to the database. The value string for
     * <code>USER_NAME</code> is "<code>USERNAME</code>".</p> </li> <li> <p>
     * <code>PASSWORD</code> - A password, if one is used, for the user name.</p> </li>
     * <li> <p> <code>ENCRYPTED_PASSWORD</code> - When you enable connection password
     * protection by setting <code>ConnectionPasswordEncryption</code> in the Data
     * Catalog encryption settings, this field stores the encrypted password.</p> </li>
     * <li> <p> <code>JDBC_DRIVER_JAR_URI</code> - The Amazon S3 path of the JAR file
     * that contains the JDBC driver to use.</p> </li> <li> <p>
     * <code>JDBC_DRIVER_CLASS_NAME</code> - The class name of the JDBC driver to
     * use.</p> </li> <li> <p> <code>JDBC_ENGINE</code> - The name of the JDBC engine
     * to use.</p> </li> <li> <p> <code>JDBC_ENGINE_VERSION</code> - The version of the
     * JDBC engine to use.</p> </li> <li> <p> <code>CONFIG_FILES</code> - (Reserved for
     * future use).</p> </li> <li> <p> <code>INSTANCE_ID</code> - The instance ID to
     * use.</p> </li> <li> <p> <code>JDBC_CONNECTION_URL</code> - The URL for the JDBC
     * connection.</p> </li> <li> <p> <code>JDBC_ENFORCE_SSL</code> - A Boolean string
     * (true, false) specifying whether Secure Sockets Layer (SSL) with hostname
     * matching will be enforced for the JDBC connection on the client. The default is
     * false.</p> </li> </ul>
     */
    inline Connection& WithConnectionProperties(Aws::Map<ConnectionPropertyKey, Aws::String>&& value) { SetConnectionProperties(std::move(value)); return *this;}

    /**
     * <p>These key-value pairs define parameters for the connection:</p> <ul> <li> <p>
     * <code>HOST</code> - The host URI: either the fully qualified domain name (FQDN)
     * or the IPv4 address of the database host.</p> </li> <li> <p> <code>PORT</code> -
     * The port number, between 1024 and 65535, of the port on which the database host
     * is listening for database connections.</p> </li> <li> <p> <code>USER_NAME</code>
     * - The name under which to log in to the database. The value string for
     * <code>USER_NAME</code> is "<code>USERNAME</code>".</p> </li> <li> <p>
     * <code>PASSWORD</code> - A password, if one is used, for the user name.</p> </li>
     * <li> <p> <code>ENCRYPTED_PASSWORD</code> - When you enable connection password
     * protection by setting <code>ConnectionPasswordEncryption</code> in the Data
     * Catalog encryption settings, this field stores the encrypted password.</p> </li>
     * <li> <p> <code>JDBC_DRIVER_JAR_URI</code> - The Amazon S3 path of the JAR file
     * that contains the JDBC driver to use.</p> </li> <li> <p>
     * <code>JDBC_DRIVER_CLASS_NAME</code> - The class name of the JDBC driver to
     * use.</p> </li> <li> <p> <code>JDBC_ENGINE</code> - The name of the JDBC engine
     * to use.</p> </li> <li> <p> <code>JDBC_ENGINE_VERSION</code> - The version of the
     * JDBC engine to use.</p> </li> <li> <p> <code>CONFIG_FILES</code> - (Reserved for
     * future use).</p> </li> <li> <p> <code>INSTANCE_ID</code> - The instance ID to
     * use.</p> </li> <li> <p> <code>JDBC_CONNECTION_URL</code> - The URL for the JDBC
     * connection.</p> </li> <li> <p> <code>JDBC_ENFORCE_SSL</code> - A Boolean string
     * (true, false) specifying whether Secure Sockets Layer (SSL) with hostname
     * matching will be enforced for the JDBC connection on the client. The default is
     * false.</p> </li> </ul>
     */
    inline Connection& AddConnectionProperties(const ConnectionPropertyKey& key, const Aws::String& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, value); return *this; }

    /**
     * <p>These key-value pairs define parameters for the connection:</p> <ul> <li> <p>
     * <code>HOST</code> - The host URI: either the fully qualified domain name (FQDN)
     * or the IPv4 address of the database host.</p> </li> <li> <p> <code>PORT</code> -
     * The port number, between 1024 and 65535, of the port on which the database host
     * is listening for database connections.</p> </li> <li> <p> <code>USER_NAME</code>
     * - The name under which to log in to the database. The value string for
     * <code>USER_NAME</code> is "<code>USERNAME</code>".</p> </li> <li> <p>
     * <code>PASSWORD</code> - A password, if one is used, for the user name.</p> </li>
     * <li> <p> <code>ENCRYPTED_PASSWORD</code> - When you enable connection password
     * protection by setting <code>ConnectionPasswordEncryption</code> in the Data
     * Catalog encryption settings, this field stores the encrypted password.</p> </li>
     * <li> <p> <code>JDBC_DRIVER_JAR_URI</code> - The Amazon S3 path of the JAR file
     * that contains the JDBC driver to use.</p> </li> <li> <p>
     * <code>JDBC_DRIVER_CLASS_NAME</code> - The class name of the JDBC driver to
     * use.</p> </li> <li> <p> <code>JDBC_ENGINE</code> - The name of the JDBC engine
     * to use.</p> </li> <li> <p> <code>JDBC_ENGINE_VERSION</code> - The version of the
     * JDBC engine to use.</p> </li> <li> <p> <code>CONFIG_FILES</code> - (Reserved for
     * future use).</p> </li> <li> <p> <code>INSTANCE_ID</code> - The instance ID to
     * use.</p> </li> <li> <p> <code>JDBC_CONNECTION_URL</code> - The URL for the JDBC
     * connection.</p> </li> <li> <p> <code>JDBC_ENFORCE_SSL</code> - A Boolean string
     * (true, false) specifying whether Secure Sockets Layer (SSL) with hostname
     * matching will be enforced for the JDBC connection on the client. The default is
     * false.</p> </li> </ul>
     */
    inline Connection& AddConnectionProperties(ConnectionPropertyKey&& key, const Aws::String& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>These key-value pairs define parameters for the connection:</p> <ul> <li> <p>
     * <code>HOST</code> - The host URI: either the fully qualified domain name (FQDN)
     * or the IPv4 address of the database host.</p> </li> <li> <p> <code>PORT</code> -
     * The port number, between 1024 and 65535, of the port on which the database host
     * is listening for database connections.</p> </li> <li> <p> <code>USER_NAME</code>
     * - The name under which to log in to the database. The value string for
     * <code>USER_NAME</code> is "<code>USERNAME</code>".</p> </li> <li> <p>
     * <code>PASSWORD</code> - A password, if one is used, for the user name.</p> </li>
     * <li> <p> <code>ENCRYPTED_PASSWORD</code> - When you enable connection password
     * protection by setting <code>ConnectionPasswordEncryption</code> in the Data
     * Catalog encryption settings, this field stores the encrypted password.</p> </li>
     * <li> <p> <code>JDBC_DRIVER_JAR_URI</code> - The Amazon S3 path of the JAR file
     * that contains the JDBC driver to use.</p> </li> <li> <p>
     * <code>JDBC_DRIVER_CLASS_NAME</code> - The class name of the JDBC driver to
     * use.</p> </li> <li> <p> <code>JDBC_ENGINE</code> - The name of the JDBC engine
     * to use.</p> </li> <li> <p> <code>JDBC_ENGINE_VERSION</code> - The version of the
     * JDBC engine to use.</p> </li> <li> <p> <code>CONFIG_FILES</code> - (Reserved for
     * future use).</p> </li> <li> <p> <code>INSTANCE_ID</code> - The instance ID to
     * use.</p> </li> <li> <p> <code>JDBC_CONNECTION_URL</code> - The URL for the JDBC
     * connection.</p> </li> <li> <p> <code>JDBC_ENFORCE_SSL</code> - A Boolean string
     * (true, false) specifying whether Secure Sockets Layer (SSL) with hostname
     * matching will be enforced for the JDBC connection on the client. The default is
     * false.</p> </li> </ul>
     */
    inline Connection& AddConnectionProperties(const ConnectionPropertyKey& key, Aws::String&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define parameters for the connection:</p> <ul> <li> <p>
     * <code>HOST</code> - The host URI: either the fully qualified domain name (FQDN)
     * or the IPv4 address of the database host.</p> </li> <li> <p> <code>PORT</code> -
     * The port number, between 1024 and 65535, of the port on which the database host
     * is listening for database connections.</p> </li> <li> <p> <code>USER_NAME</code>
     * - The name under which to log in to the database. The value string for
     * <code>USER_NAME</code> is "<code>USERNAME</code>".</p> </li> <li> <p>
     * <code>PASSWORD</code> - A password, if one is used, for the user name.</p> </li>
     * <li> <p> <code>ENCRYPTED_PASSWORD</code> - When you enable connection password
     * protection by setting <code>ConnectionPasswordEncryption</code> in the Data
     * Catalog encryption settings, this field stores the encrypted password.</p> </li>
     * <li> <p> <code>JDBC_DRIVER_JAR_URI</code> - The Amazon S3 path of the JAR file
     * that contains the JDBC driver to use.</p> </li> <li> <p>
     * <code>JDBC_DRIVER_CLASS_NAME</code> - The class name of the JDBC driver to
     * use.</p> </li> <li> <p> <code>JDBC_ENGINE</code> - The name of the JDBC engine
     * to use.</p> </li> <li> <p> <code>JDBC_ENGINE_VERSION</code> - The version of the
     * JDBC engine to use.</p> </li> <li> <p> <code>CONFIG_FILES</code> - (Reserved for
     * future use).</p> </li> <li> <p> <code>INSTANCE_ID</code> - The instance ID to
     * use.</p> </li> <li> <p> <code>JDBC_CONNECTION_URL</code> - The URL for the JDBC
     * connection.</p> </li> <li> <p> <code>JDBC_ENFORCE_SSL</code> - A Boolean string
     * (true, false) specifying whether Secure Sockets Layer (SSL) with hostname
     * matching will be enforced for the JDBC connection on the client. The default is
     * false.</p> </li> </ul>
     */
    inline Connection& AddConnectionProperties(ConnectionPropertyKey&& key, Aws::String&& value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define parameters for the connection:</p> <ul> <li> <p>
     * <code>HOST</code> - The host URI: either the fully qualified domain name (FQDN)
     * or the IPv4 address of the database host.</p> </li> <li> <p> <code>PORT</code> -
     * The port number, between 1024 and 65535, of the port on which the database host
     * is listening for database connections.</p> </li> <li> <p> <code>USER_NAME</code>
     * - The name under which to log in to the database. The value string for
     * <code>USER_NAME</code> is "<code>USERNAME</code>".</p> </li> <li> <p>
     * <code>PASSWORD</code> - A password, if one is used, for the user name.</p> </li>
     * <li> <p> <code>ENCRYPTED_PASSWORD</code> - When you enable connection password
     * protection by setting <code>ConnectionPasswordEncryption</code> in the Data
     * Catalog encryption settings, this field stores the encrypted password.</p> </li>
     * <li> <p> <code>JDBC_DRIVER_JAR_URI</code> - The Amazon S3 path of the JAR file
     * that contains the JDBC driver to use.</p> </li> <li> <p>
     * <code>JDBC_DRIVER_CLASS_NAME</code> - The class name of the JDBC driver to
     * use.</p> </li> <li> <p> <code>JDBC_ENGINE</code> - The name of the JDBC engine
     * to use.</p> </li> <li> <p> <code>JDBC_ENGINE_VERSION</code> - The version of the
     * JDBC engine to use.</p> </li> <li> <p> <code>CONFIG_FILES</code> - (Reserved for
     * future use).</p> </li> <li> <p> <code>INSTANCE_ID</code> - The instance ID to
     * use.</p> </li> <li> <p> <code>JDBC_CONNECTION_URL</code> - The URL for the JDBC
     * connection.</p> </li> <li> <p> <code>JDBC_ENFORCE_SSL</code> - A Boolean string
     * (true, false) specifying whether Secure Sockets Layer (SSL) with hostname
     * matching will be enforced for the JDBC connection on the client. The default is
     * false.</p> </li> </ul>
     */
    inline Connection& AddConnectionProperties(ConnectionPropertyKey&& key, const char* value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>These key-value pairs define parameters for the connection:</p> <ul> <li> <p>
     * <code>HOST</code> - The host URI: either the fully qualified domain name (FQDN)
     * or the IPv4 address of the database host.</p> </li> <li> <p> <code>PORT</code> -
     * The port number, between 1024 and 65535, of the port on which the database host
     * is listening for database connections.</p> </li> <li> <p> <code>USER_NAME</code>
     * - The name under which to log in to the database. The value string for
     * <code>USER_NAME</code> is "<code>USERNAME</code>".</p> </li> <li> <p>
     * <code>PASSWORD</code> - A password, if one is used, for the user name.</p> </li>
     * <li> <p> <code>ENCRYPTED_PASSWORD</code> - When you enable connection password
     * protection by setting <code>ConnectionPasswordEncryption</code> in the Data
     * Catalog encryption settings, this field stores the encrypted password.</p> </li>
     * <li> <p> <code>JDBC_DRIVER_JAR_URI</code> - The Amazon S3 path of the JAR file
     * that contains the JDBC driver to use.</p> </li> <li> <p>
     * <code>JDBC_DRIVER_CLASS_NAME</code> - The class name of the JDBC driver to
     * use.</p> </li> <li> <p> <code>JDBC_ENGINE</code> - The name of the JDBC engine
     * to use.</p> </li> <li> <p> <code>JDBC_ENGINE_VERSION</code> - The version of the
     * JDBC engine to use.</p> </li> <li> <p> <code>CONFIG_FILES</code> - (Reserved for
     * future use).</p> </li> <li> <p> <code>INSTANCE_ID</code> - The instance ID to
     * use.</p> </li> <li> <p> <code>JDBC_CONNECTION_URL</code> - The URL for the JDBC
     * connection.</p> </li> <li> <p> <code>JDBC_ENFORCE_SSL</code> - A Boolean string
     * (true, false) specifying whether Secure Sockets Layer (SSL) with hostname
     * matching will be enforced for the JDBC connection on the client. The default is
     * false.</p> </li> </ul>
     */
    inline Connection& AddConnectionProperties(const ConnectionPropertyKey& key, const char* value) { m_connectionPropertiesHasBeenSet = true; m_connectionProperties.emplace(key, value); return *this; }


    /**
     * <p>A map of physical connection requirements, such as virtual private cloud
     * (VPC) and <code>SecurityGroup</code>, that are needed to make this connection
     * successfully.</p>
     */
    inline const PhysicalConnectionRequirements& GetPhysicalConnectionRequirements() const{ return m_physicalConnectionRequirements; }

    /**
     * <p>A map of physical connection requirements, such as virtual private cloud
     * (VPC) and <code>SecurityGroup</code>, that are needed to make this connection
     * successfully.</p>
     */
    inline bool PhysicalConnectionRequirementsHasBeenSet() const { return m_physicalConnectionRequirementsHasBeenSet; }

    /**
     * <p>A map of physical connection requirements, such as virtual private cloud
     * (VPC) and <code>SecurityGroup</code>, that are needed to make this connection
     * successfully.</p>
     */
    inline void SetPhysicalConnectionRequirements(const PhysicalConnectionRequirements& value) { m_physicalConnectionRequirementsHasBeenSet = true; m_physicalConnectionRequirements = value; }

    /**
     * <p>A map of physical connection requirements, such as virtual private cloud
     * (VPC) and <code>SecurityGroup</code>, that are needed to make this connection
     * successfully.</p>
     */
    inline void SetPhysicalConnectionRequirements(PhysicalConnectionRequirements&& value) { m_physicalConnectionRequirementsHasBeenSet = true; m_physicalConnectionRequirements = std::move(value); }

    /**
     * <p>A map of physical connection requirements, such as virtual private cloud
     * (VPC) and <code>SecurityGroup</code>, that are needed to make this connection
     * successfully.</p>
     */
    inline Connection& WithPhysicalConnectionRequirements(const PhysicalConnectionRequirements& value) { SetPhysicalConnectionRequirements(value); return *this;}

    /**
     * <p>A map of physical connection requirements, such as virtual private cloud
     * (VPC) and <code>SecurityGroup</code>, that are needed to make this connection
     * successfully.</p>
     */
    inline Connection& WithPhysicalConnectionRequirements(PhysicalConnectionRequirements&& value) { SetPhysicalConnectionRequirements(std::move(value)); return *this;}


    /**
     * <p>The time that this connection definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that this connection definition was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that this connection definition was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that this connection definition was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that this connection definition was created.</p>
     */
    inline Connection& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that this connection definition was created.</p>
     */
    inline Connection& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time that this connection definition was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The last time that this connection definition was updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The last time that this connection definition was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The last time that this connection definition was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The last time that this connection definition was updated.</p>
     */
    inline Connection& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The last time that this connection definition was updated.</p>
     */
    inline Connection& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The user, group, or role that last updated this connection definition.</p>
     */
    inline const Aws::String& GetLastUpdatedBy() const{ return m_lastUpdatedBy; }

    /**
     * <p>The user, group, or role that last updated this connection definition.</p>
     */
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }

    /**
     * <p>The user, group, or role that last updated this connection definition.</p>
     */
    inline void SetLastUpdatedBy(const Aws::String& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = value; }

    /**
     * <p>The user, group, or role that last updated this connection definition.</p>
     */
    inline void SetLastUpdatedBy(Aws::String&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::move(value); }

    /**
     * <p>The user, group, or role that last updated this connection definition.</p>
     */
    inline void SetLastUpdatedBy(const char* value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy.assign(value); }

    /**
     * <p>The user, group, or role that last updated this connection definition.</p>
     */
    inline Connection& WithLastUpdatedBy(const Aws::String& value) { SetLastUpdatedBy(value); return *this;}

    /**
     * <p>The user, group, or role that last updated this connection definition.</p>
     */
    inline Connection& WithLastUpdatedBy(Aws::String&& value) { SetLastUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user, group, or role that last updated this connection definition.</p>
     */
    inline Connection& WithLastUpdatedBy(const char* value) { SetLastUpdatedBy(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ConnectionType m_connectionType;
    bool m_connectionTypeHasBeenSet;

    Aws::Vector<Aws::String> m_matchCriteria;
    bool m_matchCriteriaHasBeenSet;

    Aws::Map<ConnectionPropertyKey, Aws::String> m_connectionProperties;
    bool m_connectionPropertiesHasBeenSet;

    PhysicalConnectionRequirements m_physicalConnectionRequirements;
    bool m_physicalConnectionRequirementsHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;

    Aws::String m_lastUpdatedBy;
    bool m_lastUpdatedByHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
