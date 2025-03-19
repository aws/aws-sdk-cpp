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
    AWS_GLUE_API JdbcTarget() = default;
    AWS_GLUE_API JdbcTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JdbcTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the connection to use to connect to the JDBC target.</p>
     */
    inline const Aws::String& GetConnectionName() const { return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    template<typename ConnectionNameT = Aws::String>
    void SetConnectionName(ConnectionNameT&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::forward<ConnectionNameT>(value); }
    template<typename ConnectionNameT = Aws::String>
    JdbcTarget& WithConnectionName(ConnectionNameT&& value) { SetConnectionName(std::forward<ConnectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the JDBC target.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    JdbcTarget& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusions() const { return m_exclusions; }
    inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }
    template<typename ExclusionsT = Aws::Vector<Aws::String>>
    void SetExclusions(ExclusionsT&& value) { m_exclusionsHasBeenSet = true; m_exclusions = std::forward<ExclusionsT>(value); }
    template<typename ExclusionsT = Aws::Vector<Aws::String>>
    JdbcTarget& WithExclusions(ExclusionsT&& value) { SetExclusions(std::forward<ExclusionsT>(value)); return *this;}
    template<typename ExclusionsT = Aws::String>
    JdbcTarget& AddExclusions(ExclusionsT&& value) { m_exclusionsHasBeenSet = true; m_exclusions.emplace_back(std::forward<ExclusionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify a value of <code>RAWTYPES</code> or <code>COMMENTS</code> to enable
     * additional metadata in table responses. <code>RAWTYPES</code> provides the
     * native-level datatype. <code>COMMENTS</code> provides comments associated with a
     * column or table in the database.</p> <p>If you do not need additional metadata,
     * keep the field empty.</p>
     */
    inline const Aws::Vector<JdbcMetadataEntry>& GetEnableAdditionalMetadata() const { return m_enableAdditionalMetadata; }
    inline bool EnableAdditionalMetadataHasBeenSet() const { return m_enableAdditionalMetadataHasBeenSet; }
    template<typename EnableAdditionalMetadataT = Aws::Vector<JdbcMetadataEntry>>
    void SetEnableAdditionalMetadata(EnableAdditionalMetadataT&& value) { m_enableAdditionalMetadataHasBeenSet = true; m_enableAdditionalMetadata = std::forward<EnableAdditionalMetadataT>(value); }
    template<typename EnableAdditionalMetadataT = Aws::Vector<JdbcMetadataEntry>>
    JdbcTarget& WithEnableAdditionalMetadata(EnableAdditionalMetadataT&& value) { SetEnableAdditionalMetadata(std::forward<EnableAdditionalMetadataT>(value)); return *this;}
    inline JdbcTarget& AddEnableAdditionalMetadata(JdbcMetadataEntry value) { m_enableAdditionalMetadataHasBeenSet = true; m_enableAdditionalMetadata.push_back(value); return *this; }
    ///@}
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
