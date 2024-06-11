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
   * <p>Specifies a Delta data store to crawl one or more Delta tables.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeltaTarget">AWS
   * API Reference</a></p>
   */
  class DeltaTarget
  {
  public:
    AWS_GLUE_API DeltaTarget();
    AWS_GLUE_API DeltaTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DeltaTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of the Amazon S3 paths to the Delta tables.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeltaTables() const{ return m_deltaTables; }
    inline bool DeltaTablesHasBeenSet() const { return m_deltaTablesHasBeenSet; }
    inline void SetDeltaTables(const Aws::Vector<Aws::String>& value) { m_deltaTablesHasBeenSet = true; m_deltaTables = value; }
    inline void SetDeltaTables(Aws::Vector<Aws::String>&& value) { m_deltaTablesHasBeenSet = true; m_deltaTables = std::move(value); }
    inline DeltaTarget& WithDeltaTables(const Aws::Vector<Aws::String>& value) { SetDeltaTables(value); return *this;}
    inline DeltaTarget& WithDeltaTables(Aws::Vector<Aws::String>&& value) { SetDeltaTables(std::move(value)); return *this;}
    inline DeltaTarget& AddDeltaTables(const Aws::String& value) { m_deltaTablesHasBeenSet = true; m_deltaTables.push_back(value); return *this; }
    inline DeltaTarget& AddDeltaTables(Aws::String&& value) { m_deltaTablesHasBeenSet = true; m_deltaTables.push_back(std::move(value)); return *this; }
    inline DeltaTarget& AddDeltaTables(const char* value) { m_deltaTablesHasBeenSet = true; m_deltaTables.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the connection to use to connect to the Delta table target.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }
    inline DeltaTarget& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}
    inline DeltaTarget& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}
    inline DeltaTarget& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to write the manifest files to the Delta table path.</p>
     */
    inline bool GetWriteManifest() const{ return m_writeManifest; }
    inline bool WriteManifestHasBeenSet() const { return m_writeManifestHasBeenSet; }
    inline void SetWriteManifest(bool value) { m_writeManifestHasBeenSet = true; m_writeManifest = value; }
    inline DeltaTarget& WithWriteManifest(bool value) { SetWriteManifest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the crawler will create native tables, to allow integration
     * with query engines that support querying of the Delta transaction log
     * directly.</p>
     */
    inline bool GetCreateNativeDeltaTable() const{ return m_createNativeDeltaTable; }
    inline bool CreateNativeDeltaTableHasBeenSet() const { return m_createNativeDeltaTableHasBeenSet; }
    inline void SetCreateNativeDeltaTable(bool value) { m_createNativeDeltaTableHasBeenSet = true; m_createNativeDeltaTable = value; }
    inline DeltaTarget& WithCreateNativeDeltaTable(bool value) { SetCreateNativeDeltaTable(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_deltaTables;
    bool m_deltaTablesHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    bool m_writeManifest;
    bool m_writeManifestHasBeenSet = false;

    bool m_createNativeDeltaTable;
    bool m_createNativeDeltaTableHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
