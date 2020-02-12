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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/MasterUserOptions.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Specifies the advanced security configuration: whether advanced security is
   * enabled, whether the internal database option is enabled, master username and
   * password (if internal database is enabled), and master user ARN (if IAM is
   * enabled).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AdvancedSecurityOptionsInput">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API AdvancedSecurityOptionsInput
  {
  public:
    AdvancedSecurityOptionsInput();
    AdvancedSecurityOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AdvancedSecurityOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>True if advanced security is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>True if advanced security is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>True if advanced security is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>True if advanced security is enabled.</p>
     */
    inline AdvancedSecurityOptionsInput& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>True if the internal user database is enabled.</p>
     */
    inline bool GetInternalUserDatabaseEnabled() const{ return m_internalUserDatabaseEnabled; }

    /**
     * <p>True if the internal user database is enabled.</p>
     */
    inline bool InternalUserDatabaseEnabledHasBeenSet() const { return m_internalUserDatabaseEnabledHasBeenSet; }

    /**
     * <p>True if the internal user database is enabled.</p>
     */
    inline void SetInternalUserDatabaseEnabled(bool value) { m_internalUserDatabaseEnabledHasBeenSet = true; m_internalUserDatabaseEnabled = value; }

    /**
     * <p>True if the internal user database is enabled.</p>
     */
    inline AdvancedSecurityOptionsInput& WithInternalUserDatabaseEnabled(bool value) { SetInternalUserDatabaseEnabled(value); return *this;}


    /**
     * <p>Credentials for the master user: username and password, ARN, or both.</p>
     */
    inline const MasterUserOptions& GetMasterUserOptions() const{ return m_masterUserOptions; }

    /**
     * <p>Credentials for the master user: username and password, ARN, or both.</p>
     */
    inline bool MasterUserOptionsHasBeenSet() const { return m_masterUserOptionsHasBeenSet; }

    /**
     * <p>Credentials for the master user: username and password, ARN, or both.</p>
     */
    inline void SetMasterUserOptions(const MasterUserOptions& value) { m_masterUserOptionsHasBeenSet = true; m_masterUserOptions = value; }

    /**
     * <p>Credentials for the master user: username and password, ARN, or both.</p>
     */
    inline void SetMasterUserOptions(MasterUserOptions&& value) { m_masterUserOptionsHasBeenSet = true; m_masterUserOptions = std::move(value); }

    /**
     * <p>Credentials for the master user: username and password, ARN, or both.</p>
     */
    inline AdvancedSecurityOptionsInput& WithMasterUserOptions(const MasterUserOptions& value) { SetMasterUserOptions(value); return *this;}

    /**
     * <p>Credentials for the master user: username and password, ARN, or both.</p>
     */
    inline AdvancedSecurityOptionsInput& WithMasterUserOptions(MasterUserOptions&& value) { SetMasterUserOptions(std::move(value)); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    bool m_internalUserDatabaseEnabled;
    bool m_internalUserDatabaseEnabledHasBeenSet;

    MasterUserOptions m_masterUserOptions;
    bool m_masterUserOptionsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
