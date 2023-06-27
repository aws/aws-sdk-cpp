/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppFabric
{
namespace Model
{
  enum class Persona
  {
    NOT_SET,
    admin,
    endUser
  };

namespace PersonaMapper
{
AWS_APPFABRIC_API Persona GetPersonaForName(const Aws::String& name);

AWS_APPFABRIC_API Aws::String GetNameForPersona(Persona value);
} // namespace PersonaMapper
} // namespace Model
} // namespace AppFabric
} // namespace Aws
