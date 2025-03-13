/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
   * <p>Specifies an Amazon DocumentDB or MongoDB data store to crawl.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/MongoDBTarget">AWS
   * API Reference</a></p>
   */
  class MongoDBTarget
  {
  public:
    AWS_GLUE_API MongoDBTarget() = default;
    AWS_GLUE_API MongoDBTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API MongoDBTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the connection to use to connect to the Amazon DocumentDB or
     * MongoDB target.</p>
     */
    inline const Aws::String& GetConnectionName() const { return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    template<typename ConnectionNameT = Aws::String>
    void SetConnectionName(ConnectionNameT&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::forward<ConnectionNameT>(value); }
    template<typename ConnectionNameT = Aws::String>
    MongoDBTarget& WithConnectionName(ConnectionNameT&& value) { SetConnectionName(std::forward<ConnectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the Amazon DocumentDB or MongoDB target
     * (database/collection).</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    MongoDBTarget& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to scan all the records, or to sample rows from the table.
     * Scanning all the records can take a long time when the table is not a high
     * throughput table.</p> <p>A value of <code>true</code> means to scan all records,
     * while a value of <code>false</code> means to sample the records. If no value is
     * specified, the value defaults to <code>true</code>.</p>
     */
    inline bool GetScanAll() const { return m_scanAll; }
    inline bool ScanAllHasBeenSet() const { return m_scanAllHasBeenSet; }
    inline void SetScanAll(bool value) { m_scanAllHasBeenSet = true; m_scanAll = value; }
    inline MongoDBTarget& WithScanAll(bool value) { SetScanAll(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    bool m_scanAll{false};
    bool m_scanAllHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
