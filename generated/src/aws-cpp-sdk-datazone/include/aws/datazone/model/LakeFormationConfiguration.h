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
    AWS_DATAZONE_API LakeFormationConfiguration() = default;
    AWS_DATAZONE_API LakeFormationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API LakeFormationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies certain Amazon S3 locations if you do not want Amazon DataZone to
     * automatically register them in hybrid mode. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLocationRegistrationExcludeS3Locations() const { return m_locationRegistrationExcludeS3Locations; }
    inline bool LocationRegistrationExcludeS3LocationsHasBeenSet() const { return m_locationRegistrationExcludeS3LocationsHasBeenSet; }
    template<typename LocationRegistrationExcludeS3LocationsT = Aws::Vector<Aws::String>>
    void SetLocationRegistrationExcludeS3Locations(LocationRegistrationExcludeS3LocationsT&& value) { m_locationRegistrationExcludeS3LocationsHasBeenSet = true; m_locationRegistrationExcludeS3Locations = std::forward<LocationRegistrationExcludeS3LocationsT>(value); }
    template<typename LocationRegistrationExcludeS3LocationsT = Aws::Vector<Aws::String>>
    LakeFormationConfiguration& WithLocationRegistrationExcludeS3Locations(LocationRegistrationExcludeS3LocationsT&& value) { SetLocationRegistrationExcludeS3Locations(std::forward<LocationRegistrationExcludeS3LocationsT>(value)); return *this;}
    template<typename LocationRegistrationExcludeS3LocationsT = Aws::String>
    LakeFormationConfiguration& AddLocationRegistrationExcludeS3Locations(LocationRegistrationExcludeS3LocationsT&& value) { m_locationRegistrationExcludeS3LocationsHasBeenSet = true; m_locationRegistrationExcludeS3Locations.emplace_back(std::forward<LocationRegistrationExcludeS3LocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The role that is used to manage read/write access to the chosen Amazon S3
     * bucket(s) for Data Lake using Amazon Web Services Lake Formation hybrid access
     * mode.</p>
     */
    inline const Aws::String& GetLocationRegistrationRole() const { return m_locationRegistrationRole; }
    inline bool LocationRegistrationRoleHasBeenSet() const { return m_locationRegistrationRoleHasBeenSet; }
    template<typename LocationRegistrationRoleT = Aws::String>
    void SetLocationRegistrationRole(LocationRegistrationRoleT&& value) { m_locationRegistrationRoleHasBeenSet = true; m_locationRegistrationRole = std::forward<LocationRegistrationRoleT>(value); }
    template<typename LocationRegistrationRoleT = Aws::String>
    LakeFormationConfiguration& WithLocationRegistrationRole(LocationRegistrationRoleT&& value) { SetLocationRegistrationRole(std::forward<LocationRegistrationRoleT>(value)); return *this;}
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
