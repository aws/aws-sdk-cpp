/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class DomainUnitDesignation { NOT_SET, OWNER };

namespace DomainUnitDesignationMapper {
AWS_DATAZONE_API DomainUnitDesignation GetDomainUnitDesignationForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForDomainUnitDesignation(DomainUnitDesignation value);
}  // namespace DomainUnitDesignationMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
