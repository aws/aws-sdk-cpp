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
    AWS_GUARDDUTY_API RdsLimitlessDbDetails();
    AWS_GUARDDUTY_API RdsLimitlessDbDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API RdsLimitlessDbDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name associated with the Limitless DB shard group.</p>
     */
    inline const Aws::String& GetDbShardGroupIdentifier() const{ return m_dbShardGroupIdentifier; }
    inline bool DbShardGroupIdentifierHasBeenSet() const { return m_dbShardGroupIdentifierHasBeenSet; }
    inline void SetDbShardGroupIdentifier(const Aws::String& value) { m_dbShardGroupIdentifierHasBeenSet = true; m_dbShardGroupIdentifier = value; }
    inline void SetDbShardGroupIdentifier(Aws::String&& value) { m_dbShardGroupIdentifierHasBeenSet = true; m_dbShardGroupIdentifier = std::move(value); }
    inline void SetDbShardGroupIdentifier(const char* value) { m_dbShardGroupIdentifierHasBeenSet = true; m_dbShardGroupIdentifier.assign(value); }
    inline RdsLimitlessDbDetails& WithDbShardGroupIdentifier(const Aws::String& value) { SetDbShardGroupIdentifier(value); return *this;}
    inline RdsLimitlessDbDetails& WithDbShardGroupIdentifier(Aws::String&& value) { SetDbShardGroupIdentifier(std::move(value)); return *this;}
    inline RdsLimitlessDbDetails& WithDbShardGroupIdentifier(const char* value) { SetDbShardGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource identifier of the DB shard group within the Limitless
     * Database.</p>
     */
    inline const Aws::String& GetDbShardGroupResourceId() const{ return m_dbShardGroupResourceId; }
    inline bool DbShardGroupResourceIdHasBeenSet() const { return m_dbShardGroupResourceIdHasBeenSet; }
    inline void SetDbShardGroupResourceId(const Aws::String& value) { m_dbShardGroupResourceIdHasBeenSet = true; m_dbShardGroupResourceId = value; }
    inline void SetDbShardGroupResourceId(Aws::String&& value) { m_dbShardGroupResourceIdHasBeenSet = true; m_dbShardGroupResourceId = std::move(value); }
    inline void SetDbShardGroupResourceId(const char* value) { m_dbShardGroupResourceIdHasBeenSet = true; m_dbShardGroupResourceId.assign(value); }
    inline RdsLimitlessDbDetails& WithDbShardGroupResourceId(const Aws::String& value) { SetDbShardGroupResourceId(value); return *this;}
    inline RdsLimitlessDbDetails& WithDbShardGroupResourceId(Aws::String&& value) { SetDbShardGroupResourceId(std::move(value)); return *this;}
    inline RdsLimitlessDbDetails& WithDbShardGroupResourceId(const char* value) { SetDbShardGroupResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the DB shard group.</p>
     */
    inline const Aws::String& GetDbShardGroupArn() const{ return m_dbShardGroupArn; }
    inline bool DbShardGroupArnHasBeenSet() const { return m_dbShardGroupArnHasBeenSet; }
    inline void SetDbShardGroupArn(const Aws::String& value) { m_dbShardGroupArnHasBeenSet = true; m_dbShardGroupArn = value; }
    inline void SetDbShardGroupArn(Aws::String&& value) { m_dbShardGroupArnHasBeenSet = true; m_dbShardGroupArn = std::move(value); }
    inline void SetDbShardGroupArn(const char* value) { m_dbShardGroupArnHasBeenSet = true; m_dbShardGroupArn.assign(value); }
    inline RdsLimitlessDbDetails& WithDbShardGroupArn(const Aws::String& value) { SetDbShardGroupArn(value); return *this;}
    inline RdsLimitlessDbDetails& WithDbShardGroupArn(Aws::String&& value) { SetDbShardGroupArn(std::move(value)); return *this;}
    inline RdsLimitlessDbDetails& WithDbShardGroupArn(const char* value) { SetDbShardGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine of the database instance involved in the finding.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline RdsLimitlessDbDetails& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline RdsLimitlessDbDetails& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline RdsLimitlessDbDetails& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline RdsLimitlessDbDetails& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline RdsLimitlessDbDetails& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline RdsLimitlessDbDetails& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database cluster that is a part of the Limitless
     * Database.</p>
     */
    inline const Aws::String& GetDbClusterIdentifier() const{ return m_dbClusterIdentifier; }
    inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }
    inline void SetDbClusterIdentifier(const Aws::String& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = value; }
    inline void SetDbClusterIdentifier(Aws::String&& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = std::move(value); }
    inline void SetDbClusterIdentifier(const char* value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier.assign(value); }
    inline RdsLimitlessDbDetails& WithDbClusterIdentifier(const Aws::String& value) { SetDbClusterIdentifier(value); return *this;}
    inline RdsLimitlessDbDetails& WithDbClusterIdentifier(Aws::String&& value) { SetDbClusterIdentifier(std::move(value)); return *this;}
    inline RdsLimitlessDbDetails& WithDbClusterIdentifier(const char* value) { SetDbClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the tag key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RdsLimitlessDbDetails& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline RdsLimitlessDbDetails& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline RdsLimitlessDbDetails& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline RdsLimitlessDbDetails& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
