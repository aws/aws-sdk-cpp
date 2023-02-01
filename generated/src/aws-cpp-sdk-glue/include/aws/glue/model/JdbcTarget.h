/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/JdbcMetadataEntry.h>
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
  class JdbcTarget
  {
  public:
    AWS_GLUE_API JdbcTarget();
    AWS_GLUE_API JdbcTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JdbcTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline JdbcTarget& WithExclusions(const Aws::Vector<Aws::String>& value) { SetExclusions(value); return *this;}

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline JdbcTarget& WithExclusions(Aws::Vector<Aws::String>&& value) { SetExclusions(std::move(value)); return *this;}

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline JdbcTarget& AddExclusions(const Aws::String& value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(value); return *this; }

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline JdbcTarget& AddExclusions(Aws::String&& value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline JdbcTarget& AddExclusions(const char* value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(value); return *this; }


    /**
     * <p>Specify a value of <code>RAWTYPES</code> or <code>COMMENTS</code> to enable
     * additional metadata in table responses. <code>RAWTYPES</code> provides the
     * native-level datatype. <code>COMMENTS</code> provides comments associated with a
     * column or table in the database.</p> <p>If you do not need additional metadata,
     * keep the field empty.</p>
     */
    inline const Aws::Vector<JdbcMetadataEntry>& GetEnableAdditionalMetadata() const{ return m_enableAdditionalMetadata; }

    /**
     * <p>Specify a value of <code>RAWTYPES</code> or <code>COMMENTS</code> to enable
     * additional metadata in table responses. <code>RAWTYPES</code> provides the
     * native-level datatype. <code>COMMENTS</code> provides comments associated with a
     * column or table in the database.</p> <p>If you do not need additional metadata,
     * keep the field empty.</p>
     */
    inline bool EnableAdditionalMetadataHasBeenSet() const { return m_enableAdditionalMetadataHasBeenSet; }

    /**
     * <p>Specify a value of <code>RAWTYPES</code> or <code>COMMENTS</code> to enable
     * additional metadata in table responses. <code>RAWTYPES</code> provides the
     * native-level datatype. <code>COMMENTS</code> provides comments associated with a
     * column or table in the database.</p> <p>If you do not need additional metadata,
     * keep the field empty.</p>
     */
    inline void SetEnableAdditionalMetadata(const Aws::Vector<JdbcMetadataEntry>& value) { m_enableAdditionalMetadataHasBeenSet = true; m_enableAdditionalMetadata = value; }

    /**
     * <p>Specify a value of <code>RAWTYPES</code> or <code>COMMENTS</code> to enable
     * additional metadata in table responses. <code>RAWTYPES</code> provides the
     * native-level datatype. <code>COMMENTS</code> provides comments associated with a
     * column or table in the database.</p> <p>If you do not need additional metadata,
     * keep the field empty.</p>
     */
    inline void SetEnableAdditionalMetadata(Aws::Vector<JdbcMetadataEntry>&& value) { m_enableAdditionalMetadataHasBeenSet = true; m_enableAdditionalMetadata = std::move(value); }

    /**
     * <p>Specify a value of <code>RAWTYPES</code> or <code>COMMENTS</code> to enable
     * additional metadata in table responses. <code>RAWTYPES</code> provides the
     * native-level datatype. <code>COMMENTS</code> provides comments associated with a
     * column or table in the database.</p> <p>If you do not need additional metadata,
     * keep the field empty.</p>
     */
    inline JdbcTarget& WithEnableAdditionalMetadata(const Aws::Vector<JdbcMetadataEntry>& value) { SetEnableAdditionalMetadata(value); return *this;}

    /**
     * <p>Specify a value of <code>RAWTYPES</code> or <code>COMMENTS</code> to enable
     * additional metadata in table responses. <code>RAWTYPES</code> provides the
     * native-level datatype. <code>COMMENTS</code> provides comments associated with a
     * column or table in the database.</p> <p>If you do not need additional metadata,
     * keep the field empty.</p>
     */
    inline JdbcTarget& WithEnableAdditionalMetadata(Aws::Vector<JdbcMetadataEntry>&& value) { SetEnableAdditionalMetadata(std::move(value)); return *this;}

    /**
     * <p>Specify a value of <code>RAWTYPES</code> or <code>COMMENTS</code> to enable
     * additional metadata in table responses. <code>RAWTYPES</code> provides the
     * native-level datatype. <code>COMMENTS</code> provides comments associated with a
     * column or table in the database.</p> <p>If you do not need additional metadata,
     * keep the field empty.</p>
     */
    inline JdbcTarget& AddEnableAdditionalMetadata(const JdbcMetadataEntry& value) { m_enableAdditionalMetadataHasBeenSet = true; m_enableAdditionalMetadata.push_back(value); return *this; }

    /**
     * <p>Specify a value of <code>RAWTYPES</code> or <code>COMMENTS</code> to enable
     * additional metadata in table responses. <code>RAWTYPES</code> provides the
     * native-level datatype. <code>COMMENTS</code> provides comments associated with a
     * column or table in the database.</p> <p>If you do not need additional metadata,
     * keep the field empty.</p>
     */
    inline JdbcTarget& AddEnableAdditionalMetadata(JdbcMetadataEntry&& value) { m_enableAdditionalMetadataHasBeenSet = true; m_enableAdditionalMetadata.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusions;
    bool m_exclusionsHasBeenSet = false;

    Aws::Vector<JdbcMetadataEntry> m_enableAdditionalMetadata;
    bool m_enableAdditionalMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
