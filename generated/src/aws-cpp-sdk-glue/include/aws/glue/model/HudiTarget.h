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
   * <p>Specifies an Apache Hudi data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/HudiTarget">AWS API
   * Reference</a></p>
   */
  class HudiTarget
  {
  public:
    AWS_GLUE_API HudiTarget();
    AWS_GLUE_API HudiTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API HudiTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of Amazon S3 location strings for Hudi, each indicating the root
     * folder with which the metadata files for a Hudi table resides. The Hudi folder
     * may be located in a child folder of the root folder.</p> <p>The crawler will
     * scan all folders underneath a path for a Hudi folder.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPaths() const{ return m_paths; }
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }
    inline void SetPaths(const Aws::Vector<Aws::String>& value) { m_pathsHasBeenSet = true; m_paths = value; }
    inline void SetPaths(Aws::Vector<Aws::String>&& value) { m_pathsHasBeenSet = true; m_paths = std::move(value); }
    inline HudiTarget& WithPaths(const Aws::Vector<Aws::String>& value) { SetPaths(value); return *this;}
    inline HudiTarget& WithPaths(Aws::Vector<Aws::String>&& value) { SetPaths(std::move(value)); return *this;}
    inline HudiTarget& AddPaths(const Aws::String& value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }
    inline HudiTarget& AddPaths(Aws::String&& value) { m_pathsHasBeenSet = true; m_paths.push_back(std::move(value)); return *this; }
    inline HudiTarget& AddPaths(const char* value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the connection to use to connect to the Hudi target. If your Hudi
     * files are stored in buckets that require VPC authorization, you can set their
     * connection properties here.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }
    inline HudiTarget& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}
    inline HudiTarget& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}
    inline HudiTarget& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusions() const{ return m_exclusions; }
    inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }
    inline void SetExclusions(const Aws::Vector<Aws::String>& value) { m_exclusionsHasBeenSet = true; m_exclusions = value; }
    inline void SetExclusions(Aws::Vector<Aws::String>&& value) { m_exclusionsHasBeenSet = true; m_exclusions = std::move(value); }
    inline HudiTarget& WithExclusions(const Aws::Vector<Aws::String>& value) { SetExclusions(value); return *this;}
    inline HudiTarget& WithExclusions(Aws::Vector<Aws::String>&& value) { SetExclusions(std::move(value)); return *this;}
    inline HudiTarget& AddExclusions(const Aws::String& value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(value); return *this; }
    inline HudiTarget& AddExclusions(Aws::String&& value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(std::move(value)); return *this; }
    inline HudiTarget& AddExclusions(const char* value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum depth of Amazon S3 paths that the crawler can traverse to
     * discover the Hudi metadata folder in your Amazon S3 path. Used to limit the
     * crawler run time.</p>
     */
    inline int GetMaximumTraversalDepth() const{ return m_maximumTraversalDepth; }
    inline bool MaximumTraversalDepthHasBeenSet() const { return m_maximumTraversalDepthHasBeenSet; }
    inline void SetMaximumTraversalDepth(int value) { m_maximumTraversalDepthHasBeenSet = true; m_maximumTraversalDepth = value; }
    inline HudiTarget& WithMaximumTraversalDepth(int value) { SetMaximumTraversalDepth(value); return *this;}
    ///@}
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
