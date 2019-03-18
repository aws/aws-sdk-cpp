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
   * <p>The information about the updates in the query results, such as output
   * location and encryption configuration for the query results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ResultConfigurationUpdates">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API ResultConfigurationUpdates
  {
  public:
    ResultConfigurationUpdates();
    ResultConfigurationUpdates(Aws::Utils::Json::JsonView jsonValue);
    ResultConfigurationUpdates& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ResultConfigurationUpdates& WithOutputLocation(const Aws::String& value) { SetOutputLocation(value); return *this;}

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
    inline ResultConfigurationUpdates& WithOutputLocation(Aws::String&& value) { SetOutputLocation(std::move(value)); return *this;}

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
    inline ResultConfigurationUpdates& WithOutputLocation(const char* value) { SetOutputLocation(value); return *this;}


    /**
     * <p>If set to "true", indicates that the previously-specified query results
     * location (also known as a client-side setting) for queries in this workgroup
     * should be ignored and set to null. If set to "false" or not set, and a value is
     * present in the OutputLocation in ResultConfigurationUpdates (the client-side
     * setting), the OutputLocation in the workgroup's ResultConfiguration will be
     * updated with the new value. For more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline bool GetRemoveOutputLocation() const{ return m_removeOutputLocation; }

    /**
     * <p>If set to "true", indicates that the previously-specified query results
     * location (also known as a client-side setting) for queries in this workgroup
     * should be ignored and set to null. If set to "false" or not set, and a value is
     * present in the OutputLocation in ResultConfigurationUpdates (the client-side
     * setting), the OutputLocation in the workgroup's ResultConfiguration will be
     * updated with the new value. For more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline bool RemoveOutputLocationHasBeenSet() const { return m_removeOutputLocationHasBeenSet; }

    /**
     * <p>If set to "true", indicates that the previously-specified query results
     * location (also known as a client-side setting) for queries in this workgroup
     * should be ignored and set to null. If set to "false" or not set, and a value is
     * present in the OutputLocation in ResultConfigurationUpdates (the client-side
     * setting), the OutputLocation in the workgroup's ResultConfiguration will be
     * updated with the new value. For more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline void SetRemoveOutputLocation(bool value) { m_removeOutputLocationHasBeenSet = true; m_removeOutputLocation = value; }

    /**
     * <p>If set to "true", indicates that the previously-specified query results
     * location (also known as a client-side setting) for queries in this workgroup
     * should be ignored and set to null. If set to "false" or not set, and a value is
     * present in the OutputLocation in ResultConfigurationUpdates (the client-side
     * setting), the OutputLocation in the workgroup's ResultConfiguration will be
     * updated with the new value. For more information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline ResultConfigurationUpdates& WithRemoveOutputLocation(bool value) { SetRemoveOutputLocation(value); return *this;}


    /**
     * <p>The encryption configuration for the query results.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>The encryption configuration for the query results.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>The encryption configuration for the query results.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>The encryption configuration for the query results.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>The encryption configuration for the query results.</p>
     */
    inline ResultConfigurationUpdates& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>The encryption configuration for the query results.</p>
     */
    inline ResultConfigurationUpdates& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>If set to "true", indicates that the previously-specified encryption
     * configuration (also known as the client-side setting) for queries in this
     * workgroup should be ignored and set to null. If set to "false" or not set, and a
     * value is present in the EncryptionConfiguration in ResultConfigurationUpdates
     * (the client-side setting), the EncryptionConfiguration in the workgroup's
     * ResultConfiguration will be updated with the new value. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline bool GetRemoveEncryptionConfiguration() const{ return m_removeEncryptionConfiguration; }

    /**
     * <p>If set to "true", indicates that the previously-specified encryption
     * configuration (also known as the client-side setting) for queries in this
     * workgroup should be ignored and set to null. If set to "false" or not set, and a
     * value is present in the EncryptionConfiguration in ResultConfigurationUpdates
     * (the client-side setting), the EncryptionConfiguration in the workgroup's
     * ResultConfiguration will be updated with the new value. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline bool RemoveEncryptionConfigurationHasBeenSet() const { return m_removeEncryptionConfigurationHasBeenSet; }

    /**
     * <p>If set to "true", indicates that the previously-specified encryption
     * configuration (also known as the client-side setting) for queries in this
     * workgroup should be ignored and set to null. If set to "false" or not set, and a
     * value is present in the EncryptionConfiguration in ResultConfigurationUpdates
     * (the client-side setting), the EncryptionConfiguration in the workgroup's
     * ResultConfiguration will be updated with the new value. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline void SetRemoveEncryptionConfiguration(bool value) { m_removeEncryptionConfigurationHasBeenSet = true; m_removeEncryptionConfiguration = value; }

    /**
     * <p>If set to "true", indicates that the previously-specified encryption
     * configuration (also known as the client-side setting) for queries in this
     * workgroup should be ignored and set to null. If set to "false" or not set, and a
     * value is present in the EncryptionConfiguration in ResultConfigurationUpdates
     * (the client-side setting), the EncryptionConfiguration in the workgroup's
     * ResultConfiguration will be updated with the new value. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/workgroups-settings-override.html">Workgroup
     * Settings Override Client-Side Settings</a>.</p>
     */
    inline ResultConfigurationUpdates& WithRemoveEncryptionConfiguration(bool value) { SetRemoveEncryptionConfiguration(value); return *this;}

  private:

    Aws::String m_outputLocation;
    bool m_outputLocationHasBeenSet;

    bool m_removeOutputLocation;
    bool m_removeOutputLocationHasBeenSet;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet;

    bool m_removeEncryptionConfiguration;
    bool m_removeEncryptionConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
