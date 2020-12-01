/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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

  class AWS_DEVOPSGURU_API CloudFormationCollectionFilter
  {
  public:
    CloudFormationCollectionFilter();
    CloudFormationCollectionFilter(Aws::Utils::Json::JsonView jsonValue);
    CloudFormationCollectionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<Aws::String>& GetStackNames() const{ return m_stackNames; }

    
    inline bool StackNamesHasBeenSet() const { return m_stackNamesHasBeenSet; }

    
    inline void SetStackNames(const Aws::Vector<Aws::String>& value) { m_stackNamesHasBeenSet = true; m_stackNames = value; }

    
    inline void SetStackNames(Aws::Vector<Aws::String>&& value) { m_stackNamesHasBeenSet = true; m_stackNames = std::move(value); }

    
    inline CloudFormationCollectionFilter& WithStackNames(const Aws::Vector<Aws::String>& value) { SetStackNames(value); return *this;}

    
    inline CloudFormationCollectionFilter& WithStackNames(Aws::Vector<Aws::String>&& value) { SetStackNames(std::move(value)); return *this;}

    
    inline CloudFormationCollectionFilter& AddStackNames(const Aws::String& value) { m_stackNamesHasBeenSet = true; m_stackNames.push_back(value); return *this; }

    
    inline CloudFormationCollectionFilter& AddStackNames(Aws::String&& value) { m_stackNamesHasBeenSet = true; m_stackNames.push_back(std::move(value)); return *this; }

    
    inline CloudFormationCollectionFilter& AddStackNames(const char* value) { m_stackNamesHasBeenSet = true; m_stackNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_stackNames;
    bool m_stackNamesHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
