﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class ListAssociationsForLicenseConfigurationRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API ListAssociationsForLicenseConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssociationsForLicenseConfiguration"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of a license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const{ return m_licenseConfigurationArn; }
    inline bool LicenseConfigurationArnHasBeenSet() const { return m_licenseConfigurationArnHasBeenSet; }
    inline void SetLicenseConfigurationArn(const Aws::String& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = value; }
    inline void SetLicenseConfigurationArn(Aws::String&& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = std::move(value); }
    inline void SetLicenseConfigurationArn(const char* value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn.assign(value); }
    inline ListAssociationsForLicenseConfigurationRequest& WithLicenseConfigurationArn(const Aws::String& value) { SetLicenseConfigurationArn(value); return *this;}
    inline ListAssociationsForLicenseConfigurationRequest& WithLicenseConfigurationArn(Aws::String&& value) { SetLicenseConfigurationArn(std::move(value)); return *this;}
    inline ListAssociationsForLicenseConfigurationRequest& WithLicenseConfigurationArn(const char* value) { SetLicenseConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAssociationsForLicenseConfigurationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAssociationsForLicenseConfigurationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssociationsForLicenseConfigurationRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssociationsForLicenseConfigurationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_licenseConfigurationArn;
    bool m_licenseConfigurationArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
