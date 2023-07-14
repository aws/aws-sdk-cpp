﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/PackageType.h>
#include <aws/es/model/PackageStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Basic information about a package.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/PackageDetails">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API PackageDetails
  {
  public:
    PackageDetails();
    PackageDetails(Aws::Utils::Json::JsonView jsonValue);
    PackageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline PackageDetails& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}

    /**
     * <p>Internal ID of the package.</p>
     */
    inline PackageDetails& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}

    /**
     * <p>Internal ID of the package.</p>
     */
    inline PackageDetails& WithPackageID(const char* value) { SetPackageID(value); return *this;}


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
    inline PackageDetails& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>User specified name of the package.</p>
     */
    inline PackageDetails& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>User specified name of the package.</p>
     */
    inline PackageDetails& WithPackageName(const char* value) { SetPackageName(value); return *this;}


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
    inline PackageDetails& WithPackageType(const PackageType& value) { SetPackageType(value); return *this;}

    /**
     * <p>Currently supports only TXT-DICTIONARY.</p>
     */
    inline PackageDetails& WithPackageType(PackageType&& value) { SetPackageType(std::move(value)); return *this;}


    /**
     * <p>User-specified description of the package.</p>
     */
    inline const Aws::String& GetPackageDescription() const{ return m_packageDescription; }

    /**
     * <p>User-specified description of the package.</p>
     */
    inline bool PackageDescriptionHasBeenSet() const { return m_packageDescriptionHasBeenSet; }

    /**
     * <p>User-specified description of the package.</p>
     */
    inline void SetPackageDescription(const Aws::String& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = value; }

    /**
     * <p>User-specified description of the package.</p>
     */
    inline void SetPackageDescription(Aws::String&& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = std::move(value); }

    /**
     * <p>User-specified description of the package.</p>
     */
    inline void SetPackageDescription(const char* value) { m_packageDescriptionHasBeenSet = true; m_packageDescription.assign(value); }

    /**
     * <p>User-specified description of the package.</p>
     */
    inline PackageDetails& WithPackageDescription(const Aws::String& value) { SetPackageDescription(value); return *this;}

    /**
     * <p>User-specified description of the package.</p>
     */
    inline PackageDetails& WithPackageDescription(Aws::String&& value) { SetPackageDescription(std::move(value)); return *this;}

    /**
     * <p>User-specified description of the package.</p>
     */
    inline PackageDetails& WithPackageDescription(const char* value) { SetPackageDescription(value); return *this;}


    /**
     * <p>Current state of the package. Values are
     * COPYING/COPY_FAILED/AVAILABLE/DELETING/DELETE_FAILED</p>
     */
    inline const PackageStatus& GetPackageStatus() const{ return m_packageStatus; }

    /**
     * <p>Current state of the package. Values are
     * COPYING/COPY_FAILED/AVAILABLE/DELETING/DELETE_FAILED</p>
     */
    inline bool PackageStatusHasBeenSet() const { return m_packageStatusHasBeenSet; }

    /**
     * <p>Current state of the package. Values are
     * COPYING/COPY_FAILED/AVAILABLE/DELETING/DELETE_FAILED</p>
     */
    inline void SetPackageStatus(const PackageStatus& value) { m_packageStatusHasBeenSet = true; m_packageStatus = value; }

    /**
     * <p>Current state of the package. Values are
     * COPYING/COPY_FAILED/AVAILABLE/DELETING/DELETE_FAILED</p>
     */
    inline void SetPackageStatus(PackageStatus&& value) { m_packageStatusHasBeenSet = true; m_packageStatus = std::move(value); }

    /**
     * <p>Current state of the package. Values are
     * COPYING/COPY_FAILED/AVAILABLE/DELETING/DELETE_FAILED</p>
     */
    inline PackageDetails& WithPackageStatus(const PackageStatus& value) { SetPackageStatus(value); return *this;}

    /**
     * <p>Current state of the package. Values are
     * COPYING/COPY_FAILED/AVAILABLE/DELETING/DELETE_FAILED</p>
     */
    inline PackageDetails& WithPackageStatus(PackageStatus&& value) { SetPackageStatus(std::move(value)); return *this;}


    /**
     * <p>Timestamp which tells creation date of the package.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Timestamp which tells creation date of the package.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Timestamp which tells creation date of the package.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Timestamp which tells creation date of the package.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Timestamp which tells creation date of the package.</p>
     */
    inline PackageDetails& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Timestamp which tells creation date of the package.</p>
     */
    inline PackageDetails& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    
    inline PackageDetails& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    
    inline PackageDetails& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetAvailablePackageVersion() const{ return m_availablePackageVersion; }

    
    inline bool AvailablePackageVersionHasBeenSet() const { return m_availablePackageVersionHasBeenSet; }

    
    inline void SetAvailablePackageVersion(const Aws::String& value) { m_availablePackageVersionHasBeenSet = true; m_availablePackageVersion = value; }

    
    inline void SetAvailablePackageVersion(Aws::String&& value) { m_availablePackageVersionHasBeenSet = true; m_availablePackageVersion = std::move(value); }

    
    inline void SetAvailablePackageVersion(const char* value) { m_availablePackageVersionHasBeenSet = true; m_availablePackageVersion.assign(value); }

    
    inline PackageDetails& WithAvailablePackageVersion(const Aws::String& value) { SetAvailablePackageVersion(value); return *this;}

    
    inline PackageDetails& WithAvailablePackageVersion(Aws::String&& value) { SetAvailablePackageVersion(std::move(value)); return *this;}

    
    inline PackageDetails& WithAvailablePackageVersion(const char* value) { SetAvailablePackageVersion(value); return *this;}


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
    inline PackageDetails& WithErrorDetails(const ErrorDetails& value) { SetErrorDetails(value); return *this;}

    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline PackageDetails& WithErrorDetails(ErrorDetails&& value) { SetErrorDetails(std::move(value)); return *this;}

  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet;

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet;

    PackageType m_packageType;
    bool m_packageTypeHasBeenSet;

    Aws::String m_packageDescription;
    bool m_packageDescriptionHasBeenSet;

    PackageStatus m_packageStatus;
    bool m_packageStatusHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;

    Aws::String m_availablePackageVersion;
    bool m_availablePackageVersionHasBeenSet;

    ErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
