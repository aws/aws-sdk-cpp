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
   * <p>Contains information about the resource type <code>RDSDBInstance</code>
   * involved in a GuardDuty finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/RdsDbInstanceDetails">AWS
   * API Reference</a></p>
   */
  class RdsDbInstanceDetails
  {
  public:
    AWS_GUARDDUTY_API RdsDbInstanceDetails() = default;
    AWS_GUARDDUTY_API RdsDbInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API RdsDbInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier associated to the database instance that was involved in the
     * finding.</p>
     */
    inline const Aws::String& GetDbInstanceIdentifier() const { return m_dbInstanceIdentifier; }
    inline bool DbInstanceIdentifierHasBeenSet() const { return m_dbInstanceIdentifierHasBeenSet; }
    template<typename DbInstanceIdentifierT = Aws::String>
    void SetDbInstanceIdentifier(DbInstanceIdentifierT&& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = std::forward<DbInstanceIdentifierT>(value); }
    template<typename DbInstanceIdentifierT = Aws::String>
    RdsDbInstanceDetails& WithDbInstanceIdentifier(DbInstanceIdentifierT&& value) { SetDbInstanceIdentifier(std::forward<DbInstanceIdentifierT>(value)); return *this;}
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
    RdsDbInstanceDetails& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the database engine that was involved in the finding.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    RdsDbInstanceDetails& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the database cluster that contains the database instance ID
     * involved in the finding.</p>
     */
    inline const Aws::String& GetDbClusterIdentifier() const { return m_dbClusterIdentifier; }
    inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }
    template<typename DbClusterIdentifierT = Aws::String>
    void SetDbClusterIdentifier(DbClusterIdentifierT&& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = std::forward<DbClusterIdentifierT>(value); }
    template<typename DbClusterIdentifierT = Aws::String>
    RdsDbInstanceDetails& WithDbClusterIdentifier(DbClusterIdentifierT&& value) { SetDbClusterIdentifier(std::forward<DbClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the database instance involved
     * in the finding.</p>
     */
    inline const Aws::String& GetDbInstanceArn() const { return m_dbInstanceArn; }
    inline bool DbInstanceArnHasBeenSet() const { return m_dbInstanceArnHasBeenSet; }
    template<typename DbInstanceArnT = Aws::String>
    void SetDbInstanceArn(DbInstanceArnT&& value) { m_dbInstanceArnHasBeenSet = true; m_dbInstanceArn = std::forward<DbInstanceArnT>(value); }
    template<typename DbInstanceArnT = Aws::String>
    RdsDbInstanceDetails& WithDbInstanceArn(DbInstanceArnT&& value) { SetDbInstanceArn(std::forward<DbInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the tag key-value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RdsDbInstanceDetails& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RdsDbInstanceDetails& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dbInstanceIdentifier;
    bool m_dbInstanceIdentifierHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_dbClusterIdentifier;
    bool m_dbClusterIdentifierHasBeenSet = false;

    Aws::String m_dbInstanceArn;
    bool m_dbInstanceArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
