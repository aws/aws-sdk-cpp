/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/CloudFormationCollection.h>
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

  class AWS_DEVOPSGURU_API ResourceCollection
  {
  public:
    ResourceCollection();
    ResourceCollection(Aws::Utils::Json::JsonView jsonValue);
    ResourceCollection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const CloudFormationCollection& GetCloudFormation() const{ return m_cloudFormation; }

    
    inline bool CloudFormationHasBeenSet() const { return m_cloudFormationHasBeenSet; }

    
    inline void SetCloudFormation(const CloudFormationCollection& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = value; }

    
    inline void SetCloudFormation(CloudFormationCollection&& value) { m_cloudFormationHasBeenSet = true; m_cloudFormation = std::move(value); }

    
    inline ResourceCollection& WithCloudFormation(const CloudFormationCollection& value) { SetCloudFormation(value); return *this;}

    
    inline ResourceCollection& WithCloudFormation(CloudFormationCollection&& value) { SetCloudFormation(std::move(value)); return *this;}

  private:

    CloudFormationCollection m_cloudFormation;
    bool m_cloudFormationHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
