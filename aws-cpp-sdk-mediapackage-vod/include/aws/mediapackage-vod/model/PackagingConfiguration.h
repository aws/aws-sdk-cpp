/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage-vod/model/CmafPackage.h>
#include <aws/mediapackage-vod/model/DashPackage.h>
#include <aws/mediapackage-vod/model/HlsPackage.h>
#include <aws/mediapackage-vod/model/MssPackage.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * A MediaPackage VOD PackagingConfiguration resource.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/PackagingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGEVOD_API PackagingConfiguration
  {
  public:
    PackagingConfiguration();
    PackagingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    PackagingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of the PackagingConfiguration.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The ARN of the PackagingConfiguration.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * The ARN of the PackagingConfiguration.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The ARN of the PackagingConfiguration.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The ARN of the PackagingConfiguration.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The ARN of the PackagingConfiguration.
     */
    inline PackagingConfiguration& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The ARN of the PackagingConfiguration.
     */
    inline PackagingConfiguration& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The ARN of the PackagingConfiguration.
     */
    inline PackagingConfiguration& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const CmafPackage& GetCmafPackage() const{ return m_cmafPackage; }

    
    inline bool CmafPackageHasBeenSet() const { return m_cmafPackageHasBeenSet; }

    
    inline void SetCmafPackage(const CmafPackage& value) { m_cmafPackageHasBeenSet = true; m_cmafPackage = value; }

    
    inline void SetCmafPackage(CmafPackage&& value) { m_cmafPackageHasBeenSet = true; m_cmafPackage = std::move(value); }

    
    inline PackagingConfiguration& WithCmafPackage(const CmafPackage& value) { SetCmafPackage(value); return *this;}

    
    inline PackagingConfiguration& WithCmafPackage(CmafPackage&& value) { SetCmafPackage(std::move(value)); return *this;}


    
    inline const DashPackage& GetDashPackage() const{ return m_dashPackage; }

    
    inline bool DashPackageHasBeenSet() const { return m_dashPackageHasBeenSet; }

    
    inline void SetDashPackage(const DashPackage& value) { m_dashPackageHasBeenSet = true; m_dashPackage = value; }

    
    inline void SetDashPackage(DashPackage&& value) { m_dashPackageHasBeenSet = true; m_dashPackage = std::move(value); }

    
    inline PackagingConfiguration& WithDashPackage(const DashPackage& value) { SetDashPackage(value); return *this;}

    
    inline PackagingConfiguration& WithDashPackage(DashPackage&& value) { SetDashPackage(std::move(value)); return *this;}


    
    inline const HlsPackage& GetHlsPackage() const{ return m_hlsPackage; }

    
    inline bool HlsPackageHasBeenSet() const { return m_hlsPackageHasBeenSet; }

    
    inline void SetHlsPackage(const HlsPackage& value) { m_hlsPackageHasBeenSet = true; m_hlsPackage = value; }

    
    inline void SetHlsPackage(HlsPackage&& value) { m_hlsPackageHasBeenSet = true; m_hlsPackage = std::move(value); }

    
    inline PackagingConfiguration& WithHlsPackage(const HlsPackage& value) { SetHlsPackage(value); return *this;}

    
    inline PackagingConfiguration& WithHlsPackage(HlsPackage&& value) { SetHlsPackage(std::move(value)); return *this;}


    /**
     * The ID of the PackagingConfiguration.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the PackagingConfiguration.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the PackagingConfiguration.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the PackagingConfiguration.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the PackagingConfiguration.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the PackagingConfiguration.
     */
    inline PackagingConfiguration& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the PackagingConfiguration.
     */
    inline PackagingConfiguration& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the PackagingConfiguration.
     */
    inline PackagingConfiguration& WithId(const char* value) { SetId(value); return *this;}


    
    inline const MssPackage& GetMssPackage() const{ return m_mssPackage; }

    
    inline bool MssPackageHasBeenSet() const { return m_mssPackageHasBeenSet; }

    
    inline void SetMssPackage(const MssPackage& value) { m_mssPackageHasBeenSet = true; m_mssPackage = value; }

    
    inline void SetMssPackage(MssPackage&& value) { m_mssPackageHasBeenSet = true; m_mssPackage = std::move(value); }

    
    inline PackagingConfiguration& WithMssPackage(const MssPackage& value) { SetMssPackage(value); return *this;}

    
    inline PackagingConfiguration& WithMssPackage(MssPackage&& value) { SetMssPackage(std::move(value)); return *this;}


    /**
     * The ID of a PackagingGroup.
     */
    inline const Aws::String& GetPackagingGroupId() const{ return m_packagingGroupId; }

    /**
     * The ID of a PackagingGroup.
     */
    inline bool PackagingGroupIdHasBeenSet() const { return m_packagingGroupIdHasBeenSet; }

    /**
     * The ID of a PackagingGroup.
     */
    inline void SetPackagingGroupId(const Aws::String& value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId = value; }

    /**
     * The ID of a PackagingGroup.
     */
    inline void SetPackagingGroupId(Aws::String&& value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId = std::move(value); }

    /**
     * The ID of a PackagingGroup.
     */
    inline void SetPackagingGroupId(const char* value) { m_packagingGroupIdHasBeenSet = true; m_packagingGroupId.assign(value); }

    /**
     * The ID of a PackagingGroup.
     */
    inline PackagingConfiguration& WithPackagingGroupId(const Aws::String& value) { SetPackagingGroupId(value); return *this;}

    /**
     * The ID of a PackagingGroup.
     */
    inline PackagingConfiguration& WithPackagingGroupId(Aws::String&& value) { SetPackagingGroupId(std::move(value)); return *this;}

    /**
     * The ID of a PackagingGroup.
     */
    inline PackagingConfiguration& WithPackagingGroupId(const char* value) { SetPackagingGroupId(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    CmafPackage m_cmafPackage;
    bool m_cmafPackageHasBeenSet;

    DashPackage m_dashPackage;
    bool m_dashPackageHasBeenSet;

    HlsPackage m_hlsPackage;
    bool m_hlsPackageHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    MssPackage m_mssPackage;
    bool m_mssPackageHasBeenSet;

    Aws::String m_packagingGroupId;
    bool m_packagingGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
