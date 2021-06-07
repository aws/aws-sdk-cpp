/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>

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
namespace EKS
{
namespace Model
{

  class AWS_EKS_API NodegroupUpdateConfig
  {
  public:
    NodegroupUpdateConfig();
    NodegroupUpdateConfig(Aws::Utils::Json::JsonView jsonValue);
    NodegroupUpdateConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetMaxUnavailable() const{ return m_maxUnavailable; }

    
    inline bool MaxUnavailableHasBeenSet() const { return m_maxUnavailableHasBeenSet; }

    
    inline void SetMaxUnavailable(int value) { m_maxUnavailableHasBeenSet = true; m_maxUnavailable = value; }

    
    inline NodegroupUpdateConfig& WithMaxUnavailable(int value) { SetMaxUnavailable(value); return *this;}


    
    inline int GetMaxUnavailablePercentage() const{ return m_maxUnavailablePercentage; }

    
    inline bool MaxUnavailablePercentageHasBeenSet() const { return m_maxUnavailablePercentageHasBeenSet; }

    
    inline void SetMaxUnavailablePercentage(int value) { m_maxUnavailablePercentageHasBeenSet = true; m_maxUnavailablePercentage = value; }

    
    inline NodegroupUpdateConfig& WithMaxUnavailablePercentage(int value) { SetMaxUnavailablePercentage(value); return *this;}

  private:

    int m_maxUnavailable;
    bool m_maxUnavailableHasBeenSet;

    int m_maxUnavailablePercentage;
    bool m_maxUnavailablePercentageHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
