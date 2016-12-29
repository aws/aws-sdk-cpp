/*
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
#include <aws/importexport/model/CreateJobRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ImportExport::Model;
using namespace Aws::Utils;

CreateJobRequest::CreateJobRequest() : 
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_manifestAddendumHasBeenSet(false),
    m_validateOnly(false),
    m_validateOnlyHasBeenSet(false),
    m_aPIVersionHasBeenSet(false)
{
}

Aws::String CreateJobRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateJob&";
  if(m_jobTypeHasBeenSet)
  {
    ss << "JobType=" << JobTypeMapper::GetNameForJobType(m_jobType) << "&";
  }

  if(m_manifestHasBeenSet)
  {
    ss << "Manifest=" << StringUtils::URLEncode(m_manifest.c_str()) << "&";
  }

  if(m_manifestAddendumHasBeenSet)
  {
    ss << "ManifestAddendum=" << StringUtils::URLEncode(m_manifestAddendum.c_str()) << "&";
  }

  if(m_validateOnlyHasBeenSet)
  {
    ss << "ValidateOnly=" << m_validateOnly << "&";
  }

  if(m_aPIVersionHasBeenSet)
  {
    ss << "APIVersion=" << StringUtils::URLEncode(m_aPIVersion.c_str()) << "&";
  }

  ss << "Version=2010-06-01";
  return ss.str();
}

