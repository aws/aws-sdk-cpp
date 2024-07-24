/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The Lake Formation configuration of the Data Lake blueprint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/LakeFormationConfiguration">AWS
   * API Reference</a></p>
   */
  class LakeFormationConfiguration
  {
  public:
    AWS_DATAZONE_API LakeFormationConfiguration();
    AWS_DATAZONE_API LakeFormationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API LakeFormationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies certain Amazon S3 locations if you do not want Amazon DataZone to
     * automatically register them in hybrid mode. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLocationRegistrationExcludeS3Locations() const{ return m_locationRegistrationExcludeS3Locations; }
    inline bool LocationRegistrationExcludeS3LocationsHasBeenSet() const { return m_locationRegistrationExcludeS3LocationsHasBeenSet; }
    inline void SetLocationRegistrationExcludeS3Locations(const Aws::Vector<Aws::String>& value) { m_locationRegistrationExcludeS3LocationsHasBeenSet = true; m_locationRegistrationExcludeS3Locations = value; }
    inline void SetLocationRegistrationExcludeS3Locations(Aws::Vector<Aws::String>&& value) { m_locationRegistrationExcludeS3LocationsHasBeenSet = true; m_locationRegistrationExcludeS3Locations = std::move(value); }
    inline LakeFormationConfiguration& WithLocationRegistrationExcludeS3Locations(const Aws::Vector<Aws::String>& value) { SetLocationRegistrationExcludeS3Locations(value); return *this;}
    inline LakeFormationConfiguration& WithLocationRegistrationExcludeS3Locations(Aws::Vector<Aws::String>&& value) { SetLocationRegistrationExcludeS3Locations(std::move(value)); return *this;}
    inline LakeFormationConfiguration& AddLocationRegistrationExcludeS3Locations(const Aws::String& value) { m_locationRegistrationExcludeS3LocationsHasBeenSet = true; m_locationRegistrationExcludeS3Locations.push_back(value); return *this; }
    inline LakeFormationConfiguration& AddLocationRegistrationExcludeS3Locations(Aws::String&& value) { m_locationRegistrationExcludeS3LocationsHasBeenSet = true; m_locationRegistrationExcludeS3Locations.push_back(std::move(value)); return *this; }
    inline LakeFormationConfiguration& AddLocationRegistrationExcludeS3Locations(const char* value) { m_locationRegistrationExcludeS3LocationsHasBeenSet = true; m_locationRegistrationExcludeS3Locations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The role that is used to manage read/write access to the chosen Amazon S3
     * bucket(s) for Data Lake using AWS Lake Formation hybrid access mode.</p>
     */
    inline const Aws::String& GetLocationRegistrationRole() const{ return m_locationRegistrationRole; }
    inline bool LocationRegistrationRoleHasBeenSet() const { return m_locationRegistrationRoleHasBeenSet; }
    inline void SetLocationRegistrationRole(const Aws::String& value) { m_locationRegistrationRoleHasBeenSet = true; m_locationRegistrationRole = value; }
    inline void SetLocationRegistrationRole(Aws::String&& value) { m_locationRegistrationRoleHasBeenSet = true; m_locationRegistrationRole = std::move(value); }
    inline void SetLocationRegistrationRole(const char* value) { m_locationRegistrationRoleHasBeenSet = true; m_locationRegistrationRole.assign(value); }
    inline LakeFormationConfiguration& WithLocationRegistrationRole(const Aws::String& value) { SetLocationRegistrationRole(value); return *this;}
    inline LakeFormationConfiguration& WithLocationRegistrationRole(Aws::String&& value) { SetLocationRegistrationRole(std::move(value)); return *this;}
    inline LakeFormationConfiguration& WithLocationRegistrationRole(const char* value) { SetLocationRegistrationRole(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_locationRegistrationExcludeS3Locations;
    bool m_locationRegistrationExcludeS3LocationsHasBeenSet = false;

    Aws::String m_locationRegistrationRole;
    bool m_locationRegistrationRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
