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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies a JDBC data store to crawl.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JdbcTarget">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API JdbcTarget
  {
  public:
    JdbcTarget();
    JdbcTarget(Aws::Utils::Json::JsonView jsonValue);
    JdbcTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the connection to use to connect to the JDBC target.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>The name of the connection to use to connect to the JDBC target.</p>
     */
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }

    /**
     * <p>The name of the connection to use to connect to the JDBC target.</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>The name of the connection to use to connect to the JDBC target.</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }

    /**
     * <p>The name of the connection to use to connect to the JDBC target.</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>The name of the connection to use to connect to the JDBC target.</p>
     */
    inline JdbcTarget& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The name of the connection to use to connect to the JDBC target.</p>
     */
    inline JdbcTarget& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection to use to connect to the JDBC target.</p>
     */
    inline JdbcTarget& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}


    /**
     * <p>The path of the JDBC target.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path of the JDBC target.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path of the JDBC target.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path of the JDBC target.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path of the JDBC target.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path of the JDBC target.</p>
     */
    inline JdbcTarget& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path of the JDBC target.</p>
     */
    inline JdbcTarget& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path of the JDBC target.</p>
     */
    inline JdbcTarget& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a href="http://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusions() const{ return m_exclusions; }

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a href="http://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a href="http://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline void SetExclusions(const Aws::Vector<Aws::String>& value) { m_exclusionsHasBeenSet = true; m_exclusions = value; }

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a href="http://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline void SetExclusions(Aws::Vector<Aws::String>&& value) { m_exclusionsHasBeenSet = true; m_exclusions = std::move(value); }

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a href="http://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline JdbcTarget& WithExclusions(const Aws::Vector<Aws::String>& value) { SetExclusions(value); return *this;}

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a href="http://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline JdbcTarget& WithExclusions(Aws::Vector<Aws::String>&& value) { SetExclusions(std::move(value)); return *this;}

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a href="http://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline JdbcTarget& AddExclusions(const Aws::String& value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(value); return *this; }

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a href="http://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline JdbcTarget& AddExclusions(Aws::String&& value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a href="http://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline JdbcTarget& AddExclusions(const char* value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(value); return *this; }

  private:

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet;

    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::Vector<Aws::String> m_exclusions;
    bool m_exclusionsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
