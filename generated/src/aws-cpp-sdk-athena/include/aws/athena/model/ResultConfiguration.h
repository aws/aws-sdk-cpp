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
   * <p>The location in Amazon S3 where query and calculation results are stored and
   * the encryption option, if any, used for query and calculation results. These are
   * known as "client-side settings". If workgroup settings override client-side
   * settings, then the query uses the workgroup settings.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ResultConfiguration">AWS
   * API Reference</a></p>
   */
  class ResultConfiguration
  {
  public:
    AWS_ATHENA_API ResultConfiguration() = default;
    AWS_ATHENA_API ResultConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ResultConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location in Amazon S3 where your query and calculation results are
     * stored, such as <code>s3://path/to/query/bucket/</code>. To run the query, you
     * must specify the query results location using one of the ways: either for
     * individual queries using either this setting (client-side), or in the workgroup,
     * using <a>WorkGroupConfiguration</a>. If none of them is set, Athena issues an
     * error that no output location is provided. If workgroup settings override
     * client-side settings, then the query uses the settings specified for the
     * workgroup. See <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline const Aws::String& GetOutputLocation() const { return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    template<typename OutputLocationT = Aws::String>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = Aws::String>
    ResultConfiguration& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If query and calculation results are encrypted in Amazon S3, indicates the
     * encryption option used (for example, <code>SSE_KMS</code> or
     * <code>CSE_KMS</code>) and key information. This is a client-side setting. If
     * workgroup settings override client-side settings, then the query uses the
     * encryption configuration that is specified for the workgroup, and also uses the
     * location for storing query results specified in the workgroup. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a> and <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    ResultConfiguration& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that you expect to be the owner of the
     * Amazon S3 bucket specified by <a>ResultConfiguration$OutputLocation</a>. If set,
     * Athena uses the value for <code>ExpectedBucketOwner</code> when it makes Amazon
     * S3 calls to your specified output location. If the
     * <code>ExpectedBucketOwner</code> Amazon Web Services account ID does not match
     * the actual owner of the Amazon S3 bucket, the call fails with a permissions
     * error.</p> <p>This is a client-side setting. If workgroup settings override
     * client-side settings, then the query uses the <code>ExpectedBucketOwner</code>
     * setting that is specified for the workgroup, and also uses the location for
     * storing query results specified in the workgroup. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a> and <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
    inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
    template<typename ExpectedBucketOwnerT = Aws::String>
    void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value); }
    template<typename ExpectedBucketOwnerT = Aws::String>
    ResultConfiguration& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) { SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that an Amazon S3 canned ACL should be set to control ownership of
     * stored query results. Currently the only supported canned ACL is
     * <code>BUCKET_OWNER_FULL_CONTROL</code>. This is a client-side setting. If
     * workgroup settings override client-side settings, then the query uses the ACL
     * configuration that is specified for the workgroup, and also uses the location
     * for storing query results specified in the workgroup. For more information, see
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a> and <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline const AclConfiguration& GetAclConfiguration() const { return m_aclConfiguration; }
    inline bool AclConfigurationHasBeenSet() const { return m_aclConfigurationHasBeenSet; }
    template<typename AclConfigurationT = AclConfiguration>
    void SetAclConfiguration(AclConfigurationT&& value) { m_aclConfigurationHasBeenSet = true; m_aclConfiguration = std::forward<AclConfigurationT>(value); }
    template<typename AclConfigurationT = AclConfiguration>
    ResultConfiguration& WithAclConfiguration(AclConfigurationT&& value) { SetAclConfiguration(std::forward<AclConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;

    AclConfiguration m_aclConfiguration;
    bool m_aclConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
