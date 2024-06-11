/**
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
  class DomainPackageDetails
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DomainPackageDetails();
    AWS_ELASTICSEARCHSERVICE_API DomainPackageDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API DomainPackageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Internal ID of the package.</p>
     */
    inline const Aws::String& GetPackageID() const{ return m_packageID; }
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }
    inline void SetPackageID(const Aws::String& value) { m_packageIDHasBeenSet = true; m_packageID = value; }
    inline void SetPackageID(Aws::String&& value) { m_packageIDHasBeenSet = true; m_packageID = std::move(value); }
    inline void SetPackageID(const char* value) { m_packageIDHasBeenSet = true; m_packageID.assign(value); }
    inline DomainPackageDetails& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}
    inline DomainPackageDetails& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}
    inline DomainPackageDetails& WithPackageID(const char* value) { SetPackageID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User specified name of the package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }
    inline DomainPackageDetails& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline DomainPackageDetails& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline DomainPackageDetails& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Currently supports only TXT-DICTIONARY.</p>
     */
    inline const PackageType& GetPackageType() const{ return m_packageType; }
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }
    inline void SetPackageType(const PackageType& value) { m_packageTypeHasBeenSet = true; m_packageType = value; }
    inline void SetPackageType(PackageType&& value) { m_packageTypeHasBeenSet = true; m_packageType = std::move(value); }
    inline DomainPackageDetails& WithPackageType(const PackageType& value) { SetPackageType(value); return *this;}
    inline DomainPackageDetails& WithPackageType(PackageType&& value) { SetPackageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of the most-recent update to the association status.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }
    inline DomainPackageDetails& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}
    inline DomainPackageDetails& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the domain you've associated a package with.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline DomainPackageDetails& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DomainPackageDetails& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DomainPackageDetails& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the association. Values are
     * ASSOCIATING/ASSOCIATION_FAILED/ACTIVE/DISSOCIATING/DISSOCIATION_FAILED.</p>
     */
    inline const DomainPackageStatus& GetDomainPackageStatus() const{ return m_domainPackageStatus; }
    inline bool DomainPackageStatusHasBeenSet() const { return m_domainPackageStatusHasBeenSet; }
    inline void SetDomainPackageStatus(const DomainPackageStatus& value) { m_domainPackageStatusHasBeenSet = true; m_domainPackageStatus = value; }
    inline void SetDomainPackageStatus(DomainPackageStatus&& value) { m_domainPackageStatusHasBeenSet = true; m_domainPackageStatus = std::move(value); }
    inline DomainPackageDetails& WithDomainPackageStatus(const DomainPackageStatus& value) { SetDomainPackageStatus(value); return *this;}
    inline DomainPackageDetails& WithDomainPackageStatus(DomainPackageStatus&& value) { SetDomainPackageStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }
    inline DomainPackageDetails& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}
    inline DomainPackageDetails& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}
    inline DomainPackageDetails& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path on Amazon ES nodes, which can be used as synonym_path when
     * the package is synonym file.</p>
     */
    inline const Aws::String& GetReferencePath() const{ return m_referencePath; }
    inline bool ReferencePathHasBeenSet() const { return m_referencePathHasBeenSet; }
    inline void SetReferencePath(const Aws::String& value) { m_referencePathHasBeenSet = true; m_referencePath = value; }
    inline void SetReferencePath(Aws::String&& value) { m_referencePathHasBeenSet = true; m_referencePath = std::move(value); }
    inline void SetReferencePath(const char* value) { m_referencePathHasBeenSet = true; m_referencePath.assign(value); }
    inline DomainPackageDetails& WithReferencePath(const Aws::String& value) { SetReferencePath(value); return *this;}
    inline DomainPackageDetails& WithReferencePath(Aws::String&& value) { SetReferencePath(std::move(value)); return *this;}
    inline DomainPackageDetails& WithReferencePath(const char* value) { SetReferencePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline const ErrorDetails& GetErrorDetails() const{ return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    inline void SetErrorDetails(const ErrorDetails& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }
    inline void SetErrorDetails(ErrorDetails&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::move(value); }
    inline DomainPackageDetails& WithErrorDetails(const ErrorDetails& value) { SetErrorDetails(value); return *this;}
    inline DomainPackageDetails& WithErrorDetails(ErrorDetails&& value) { SetErrorDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    PackageType m_packageType;
    bool m_packageTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    DomainPackageStatus m_domainPackageStatus;
    bool m_domainPackageStatusHasBeenSet = false;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;

    Aws::String m_referencePath;
    bool m_referencePathHasBeenSet = false;

    ErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
