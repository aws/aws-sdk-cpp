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
    AWS_GLUE_API UpsertRedshiftTargetOptions();
    AWS_GLUE_API UpsertRedshiftTargetOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UpsertRedshiftTargetOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The physical location of the Redshift table.</p>
     */
    inline const Aws::String& GetTableLocation() const{ return m_tableLocation; }

    /**
     * <p>The physical location of the Redshift table.</p>
     */
    inline bool TableLocationHasBeenSet() const { return m_tableLocationHasBeenSet; }

    /**
     * <p>The physical location of the Redshift table.</p>
     */
    inline void SetTableLocation(const Aws::String& value) { m_tableLocationHasBeenSet = true; m_tableLocation = value; }

    /**
     * <p>The physical location of the Redshift table.</p>
     */
    inline void SetTableLocation(Aws::String&& value) { m_tableLocationHasBeenSet = true; m_tableLocation = std::move(value); }

    /**
     * <p>The physical location of the Redshift table.</p>
     */
    inline void SetTableLocation(const char* value) { m_tableLocationHasBeenSet = true; m_tableLocation.assign(value); }

    /**
     * <p>The physical location of the Redshift table.</p>
     */
    inline UpsertRedshiftTargetOptions& WithTableLocation(const Aws::String& value) { SetTableLocation(value); return *this;}

    /**
     * <p>The physical location of the Redshift table.</p>
     */
    inline UpsertRedshiftTargetOptions& WithTableLocation(Aws::String&& value) { SetTableLocation(std::move(value)); return *this;}

    /**
     * <p>The physical location of the Redshift table.</p>
     */
    inline UpsertRedshiftTargetOptions& WithTableLocation(const char* value) { SetTableLocation(value); return *this;}


    /**
     * <p>The name of the connection to use to write to Redshift.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>The name of the connection to use to write to Redshift.</p>
     */
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }

    /**
     * <p>The name of the connection to use to write to Redshift.</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>The name of the connection to use to write to Redshift.</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }

    /**
     * <p>The name of the connection to use to write to Redshift.</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>The name of the connection to use to write to Redshift.</p>
     */
    inline UpsertRedshiftTargetOptions& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The name of the connection to use to write to Redshift.</p>
     */
    inline UpsertRedshiftTargetOptions& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection to use to write to Redshift.</p>
     */
    inline UpsertRedshiftTargetOptions& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}


    /**
     * <p>The keys used to determine whether to perform an update or insert.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUpsertKeys() const{ return m_upsertKeys; }

    /**
     * <p>The keys used to determine whether to perform an update or insert.</p>
     */
    inline bool UpsertKeysHasBeenSet() const { return m_upsertKeysHasBeenSet; }

    /**
     * <p>The keys used to determine whether to perform an update or insert.</p>
     */
    inline void SetUpsertKeys(const Aws::Vector<Aws::String>& value) { m_upsertKeysHasBeenSet = true; m_upsertKeys = value; }

    /**
     * <p>The keys used to determine whether to perform an update or insert.</p>
     */
    inline void SetUpsertKeys(Aws::Vector<Aws::String>&& value) { m_upsertKeysHasBeenSet = true; m_upsertKeys = std::move(value); }

    /**
     * <p>The keys used to determine whether to perform an update or insert.</p>
     */
    inline UpsertRedshiftTargetOptions& WithUpsertKeys(const Aws::Vector<Aws::String>& value) { SetUpsertKeys(value); return *this;}

    /**
     * <p>The keys used to determine whether to perform an update or insert.</p>
     */
    inline UpsertRedshiftTargetOptions& WithUpsertKeys(Aws::Vector<Aws::String>&& value) { SetUpsertKeys(std::move(value)); return *this;}

    /**
     * <p>The keys used to determine whether to perform an update or insert.</p>
     */
    inline UpsertRedshiftTargetOptions& AddUpsertKeys(const Aws::String& value) { m_upsertKeysHasBeenSet = true; m_upsertKeys.push_back(value); return *this; }

    /**
     * <p>The keys used to determine whether to perform an update or insert.</p>
     */
    inline UpsertRedshiftTargetOptions& AddUpsertKeys(Aws::String&& value) { m_upsertKeysHasBeenSet = true; m_upsertKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The keys used to determine whether to perform an update or insert.</p>
     */
    inline UpsertRedshiftTargetOptions& AddUpsertKeys(const char* value) { m_upsertKeysHasBeenSet = true; m_upsertKeys.push_back(value); return *this; }

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
