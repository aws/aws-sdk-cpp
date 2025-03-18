﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
  class RecursiveXmlShapesOutputNested1;

  class RecursiveXmlShapesOutputNested2
  {
  public:
    AWS_QUERYPROTOCOL_API RecursiveXmlShapesOutputNested2() = default;
    AWS_QUERYPROTOCOL_API RecursiveXmlShapesOutputNested2(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_QUERYPROTOCOL_API RecursiveXmlShapesOutputNested2& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_QUERYPROTOCOL_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_QUERYPROTOCOL_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    
    inline const Aws::String& GetBar() const { return m_bar; }
    inline bool BarHasBeenSet() const { return m_barHasBeenSet; }
    template<typename BarT = Aws::String>
    void SetBar(BarT&& value) { m_barHasBeenSet = true; m_bar = std::forward<BarT>(value); }
    template<typename BarT = Aws::String>
    RecursiveXmlShapesOutputNested2& WithBar(BarT&& value) { SetBar(std::forward<BarT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RecursiveXmlShapesOutputNested1& GetRecursiveMember() const{
      return *m_recursiveMember;
    }
    inline bool RecursiveMemberHasBeenSet() const { return m_recursiveMemberHasBeenSet; }
    template<typename RecursiveMemberT = RecursiveXmlShapesOutputNested1>
    void SetRecursiveMember(RecursiveMemberT&& value) {
      m_recursiveMemberHasBeenSet = true; 
      m_recursiveMember = Aws::MakeShared<RecursiveXmlShapesOutputNested1>("RecursiveXmlShapesOutputNested2", std::forward<RecursiveMemberT>(value));
    }
    template<typename RecursiveMemberT = RecursiveXmlShapesOutputNested1>
    RecursiveXmlShapesOutputNested2& WithRecursiveMember(RecursiveMemberT&& value) { SetRecursiveMember(std::forward<RecursiveMemberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bar;
    bool m_barHasBeenSet = false;

    std::shared_ptr<RecursiveXmlShapesOutputNested1> m_recursiveMember;
    bool m_recursiveMemberHasBeenSet = false;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
