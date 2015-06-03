/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/Projection.h>
#include <aws/dynamodb/model/KeySchemaElement.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{
  /*
    <p>Represents the properties of a local secondary index.</p>
  */
  class AWS_DYNAMODB_API LocalSecondaryIndexDescription
  {
  public:
    LocalSecondaryIndexDescription();
    LocalSecondaryIndexDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    LocalSecondaryIndexDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>Represents the name of the local secondary index.</p>
    */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    /*
     <p>Represents the name of the local secondary index.</p>
    */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /*
     <p>Represents the name of the local secondary index.</p>
    */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /*
     <p>Represents the name of the local secondary index.</p>
    */
    inline LocalSecondaryIndexDescription&  WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /*
     <p>Represents the name of the local secondary index.</p>
    */
    inline LocalSecondaryIndexDescription& WithIndexName(const char* value) { SetIndexName(value); return *this;}

    /*
     <p>The complete index key schema, which consists of one or more pairs of attribute names and key types (<code>HASH</code> or <code>RANGE</code>).</p>
    */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const{ return m_keySchema; }
    /*
     <p>The complete index key schema, which consists of one or more pairs of attribute names and key types (<code>HASH</code> or <code>RANGE</code>).</p>
    */
    inline void SetKeySchema(const Aws::Vector<KeySchemaElement>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

    /*
     <p>The complete index key schema, which consists of one or more pairs of attribute names and key types (<code>HASH</code> or <code>RANGE</code>).</p>
    */
    inline LocalSecondaryIndexDescription&  WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}

    /*
     <p>The complete index key schema, which consists of one or more pairs of attribute names and key types (<code>HASH</code> or <code>RANGE</code>).</p>
    */
    inline LocalSecondaryIndexDescription& AddKeySchema(const KeySchemaElement& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

    
    inline const Projection& GetProjection() const{ return m_projection; }
    
    inline void SetProjection(const Projection& value) { m_projectionHasBeenSet = true; m_projection = value; }

    
    inline LocalSecondaryIndexDescription&  WithProjection(const Projection& value) { SetProjection(value); return *this;}

    /*
     <p>The total size of the specified index, in bytes. DynamoDB updates this value approximately every six hours. Recent changes might not be reflected in this value. </p>
    */
    inline long long GetIndexSizeBytes() const{ return m_indexSizeBytes; }
    /*
     <p>The total size of the specified index, in bytes. DynamoDB updates this value approximately every six hours. Recent changes might not be reflected in this value. </p>
    */
    inline void SetIndexSizeBytes(long long value) { m_indexSizeBytesHasBeenSet = true; m_indexSizeBytes = value; }

    /*
     <p>The total size of the specified index, in bytes. DynamoDB updates this value approximately every six hours. Recent changes might not be reflected in this value. </p>
    */
    inline LocalSecondaryIndexDescription&  WithIndexSizeBytes(long long value) { SetIndexSizeBytes(value); return *this;}

    /*
     <p>The number of items in the specified index. DynamoDB updates this value approximately every six hours. Recent changes might not be reflected in this value. </p>
    */
    inline long long GetItemCount() const{ return m_itemCount; }
    /*
     <p>The number of items in the specified index. DynamoDB updates this value approximately every six hours. Recent changes might not be reflected in this value. </p>
    */
    inline void SetItemCount(long long value) { m_itemCountHasBeenSet = true; m_itemCount = value; }

    /*
     <p>The number of items in the specified index. DynamoDB updates this value approximately every six hours. Recent changes might not be reflected in this value. </p>
    */
    inline LocalSecondaryIndexDescription&  WithItemCount(long long value) { SetItemCount(value); return *this;}

    
    inline const Aws::String& GetIndexArn() const{ return m_indexArn; }
    
    inline void SetIndexArn(const Aws::String& value) { m_indexArnHasBeenSet = true; m_indexArn = value; }

    
    inline void SetIndexArn(const char* value) { m_indexArnHasBeenSet = true; m_indexArn.assign(value); }

    
    inline LocalSecondaryIndexDescription&  WithIndexArn(const Aws::String& value) { SetIndexArn(value); return *this;}

    
    inline LocalSecondaryIndexDescription& WithIndexArn(const char* value) { SetIndexArn(value); return *this;}

  private:
    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;
    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet;
    Projection m_projection;
    bool m_projectionHasBeenSet;
    long long m_indexSizeBytes;
    bool m_indexSizeBytesHasBeenSet;
    long long m_itemCount;
    bool m_itemCountHasBeenSet;
    Aws::String m_indexArn;
    bool m_indexArnHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
