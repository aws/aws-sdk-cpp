/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/RdsDbClusterSnapshotAttributeValue.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>The proposed access control configuration for an Amazon RDS DB cluster
   * snapshot. You can propose a configuration for a new Amazon RDS DB cluster
   * snapshot or an Amazon RDS DB cluster snapshot that you own by specifying the
   * <code>RdsDbClusterSnapshotAttributeValue</code> and optional KMS encryption key.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_ModifyDBClusterSnapshotAttribute.html">ModifyDBClusterSnapshotAttribute</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/RdsDbClusterSnapshotConfiguration">AWS
   * API Reference</a></p>
   */
  class RdsDbClusterSnapshotConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API RdsDbClusterSnapshotConfiguration();
    AWS_ACCESSANALYZER_API RdsDbClusterSnapshotConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API RdsDbClusterSnapshotConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The names and values of manual DB cluster snapshot attributes. Manual DB
     * cluster snapshot attributes are used to authorize other Amazon Web Services
     * accounts to restore a manual DB cluster snapshot. The only valid value for
     * <code>AttributeName</code> for the attribute map is <code>restore</code> </p>
     */
    inline const Aws::Map<Aws::String, RdsDbClusterSnapshotAttributeValue>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The names and values of manual DB cluster snapshot attributes. Manual DB
     * cluster snapshot attributes are used to authorize other Amazon Web Services
     * accounts to restore a manual DB cluster snapshot. The only valid value for
     * <code>AttributeName</code> for the attribute map is <code>restore</code> </p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The names and values of manual DB cluster snapshot attributes. Manual DB
     * cluster snapshot attributes are used to authorize other Amazon Web Services
     * accounts to restore a manual DB cluster snapshot. The only valid value for
     * <code>AttributeName</code> for the attribute map is <code>restore</code> </p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, RdsDbClusterSnapshotAttributeValue>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The names and values of manual DB cluster snapshot attributes. Manual DB
     * cluster snapshot attributes are used to authorize other Amazon Web Services
     * accounts to restore a manual DB cluster snapshot. The only valid value for
     * <code>AttributeName</code> for the attribute map is <code>restore</code> </p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, RdsDbClusterSnapshotAttributeValue>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The names and values of manual DB cluster snapshot attributes. Manual DB
     * cluster snapshot attributes are used to authorize other Amazon Web Services
     * accounts to restore a manual DB cluster snapshot. The only valid value for
     * <code>AttributeName</code> for the attribute map is <code>restore</code> </p>
     */
    inline RdsDbClusterSnapshotConfiguration& WithAttributes(const Aws::Map<Aws::String, RdsDbClusterSnapshotAttributeValue>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The names and values of manual DB cluster snapshot attributes. Manual DB
     * cluster snapshot attributes are used to authorize other Amazon Web Services
     * accounts to restore a manual DB cluster snapshot. The only valid value for
     * <code>AttributeName</code> for the attribute map is <code>restore</code> </p>
     */
    inline RdsDbClusterSnapshotConfiguration& WithAttributes(Aws::Map<Aws::String, RdsDbClusterSnapshotAttributeValue>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The names and values of manual DB cluster snapshot attributes. Manual DB
     * cluster snapshot attributes are used to authorize other Amazon Web Services
     * accounts to restore a manual DB cluster snapshot. The only valid value for
     * <code>AttributeName</code> for the attribute map is <code>restore</code> </p>
     */
    inline RdsDbClusterSnapshotConfiguration& AddAttributes(const Aws::String& key, const RdsDbClusterSnapshotAttributeValue& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>The names and values of manual DB cluster snapshot attributes. Manual DB
     * cluster snapshot attributes are used to authorize other Amazon Web Services
     * accounts to restore a manual DB cluster snapshot. The only valid value for
     * <code>AttributeName</code> for the attribute map is <code>restore</code> </p>
     */
    inline RdsDbClusterSnapshotConfiguration& AddAttributes(Aws::String&& key, const RdsDbClusterSnapshotAttributeValue& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The names and values of manual DB cluster snapshot attributes. Manual DB
     * cluster snapshot attributes are used to authorize other Amazon Web Services
     * accounts to restore a manual DB cluster snapshot. The only valid value for
     * <code>AttributeName</code> for the attribute map is <code>restore</code> </p>
     */
    inline RdsDbClusterSnapshotConfiguration& AddAttributes(const Aws::String& key, RdsDbClusterSnapshotAttributeValue&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The names and values of manual DB cluster snapshot attributes. Manual DB
     * cluster snapshot attributes are used to authorize other Amazon Web Services
     * accounts to restore a manual DB cluster snapshot. The only valid value for
     * <code>AttributeName</code> for the attribute map is <code>restore</code> </p>
     */
    inline RdsDbClusterSnapshotConfiguration& AddAttributes(Aws::String&& key, RdsDbClusterSnapshotAttributeValue&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The names and values of manual DB cluster snapshot attributes. Manual DB
     * cluster snapshot attributes are used to authorize other Amazon Web Services
     * accounts to restore a manual DB cluster snapshot. The only valid value for
     * <code>AttributeName</code> for the attribute map is <code>restore</code> </p>
     */
    inline RdsDbClusterSnapshotConfiguration& AddAttributes(const char* key, RdsDbClusterSnapshotAttributeValue&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The names and values of manual DB cluster snapshot attributes. Manual DB
     * cluster snapshot attributes are used to authorize other Amazon Web Services
     * accounts to restore a manual DB cluster snapshot. The only valid value for
     * <code>AttributeName</code> for the attribute map is <code>restore</code> </p>
     */
    inline RdsDbClusterSnapshotConfiguration& AddAttributes(const char* key, const RdsDbClusterSnapshotAttributeValue& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>The KMS key identifier for an encrypted Amazon RDS DB cluster snapshot. The
     * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p> <ul> <li> <p>If the configuration is for an existing Amazon RDS DB
     * cluster snapshot and you do not specify the <code>kmsKeyId</code>, or you
     * specify an empty string, then the access preview uses the existing
     * <code>kmsKeyId</code> of the snapshot.</p> </li> <li> <p>If the access preview
     * is for a new resource and you do not specify the specify the
     * <code>kmsKeyId</code>, then the access preview considers the snapshot as
     * unencrypted.</p> </li> </ul>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key identifier for an encrypted Amazon RDS DB cluster snapshot. The
     * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p> <ul> <li> <p>If the configuration is for an existing Amazon RDS DB
     * cluster snapshot and you do not specify the <code>kmsKeyId</code>, or you
     * specify an empty string, then the access preview uses the existing
     * <code>kmsKeyId</code> of the snapshot.</p> </li> <li> <p>If the access preview
     * is for a new resource and you do not specify the specify the
     * <code>kmsKeyId</code>, then the access preview considers the snapshot as
     * unencrypted.</p> </li> </ul>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS key identifier for an encrypted Amazon RDS DB cluster snapshot. The
     * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p> <ul> <li> <p>If the configuration is for an existing Amazon RDS DB
     * cluster snapshot and you do not specify the <code>kmsKeyId</code>, or you
     * specify an empty string, then the access preview uses the existing
     * <code>kmsKeyId</code> of the snapshot.</p> </li> <li> <p>If the access preview
     * is for a new resource and you do not specify the specify the
     * <code>kmsKeyId</code>, then the access preview considers the snapshot as
     * unencrypted.</p> </li> </ul>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier for an encrypted Amazon RDS DB cluster snapshot. The
     * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p> <ul> <li> <p>If the configuration is for an existing Amazon RDS DB
     * cluster snapshot and you do not specify the <code>kmsKeyId</code>, or you
     * specify an empty string, then the access preview uses the existing
     * <code>kmsKeyId</code> of the snapshot.</p> </li> <li> <p>If the access preview
     * is for a new resource and you do not specify the specify the
     * <code>kmsKeyId</code>, then the access preview considers the snapshot as
     * unencrypted.</p> </li> </ul>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS key identifier for an encrypted Amazon RDS DB cluster snapshot. The
     * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p> <ul> <li> <p>If the configuration is for an existing Amazon RDS DB
     * cluster snapshot and you do not specify the <code>kmsKeyId</code>, or you
     * specify an empty string, then the access preview uses the existing
     * <code>kmsKeyId</code> of the snapshot.</p> </li> <li> <p>If the access preview
     * is for a new resource and you do not specify the specify the
     * <code>kmsKeyId</code>, then the access preview considers the snapshot as
     * unencrypted.</p> </li> </ul>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key identifier for an encrypted Amazon RDS DB cluster snapshot. The
     * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p> <ul> <li> <p>If the configuration is for an existing Amazon RDS DB
     * cluster snapshot and you do not specify the <code>kmsKeyId</code>, or you
     * specify an empty string, then the access preview uses the existing
     * <code>kmsKeyId</code> of the snapshot.</p> </li> <li> <p>If the access preview
     * is for a new resource and you do not specify the specify the
     * <code>kmsKeyId</code>, then the access preview considers the snapshot as
     * unencrypted.</p> </li> </ul>
     */
    inline RdsDbClusterSnapshotConfiguration& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier for an encrypted Amazon RDS DB cluster snapshot. The
     * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p> <ul> <li> <p>If the configuration is for an existing Amazon RDS DB
     * cluster snapshot and you do not specify the <code>kmsKeyId</code>, or you
     * specify an empty string, then the access preview uses the existing
     * <code>kmsKeyId</code> of the snapshot.</p> </li> <li> <p>If the access preview
     * is for a new resource and you do not specify the specify the
     * <code>kmsKeyId</code>, then the access preview considers the snapshot as
     * unencrypted.</p> </li> </ul>
     */
    inline RdsDbClusterSnapshotConfiguration& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key identifier for an encrypted Amazon RDS DB cluster snapshot. The
     * KMS key identifier is the key ARN, key ID, alias ARN, or alias name for the KMS
     * key.</p> <ul> <li> <p>If the configuration is for an existing Amazon RDS DB
     * cluster snapshot and you do not specify the <code>kmsKeyId</code>, or you
     * specify an empty string, then the access preview uses the existing
     * <code>kmsKeyId</code> of the snapshot.</p> </li> <li> <p>If the access preview
     * is for a new resource and you do not specify the specify the
     * <code>kmsKeyId</code>, then the access preview considers the snapshot as
     * unencrypted.</p> </li> </ul>
     */
    inline RdsDbClusterSnapshotConfiguration& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::Map<Aws::String, RdsDbClusterSnapshotAttributeValue> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
