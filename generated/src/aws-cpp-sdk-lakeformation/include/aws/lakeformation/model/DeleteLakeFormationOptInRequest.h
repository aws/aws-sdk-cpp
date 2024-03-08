/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/lakeformation/model/DataLakePrincipal.h>
#include <aws/lakeformation/model/Resource.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class DeleteLakeFormationOptInRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API DeleteLakeFormationOptInRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLakeFormationOptIn"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    
    inline const DataLakePrincipal& GetPrincipal() const{ return m_principal; }

    
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    
    inline void SetPrincipal(const DataLakePrincipal& value) { m_principalHasBeenSet = true; m_principal = value; }

    
    inline void SetPrincipal(DataLakePrincipal&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    
    inline DeleteLakeFormationOptInRequest& WithPrincipal(const DataLakePrincipal& value) { SetPrincipal(value); return *this;}

    
    inline DeleteLakeFormationOptInRequest& WithPrincipal(DataLakePrincipal&& value) { SetPrincipal(std::move(value)); return *this;}


    
    inline const Resource& GetResource() const{ return m_resource; }

    
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    
    inline void SetResource(const Resource& value) { m_resourceHasBeenSet = true; m_resource = value; }

    
    inline void SetResource(Resource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    
    inline DeleteLakeFormationOptInRequest& WithResource(const Resource& value) { SetResource(value); return *this;}

    
    inline DeleteLakeFormationOptInRequest& WithResource(Resource&& value) { SetResource(std::move(value)); return *this;}

  private:

    DataLakePrincipal m_principal;
    bool m_principalHasBeenSet = false;

    Resource m_resource;
    bool m_resourceHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
