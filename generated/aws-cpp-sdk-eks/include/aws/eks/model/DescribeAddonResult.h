﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/Addon.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EKS
{
namespace Model
{
  class AWS_EKS_API DescribeAddonResult
  {
  public:
    DescribeAddonResult();
    DescribeAddonResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAddonResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Addon& GetAddon() const{ return m_addon; }

    
    inline void SetAddon(const Addon& value) { m_addon = value; }

    
    inline void SetAddon(Addon&& value) { m_addon = std::move(value); }

    
    inline DescribeAddonResult& WithAddon(const Addon& value) { SetAddon(value); return *this;}

    
    inline DescribeAddonResult& WithAddon(Addon&& value) { SetAddon(std::move(value)); return *this;}

  private:

    Addon m_addon;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
