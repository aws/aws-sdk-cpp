/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>
#include <aws/ec2-protocol/EC2ProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2-protocol/model/NestedStructWithList.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2-protocol/model/GreetingStruct.h>
#include <utility>

namespace Aws
{
namespace EC2Protocol
{
namespace Model
{

  /**
   */
  class QueryListsRequest : public EC2ProtocolRequest
  {
  public:
    AWS_EC2PROTOCOL_API QueryListsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QueryLists"; }

    AWS_EC2PROTOCOL_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2PROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetListArg() const{ return m_listArg; }
    inline bool ListArgHasBeenSet() const { return m_listArgHasBeenSet; }
    inline void SetListArg(const Aws::Vector<Aws::String>& value) { m_listArgHasBeenSet = true; m_listArg = value; }
    inline void SetListArg(Aws::Vector<Aws::String>&& value) { m_listArgHasBeenSet = true; m_listArg = std::move(value); }
    inline QueryListsRequest& WithListArg(const Aws::Vector<Aws::String>& value) { SetListArg(value); return *this;}
    inline QueryListsRequest& WithListArg(Aws::Vector<Aws::String>&& value) { SetListArg(std::move(value)); return *this;}
    inline QueryListsRequest& AddListArg(const Aws::String& value) { m_listArgHasBeenSet = true; m_listArg.push_back(value); return *this; }
    inline QueryListsRequest& AddListArg(Aws::String&& value) { m_listArgHasBeenSet = true; m_listArg.push_back(std::move(value)); return *this; }
    inline QueryListsRequest& AddListArg(const char* value) { m_listArgHasBeenSet = true; m_listArg.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<GreetingStruct>& GetComplexListArg() const{ return m_complexListArg; }
    inline bool ComplexListArgHasBeenSet() const { return m_complexListArgHasBeenSet; }
    inline void SetComplexListArg(const Aws::Vector<GreetingStruct>& value) { m_complexListArgHasBeenSet = true; m_complexListArg = value; }
    inline void SetComplexListArg(Aws::Vector<GreetingStruct>&& value) { m_complexListArgHasBeenSet = true; m_complexListArg = std::move(value); }
    inline QueryListsRequest& WithComplexListArg(const Aws::Vector<GreetingStruct>& value) { SetComplexListArg(value); return *this;}
    inline QueryListsRequest& WithComplexListArg(Aws::Vector<GreetingStruct>&& value) { SetComplexListArg(std::move(value)); return *this;}
    inline QueryListsRequest& AddComplexListArg(const GreetingStruct& value) { m_complexListArgHasBeenSet = true; m_complexListArg.push_back(value); return *this; }
    inline QueryListsRequest& AddComplexListArg(GreetingStruct&& value) { m_complexListArgHasBeenSet = true; m_complexListArg.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetListArgWithXmlNameMember() const{ return m_listArgWithXmlNameMember; }
    inline bool ListArgWithXmlNameMemberHasBeenSet() const { return m_listArgWithXmlNameMemberHasBeenSet; }
    inline void SetListArgWithXmlNameMember(const Aws::Vector<Aws::String>& value) { m_listArgWithXmlNameMemberHasBeenSet = true; m_listArgWithXmlNameMember = value; }
    inline void SetListArgWithXmlNameMember(Aws::Vector<Aws::String>&& value) { m_listArgWithXmlNameMemberHasBeenSet = true; m_listArgWithXmlNameMember = std::move(value); }
    inline QueryListsRequest& WithListArgWithXmlNameMember(const Aws::Vector<Aws::String>& value) { SetListArgWithXmlNameMember(value); return *this;}
    inline QueryListsRequest& WithListArgWithXmlNameMember(Aws::Vector<Aws::String>&& value) { SetListArgWithXmlNameMember(std::move(value)); return *this;}
    inline QueryListsRequest& AddListArgWithXmlNameMember(const Aws::String& value) { m_listArgWithXmlNameMemberHasBeenSet = true; m_listArgWithXmlNameMember.push_back(value); return *this; }
    inline QueryListsRequest& AddListArgWithXmlNameMember(Aws::String&& value) { m_listArgWithXmlNameMemberHasBeenSet = true; m_listArgWithXmlNameMember.push_back(std::move(value)); return *this; }
    inline QueryListsRequest& AddListArgWithXmlNameMember(const char* value) { m_listArgWithXmlNameMemberHasBeenSet = true; m_listArgWithXmlNameMember.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetListArgWithXmlName() const{ return m_listArgWithXmlName; }
    inline bool ListArgWithXmlNameHasBeenSet() const { return m_listArgWithXmlNameHasBeenSet; }
    inline void SetListArgWithXmlName(const Aws::Vector<Aws::String>& value) { m_listArgWithXmlNameHasBeenSet = true; m_listArgWithXmlName = value; }
    inline void SetListArgWithXmlName(Aws::Vector<Aws::String>&& value) { m_listArgWithXmlNameHasBeenSet = true; m_listArgWithXmlName = std::move(value); }
    inline QueryListsRequest& WithListArgWithXmlName(const Aws::Vector<Aws::String>& value) { SetListArgWithXmlName(value); return *this;}
    inline QueryListsRequest& WithListArgWithXmlName(Aws::Vector<Aws::String>&& value) { SetListArgWithXmlName(std::move(value)); return *this;}
    inline QueryListsRequest& AddListArgWithXmlName(const Aws::String& value) { m_listArgWithXmlNameHasBeenSet = true; m_listArgWithXmlName.push_back(value); return *this; }
    inline QueryListsRequest& AddListArgWithXmlName(Aws::String&& value) { m_listArgWithXmlNameHasBeenSet = true; m_listArgWithXmlName.push_back(std::move(value)); return *this; }
    inline QueryListsRequest& AddListArgWithXmlName(const char* value) { m_listArgWithXmlNameHasBeenSet = true; m_listArgWithXmlName.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const NestedStructWithList& GetNestedWithList() const{ return m_nestedWithList; }
    inline bool NestedWithListHasBeenSet() const { return m_nestedWithListHasBeenSet; }
    inline void SetNestedWithList(const NestedStructWithList& value) { m_nestedWithListHasBeenSet = true; m_nestedWithList = value; }
    inline void SetNestedWithList(NestedStructWithList&& value) { m_nestedWithListHasBeenSet = true; m_nestedWithList = std::move(value); }
    inline QueryListsRequest& WithNestedWithList(const NestedStructWithList& value) { SetNestedWithList(value); return *this;}
    inline QueryListsRequest& WithNestedWithList(NestedStructWithList&& value) { SetNestedWithList(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_listArg;
    bool m_listArgHasBeenSet = false;

    Aws::Vector<GreetingStruct> m_complexListArg;
    bool m_complexListArgHasBeenSet = false;

    Aws::Vector<Aws::String> m_listArgWithXmlNameMember;
    bool m_listArgWithXmlNameMemberHasBeenSet = false;

    Aws::Vector<Aws::String> m_listArgWithXmlName;
    bool m_listArgWithXmlNameHasBeenSet = false;

    NestedStructWithList m_nestedWithList;
    bool m_nestedWithListHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2Protocol
} // namespace Aws
