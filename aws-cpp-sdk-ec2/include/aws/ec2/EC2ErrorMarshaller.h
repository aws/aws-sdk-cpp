﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/client/AWSErrorMarshaller.h>

namespace Aws
{
namespace Client
{

class AWS_EC2_API EC2ErrorMarshaller : public Client::AWSErrorMarshaller
{
public:
  EC2ErrorMarshaller() {}
  virtual ~EC2ErrorMarshaller() {}

  virtual Client::AWSError<Client::CoreErrors> FindErrorByName(const char* exceptionName) const;
};

} // namespace EC2
} // namespace Aws