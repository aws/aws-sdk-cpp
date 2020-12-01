/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/CloudFormationCollectionFilter.h>
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
namespace DevOpsGuru
{
namespace Model
{

  class AWS_DEVOPSGURU_API ResourceCollectionFilter
  {
  public:
    ResourceCollectionFilter();
    ResourceCollectionFilter(Aws::Utils::Json::JsonView jsonValue);
    ResourceCollectionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const CloudFormationCollectionFilter& GetCloudFormation() const{ return m_cloudFormation; }

    
    inline bool CloudFormationHasBeenSet() const { return m_cloudFormationHasBeenSet; }

    
    inline void SetCloudFormation(const CloudFormationCollectionFilter& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = value; }

    
    inline void SetCloudFormation(CloudFormationCollectionFilter&& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = std::move(value); }

    
    inline ResourceCollectionFilter& WithCloudFormation(const CloudFormationCollectionFilter& value) { SetCloudFormation(value); return *this;}

    
    inline ResourceCollectionFilter& WithCloudFormation(CloudFormationCollectionFilter&& value) { SetCloudFormation(std::move(value)); return *this;}

  private:

    CloudFormationCollectionFilter m_cloudFormation;
    bool m_cloudFormationHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
