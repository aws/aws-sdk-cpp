/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{
  enum class DlClass
  {
    NOT_SET,
    ClassB,
    ClassC
  };

namespace DlClassMapper
{
AWS_IOTWIRELESS_API DlClass GetDlClassForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForDlClass(DlClass value);
} // namespace DlClassMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
