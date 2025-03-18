/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/EncryptionConfiguration.h>
#include <aws/athena/model/AclConfiguration.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>The information about the updates in the query results, such as output
   * location and encryption configuration for the query results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ResultConfigurationUpdates">AWS
   * API Reference</a></p>
   */
  class ResultConfigurationUpdates
  {
  public:
    AWS_ATHENA_API ResultConfigurationUpdates() = default;
    AWS_ATHENA_API ResultConfigurationUpdates(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ResultConfigurationUpdates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location in Amazon S3 where your query and calculation results are
     * stored, such as <code>s3://path/to/query/bucket/</code>. If workgroup settings
     * override client-side settings, then the query uses the location for the query
     * results and the encryption configuration that are specified for the workgroup.
     * The "workgroup settings override" is specified in
     * <code>EnforceWorkGroupConfiguration</code> (true/false) in the
     * <code>WorkGroupConfiguration</code>. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline const Aws::String& GetOutputLocation() const { return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    template<typename OutputLocationT = Aws::String>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = Aws::String>
    ResultConfigurationUpdates& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to "true", indicates that the previously-specified query results
     * location (also known as a client-side setting) for queries in this workgroup
     * should be ignored and set to null. If set to "false" or not set, and a value is
     * present in the <code>OutputLocation</code> in
     * <code>ResultConfigurationUpdates</code> (the client-side setting), the
     * <code>OutputLocation</code> in the workgroup's <code>ResultConfiguration</code>
     * will be updated with the new value. For more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline bool GetRemoveOutputLocation() const { return m_removeOutputLocation; }
    inline bool RemoveOutputLocationHasBeenSet() const { return m_removeOutputLocationHasBeenSet; }
    inline void SetRemoveOutputLocation(bool value) { m_removeOutputLocationHasBeenSet = true; m_removeOutputLocation = value; }
    inline ResultConfigurationUpdates& WithRemoveOutputLocation(bool value) { SetRemoveOutputLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption configuration for query and calculation results.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    ResultConfigurationUpdates& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to "true", indicates that the previously-specified encryption
     * configuration (also known as the client-side setting) for queries in this
     * workgroup should be ignored and set to null. If set to "false" or not set, and a
     * value is present in the <code>EncryptionConfiguration</code> in
     * <code>ResultConfigurationUpdates</code> (the client-side setting), the
     * <code>EncryptionConfiguration</code> in the workgroup's
     * <code>ResultConfiguration</code> will be updated with the new value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline bool GetRemoveEncryptionConfiguration() const { return m_removeEncryptionConfiguration; }
    inline bool RemoveEncryptionConfigurationHasBeenSet() const { return m_removeEncryptionConfigurationHasBeenSet; }
    inline void SetRemoveEncryptionConfiguration(bool value) { m_removeEncryptionConfigurationHasBeenSet = true; m_removeEncryptionConfiguration = value; }
    inline ResultConfigurationUpdates& WithRemoveEncryptionConfiguration(bool value) { SetRemoveEncryptionConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that you expect to be the owner of the
     * Amazon S3 bucket specified by <a>ResultConfiguration$OutputLocation</a>. If set,
     * Athena uses the value for <code>ExpectedBucketOwner</code> when it makes Amazon
     * S3 calls to your specified output location. If the
     * <code>ExpectedBucketOwner</code> Amazon Web Services account ID does not match
     * the actual owner of the Amazon S3 bucket, the call fails with a permissions
     * error.</p> <p>If workgroup settings override client-side settings, then the
     * query uses the <code>ExpectedBucketOwner</code> setting that is specified for
     * the workgroup, and also uses the location for storing query results specified in
     * the workgroup. See <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>
     * and <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
    inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
    template<typename ExpectedBucketOwnerT = Aws::String>
    void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value); }
    template<typename ExpectedBucketOwnerT = Aws::String>
    ResultConfigurationUpdates& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) { SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to "true", removes the Amazon Web Services account ID previously
     * specified for <a>ResultConfiguration$ExpectedBucketOwner</a>. If set to "false"
     * or not set, and a value is present in the <code>ExpectedBucketOwner</code> in
     * <code>ResultConfigurationUpdates</code> (the client-side setting), the
     * <code>ExpectedBucketOwner</code> in the workgroup's
     * <code>ResultConfiguration</code> is updated with the new value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline bool GetRemoveExpectedBucketOwner() const { return m_removeExpectedBucketOwner; }
    inline bool RemoveExpectedBucketOwnerHasBeenSet() const { return m_removeExpectedBucketOwnerHasBeenSet; }
    inline void SetRemoveExpectedBucketOwner(bool value) { m_removeExpectedBucketOwnerHasBeenSet = true; m_removeExpectedBucketOwner = value; }
    inline ResultConfigurationUpdates& WithRemoveExpectedBucketOwner(bool value) { SetRemoveExpectedBucketOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ACL configuration for the query results.</p>
     */
    inline const AclConfiguration& GetAclConfiguration() const { return m_aclConfiguration; }
    inline bool AclConfigurationHasBeenSet() const { return m_aclConfigurationHasBeenSet; }
    template<typename AclConfigurationT = AclConfiguration>
    void SetAclConfiguration(AclConfigurationT&& value) { m_aclConfigurationHasBeenSet = true; m_aclConfiguration = std::forward<AclConfigurationT>(value); }
    template<typename AclConfigurationT = AclConfiguration>
    ResultConfigurationUpdates& WithAclConfiguration(AclConfigurationT&& value) { SetAclConfiguration(std::forward<AclConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, indicates that the previously-specified ACL
     * configuration for queries in this workgroup should be ignored and set to null.
     * If set to <code>false</code> or not set, and a value is present in the
     * <code>AclConfiguration</code> of <code>ResultConfigurationUpdates</code>, the
     * <code>AclConfiguration</code> in the workgroup's
     * <code>ResultConfiguration</code> is updated with the new value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline bool GetRemoveAclConfiguration() const { return m_removeAclConfiguration; }
    inline bool RemoveAclConfigurationHasBeenSet() const { return m_removeAclConfigurationHasBeenSet; }
    inline void SetRemoveAclConfiguration(bool value) { m_removeAclConfigurationHasBeenSet = true; m_removeAclConfiguration = value; }
    inline ResultConfigurationUpdates& WithRemoveAclConfiguration(bool value) { SetRemoveAclConfiguration(value); return *this;}
    ///@}
  private:

    Aws::String m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    bool m_removeOutputLocation{false};
    bool m_removeOutputLocationHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    bool m_removeEncryptionConfiguration{false};
    bool m_removeEncryptionConfigurationHasBeenSet = false;

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;

    bool m_removeExpectedBucketOwner{false};
    bool m_removeExpectedBucketOwnerHasBeenSet = false;

    AclConfiguration m_aclConfiguration;
    bool m_aclConfigurationHasBeenSet = false;

    bool m_removeAclConfiguration{false};
    bool m_removeAclConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
