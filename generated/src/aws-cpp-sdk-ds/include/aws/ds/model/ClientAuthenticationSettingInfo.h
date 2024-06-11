/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/ClientAuthenticationType.h>
#include <aws/ds/model/ClientAuthenticationStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains information about a client authentication method for a
   * directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ClientAuthenticationSettingInfo">AWS
   * API Reference</a></p>
   */
  class ClientAuthenticationSettingInfo
  {
  public:
    AWS_DIRECTORYSERVICE_API ClientAuthenticationSettingInfo();
    AWS_DIRECTORYSERVICE_API ClientAuthenticationSettingInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API ClientAuthenticationSettingInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of client authentication for the specified directory. If no type is
     * specified, a list of all client authentication types that are supported for the
     * directory is retrieved. </p>
     */
    inline const ClientAuthenticationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ClientAuthenticationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ClientAuthenticationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ClientAuthenticationSettingInfo& WithType(const ClientAuthenticationType& value) { SetType(value); return *this;}
    inline ClientAuthenticationSettingInfo& WithType(ClientAuthenticationType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the client authentication type is enabled or disabled for the
     * specified directory.</p>
     */
    inline const ClientAuthenticationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ClientAuthenticationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ClientAuthenticationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ClientAuthenticationSettingInfo& WithStatus(const ClientAuthenticationStatus& value) { SetStatus(value); return *this;}
    inline ClientAuthenticationSettingInfo& WithStatus(ClientAuthenticationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the status of the client authentication type was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline ClientAuthenticationSettingInfo& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline ClientAuthenticationSettingInfo& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}
  private:

    ClientAuthenticationType m_type;
    bool m_typeHasBeenSet = false;

    ClientAuthenticationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
