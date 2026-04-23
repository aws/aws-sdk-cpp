/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/EncryptionConfiguration.h>
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
   * <p>The location in Amazon S3 where query results are stored and the encryption
   * option, if any, used for query results. These are known as "client-side
   * settings". If workgroup settings override client-side settings, then the query
   * uses the location for the query results and the encryption configuration that
   * are specified for the workgroup.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ResultConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API ResultConfiguration
  {
  public:
    ResultConfiguration();
    ResultConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ResultConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The location in Amazon S3 where your query results are stored, such as
     * <code>s3://path/to/query/bucket/</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Queries and
     * Query Result Files.</a> If workgroup settings override client-side settings,
     * then the query uses the location for the query results and the encryption
     * configuration that are specified for the workgroup. The "workgroup settings
     * override" is specified in EnforceWorkGroupConfiguration (true/false) in the
     * WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline const Aws::String& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>The location in Amazon S3 where your query results are stored, such as
     * <code>s3://path/to/query/bucket/</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Queries and
     * Query Result Files.</a> If workgroup settings override client-side settings,
     * then the query uses the location for the query results and the encryption
     * configuration that are specified for the workgroup. The "workgroup settings
     * override" is specified in EnforceWorkGroupConfiguration (true/false) in the
     * WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }

    /**
     * <p>The location in Amazon S3 where your query results are stored, such as
     * <code>s3://path/to/query/bucket/</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Queries and
     * Query Result Files.</a> If workgroup settings override client-side settings,
     * then the query uses the location for the query results and the encryption
     * configuration that are specified for the workgroup. The "workgroup settings
     * override" is specified in EnforceWorkGroupConfiguration (true/false) in the
     * WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline void SetOutputLocation(const Aws::String& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>The location in Amazon S3 where your query results are stored, such as
     * <code>s3://path/to/query/bucket/</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Queries and
     * Query Result Files.</a> If workgroup settings override client-side settings,
     * then the query uses the location for the query results and the encryption
     * configuration that are specified for the workgroup. The "workgroup settings
     * override" is specified in EnforceWorkGroupConfiguration (true/false) in the
     * WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline void SetOutputLocation(Aws::String&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    /**
     * <p>The location in Amazon S3 where your query results are stored, such as
     * <code>s3://path/to/query/bucket/</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Queries and
     * Query Result Files.</a> If workgroup settings override client-side settings,
     * then the query uses the location for the query results and the encryption
     * configuration that are specified for the workgroup. The "workgroup settings
     * override" is specified in EnforceWorkGroupConfiguration (true/false) in the
     * WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline void SetOutputLocation(const char* value) { m_outputLocationHasBeenSet = true; m_outputLocation.assign(value); }

    /**
     * <p>The location in Amazon S3 where your query results are stored, such as
     * <code>s3://path/to/query/bucket/</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Queries and
     * Query Result Files.</a> If workgroup settings override client-side settings,
     * then the query uses the location for the query results and the encryption
     * configuration that are specified for the workgroup. The "workgroup settings
     * override" is specified in EnforceWorkGroupConfiguration (true/false) in the
     * WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline ResultConfiguration& WithOutputLocation(const Aws::String& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>The location in Amazon S3 where your query results are stored, such as
     * <code>s3://path/to/query/bucket/</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Queries and
     * Query Result Files.</a> If workgroup settings override client-side settings,
     * then the query uses the location for the query results and the encryption
     * configuration that are specified for the workgroup. The "workgroup settings
     * override" is specified in EnforceWorkGroupConfiguration (true/false) in the
     * WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline ResultConfiguration& WithOutputLocation(Aws::String&& value) { SetOutputLocation(std::move(value)); return *this;}

    /**
     * <p>The location in Amazon S3 where your query results are stored, such as
     * <code>s3://path/to/query/bucket/</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Queries and
     * Query Result Files.</a> If workgroup settings override client-side settings,
     * then the query uses the location for the query results and the encryption
     * configuration that are specified for the workgroup. The "workgroup settings
     * override" is specified in EnforceWorkGroupConfiguration (true/false) in the
     * WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline ResultConfiguration& WithOutputLocation(const char* value) { SetOutputLocation(value); return *this;}


    /**
     * <p>If query results are encrypted in Amazon S3, indicates the encryption option
     * used (for example, <code>SSE-KMS</code> or <code>CSE-KMS</code>) and key
     * information. This is a client-side setting. If workgroup settings override
     * client-side settings, then the query uses the encryption configuration that is
     * specified for the workgroup, and also uses the location for storing query
     * results specified in the workgroup. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a> and <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>If query results are encrypted in Amazon S3, indicates the encryption option
     * used (for example, <code>SSE-KMS</code> or <code>CSE-KMS</code>) and key
     * information. This is a client-side setting. If workgroup settings override
     * client-side settings, then the query uses the encryption configuration that is
     * specified for the workgroup, and also uses the location for storing query
     * results specified in the workgroup. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a> and <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>If query results are encrypted in Amazon S3, indicates the encryption option
     * used (for example, <code>SSE-KMS</code> or <code>CSE-KMS</code>) and key
     * information. This is a client-side setting. If workgroup settings override
     * client-side settings, then the query uses the encryption configuration that is
     * specified for the workgroup, and also uses the location for storing query
     * results specified in the workgroup. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a> and <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>If query results are encrypted in Amazon S3, indicates the encryption option
     * used (for example, <code>SSE-KMS</code> or <code>CSE-KMS</code>) and key
     * information. This is a client-side setting. If workgroup settings override
     * client-side settings, then the query uses the encryption configuration that is
     * specified for the workgroup, and also uses the location for storing query
     * results specified in the workgroup. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a> and <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>If query results are encrypted in Amazon S3, indicates the encryption option
     * used (for example, <code>SSE-KMS</code> or <code>CSE-KMS</code>) and key
     * information. This is a client-side setting. If workgroup settings override
     * client-side settings, then the query uses the encryption configuration that is
     * specified for the workgroup, and also uses the location for storing query
     * results specified in the workgroup. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a> and <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline ResultConfiguration& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>If query results are encrypted in Amazon S3, indicates the encryption option
     * used (for example, <code>SSE-KMS</code> or <code>CSE-KMS</code>) and key
     * information. This is a client-side setting. If workgroup settings override
     * client-side settings, then the query uses the encryption configuration that is
     * specified for the workgroup, and also uses the location for storing query
     * results specified in the workgroup. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a> and <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline ResultConfiguration& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_outputLocation;
    bool m_outputLocationHasBeenSet;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
