/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class UnsuccessfulInstanceCreditSpecificationErrorCode
  {
    NOT_SET,
    InvalidInstanceID_Malformed,
    InvalidInstanceID_NotFound,
    IncorrectInstanceState,
    InstanceCreditSpecification_NotSupported
  };

namespace UnsuccessfulInstanceCreditSpecificationErrorCodeMapper
{
AWS_EC2_API UnsuccessfulInstanceCreditSpecificationErrorCode GetUnsuccessfulInstanceCreditSpecificationErrorCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForUnsuccessfulInstanceCreditSpecificationErrorCode(UnsuccessfulInstanceCreditSpecificationErrorCode value);
} // namespace UnsuccessfulInstanceCreditSpecificationErrorCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
