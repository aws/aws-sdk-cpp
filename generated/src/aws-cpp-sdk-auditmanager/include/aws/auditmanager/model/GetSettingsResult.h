/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/Settings.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AuditManager
{
namespace Model
{
  class GetSettingsResult
  {
  public:
    AWS_AUDITMANAGER_API GetSettingsResult();
    AWS_AUDITMANAGER_API GetSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The settings object that holds all supported Audit Manager settings. </p>
     */
    inline const Settings& GetSettings() const{ return m_settings; }

    /**
     * <p> The settings object that holds all supported Audit Manager settings. </p>
     */
    inline void SetSettings(const Settings& value) { m_settings = value; }

    /**
     * <p> The settings object that holds all supported Audit Manager settings. </p>
     */
    inline void SetSettings(Settings&& value) { m_settings = std::move(value); }

    /**
     * <p> The settings object that holds all supported Audit Manager settings. </p>
     */
    inline GetSettingsResult& WithSettings(const Settings& value) { SetSettings(value); return *this;}

    /**
     * <p> The settings object that holds all supported Audit Manager settings. </p>
     */
    inline GetSettingsResult& WithSettings(Settings&& value) { SetSettings(std::move(value)); return *this;}

  private:

    Settings m_settings;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
