/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/Resource.h>
#include <aws/lakeformation/model/DataLakePrincipal.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A single principal-resource pair that has Lake Formation permissins
   * enforced.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/LakeFormationOptInsInfo">AWS
   * API Reference</a></p>
   */
  class LakeFormationOptInsInfo
  {
  public:
    AWS_LAKEFORMATION_API LakeFormationOptInsInfo();
    AWS_LAKEFORMATION_API LakeFormationOptInsInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API LakeFormationOptInsInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Resource& GetResource() const{ return m_resource; }

    
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    
    inline void SetResource(const Resource& value) { m_resourceHasBeenSet = true; m_resource = value; }

    
    inline void SetResource(Resource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    
    inline LakeFormationOptInsInfo& WithResource(const Resource& value) { SetResource(value); return *this;}

    
    inline LakeFormationOptInsInfo& WithResource(Resource&& value) { SetResource(std::move(value)); return *this;}


    
    inline const DataLakePrincipal& GetPrincipal() const{ return m_principal; }

    
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    
    inline void SetPrincipal(const DataLakePrincipal& value) { m_principalHasBeenSet = true; m_principal = value; }

    
    inline void SetPrincipal(DataLakePrincipal&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    
    inline LakeFormationOptInsInfo& WithPrincipal(const DataLakePrincipal& value) { SetPrincipal(value); return *this;}

    
    inline LakeFormationOptInsInfo& WithPrincipal(DataLakePrincipal&& value) { SetPrincipal(std::move(value)); return *this;}


    /**
     * <p>The last modified date and time of the record.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The last modified date and time of the record.</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>The last modified date and time of the record.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>The last modified date and time of the record.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>The last modified date and time of the record.</p>
     */
    inline LakeFormationOptInsInfo& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The last modified date and time of the record.</p>
     */
    inline LakeFormationOptInsInfo& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>The user who updated the record.</p>
     */
    inline const Aws::String& GetLastUpdatedBy() const{ return m_lastUpdatedBy; }

    /**
     * <p>The user who updated the record.</p>
     */
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }

    /**
     * <p>The user who updated the record.</p>
     */
    inline void SetLastUpdatedBy(const Aws::String& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = value; }

    /**
     * <p>The user who updated the record.</p>
     */
    inline void SetLastUpdatedBy(Aws::String&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::move(value); }

    /**
     * <p>The user who updated the record.</p>
     */
    inline void SetLastUpdatedBy(const char* value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy.assign(value); }

    /**
     * <p>The user who updated the record.</p>
     */
    inline LakeFormationOptInsInfo& WithLastUpdatedBy(const Aws::String& value) { SetLastUpdatedBy(value); return *this;}

    /**
     * <p>The user who updated the record.</p>
     */
    inline LakeFormationOptInsInfo& WithLastUpdatedBy(Aws::String&& value) { SetLastUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user who updated the record.</p>
     */
    inline LakeFormationOptInsInfo& WithLastUpdatedBy(const char* value) { SetLastUpdatedBy(value); return *this;}

  private:

    Resource m_resource;
    bool m_resourceHasBeenSet = false;

    DataLakePrincipal m_principal;
    bool m_principalHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_lastUpdatedBy;
    bool m_lastUpdatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
