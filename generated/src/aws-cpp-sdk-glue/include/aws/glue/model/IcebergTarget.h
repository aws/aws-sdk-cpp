/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies an Apache Iceberg data source where Iceberg tables are stored in
   * Amazon S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergTarget">AWS
   * API Reference</a></p>
   */
  class IcebergTarget
  {
  public:
    AWS_GLUE_API IcebergTarget();
    AWS_GLUE_API IcebergTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IcebergTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more Amazon S3 paths that contains Iceberg metadata folders as
     * <code>s3://bucket/prefix</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPaths() const{ return m_paths; }

    /**
     * <p>One or more Amazon S3 paths that contains Iceberg metadata folders as
     * <code>s3://bucket/prefix</code>.</p>
     */
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }

    /**
     * <p>One or more Amazon S3 paths that contains Iceberg metadata folders as
     * <code>s3://bucket/prefix</code>.</p>
     */
    inline void SetPaths(const Aws::Vector<Aws::String>& value) { m_pathsHasBeenSet = true; m_paths = value; }

    /**
     * <p>One or more Amazon S3 paths that contains Iceberg metadata folders as
     * <code>s3://bucket/prefix</code>.</p>
     */
    inline void SetPaths(Aws::Vector<Aws::String>&& value) { m_pathsHasBeenSet = true; m_paths = std::move(value); }

    /**
     * <p>One or more Amazon S3 paths that contains Iceberg metadata folders as
     * <code>s3://bucket/prefix</code>.</p>
     */
    inline IcebergTarget& WithPaths(const Aws::Vector<Aws::String>& value) { SetPaths(value); return *this;}

    /**
     * <p>One or more Amazon S3 paths that contains Iceberg metadata folders as
     * <code>s3://bucket/prefix</code>.</p>
     */
    inline IcebergTarget& WithPaths(Aws::Vector<Aws::String>&& value) { SetPaths(std::move(value)); return *this;}

    /**
     * <p>One or more Amazon S3 paths that contains Iceberg metadata folders as
     * <code>s3://bucket/prefix</code>.</p>
     */
    inline IcebergTarget& AddPaths(const Aws::String& value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }

    /**
     * <p>One or more Amazon S3 paths that contains Iceberg metadata folders as
     * <code>s3://bucket/prefix</code>.</p>
     */
    inline IcebergTarget& AddPaths(Aws::String&& value) { m_pathsHasBeenSet = true; m_paths.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more Amazon S3 paths that contains Iceberg metadata folders as
     * <code>s3://bucket/prefix</code>.</p>
     */
    inline IcebergTarget& AddPaths(const char* value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }


    /**
     * <p>The name of the connection to use to connect to the Iceberg target.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>The name of the connection to use to connect to the Iceberg target.</p>
     */
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }

    /**
     * <p>The name of the connection to use to connect to the Iceberg target.</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>The name of the connection to use to connect to the Iceberg target.</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }

    /**
     * <p>The name of the connection to use to connect to the Iceberg target.</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>The name of the connection to use to connect to the Iceberg target.</p>
     */
    inline IcebergTarget& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The name of the connection to use to connect to the Iceberg target.</p>
     */
    inline IcebergTarget& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection to use to connect to the Iceberg target.</p>
     */
    inline IcebergTarget& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}


    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusions() const{ return m_exclusions; }

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline void SetExclusions(const Aws::Vector<Aws::String>& value) { m_exclusionsHasBeenSet = true; m_exclusions = value; }

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline void SetExclusions(Aws::Vector<Aws::String>&& value) { m_exclusionsHasBeenSet = true; m_exclusions = std::move(value); }

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline IcebergTarget& WithExclusions(const Aws::Vector<Aws::String>& value) { SetExclusions(value); return *this;}

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline IcebergTarget& WithExclusions(Aws::Vector<Aws::String>&& value) { SetExclusions(std::move(value)); return *this;}

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline IcebergTarget& AddExclusions(const Aws::String& value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(value); return *this; }

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline IcebergTarget& AddExclusions(Aws::String&& value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline IcebergTarget& AddExclusions(const char* value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(value); return *this; }


    /**
     * <p>The maximum depth of Amazon S3 paths that the crawler can traverse to
     * discover the Iceberg metadata folder in your Amazon S3 path. Used to limit the
     * crawler run time.</p>
     */
    inline int GetMaximumTraversalDepth() const{ return m_maximumTraversalDepth; }

    /**
     * <p>The maximum depth of Amazon S3 paths that the crawler can traverse to
     * discover the Iceberg metadata folder in your Amazon S3 path. Used to limit the
     * crawler run time.</p>
     */
    inline bool MaximumTraversalDepthHasBeenSet() const { return m_maximumTraversalDepthHasBeenSet; }

    /**
     * <p>The maximum depth of Amazon S3 paths that the crawler can traverse to
     * discover the Iceberg metadata folder in your Amazon S3 path. Used to limit the
     * crawler run time.</p>
     */
    inline void SetMaximumTraversalDepth(int value) { m_maximumTraversalDepthHasBeenSet = true; m_maximumTraversalDepth = value; }

    /**
     * <p>The maximum depth of Amazon S3 paths that the crawler can traverse to
     * discover the Iceberg metadata folder in your Amazon S3 path. Used to limit the
     * crawler run time.</p>
     */
    inline IcebergTarget& WithMaximumTraversalDepth(int value) { SetMaximumTraversalDepth(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_paths;
    bool m_pathsHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusions;
    bool m_exclusionsHasBeenSet = false;

    int m_maximumTraversalDepth;
    bool m_maximumTraversalDepthHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
