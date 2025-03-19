/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The options to configure an upsert operation when writing to a Redshift
   * target .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpsertRedshiftTargetOptions">AWS
   * API Reference</a></p>
   */
  class UpsertRedshiftTargetOptions
  {
  public:
    AWS_GLUE_API UpsertRedshiftTargetOptions() = default;
    AWS_GLUE_API UpsertRedshiftTargetOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UpsertRedshiftTargetOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The physical location of the Redshift table.</p>
     */
    inline const Aws::String& GetTableLocation() const { return m_tableLocation; }
    inline bool TableLocationHasBeenSet() const { return m_tableLocationHasBeenSet; }
    template<typename TableLocationT = Aws::String>
    void SetTableLocation(TableLocationT&& value) { m_tableLocationHasBeenSet = true; m_tableLocation = std::forward<TableLocationT>(value); }
    template<typename TableLocationT = Aws::String>
    UpsertRedshiftTargetOptions& WithTableLocation(TableLocationT&& value) { SetTableLocation(std::forward<TableLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection to use to write to Redshift.</p>
     */
    inline const Aws::String& GetConnectionName() const { return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    template<typename ConnectionNameT = Aws::String>
    void SetConnectionName(ConnectionNameT&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::forward<ConnectionNameT>(value); }
    template<typename ConnectionNameT = Aws::String>
    UpsertRedshiftTargetOptions& WithConnectionName(ConnectionNameT&& value) { SetConnectionName(std::forward<ConnectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The keys used to determine whether to perform an update or insert.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUpsertKeys() const { return m_upsertKeys; }
    inline bool UpsertKeysHasBeenSet() const { return m_upsertKeysHasBeenSet; }
    template<typename UpsertKeysT = Aws::Vector<Aws::String>>
    void SetUpsertKeys(UpsertKeysT&& value) { m_upsertKeysHasBeenSet = true; m_upsertKeys = std::forward<UpsertKeysT>(value); }
    template<typename UpsertKeysT = Aws::Vector<Aws::String>>
    UpsertRedshiftTargetOptions& WithUpsertKeys(UpsertKeysT&& value) { SetUpsertKeys(std::forward<UpsertKeysT>(value)); return *this;}
    template<typename UpsertKeysT = Aws::String>
    UpsertRedshiftTargetOptions& AddUpsertKeys(UpsertKeysT&& value) { m_upsertKeysHasBeenSet = true; m_upsertKeys.emplace_back(std::forward<UpsertKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_tableLocation;
    bool m_tableLocationHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_upsertKeys;
    bool m_upsertKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
