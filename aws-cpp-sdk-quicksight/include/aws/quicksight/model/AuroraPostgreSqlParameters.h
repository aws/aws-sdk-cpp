/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Parameters for Amazon Aurora PostgreSQL-Compatible Edition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AuroraPostgreSqlParameters">AWS
   * API Reference</a></p>
   */
  class AuroraPostgreSqlParameters
  {
  public:
    AWS_QUICKSIGHT_API AuroraPostgreSqlParameters();
    AWS_QUICKSIGHT_API AuroraPostgreSqlParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AuroraPostgreSqlParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Aurora PostgreSQL-Compatible host to connect to.</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }

    /**
     * <p>The Amazon Aurora PostgreSQL-Compatible host to connect to.</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>The Amazon Aurora PostgreSQL-Compatible host to connect to.</p>
     */
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>The Amazon Aurora PostgreSQL-Compatible host to connect to.</p>
     */
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>The Amazon Aurora PostgreSQL-Compatible host to connect to.</p>
     */
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }

    /**
     * <p>The Amazon Aurora PostgreSQL-Compatible host to connect to.</p>
     */
    inline AuroraPostgreSqlParameters& WithHost(const Aws::String& value) { SetHost(value); return *this;}

    /**
     * <p>The Amazon Aurora PostgreSQL-Compatible host to connect to.</p>
     */
    inline AuroraPostgreSqlParameters& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}

    /**
     * <p>The Amazon Aurora PostgreSQL-Compatible host to connect to.</p>
     */
    inline AuroraPostgreSqlParameters& WithHost(const char* value) { SetHost(value); return *this;}


    /**
     * <p>The port that Amazon Aurora PostgreSQL is listening on.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port that Amazon Aurora PostgreSQL is listening on.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port that Amazon Aurora PostgreSQL is listening on.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port that Amazon Aurora PostgreSQL is listening on.</p>
     */
    inline AuroraPostgreSqlParameters& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The Amazon Aurora PostgreSQL database to connect to.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The Amazon Aurora PostgreSQL database to connect to.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The Amazon Aurora PostgreSQL database to connect to.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The Amazon Aurora PostgreSQL database to connect to.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The Amazon Aurora PostgreSQL database to connect to.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>The Amazon Aurora PostgreSQL database to connect to.</p>
     */
    inline AuroraPostgreSqlParameters& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The Amazon Aurora PostgreSQL database to connect to.</p>
     */
    inline AuroraPostgreSqlParameters& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The Amazon Aurora PostgreSQL database to connect to.</p>
     */
    inline AuroraPostgreSqlParameters& WithDatabase(const char* value) { SetDatabase(value); return *this;}

  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
