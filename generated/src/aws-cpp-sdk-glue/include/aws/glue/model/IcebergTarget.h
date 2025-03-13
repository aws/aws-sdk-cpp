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
    AWS_GLUE_API IcebergTarget() = default;
    AWS_GLUE_API IcebergTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IcebergTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One or more Amazon S3 paths that contains Iceberg metadata folders as
     * <code>s3://bucket/prefix</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPaths() const { return m_paths; }
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }
    template<typename PathsT = Aws::Vector<Aws::String>>
    void SetPaths(PathsT&& value) { m_pathsHasBeenSet = true; m_paths = std::forward<PathsT>(value); }
    template<typename PathsT = Aws::Vector<Aws::String>>
    IcebergTarget& WithPaths(PathsT&& value) { SetPaths(std::forward<PathsT>(value)); return *this;}
    template<typename PathsT = Aws::String>
    IcebergTarget& AddPaths(PathsT&& value) { m_pathsHasBeenSet = true; m_paths.emplace_back(std::forward<PathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the connection to use to connect to the Iceberg target.</p>
     */
    inline const Aws::String& GetConnectionName() const { return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    template<typename ConnectionNameT = Aws::String>
    void SetConnectionName(ConnectionNameT&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::forward<ConnectionNameT>(value); }
    template<typename ConnectionNameT = Aws::String>
    IcebergTarget& WithConnectionName(ConnectionNameT&& value) { SetConnectionName(std::forward<ConnectionNameT>(value)); return *this;}
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
    IcebergTarget& WithExclusions(ExclusionsT&& value) { SetExclusions(std::forward<ExclusionsT>(value)); return *this;}
    template<typename ExclusionsT = Aws::String>
    IcebergTarget& AddExclusions(ExclusionsT&& value) { m_exclusionsHasBeenSet = true; m_exclusions.emplace_back(std::forward<ExclusionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum depth of Amazon S3 paths that the crawler can traverse to
     * discover the Iceberg metadata folder in your Amazon S3 path. Used to limit the
     * crawler run time.</p>
     */
    inline int GetMaximumTraversalDepth() const { return m_maximumTraversalDepth; }
    inline bool MaximumTraversalDepthHasBeenSet() const { return m_maximumTraversalDepthHasBeenSet; }
    inline void SetMaximumTraversalDepth(int value) { m_maximumTraversalDepthHasBeenSet = true; m_maximumTraversalDepth = value; }
    inline IcebergTarget& WithMaximumTraversalDepth(int value) { SetMaximumTraversalDepth(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_paths;
    bool m_pathsHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusions;
    bool m_exclusionsHasBeenSet = false;

    int m_maximumTraversalDepth{0};
    bool m_maximumTraversalDepthHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
