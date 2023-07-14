﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/PackageType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/es/model/DomainPackageStatus.h>
#include <aws/es/model/ErrorDetails.h>
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
   * <p>Information on a package that is associated with a domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DomainPackageDetails">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API DomainPackageDetails
  {
  public:
    DomainPackageDetails();
    DomainPackageDetails(Aws::Utils::Json::JsonView jsonValue);
    DomainPackageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Internal ID of the package.</p>
     */
    inline const Aws::String& GetPackageID() const{ return m_packageID; }

    /**
     * <p>Internal ID of the package.</p>
     */
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }

    /**
     * <p>Internal ID of the package.</p>
     */
    inline void SetPackageID(const Aws::String& value) { m_packageIDHasBeenSet = true; m_packageID = value; }

    /**
     * <p>Internal ID of the package.</p>
     */
    inline void SetPackageID(Aws::String&& value) { m_packageIDHasBeenSet = true; m_packageID = std::move(value); }

    /**
     * <p>Internal ID of the package.</p>
     */
    inline void SetPackageID(const char* value) { m_packageIDHasBeenSet = true; m_packageID.assign(value); }

    /**
     * <p>Internal ID of the package.</p>
     */
    inline DomainPackageDetails& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}

    /**
     * <p>Internal ID of the package.</p>
     */
    inline DomainPackageDetails& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}

    /**
     * <p>Internal ID of the package.</p>
     */
    inline DomainPackageDetails& WithPackageID(const char* value) { SetPackageID(value); return *this;}


    /**
     * <p>User specified name of the package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }

    /**
     * <p>User specified name of the package.</p>
     */
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }

    /**
     * <p>User specified name of the package.</p>
     */
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }

    /**
     * <p>User specified name of the package.</p>
     */
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }

    /**
     * <p>User specified name of the package.</p>
     */
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }

    /**
     * <p>User specified name of the package.</p>
     */
    inline DomainPackageDetails& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>User specified name of the package.</p>
     */
    inline DomainPackageDetails& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>User specified name of the package.</p>
     */
    inline DomainPackageDetails& WithPackageName(const char* value) { SetPackageName(value); return *this;}


    /**
     * <p>Currently supports only TXT-DICTIONARY.</p>
     */
    inline const PackageType& GetPackageType() const{ return m_packageType; }

    /**
     * <p>Currently supports only TXT-DICTIONARY.</p>
     */
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }

    /**
     * <p>Currently supports only TXT-DICTIONARY.</p>
     */
    inline void SetPackageType(const PackageType& value) { m_packageTypeHasBeenSet = true; m_packageType = value; }

    /**
     * <p>Currently supports only TXT-DICTIONARY.</p>
     */
    inline void SetPackageType(PackageType&& value) { m_packageTypeHasBeenSet = true; m_packageType = std::move(value); }

    /**
     * <p>Currently supports only TXT-DICTIONARY.</p>
     */
    inline DomainPackageDetails& WithPackageType(const PackageType& value) { SetPackageType(value); return *this;}

    /**
     * <p>Currently supports only TXT-DICTIONARY.</p>
     */
    inline DomainPackageDetails& WithPackageType(PackageType&& value) { SetPackageType(std::move(value)); return *this;}


    /**
     * <p>Timestamp of the most-recent update to the association status.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>Timestamp of the most-recent update to the association status.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>Timestamp of the most-recent update to the association status.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>Timestamp of the most-recent update to the association status.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>Timestamp of the most-recent update to the association status.</p>
     */
    inline DomainPackageDetails& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>Timestamp of the most-recent update to the association status.</p>
     */
    inline DomainPackageDetails& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>Name of the domain you've associated a package with.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Name of the domain you've associated a package with.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>Name of the domain you've associated a package with.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Name of the domain you've associated a package with.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>Name of the domain you've associated a package with.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Name of the domain you've associated a package with.</p>
     */
    inline DomainPackageDetails& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Name of the domain you've associated a package with.</p>
     */
    inline DomainPackageDetails& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>Name of the domain you've associated a package with.</p>
     */
    inline DomainPackageDetails& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>State of the association. Values are
     * ASSOCIATING/ASSOCIATION_FAILED/ACTIVE/DISSOCIATING/DISSOCIATION_FAILED.</p>
     */
    inline const DomainPackageStatus& GetDomainPackageStatus() const{ return m_domainPackageStatus; }

    /**
     * <p>State of the association. Values are
     * ASSOCIATING/ASSOCIATION_FAILED/ACTIVE/DISSOCIATING/DISSOCIATION_FAILED.</p>
     */
    inline bool DomainPackageStatusHasBeenSet() const { return m_domainPackageStatusHasBeenSet; }

    /**
     * <p>State of the association. Values are
     * ASSOCIATING/ASSOCIATION_FAILED/ACTIVE/DISSOCIATING/DISSOCIATION_FAILED.</p>
     */
    inline void SetDomainPackageStatus(const DomainPackageStatus& value) { m_domainPackageStatusHasBeenSet = true; m_domainPackageStatus = value; }

    /**
     * <p>State of the association. Values are
     * ASSOCIATING/ASSOCIATION_FAILED/ACTIVE/DISSOCIATING/DISSOCIATION_FAILED.</p>
     */
    inline void SetDomainPackageStatus(DomainPackageStatus&& value) { m_domainPackageStatusHasBeenSet = true; m_domainPackageStatus = std::move(value); }

    /**
     * <p>State of the association. Values are
     * ASSOCIATING/ASSOCIATION_FAILED/ACTIVE/DISSOCIATING/DISSOCIATION_FAILED.</p>
     */
    inline DomainPackageDetails& WithDomainPackageStatus(const DomainPackageStatus& value) { SetDomainPackageStatus(value); return *this;}

    /**
     * <p>State of the association. Values are
     * ASSOCIATING/ASSOCIATION_FAILED/ACTIVE/DISSOCIATING/DISSOCIATION_FAILED.</p>
     */
    inline DomainPackageDetails& WithDomainPackageStatus(DomainPackageStatus&& value) { SetDomainPackageStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }

    
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }

    
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }

    
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }

    
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }

    
    inline DomainPackageDetails& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}

    
    inline DomainPackageDetails& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}

    
    inline DomainPackageDetails& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}


    /**
     * <p>The relative path on Amazon ES nodes, which can be used as synonym_path when
     * the package is synonym file.</p>
     */
    inline const Aws::String& GetReferencePath() const{ return m_referencePath; }

    /**
     * <p>The relative path on Amazon ES nodes, which can be used as synonym_path when
     * the package is synonym file.</p>
     */
    inline bool ReferencePathHasBeenSet() const { return m_referencePathHasBeenSet; }

    /**
     * <p>The relative path on Amazon ES nodes, which can be used as synonym_path when
     * the package is synonym file.</p>
     */
    inline void SetReferencePath(const Aws::String& value) { m_referencePathHasBeenSet = true; m_referencePath = value; }

    /**
     * <p>The relative path on Amazon ES nodes, which can be used as synonym_path when
     * the package is synonym file.</p>
     */
    inline void SetReferencePath(Aws::String&& value) { m_referencePathHasBeenSet = true; m_referencePath = std::move(value); }

    /**
     * <p>The relative path on Amazon ES nodes, which can be used as synonym_path when
     * the package is synonym file.</p>
     */
    inline void SetReferencePath(const char* value) { m_referencePathHasBeenSet = true; m_referencePath.assign(value); }

    /**
     * <p>The relative path on Amazon ES nodes, which can be used as synonym_path when
     * the package is synonym file.</p>
     */
    inline DomainPackageDetails& WithReferencePath(const Aws::String& value) { SetReferencePath(value); return *this;}

    /**
     * <p>The relative path on Amazon ES nodes, which can be used as synonym_path when
     * the package is synonym file.</p>
     */
    inline DomainPackageDetails& WithReferencePath(Aws::String&& value) { SetReferencePath(std::move(value)); return *this;}

    /**
     * <p>The relative path on Amazon ES nodes, which can be used as synonym_path when
     * the package is synonym file.</p>
     */
    inline DomainPackageDetails& WithReferencePath(const char* value) { SetReferencePath(value); return *this;}


    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline const ErrorDetails& GetErrorDetails() const{ return m_errorDetails; }

    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }

    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline void SetErrorDetails(const ErrorDetails& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }

    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline void SetErrorDetails(ErrorDetails&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::move(value); }

    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline DomainPackageDetails& WithErrorDetails(const ErrorDetails& value) { SetErrorDetails(value); return *this;}

    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline DomainPackageDetails& WithErrorDetails(ErrorDetails&& value) { SetErrorDetails(std::move(value)); return *this;}

  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet;

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet;

    PackageType m_packageType;
    bool m_packageTypeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    DomainPackageStatus m_domainPackageStatus;
    bool m_domainPackageStatusHasBeenSet;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet;

    Aws::String m_referencePath;
    bool m_referencePathHasBeenSet;

    ErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
