/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/Tag.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the resource type <code>RDSLimitlessDB</code> that
   * is involved in a GuardDuty finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/RdsLimitlessDbDetails">AWS
   * API Reference</a></p>
   */
  class RdsLimitlessDbDetails
  {
  public:
    AWS_GUARDDUTY_API RdsLimitlessDbDetails() = default;
    AWS_GUARDDUTY_API RdsLimitlessDbDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API RdsLimitlessDbDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name associated with the Limitless DB shard group.</p>
     */
    inline const Aws::String& GetDbShardGroupIdentifier() const { return m_dbShardGroupIdentifier; }
    inline bool DbShardGroupIdentifierHasBeenSet() const { return m_dbShardGroupIdentifierHasBeenSet; }
    template<typename DbShardGroupIdentifierT = Aws::String>
    void SetDbShardGroupIdentifier(DbShardGroupIdentifierT&& value) { m_dbShardGroupIdentifierHasBeenSet = true; m_dbShardGroupIdentifier = std::forward<DbShardGroupIdentifierT>(value); }
    template<typename DbShardGroupIdentifierT = Aws::String>
    RdsLimitlessDbDetails& WithDbShardGroupIdentifier(DbShardGroupIdentifierT&& value) { SetDbShardGroupIdentifier(std::forward<DbShardGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource identifier of the DB shard group within the Limitless
     * Database.</p>
     */
    inline const Aws::String& GetDbShardGroupResourceId() const { return m_dbShardGroupResourceId; }
    inline bool DbShardGroupResourceIdHasBeenSet() const { return m_dbShardGroupResourceIdHasBeenSet; }
    template<typename DbShardGroupResourceIdT = Aws::String>
    void SetDbShardGroupResourceId(DbShardGroupResourceIdT&& value) { m_dbShardGroupResourceIdHasBeenSet = true; m_dbShardGroupResourceId = std::forward<DbShardGroupResourceIdT>(value); }
    template<typename DbShardGroupResourceIdT = Aws::String>
    RdsLimitlessDbDetails& WithDbShardGroupResourceId(DbShardGroupResourceIdT&& value) { SetDbShardGroupResourceId(std::forward<DbShardGroupResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the DB shard group.</p>
     */
    inline const Aws::String& GetDbShardGroupArn() const { return m_dbShardGroupArn; }
    inline bool DbShardGroupArnHasBeenSet() const { return m_dbShardGroupArnHasBeenSet; }
    template<typename DbShardGroupArnT = Aws::String>
    void SetDbShardGroupArn(DbShardGroupArnT&& value) { m_dbShardGroupArnHasBeenSet = true; m_dbShardGroupArn = std::forward<DbShardGroupArnT>(value); }
    template<typename DbShardGroupArnT = Aws::String>
    RdsLimitlessDbDetails& WithDbShardGroupArn(DbShardGroupArnT&& value) { SetDbShardGroupArn(std::forward<DbShardGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine of the database instance involved in the finding.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    RdsLimitlessDbDetails& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    RdsLimitlessDbDetails& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database cluster that is a part of the Limitless
     * Database.</p>
     */
    inline const Aws::String& GetDbClusterIdentifier() const { return m_dbClusterIdentifier; }
    inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }
    template<typename DbClusterIdentifierT = Aws::String>
    void SetDbClusterIdentifier(DbClusterIdentifierT&& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = std::forward<DbClusterIdentifierT>(value); }
    template<typename DbClusterIdentifierT = Aws::String>
    RdsLimitlessDbDetails& WithDbClusterIdentifier(DbClusterIdentifierT&& value) { SetDbClusterIdentifier(std::forward<DbClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the tag key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RdsLimitlessDbDetails& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RdsLimitlessDbDetails& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dbShardGroupIdentifier;
    bool m_dbShardGroupIdentifierHasBeenSet = false;

    Aws::String m_dbShardGroupResourceId;
    bool m_dbShardGroupResourceIdHasBeenSet = false;

    Aws::String m_dbShardGroupArn;
    bool m_dbShardGroupArnHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_dbClusterIdentifier;
    bool m_dbClusterIdentifierHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
