/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rest-json-protocol/model/FooEnum.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace RestJsonProtocol
{
namespace Model
{

  /**
   */
  class OmitsSerializingEmptyListsRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API OmitsSerializingEmptyListsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "OmitsSerializingEmptyLists"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTJSONPROTOCOL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetQueryStringList() const{ return m_queryStringList; }
    inline bool QueryStringListHasBeenSet() const { return m_queryStringListHasBeenSet; }
    inline void SetQueryStringList(const Aws::Vector<Aws::String>& value) { m_queryStringListHasBeenSet = true; m_queryStringList = value; }
    inline void SetQueryStringList(Aws::Vector<Aws::String>&& value) { m_queryStringListHasBeenSet = true; m_queryStringList = std::move(value); }
    inline OmitsSerializingEmptyListsRequest& WithQueryStringList(const Aws::Vector<Aws::String>& value) { SetQueryStringList(value); return *this;}
    inline OmitsSerializingEmptyListsRequest& WithQueryStringList(Aws::Vector<Aws::String>&& value) { SetQueryStringList(std::move(value)); return *this;}
    inline OmitsSerializingEmptyListsRequest& AddQueryStringList(const Aws::String& value) { m_queryStringListHasBeenSet = true; m_queryStringList.push_back(value); return *this; }
    inline OmitsSerializingEmptyListsRequest& AddQueryStringList(Aws::String&& value) { m_queryStringListHasBeenSet = true; m_queryStringList.push_back(std::move(value)); return *this; }
    inline OmitsSerializingEmptyListsRequest& AddQueryStringList(const char* value) { m_queryStringListHasBeenSet = true; m_queryStringList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetQueryIntegerList() const{ return m_queryIntegerList; }
    inline bool QueryIntegerListHasBeenSet() const { return m_queryIntegerListHasBeenSet; }
    inline void SetQueryIntegerList(const Aws::Vector<int>& value) { m_queryIntegerListHasBeenSet = true; m_queryIntegerList = value; }
    inline void SetQueryIntegerList(Aws::Vector<int>&& value) { m_queryIntegerListHasBeenSet = true; m_queryIntegerList = std::move(value); }
    inline OmitsSerializingEmptyListsRequest& WithQueryIntegerList(const Aws::Vector<int>& value) { SetQueryIntegerList(value); return *this;}
    inline OmitsSerializingEmptyListsRequest& WithQueryIntegerList(Aws::Vector<int>&& value) { SetQueryIntegerList(std::move(value)); return *this;}
    inline OmitsSerializingEmptyListsRequest& AddQueryIntegerList(int value) { m_queryIntegerListHasBeenSet = true; m_queryIntegerList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<double>& GetQueryDoubleList() const{ return m_queryDoubleList; }
    inline bool QueryDoubleListHasBeenSet() const { return m_queryDoubleListHasBeenSet; }
    inline void SetQueryDoubleList(const Aws::Vector<double>& value) { m_queryDoubleListHasBeenSet = true; m_queryDoubleList = value; }
    inline void SetQueryDoubleList(Aws::Vector<double>&& value) { m_queryDoubleListHasBeenSet = true; m_queryDoubleList = std::move(value); }
    inline OmitsSerializingEmptyListsRequest& WithQueryDoubleList(const Aws::Vector<double>& value) { SetQueryDoubleList(value); return *this;}
    inline OmitsSerializingEmptyListsRequest& WithQueryDoubleList(Aws::Vector<double>&& value) { SetQueryDoubleList(std::move(value)); return *this;}
    inline OmitsSerializingEmptyListsRequest& AddQueryDoubleList(double value) { m_queryDoubleListHasBeenSet = true; m_queryDoubleList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<bool>& GetQueryBooleanList() const{ return m_queryBooleanList; }
    inline bool QueryBooleanListHasBeenSet() const { return m_queryBooleanListHasBeenSet; }
    inline void SetQueryBooleanList(const Aws::Vector<bool>& value) { m_queryBooleanListHasBeenSet = true; m_queryBooleanList = value; }
    inline void SetQueryBooleanList(Aws::Vector<bool>&& value) { m_queryBooleanListHasBeenSet = true; m_queryBooleanList = std::move(value); }
    inline OmitsSerializingEmptyListsRequest& WithQueryBooleanList(const Aws::Vector<bool>& value) { SetQueryBooleanList(value); return *this;}
    inline OmitsSerializingEmptyListsRequest& WithQueryBooleanList(Aws::Vector<bool>&& value) { SetQueryBooleanList(std::move(value)); return *this;}
    inline OmitsSerializingEmptyListsRequest& AddQueryBooleanList(bool value) { m_queryBooleanListHasBeenSet = true; m_queryBooleanList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Utils::DateTime>& GetQueryTimestampList() const{ return m_queryTimestampList; }
    inline bool QueryTimestampListHasBeenSet() const { return m_queryTimestampListHasBeenSet; }
    inline void SetQueryTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { m_queryTimestampListHasBeenSet = true; m_queryTimestampList = value; }
    inline void SetQueryTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { m_queryTimestampListHasBeenSet = true; m_queryTimestampList = std::move(value); }
    inline OmitsSerializingEmptyListsRequest& WithQueryTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { SetQueryTimestampList(value); return *this;}
    inline OmitsSerializingEmptyListsRequest& WithQueryTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { SetQueryTimestampList(std::move(value)); return *this;}
    inline OmitsSerializingEmptyListsRequest& AddQueryTimestampList(const Aws::Utils::DateTime& value) { m_queryTimestampListHasBeenSet = true; m_queryTimestampList.push_back(value); return *this; }
    inline OmitsSerializingEmptyListsRequest& AddQueryTimestampList(Aws::Utils::DateTime&& value) { m_queryTimestampListHasBeenSet = true; m_queryTimestampList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<FooEnum>& GetQueryEnumList() const{ return m_queryEnumList; }
    inline bool QueryEnumListHasBeenSet() const { return m_queryEnumListHasBeenSet; }
    inline void SetQueryEnumList(const Aws::Vector<FooEnum>& value) { m_queryEnumListHasBeenSet = true; m_queryEnumList = value; }
    inline void SetQueryEnumList(Aws::Vector<FooEnum>&& value) { m_queryEnumListHasBeenSet = true; m_queryEnumList = std::move(value); }
    inline OmitsSerializingEmptyListsRequest& WithQueryEnumList(const Aws::Vector<FooEnum>& value) { SetQueryEnumList(value); return *this;}
    inline OmitsSerializingEmptyListsRequest& WithQueryEnumList(Aws::Vector<FooEnum>&& value) { SetQueryEnumList(std::move(value)); return *this;}
    inline OmitsSerializingEmptyListsRequest& AddQueryEnumList(const FooEnum& value) { m_queryEnumListHasBeenSet = true; m_queryEnumList.push_back(value); return *this; }
    inline OmitsSerializingEmptyListsRequest& AddQueryEnumList(FooEnum&& value) { m_queryEnumListHasBeenSet = true; m_queryEnumList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetQueryIntegerEnumList() const{ return m_queryIntegerEnumList; }
    inline bool QueryIntegerEnumListHasBeenSet() const { return m_queryIntegerEnumListHasBeenSet; }
    inline void SetQueryIntegerEnumList(const Aws::Vector<int>& value) { m_queryIntegerEnumListHasBeenSet = true; m_queryIntegerEnumList = value; }
    inline void SetQueryIntegerEnumList(Aws::Vector<int>&& value) { m_queryIntegerEnumListHasBeenSet = true; m_queryIntegerEnumList = std::move(value); }
    inline OmitsSerializingEmptyListsRequest& WithQueryIntegerEnumList(const Aws::Vector<int>& value) { SetQueryIntegerEnumList(value); return *this;}
    inline OmitsSerializingEmptyListsRequest& WithQueryIntegerEnumList(Aws::Vector<int>&& value) { SetQueryIntegerEnumList(std::move(value)); return *this;}
    inline OmitsSerializingEmptyListsRequest& AddQueryIntegerEnumList(int value) { m_queryIntegerEnumListHasBeenSet = true; m_queryIntegerEnumList.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_queryStringList;
    bool m_queryStringListHasBeenSet = false;

    Aws::Vector<int> m_queryIntegerList;
    bool m_queryIntegerListHasBeenSet = false;

    Aws::Vector<double> m_queryDoubleList;
    bool m_queryDoubleListHasBeenSet = false;

    Aws::Vector<bool> m_queryBooleanList;
    bool m_queryBooleanListHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_queryTimestampList;
    bool m_queryTimestampListHasBeenSet = false;

    Aws::Vector<FooEnum> m_queryEnumList;
    bool m_queryEnumListHasBeenSet = false;

    Aws::Vector<int> m_queryIntegerEnumList;
    bool m_queryIntegerEnumListHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
