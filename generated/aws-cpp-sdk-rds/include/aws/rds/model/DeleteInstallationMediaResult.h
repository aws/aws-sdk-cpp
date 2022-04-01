/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/InstallationMediaFailureCause.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  /**
   * <p>Contains the installation media for a DB engine that requires an on-premises
   * customer provided license, such as Microsoft SQL Server.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/InstallationMedia">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API DeleteInstallationMediaResult
  {
  public:
    DeleteInstallationMediaResult();
    DeleteInstallationMediaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteInstallationMediaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The installation medium ID.</p>
     */
    inline const Aws::String& GetInstallationMediaId() const{ return m_installationMediaId; }

    /**
     * <p>The installation medium ID.</p>
     */
    inline void SetInstallationMediaId(const Aws::String& value) { m_installationMediaId = value; }

    /**
     * <p>The installation medium ID.</p>
     */
    inline void SetInstallationMediaId(Aws::String&& value) { m_installationMediaId = std::move(value); }

    /**
     * <p>The installation medium ID.</p>
     */
    inline void SetInstallationMediaId(const char* value) { m_installationMediaId.assign(value); }

    /**
     * <p>The installation medium ID.</p>
     */
    inline DeleteInstallationMediaResult& WithInstallationMediaId(const Aws::String& value) { SetInstallationMediaId(value); return *this;}

    /**
     * <p>The installation medium ID.</p>
     */
    inline DeleteInstallationMediaResult& WithInstallationMediaId(Aws::String&& value) { SetInstallationMediaId(std::move(value)); return *this;}

    /**
     * <p>The installation medium ID.</p>
     */
    inline DeleteInstallationMediaResult& WithInstallationMediaId(const char* value) { SetInstallationMediaId(value); return *this;}


    /**
     * <p>The custom Availability Zone (AZ) that contains the installation media.</p>
     */
    inline const Aws::String& GetCustomAvailabilityZoneId() const{ return m_customAvailabilityZoneId; }

    /**
     * <p>The custom Availability Zone (AZ) that contains the installation media.</p>
     */
    inline void SetCustomAvailabilityZoneId(const Aws::String& value) { m_customAvailabilityZoneId = value; }

    /**
     * <p>The custom Availability Zone (AZ) that contains the installation media.</p>
     */
    inline void SetCustomAvailabilityZoneId(Aws::String&& value) { m_customAvailabilityZoneId = std::move(value); }

    /**
     * <p>The custom Availability Zone (AZ) that contains the installation media.</p>
     */
    inline void SetCustomAvailabilityZoneId(const char* value) { m_customAvailabilityZoneId.assign(value); }

    /**
     * <p>The custom Availability Zone (AZ) that contains the installation media.</p>
     */
    inline DeleteInstallationMediaResult& WithCustomAvailabilityZoneId(const Aws::String& value) { SetCustomAvailabilityZoneId(value); return *this;}

    /**
     * <p>The custom Availability Zone (AZ) that contains the installation media.</p>
     */
    inline DeleteInstallationMediaResult& WithCustomAvailabilityZoneId(Aws::String&& value) { SetCustomAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p>The custom Availability Zone (AZ) that contains the installation media.</p>
     */
    inline DeleteInstallationMediaResult& WithCustomAvailabilityZoneId(const char* value) { SetCustomAvailabilityZoneId(value); return *this;}


    /**
     * <p>The DB engine.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The DB engine.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engine = value; }

    /**
     * <p>The DB engine.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engine = std::move(value); }

    /**
     * <p>The DB engine.</p>
     */
    inline void SetEngine(const char* value) { m_engine.assign(value); }

    /**
     * <p>The DB engine.</p>
     */
    inline DeleteInstallationMediaResult& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The DB engine.</p>
     */
    inline DeleteInstallationMediaResult& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The DB engine.</p>
     */
    inline DeleteInstallationMediaResult& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The engine version of the DB engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version of the DB engine.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersion = value; }

    /**
     * <p>The engine version of the DB engine.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersion = std::move(value); }

    /**
     * <p>The engine version of the DB engine.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersion.assign(value); }

    /**
     * <p>The engine version of the DB engine.</p>
     */
    inline DeleteInstallationMediaResult& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version of the DB engine.</p>
     */
    inline DeleteInstallationMediaResult& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The engine version of the DB engine.</p>
     */
    inline DeleteInstallationMediaResult& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The path to the installation medium for the DB engine.</p>
     */
    inline const Aws::String& GetEngineInstallationMediaPath() const{ return m_engineInstallationMediaPath; }

    /**
     * <p>The path to the installation medium for the DB engine.</p>
     */
    inline void SetEngineInstallationMediaPath(const Aws::String& value) { m_engineInstallationMediaPath = value; }

    /**
     * <p>The path to the installation medium for the DB engine.</p>
     */
    inline void SetEngineInstallationMediaPath(Aws::String&& value) { m_engineInstallationMediaPath = std::move(value); }

    /**
     * <p>The path to the installation medium for the DB engine.</p>
     */
    inline void SetEngineInstallationMediaPath(const char* value) { m_engineInstallationMediaPath.assign(value); }

    /**
     * <p>The path to the installation medium for the DB engine.</p>
     */
    inline DeleteInstallationMediaResult& WithEngineInstallationMediaPath(const Aws::String& value) { SetEngineInstallationMediaPath(value); return *this;}

    /**
     * <p>The path to the installation medium for the DB engine.</p>
     */
    inline DeleteInstallationMediaResult& WithEngineInstallationMediaPath(Aws::String&& value) { SetEngineInstallationMediaPath(std::move(value)); return *this;}

    /**
     * <p>The path to the installation medium for the DB engine.</p>
     */
    inline DeleteInstallationMediaResult& WithEngineInstallationMediaPath(const char* value) { SetEngineInstallationMediaPath(value); return *this;}


    /**
     * <p>The path to the installation medium for the operating system associated with
     * the DB engine.</p>
     */
    inline const Aws::String& GetOSInstallationMediaPath() const{ return m_oSInstallationMediaPath; }

    /**
     * <p>The path to the installation medium for the operating system associated with
     * the DB engine.</p>
     */
    inline void SetOSInstallationMediaPath(const Aws::String& value) { m_oSInstallationMediaPath = value; }

    /**
     * <p>The path to the installation medium for the operating system associated with
     * the DB engine.</p>
     */
    inline void SetOSInstallationMediaPath(Aws::String&& value) { m_oSInstallationMediaPath = std::move(value); }

    /**
     * <p>The path to the installation medium for the operating system associated with
     * the DB engine.</p>
     */
    inline void SetOSInstallationMediaPath(const char* value) { m_oSInstallationMediaPath.assign(value); }

    /**
     * <p>The path to the installation medium for the operating system associated with
     * the DB engine.</p>
     */
    inline DeleteInstallationMediaResult& WithOSInstallationMediaPath(const Aws::String& value) { SetOSInstallationMediaPath(value); return *this;}

    /**
     * <p>The path to the installation medium for the operating system associated with
     * the DB engine.</p>
     */
    inline DeleteInstallationMediaResult& WithOSInstallationMediaPath(Aws::String&& value) { SetOSInstallationMediaPath(std::move(value)); return *this;}

    /**
     * <p>The path to the installation medium for the operating system associated with
     * the DB engine.</p>
     */
    inline DeleteInstallationMediaResult& WithOSInstallationMediaPath(const char* value) { SetOSInstallationMediaPath(value); return *this;}


    /**
     * <p>The status of the installation medium.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the installation medium.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the installation medium.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the installation medium.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the installation medium.</p>
     */
    inline DeleteInstallationMediaResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the installation medium.</p>
     */
    inline DeleteInstallationMediaResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the installation medium.</p>
     */
    inline DeleteInstallationMediaResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>If an installation media failure occurred, the cause of the failure.</p>
     */
    inline const InstallationMediaFailureCause& GetFailureCause() const{ return m_failureCause; }

    /**
     * <p>If an installation media failure occurred, the cause of the failure.</p>
     */
    inline void SetFailureCause(const InstallationMediaFailureCause& value) { m_failureCause = value; }

    /**
     * <p>If an installation media failure occurred, the cause of the failure.</p>
     */
    inline void SetFailureCause(InstallationMediaFailureCause&& value) { m_failureCause = std::move(value); }

    /**
     * <p>If an installation media failure occurred, the cause of the failure.</p>
     */
    inline DeleteInstallationMediaResult& WithFailureCause(const InstallationMediaFailureCause& value) { SetFailureCause(value); return *this;}

    /**
     * <p>If an installation media failure occurred, the cause of the failure.</p>
     */
    inline DeleteInstallationMediaResult& WithFailureCause(InstallationMediaFailureCause&& value) { SetFailureCause(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteInstallationMediaResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteInstallationMediaResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_installationMediaId;

    Aws::String m_customAvailabilityZoneId;

    Aws::String m_engine;

    Aws::String m_engineVersion;

    Aws::String m_engineInstallationMediaPath;

    Aws::String m_oSInstallationMediaPath;

    Aws::String m_status;

    InstallationMediaFailureCause m_failureCause;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
