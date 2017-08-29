/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/sdb/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SimpleDB
{
namespace Model
{
  class AWS_SIMPLEDB_API DomainMetadataResult
  {
  public:
    DomainMetadataResult();
    DomainMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DomainMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * The number of all items in the domain.
     */
    inline int GetItemCount() const{ return m_itemCount; }

    /**
     * The number of all items in the domain.
     */
    inline void SetItemCount(int value) { m_itemCount = value; }

    /**
     * The number of all items in the domain.
     */
    inline DomainMetadataResult& WithItemCount(int value) { SetItemCount(value); return *this;}


    /**
     * The total size of all item names in the domain, in bytes.
     */
    inline long long GetItemNamesSizeBytes() const{ return m_itemNamesSizeBytes; }

    /**
     * The total size of all item names in the domain, in bytes.
     */
    inline void SetItemNamesSizeBytes(long long value) { m_itemNamesSizeBytes = value; }

    /**
     * The total size of all item names in the domain, in bytes.
     */
    inline DomainMetadataResult& WithItemNamesSizeBytes(long long value) { SetItemNamesSizeBytes(value); return *this;}


    /**
     * The number of unique attribute names in the domain.
     */
    inline int GetAttributeNameCount() const{ return m_attributeNameCount; }

    /**
     * The number of unique attribute names in the domain.
     */
    inline void SetAttributeNameCount(int value) { m_attributeNameCount = value; }

    /**
     * The number of unique attribute names in the domain.
     */
    inline DomainMetadataResult& WithAttributeNameCount(int value) { SetAttributeNameCount(value); return *this;}


    /**
     * The total size of all unique attribute names in the domain, in bytes.
     */
    inline long long GetAttributeNamesSizeBytes() const{ return m_attributeNamesSizeBytes; }

    /**
     * The total size of all unique attribute names in the domain, in bytes.
     */
    inline void SetAttributeNamesSizeBytes(long long value) { m_attributeNamesSizeBytes = value; }

    /**
     * The total size of all unique attribute names in the domain, in bytes.
     */
    inline DomainMetadataResult& WithAttributeNamesSizeBytes(long long value) { SetAttributeNamesSizeBytes(value); return *this;}


    /**
     * The number of all attribute name/value pairs in the domain.
     */
    inline int GetAttributeValueCount() const{ return m_attributeValueCount; }

    /**
     * The number of all attribute name/value pairs in the domain.
     */
    inline void SetAttributeValueCount(int value) { m_attributeValueCount = value; }

    /**
     * The number of all attribute name/value pairs in the domain.
     */
    inline DomainMetadataResult& WithAttributeValueCount(int value) { SetAttributeValueCount(value); return *this;}


    /**
     * The total size of all attribute values in the domain, in bytes.
     */
    inline long long GetAttributeValuesSizeBytes() const{ return m_attributeValuesSizeBytes; }

    /**
     * The total size of all attribute values in the domain, in bytes.
     */
    inline void SetAttributeValuesSizeBytes(long long value) { m_attributeValuesSizeBytes = value; }

    /**
     * The total size of all attribute values in the domain, in bytes.
     */
    inline DomainMetadataResult& WithAttributeValuesSizeBytes(long long value) { SetAttributeValuesSizeBytes(value); return *this;}


    /**
     * The data and time when metadata was calculated, in Epoch (UNIX) seconds.
     */
    inline int GetTimestamp() const{ return m_timestamp; }

    /**
     * The data and time when metadata was calculated, in Epoch (UNIX) seconds.
     */
    inline void SetTimestamp(int value) { m_timestamp = value; }

    /**
     * The data and time when metadata was calculated, in Epoch (UNIX) seconds.
     */
    inline DomainMetadataResult& WithTimestamp(int value) { SetTimestamp(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DomainMetadataResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DomainMetadataResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    int m_itemCount;

    long long m_itemNamesSizeBytes;

    int m_attributeNameCount;

    long long m_attributeNamesSizeBytes;

    int m_attributeValueCount;

    long long m_attributeValuesSizeBytes;

    int m_timestamp;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
