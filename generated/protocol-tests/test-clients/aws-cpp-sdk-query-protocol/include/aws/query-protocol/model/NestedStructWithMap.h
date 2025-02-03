/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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

  class NestedStructWithMap
  {
  public:
    AWS_QUERYPROTOCOL_API NestedStructWithMap();
    AWS_QUERYPROTOCOL_API NestedStructWithMap(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_QUERYPROTOCOL_API NestedStructWithMap& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_QUERYPROTOCOL_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_QUERYPROTOCOL_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetMapArg() const{ return m_mapArg; }
    inline bool MapArgHasBeenSet() const { return m_mapArgHasBeenSet; }
    inline void SetMapArg(const Aws::Map<Aws::String, Aws::String>& value) { m_mapArgHasBeenSet = true; m_mapArg = value; }
    inline void SetMapArg(Aws::Map<Aws::String, Aws::String>&& value) { m_mapArgHasBeenSet = true; m_mapArg = std::move(value); }
    inline NestedStructWithMap& WithMapArg(const Aws::Map<Aws::String, Aws::String>& value) { SetMapArg(value); return *this;}
    inline NestedStructWithMap& WithMapArg(Aws::Map<Aws::String, Aws::String>&& value) { SetMapArg(std::move(value)); return *this;}
    inline NestedStructWithMap& AddMapArg(const Aws::String& key, const Aws::String& value) { m_mapArgHasBeenSet = true; m_mapArg.emplace(key, value); return *this; }
    inline NestedStructWithMap& AddMapArg(Aws::String&& key, const Aws::String& value) { m_mapArgHasBeenSet = true; m_mapArg.emplace(std::move(key), value); return *this; }
    inline NestedStructWithMap& AddMapArg(const Aws::String& key, Aws::String&& value) { m_mapArgHasBeenSet = true; m_mapArg.emplace(key, std::move(value)); return *this; }
    inline NestedStructWithMap& AddMapArg(Aws::String&& key, Aws::String&& value) { m_mapArgHasBeenSet = true; m_mapArg.emplace(std::move(key), std::move(value)); return *this; }
    inline NestedStructWithMap& AddMapArg(const char* key, Aws::String&& value) { m_mapArgHasBeenSet = true; m_mapArg.emplace(key, std::move(value)); return *this; }
    inline NestedStructWithMap& AddMapArg(Aws::String&& key, const char* value) { m_mapArgHasBeenSet = true; m_mapArg.emplace(std::move(key), value); return *this; }
    inline NestedStructWithMap& AddMapArg(const char* key, const char* value) { m_mapArgHasBeenSet = true; m_mapArg.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_mapArg;
    bool m_mapArgHasBeenSet = false;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
