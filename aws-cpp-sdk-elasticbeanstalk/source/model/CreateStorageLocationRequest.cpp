/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/CreateStorageLocationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

CreateStorageLocationRequest::CreateStorageLocationRequest()
{
}

Aws::String CreateStorageLocationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateStorageLocation&";
  ss << "Version=2010-12-01";
  return ss.str();
}


void  CreateStorageLocationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
