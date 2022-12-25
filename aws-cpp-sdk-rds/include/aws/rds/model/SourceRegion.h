/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains an Amazon Web Services Region name as the result of a successful
   * call to the <code>DescribeSourceRegions</code> action.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/SourceRegion">AWS
   * API Reference</a></p>
   */
  class SourceRegion
  {
  public:
    AWS_RDS_API SourceRegion();
    AWS_RDS_API SourceRegion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API SourceRegion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the source Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The name of the source Amazon Web Services Region.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The name of the source Amazon Web Services Region.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The name of the source Amazon Web Services Region.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The name of the source Amazon Web Services Region.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The name of the source Amazon Web Services Region.</p>
     */
    inline SourceRegion& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The name of the source Amazon Web Services Region.</p>
     */
    inline SourceRegion& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The name of the source Amazon Web Services Region.</p>
     */
    inline SourceRegion& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    /**
     * <p>The endpoint for the source Amazon Web Services Region endpoint.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint for the source Amazon Web Services Region endpoint.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint for the source Amazon Web Services Region endpoint.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint for the source Amazon Web Services Region endpoint.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint for the source Amazon Web Services Region endpoint.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint for the source Amazon Web Services Region endpoint.</p>
     */
    inline SourceRegion& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint for the source Amazon Web Services Region endpoint.</p>
     */
    inline SourceRegion& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint for the source Amazon Web Services Region endpoint.</p>
     */
    inline SourceRegion& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The status of the source Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the source Amazon Web Services Region.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the source Amazon Web Services Region.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the source Amazon Web Services Region.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the source Amazon Web Services Region.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the source Amazon Web Services Region.</p>
     */
    inline SourceRegion& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the source Amazon Web Services Region.</p>
     */
    inline SourceRegion& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the source Amazon Web Services Region.</p>
     */
    inline SourceRegion& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Whether the source Amazon Web Services Region supports replicating automated
     * backups to the current Amazon Web Services Region.</p>
     */
    inline bool GetSupportsDBInstanceAutomatedBackupsReplication() const{ return m_supportsDBInstanceAutomatedBackupsReplication; }

    /**
     * <p>Whether the source Amazon Web Services Region supports replicating automated
     * backups to the current Amazon Web Services Region.</p>
     */
    inline bool SupportsDBInstanceAutomatedBackupsReplicationHasBeenSet() const { return m_supportsDBInstanceAutomatedBackupsReplicationHasBeenSet; }

    /**
     * <p>Whether the source Amazon Web Services Region supports replicating automated
     * backups to the current Amazon Web Services Region.</p>
     */
    inline void SetSupportsDBInstanceAutomatedBackupsReplication(bool value) { m_supportsDBInstanceAutomatedBackupsReplicationHasBeenSet = true; m_supportsDBInstanceAutomatedBackupsReplication = value; }

    /**
     * <p>Whether the source Amazon Web Services Region supports replicating automated
     * backups to the current Amazon Web Services Region.</p>
     */
    inline SourceRegion& WithSupportsDBInstanceAutomatedBackupsReplication(bool value) { SetSupportsDBInstanceAutomatedBackupsReplication(value); return *this;}

  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_supportsDBInstanceAutomatedBackupsReplication;
    bool m_supportsDBInstanceAutomatedBackupsReplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
