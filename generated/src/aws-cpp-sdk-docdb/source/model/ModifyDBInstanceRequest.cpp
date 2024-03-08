/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/ModifyDBInstanceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::DocDB::Model;
using namespace Aws::Utils;

ModifyDBInstanceRequest::ModifyDBInstanceRequest() : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_applyImmediately(false),
    m_applyImmediatelyHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_autoMinorVersionUpgrade(false),
    m_autoMinorVersionUpgradeHasBeenSet(false),
    m_newDBInstanceIdentifierHasBeenSet(false),
    m_cACertificateIdentifierHasBeenSet(false),
    m_copyTagsToSnapshot(false),
    m_copyTagsToSnapshotHasBeenSet(false),
    m_promotionTier(0),
    m_promotionTierHasBeenSet(false),
    m_enablePerformanceInsights(false),
    m_enablePerformanceInsightsHasBeenSet(false),
    m_performanceInsightsKMSKeyIdHasBeenSet(false),
    m_certificateRotationRestart(false),
    m_certificateRotationRestartHasBeenSet(false)
{
}

Aws::String ModifyDBInstanceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyDBInstance&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_dBInstanceClassHasBeenSet)
  {
    ss << "DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }

  if(m_applyImmediatelyHasBeenSet)
  {
    ss << "ApplyImmediately=" << std::boolalpha << m_applyImmediately << "&";
  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
    ss << "PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
    ss << "AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }

  if(m_newDBInstanceIdentifierHasBeenSet)
  {
    ss << "NewDBInstanceIdentifier=" << StringUtils::URLEncode(m_newDBInstanceIdentifier.c_str()) << "&";
  }

  if(m_cACertificateIdentifierHasBeenSet)
  {
    ss << "CACertificateIdentifier=" << StringUtils::URLEncode(m_cACertificateIdentifier.c_str()) << "&";
  }

  if(m_copyTagsToSnapshotHasBeenSet)
  {
    ss << "CopyTagsToSnapshot=" << std::boolalpha << m_copyTagsToSnapshot << "&";
  }

  if(m_promotionTierHasBeenSet)
  {
    ss << "PromotionTier=" << m_promotionTier << "&";
  }

  if(m_enablePerformanceInsightsHasBeenSet)
  {
    ss << "EnablePerformanceInsights=" << std::boolalpha << m_enablePerformanceInsights << "&";
  }

  if(m_performanceInsightsKMSKeyIdHasBeenSet)
  {
    ss << "PerformanceInsightsKMSKeyId=" << StringUtils::URLEncode(m_performanceInsightsKMSKeyId.c_str()) << "&";
  }

  if(m_certificateRotationRestartHasBeenSet)
  {
    ss << "CertificateRotationRestart=" << std::boolalpha << m_certificateRotationRestart << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyDBInstanceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
