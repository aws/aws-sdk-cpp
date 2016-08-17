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
#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/TagStatus.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECR
{
namespace Model
{

  class AWS_ECR_API ListImagesFilter
  {
  public:
    ListImagesFilter();
    ListImagesFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    ListImagesFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const TagStatus& GetTagStatus() const{ return m_tagStatus; }

    
    inline void SetTagStatus(const TagStatus& value) { m_tagStatusHasBeenSet = true; m_tagStatus = value; }

    
    inline void SetTagStatus(TagStatus&& value) { m_tagStatusHasBeenSet = true; m_tagStatus = value; }

    
    inline ListImagesFilter& WithTagStatus(const TagStatus& value) { SetTagStatus(value); return *this;}

    
    inline ListImagesFilter& WithTagStatus(TagStatus&& value) { SetTagStatus(value); return *this;}

  private:
    TagStatus m_tagStatus;
    bool m_tagStatusHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
