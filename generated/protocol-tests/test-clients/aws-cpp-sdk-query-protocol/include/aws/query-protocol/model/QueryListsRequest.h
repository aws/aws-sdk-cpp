/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/QueryProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/query-protocol/model/NestedStructWithList.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/query-protocol/model/GreetingStruct.h>
#include <utility>

namespace Aws
{
namespace QueryProtocol
{
namespace Model
{

  /**
   */
  class QueryListsRequest : public QueryProtocolRequest
  {
  public:
    AWS_QUERYPROTOCOL_API QueryListsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QueryLists"; }

    AWS_QUERYPROTOCOL_API Aws::String SerializePayload() const override;

  protected:
    AWS_QUERYPROTOCOL_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    
    inline const Aws::Vector<Aws::String>& GetFlattenedListArg() const{ return m_flattenedListArg; }
    inline bool FlattenedListArgHasBeenSet() const { return m_flattenedListArgHasBeenSet; }
    inline void SetFlattenedListArg(const Aws::Vector<Aws::String>& value) { m_flattenedListArgHasBeenSet = true; m_flattenedListArg = value; }
    inline void SetFlattenedListArg(Aws::Vector<Aws::String>&& value) { m_flattenedListArgHasBeenSet = true; m_flattenedListArg = std::move(value); }
    inline QueryListsRequest& WithFlattenedListArg(const Aws::Vector<Aws::String>& value) { SetFlattenedListArg(value); return *this;}
    inline QueryListsRequest& WithFlattenedListArg(Aws::Vector<Aws::String>&& value) { SetFlattenedListArg(std::move(value)); return *this;}
    inline QueryListsRequest& AddFlattenedListArg(const Aws::String& value) { m_flattenedListArgHasBeenSet = true; m_flattenedListArg.push_back(value); return *this; }
    inline QueryListsRequest& AddFlattenedListArg(Aws::String&& value) { m_flattenedListArgHasBeenSet = true; m_flattenedListArg.push_back(std::move(value)); return *this; }
    inline QueryListsRequest& AddFlattenedListArg(const char* value) { m_flattenedListArgHasBeenSet = true; m_flattenedListArg.push_back(value); return *this; }
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
    
    inline const Aws::Vector<Aws::String>& GetFlattenedListArgWithXmlName() const{ return m_flattenedListArgWithXmlName; }
    inline bool FlattenedListArgWithXmlNameHasBeenSet() const { return m_flattenedListArgWithXmlNameHasBeenSet; }
    inline void SetFlattenedListArgWithXmlName(const Aws::Vector<Aws::String>& value) { m_flattenedListArgWithXmlNameHasBeenSet = true; m_flattenedListArgWithXmlName = value; }
    inline void SetFlattenedListArgWithXmlName(Aws::Vector<Aws::String>&& value) { m_flattenedListArgWithXmlNameHasBeenSet = true; m_flattenedListArgWithXmlName = std::move(value); }
    inline QueryListsRequest& WithFlattenedListArgWithXmlName(const Aws::Vector<Aws::String>& value) { SetFlattenedListArgWithXmlName(value); return *this;}
    inline QueryListsRequest& WithFlattenedListArgWithXmlName(Aws::Vector<Aws::String>&& value) { SetFlattenedListArgWithXmlName(std::move(value)); return *this;}
    inline QueryListsRequest& AddFlattenedListArgWithXmlName(const Aws::String& value) { m_flattenedListArgWithXmlNameHasBeenSet = true; m_flattenedListArgWithXmlName.push_back(value); return *this; }
    inline QueryListsRequest& AddFlattenedListArgWithXmlName(Aws::String&& value) { m_flattenedListArgWithXmlNameHasBeenSet = true; m_flattenedListArgWithXmlName.push_back(std::move(value)); return *this; }
    inline QueryListsRequest& AddFlattenedListArgWithXmlName(const char* value) { m_flattenedListArgWithXmlNameHasBeenSet = true; m_flattenedListArgWithXmlName.push_back(value); return *this; }
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

    Aws::Vector<Aws::String> m_flattenedListArg;
    bool m_flattenedListArgHasBeenSet = false;

    Aws::Vector<Aws::String> m_listArgWithXmlNameMember;
    bool m_listArgWithXmlNameMemberHasBeenSet = false;

    Aws::Vector<Aws::String> m_flattenedListArgWithXmlName;
    bool m_flattenedListArgWithXmlNameHasBeenSet = false;

    NestedStructWithList m_nestedWithList;
    bool m_nestedWithListHasBeenSet = false;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
