﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-rpc-10/JSONRPC10_EXPORTS.h>
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
namespace JSONRPC10
{
namespace Model
{

  class GreetingStruct
  {
  public:
    AWS_JSONRPC10_API GreetingStruct() = default;
    AWS_JSONRPC10_API GreetingStruct(Aws::Utils::Json::JsonView jsonValue);
    AWS_JSONRPC10_API GreetingStruct& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_JSONRPC10_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetHi() const { return m_hi; }
    inline bool HiHasBeenSet() const { return m_hiHasBeenSet; }
    template<typename HiT = Aws::String>
    void SetHi(HiT&& value) { m_hiHasBeenSet = true; m_hi = std::forward<HiT>(value); }
    template<typename HiT = Aws::String>
    GreetingStruct& WithHi(HiT&& value) { SetHi(std::forward<HiT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hi;
    bool m_hiHasBeenSet = false;
  };

} // namespace Model
} // namespace JSONRPC10
} // namespace Aws
