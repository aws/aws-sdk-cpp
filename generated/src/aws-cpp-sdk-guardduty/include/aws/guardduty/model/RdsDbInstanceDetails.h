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
    AWS_GUARDDUTY_API RdsDbInstanceDetails();
    AWS_GUARDDUTY_API RdsDbInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API RdsDbInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier associated to the database instance that was involved in the
     * finding.</p>
     */
    inline const Aws::String& GetDbInstanceIdentifier() const{ return m_dbInstanceIdentifier; }

    /**
     * <p>The identifier associated to the database instance that was involved in the
     * finding.</p>
     */
    inline bool DbInstanceIdentifierHasBeenSet() const { return m_dbInstanceIdentifierHasBeenSet; }

    /**
     * <p>The identifier associated to the database instance that was involved in the
     * finding.</p>
     */
    inline void SetDbInstanceIdentifier(const Aws::String& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = value; }

    /**
     * <p>The identifier associated to the database instance that was involved in the
     * finding.</p>
     */
    inline void SetDbInstanceIdentifier(Aws::String&& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = std::move(value); }

    /**
     * <p>The identifier associated to the database instance that was involved in the
     * finding.</p>
     */
    inline void SetDbInstanceIdentifier(const char* value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier.assign(value); }

    /**
     * <p>The identifier associated to the database instance that was involved in the
     * finding.</p>
     */
    inline RdsDbInstanceDetails& WithDbInstanceIdentifier(const Aws::String& value) { SetDbInstanceIdentifier(value); return *this;}

    /**
     * <p>The identifier associated to the database instance that was involved in the
     * finding.</p>
     */
    inline RdsDbInstanceDetails& WithDbInstanceIdentifier(Aws::String&& value) { SetDbInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier associated to the database instance that was involved in the
     * finding.</p>
     */
    inline RdsDbInstanceDetails& WithDbInstanceIdentifier(const char* value) { SetDbInstanceIdentifier(value); return *this;}


    /**
     * <p>The database engine of the database instance involved in the finding.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The database engine of the database instance involved in the finding.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The database engine of the database instance involved in the finding.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The database engine of the database instance involved in the finding.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The database engine of the database instance involved in the finding.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The database engine of the database instance involved in the finding.</p>
     */
    inline RdsDbInstanceDetails& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The database engine of the database instance involved in the finding.</p>
     */
    inline RdsDbInstanceDetails& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The database engine of the database instance involved in the finding.</p>
     */
    inline RdsDbInstanceDetails& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version of the database engine that was involved in the finding.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version of the database engine that was involved in the finding.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version of the database engine that was involved in the finding.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version of the database engine that was involved in the finding.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version of the database engine that was involved in the finding.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version of the database engine that was involved in the finding.</p>
     */
    inline RdsDbInstanceDetails& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version of the database engine that was involved in the finding.</p>
     */
    inline RdsDbInstanceDetails& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the database engine that was involved in the finding.</p>
     */
    inline RdsDbInstanceDetails& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The identifier of the database cluster that contains the database instance ID
     * involved in the finding.</p>
     */
    inline const Aws::String& GetDbClusterIdentifier() const{ return m_dbClusterIdentifier; }

    /**
     * <p>The identifier of the database cluster that contains the database instance ID
     * involved in the finding.</p>
     */
    inline bool DbClusterIdentifierHasBeenSet() const { return m_dbClusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the database cluster that contains the database instance ID
     * involved in the finding.</p>
     */
    inline void SetDbClusterIdentifier(const Aws::String& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = value; }

    /**
     * <p>The identifier of the database cluster that contains the database instance ID
     * involved in the finding.</p>
     */
    inline void SetDbClusterIdentifier(Aws::String&& value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the database cluster that contains the database instance ID
     * involved in the finding.</p>
     */
    inline void SetDbClusterIdentifier(const char* value) { m_dbClusterIdentifierHasBeenSet = true; m_dbClusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the database cluster that contains the database instance ID
     * involved in the finding.</p>
     */
    inline RdsDbInstanceDetails& WithDbClusterIdentifier(const Aws::String& value) { SetDbClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the database cluster that contains the database instance ID
     * involved in the finding.</p>
     */
    inline RdsDbInstanceDetails& WithDbClusterIdentifier(Aws::String&& value) { SetDbClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the database cluster that contains the database instance ID
     * involved in the finding.</p>
     */
    inline RdsDbInstanceDetails& WithDbClusterIdentifier(const char* value) { SetDbClusterIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the database instance involved
     * in the finding.</p>
     */
    inline const Aws::String& GetDbInstanceArn() const{ return m_dbInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the database instance involved
     * in the finding.</p>
     */
    inline bool DbInstanceArnHasBeenSet() const { return m_dbInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the database instance involved
     * in the finding.</p>
     */
    inline void SetDbInstanceArn(const Aws::String& value) { m_dbInstanceArnHasBeenSet = true; m_dbInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the database instance involved
     * in the finding.</p>
     */
    inline void SetDbInstanceArn(Aws::String&& value) { m_dbInstanceArnHasBeenSet = true; m_dbInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the database instance involved
     * in the finding.</p>
     */
    inline void SetDbInstanceArn(const char* value) { m_dbInstanceArnHasBeenSet = true; m_dbInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the database instance involved
     * in the finding.</p>
     */
    inline RdsDbInstanceDetails& WithDbInstanceArn(const Aws::String& value) { SetDbInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the database instance involved
     * in the finding.</p>
     */
    inline RdsDbInstanceDetails& WithDbInstanceArn(Aws::String&& value) { SetDbInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the database instance involved
     * in the finding.</p>
     */
    inline RdsDbInstanceDetails& WithDbInstanceArn(const char* value) { SetDbInstanceArn(value); return *this;}


    /**
     * <p>Instance tag key-value pairs associated with the database instance ID.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Instance tag key-value pairs associated with the database instance ID.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Instance tag key-value pairs associated with the database instance ID.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Instance tag key-value pairs associated with the database instance ID.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Instance tag key-value pairs associated with the database instance ID.</p>
     */
    inline RdsDbInstanceDetails& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Instance tag key-value pairs associated with the database instance ID.</p>
     */
    inline RdsDbInstanceDetails& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Instance tag key-value pairs associated with the database instance ID.</p>
     */
    inline RdsDbInstanceDetails& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Instance tag key-value pairs associated with the database instance ID.</p>
     */
    inline RdsDbInstanceDetails& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
