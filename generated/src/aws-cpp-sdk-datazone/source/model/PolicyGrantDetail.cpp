/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/PolicyGrantDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

PolicyGrantDetail::PolicyGrantDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

PolicyGrantDetail& PolicyGrantDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addToProjectMemberPool"))
  {
    m_addToProjectMemberPool = jsonValue.GetObject("addToProjectMemberPool");
    m_addToProjectMemberPoolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createAssetType"))
  {
    m_createAssetType = jsonValue.GetObject("createAssetType");
    m_createAssetTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createDomainUnit"))
  {
    m_createDomainUnit = jsonValue.GetObject("createDomainUnit");
    m_createDomainUnitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createEnvironment"))
  {
    m_createEnvironment = jsonValue.GetObject("createEnvironment");
    m_createEnvironmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createEnvironmentFromBlueprint"))
  {
    m_createEnvironmentFromBlueprint = jsonValue.GetObject("createEnvironmentFromBlueprint");
    m_createEnvironmentFromBlueprintHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createEnvironmentProfile"))
  {
    m_createEnvironmentProfile = jsonValue.GetObject("createEnvironmentProfile");
    m_createEnvironmentProfileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createFormType"))
  {
    m_createFormType = jsonValue.GetObject("createFormType");
    m_createFormTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createGlossary"))
  {
    m_createGlossary = jsonValue.GetObject("createGlossary");
    m_createGlossaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createProject"))
  {
    m_createProject = jsonValue.GetObject("createProject");
    m_createProjectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createProjectFromProjectProfile"))
  {
    m_createProjectFromProjectProfile = jsonValue.GetObject("createProjectFromProjectProfile");
    m_createProjectFromProjectProfileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("delegateCreateEnvironmentProfile"))
  {
    m_delegateCreateEnvironmentProfile = jsonValue.GetObject("delegateCreateEnvironmentProfile");
    m_delegateCreateEnvironmentProfileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("overrideDomainUnitOwners"))
  {
    m_overrideDomainUnitOwners = jsonValue.GetObject("overrideDomainUnitOwners");
    m_overrideDomainUnitOwnersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("overrideProjectOwners"))
  {
    m_overrideProjectOwners = jsonValue.GetObject("overrideProjectOwners");
    m_overrideProjectOwnersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("useAssetType"))
  {
    m_useAssetType = jsonValue.GetObject("useAssetType");
    m_useAssetTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyGrantDetail::Jsonize() const
{
  JsonValue payload;

  if(m_addToProjectMemberPoolHasBeenSet)
  {
   payload.WithObject("addToProjectMemberPool", m_addToProjectMemberPool.Jsonize());

  }

  if(m_createAssetTypeHasBeenSet)
  {
   payload.WithObject("createAssetType", m_createAssetType.Jsonize());

  }

  if(m_createDomainUnitHasBeenSet)
  {
   payload.WithObject("createDomainUnit", m_createDomainUnit.Jsonize());

  }

  if(m_createEnvironmentHasBeenSet)
  {
   payload.WithObject("createEnvironment", m_createEnvironment.Jsonize());

  }

  if(m_createEnvironmentFromBlueprintHasBeenSet)
  {
   payload.WithObject("createEnvironmentFromBlueprint", m_createEnvironmentFromBlueprint.Jsonize());

  }

  if(m_createEnvironmentProfileHasBeenSet)
  {
   payload.WithObject("createEnvironmentProfile", m_createEnvironmentProfile.Jsonize());

  }

  if(m_createFormTypeHasBeenSet)
  {
   payload.WithObject("createFormType", m_createFormType.Jsonize());

  }

  if(m_createGlossaryHasBeenSet)
  {
   payload.WithObject("createGlossary", m_createGlossary.Jsonize());

  }

  if(m_createProjectHasBeenSet)
  {
   payload.WithObject("createProject", m_createProject.Jsonize());

  }

  if(m_createProjectFromProjectProfileHasBeenSet)
  {
   payload.WithObject("createProjectFromProjectProfile", m_createProjectFromProjectProfile.Jsonize());

  }

  if(m_delegateCreateEnvironmentProfileHasBeenSet)
  {
   payload.WithObject("delegateCreateEnvironmentProfile", m_delegateCreateEnvironmentProfile.Jsonize());

  }

  if(m_overrideDomainUnitOwnersHasBeenSet)
  {
   payload.WithObject("overrideDomainUnitOwners", m_overrideDomainUnitOwners.Jsonize());

  }

  if(m_overrideProjectOwnersHasBeenSet)
  {
   payload.WithObject("overrideProjectOwners", m_overrideProjectOwners.Jsonize());

  }

  if(m_useAssetTypeHasBeenSet)
  {
   payload.WithObject("useAssetType", m_useAssetType.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
