﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace QueryProtocol
{
namespace Model
{

  class GreetingStruct
  {
  public:
    AWS_QUERYPROTOCOL_API GreetingStruct();
    AWS_QUERYPROTOCOL_API GreetingStruct(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_QUERYPROTOCOL_API GreetingStruct& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_QUERYPROTOCOL_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_QUERYPROTOCOL_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const Aws::String& GetHi() const{ return m_hi; }
    inline bool HiHasBeenSet() const { return m_hiHasBeenSet; }
    inline void SetHi(const Aws::String& value) { m_hiHasBeenSet = true; m_hi = value; }
    inline void SetHi(Aws::String&& value) { m_hiHasBeenSet = true; m_hi = std::move(value); }
    inline void SetHi(const char* value) { m_hiHasBeenSet = true; m_hi.assign(value); }
    inline GreetingStruct& WithHi(const Aws::String& value) { SetHi(value); return *this;}
    inline GreetingStruct& WithHi(Aws::String&& value) { SetHi(std::move(value)); return *this;}
    inline GreetingStruct& WithHi(const char* value) { SetHi(value); return *this;}
    ///@}
  private:

    Aws::String m_hi;
    bool m_hiHasBeenSet = false;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
