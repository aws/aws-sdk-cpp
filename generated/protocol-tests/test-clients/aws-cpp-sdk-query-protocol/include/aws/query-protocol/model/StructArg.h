/**
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

  class StructArg
  {
  public:
    AWS_QUERYPROTOCOL_API StructArg();
    AWS_QUERYPROTOCOL_API StructArg(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_QUERYPROTOCOL_API StructArg& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_QUERYPROTOCOL_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_QUERYPROTOCOL_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const Aws::String& GetStringArg() const{ return m_stringArg; }
    inline bool StringArgHasBeenSet() const { return m_stringArgHasBeenSet; }
    inline void SetStringArg(const Aws::String& value) { m_stringArgHasBeenSet = true; m_stringArg = value; }
    inline void SetStringArg(Aws::String&& value) { m_stringArgHasBeenSet = true; m_stringArg = std::move(value); }
    inline void SetStringArg(const char* value) { m_stringArgHasBeenSet = true; m_stringArg.assign(value); }
    inline StructArg& WithStringArg(const Aws::String& value) { SetStringArg(value); return *this;}
    inline StructArg& WithStringArg(Aws::String&& value) { SetStringArg(std::move(value)); return *this;}
    inline StructArg& WithStringArg(const char* value) { SetStringArg(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetOtherArg() const{ return m_otherArg; }
    inline bool OtherArgHasBeenSet() const { return m_otherArgHasBeenSet; }
    inline void SetOtherArg(bool value) { m_otherArgHasBeenSet = true; m_otherArg = value; }
    inline StructArg& WithOtherArg(bool value) { SetOtherArg(value); return *this;}
    ///@}

    ///@{
    
    AWS_QUERYPROTOCOL_API const StructArg& GetRecursiveArg() const;
    AWS_QUERYPROTOCOL_API bool RecursiveArgHasBeenSet() const;
    AWS_QUERYPROTOCOL_API void SetRecursiveArg(const StructArg& value);
    AWS_QUERYPROTOCOL_API void SetRecursiveArg(StructArg&& value);
    AWS_QUERYPROTOCOL_API StructArg& WithRecursiveArg(const StructArg& value);
    AWS_QUERYPROTOCOL_API StructArg& WithRecursiveArg(StructArg&& value);
    ///@}
  private:

    Aws::String m_stringArg;
    bool m_stringArgHasBeenSet = false;

    bool m_otherArg;
    bool m_otherArgHasBeenSet = false;

    std::shared_ptr<StructArg> m_recursiveArg;
    bool m_recursiveArgHasBeenSet = false;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
