/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/InstallationMediaFailureCause.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
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
  class AWS_RDS_API InstallationMedia
  {
  public:
    InstallationMedia();
    InstallationMedia(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstallationMedia& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The installation medium ID.</p>
     */
    inline const Aws::String& GetInstallationMediaId() const{ return m_installationMediaId; }

    /**
     * <p>The installation medium ID.</p>
     */
    inline bool InstallationMediaIdHasBeenSet() const { return m_installationMediaIdHasBeenSet; }

    /**
     * <p>The installation medium ID.</p>
     */
    inline void SetInstallationMediaId(const Aws::String& value) { m_installationMediaIdHasBeenSet = true; m_installationMediaId = value; }

    /**
     * <p>The installation medium ID.</p>
     */
    inline void SetInstallationMediaId(Aws::String&& value) { m_installationMediaIdHasBeenSet = true; m_installationMediaId = std::move(value); }

    /**
     * <p>The installation medium ID.</p>
     */
    inline void SetInstallationMediaId(const char* value) { m_installationMediaIdHasBeenSet = true; m_installationMediaId.assign(value); }

    /**
     * <p>The installation medium ID.</p>
     */
    inline InstallationMedia& WithInstallationMediaId(const Aws::String& value) { SetInstallationMediaId(value); return *this;}

    /**
     * <p>The installation medium ID.</p>
     */
    inline InstallationMedia& WithInstallationMediaId(Aws::String&& value) { SetInstallationMediaId(std::move(value)); return *this;}

    /**
     * <p>The installation medium ID.</p>
     */
    inline InstallationMedia& WithInstallationMediaId(const char* value) { SetInstallationMediaId(value); return *this;}


    /**
     * <p>The custom Availability Zone (AZ) that contains the installation media.</p>
     */
    inline const Aws::String& GetCustomAvailabilityZoneId() const{ return m_customAvailabilityZoneId; }

    /**
     * <p>The custom Availability Zone (AZ) that contains the installation media.</p>
     */
    inline bool CustomAvailabilityZoneIdHasBeenSet() const { return m_customAvailabilityZoneIdHasBeenSet; }

    /**
     * <p>The custom Availability Zone (AZ) that contains the installation media.</p>
     */
    inline void SetCustomAvailabilityZoneId(const Aws::String& value) { m_customAvailabilityZoneIdHasBeenSet = true; m_customAvailabilityZoneId = value; }

    /**
     * <p>The custom Availability Zone (AZ) that contains the installation media.</p>
     */
    inline void SetCustomAvailabilityZoneId(Aws::String&& value) { m_customAvailabilityZoneIdHasBeenSet = true; m_customAvailabilityZoneId = std::move(value); }

    /**
     * <p>The custom Availability Zone (AZ) that contains the installation media.</p>
     */
    inline void SetCustomAvailabilityZoneId(const char* value) { m_customAvailabilityZoneIdHasBeenSet = true; m_customAvailabilityZoneId.assign(value); }

    /**
     * <p>The custom Availability Zone (AZ) that contains the installation media.</p>
     */
    inline InstallationMedia& WithCustomAvailabilityZoneId(const Aws::String& value) { SetCustomAvailabilityZoneId(value); return *this;}

    /**
     * <p>The custom Availability Zone (AZ) that contains the installation media.</p>
     */
    inline InstallationMedia& WithCustomAvailabilityZoneId(Aws::String&& value) { SetCustomAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p>The custom Availability Zone (AZ) that contains the installation media.</p>
     */
    inline InstallationMedia& WithCustomAvailabilityZoneId(const char* value) { SetCustomAvailabilityZoneId(value); return *this;}


    /**
     * <p>The DB engine.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The DB engine.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The DB engine.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The DB engine.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The DB engine.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The DB engine.</p>
     */
    inline InstallationMedia& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The DB engine.</p>
     */
    inline InstallationMedia& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The DB engine.</p>
     */
    inline InstallationMedia& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The engine version of the DB engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version of the DB engine.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The engine version of the DB engine.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version of the DB engine.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The engine version of the DB engine.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The engine version of the DB engine.</p>
     */
    inline InstallationMedia& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version of the DB engine.</p>
     */
    inline InstallationMedia& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The engine version of the DB engine.</p>
     */
    inline InstallationMedia& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The path to the installation medium for the DB engine.</p>
     */
    inline const Aws::String& GetEngineInstallationMediaPath() const{ return m_engineInstallationMediaPath; }

    /**
     * <p>The path to the installation medium for the DB engine.</p>
     */
    inline bool EngineInstallationMediaPathHasBeenSet() const { return m_engineInstallationMediaPathHasBeenSet; }

    /**
     * <p>The path to the installation medium for the DB engine.</p>
     */
    inline void SetEngineInstallationMediaPath(const Aws::String& value) { m_engineInstallationMediaPathHasBeenSet = true; m_engineInstallationMediaPath = value; }

    /**
     * <p>The path to the installation medium for the DB engine.</p>
     */
    inline void SetEngineInstallationMediaPath(Aws::String&& value) { m_engineInstallationMediaPathHasBeenSet = true; m_engineInstallationMediaPath = std::move(value); }

    /**
     * <p>The path to the installation medium for the DB engine.</p>
     */
    inline void SetEngineInstallationMediaPath(const char* value) { m_engineInstallationMediaPathHasBeenSet = true; m_engineInstallationMediaPath.assign(value); }

    /**
     * <p>The path to the installation medium for the DB engine.</p>
     */
    inline InstallationMedia& WithEngineInstallationMediaPath(const Aws::String& value) { SetEngineInstallationMediaPath(value); return *this;}

    /**
     * <p>The path to the installation medium for the DB engine.</p>
     */
    inline InstallationMedia& WithEngineInstallationMediaPath(Aws::String&& value) { SetEngineInstallationMediaPath(std::move(value)); return *this;}

    /**
     * <p>The path to the installation medium for the DB engine.</p>
     */
    inline InstallationMedia& WithEngineInstallationMediaPath(const char* value) { SetEngineInstallationMediaPath(value); return *this;}


    /**
     * <p>The path to the installation medium for the operating system associated with
     * the DB engine.</p>
     */
    inline const Aws::String& GetOSInstallationMediaPath() const{ return m_oSInstallationMediaPath; }

    /**
     * <p>The path to the installation medium for the operating system associated with
     * the DB engine.</p>
     */
    inline bool OSInstallationMediaPathHasBeenSet() const { return m_oSInstallationMediaPathHasBeenSet; }

    /**
     * <p>The path to the installation medium for the operating system associated with
     * the DB engine.</p>
     */
    inline void SetOSInstallationMediaPath(const Aws::String& value) { m_oSInstallationMediaPathHasBeenSet = true; m_oSInstallationMediaPath = value; }

    /**
     * <p>The path to the installation medium for the operating system associated with
     * the DB engine.</p>
     */
    inline void SetOSInstallationMediaPath(Aws::String&& value) { m_oSInstallationMediaPathHasBeenSet = true; m_oSInstallationMediaPath = std::move(value); }

    /**
     * <p>The path to the installation medium for the operating system associated with
     * the DB engine.</p>
     */
    inline void SetOSInstallationMediaPath(const char* value) { m_oSInstallationMediaPathHasBeenSet = true; m_oSInstallationMediaPath.assign(value); }

    /**
     * <p>The path to the installation medium for the operating system associated with
     * the DB engine.</p>
     */
    inline InstallationMedia& WithOSInstallationMediaPath(const Aws::String& value) { SetOSInstallationMediaPath(value); return *this;}

    /**
     * <p>The path to the installation medium for the operating system associated with
     * the DB engine.</p>
     */
    inline InstallationMedia& WithOSInstallationMediaPath(Aws::String&& value) { SetOSInstallationMediaPath(std::move(value)); return *this;}

    /**
     * <p>The path to the installation medium for the operating system associated with
     * the DB engine.</p>
     */
    inline InstallationMedia& WithOSInstallationMediaPath(const char* value) { SetOSInstallationMediaPath(value); return *this;}


    /**
     * <p>The status of the installation medium.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the installation medium.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the installation medium.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the installation medium.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the installation medium.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the installation medium.</p>
     */
    inline InstallationMedia& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the installation medium.</p>
     */
    inline InstallationMedia& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the installation medium.</p>
     */
    inline InstallationMedia& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>If an installation media failure occurred, the cause of the failure.</p>
     */
    inline const InstallationMediaFailureCause& GetFailureCause() const{ return m_failureCause; }

    /**
     * <p>If an installation media failure occurred, the cause of the failure.</p>
     */
    inline bool FailureCauseHasBeenSet() const { return m_failureCauseHasBeenSet; }

    /**
     * <p>If an installation media failure occurred, the cause of the failure.</p>
     */
    inline void SetFailureCause(const InstallationMediaFailureCause& value) { m_failureCauseHasBeenSet = true; m_failureCause = value; }

    /**
     * <p>If an installation media failure occurred, the cause of the failure.</p>
     */
    inline void SetFailureCause(InstallationMediaFailureCause&& value) { m_failureCauseHasBeenSet = true; m_failureCause = std::move(value); }

    /**
     * <p>If an installation media failure occurred, the cause of the failure.</p>
     */
    inline InstallationMedia& WithFailureCause(const InstallationMediaFailureCause& value) { SetFailureCause(value); return *this;}

    /**
     * <p>If an installation media failure occurred, the cause of the failure.</p>
     */
    inline InstallationMedia& WithFailureCause(InstallationMediaFailureCause&& value) { SetFailureCause(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline bool ResponseMetadataHasBeenSet() const { return m_responseMetadataHasBeenSet; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::move(value); }

    
    inline InstallationMedia& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline InstallationMedia& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_installationMediaId;
    bool m_installationMediaIdHasBeenSet;

    Aws::String m_customAvailabilityZoneId;
    bool m_customAvailabilityZoneIdHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_engineInstallationMediaPath;
    bool m_engineInstallationMediaPathHasBeenSet;

    Aws::String m_oSInstallationMediaPath;
    bool m_oSInstallationMediaPathHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    InstallationMediaFailureCause m_failureCause;
    bool m_failureCauseHasBeenSet;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
