/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/ListStorageLensConfigurationEntry.h>
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
namespace S3Control
{
namespace Model
{
  class ListStorageLensConfigurationsResult
  {
  public:
    AWS_S3CONTROL_API ListStorageLensConfigurationsResult();
    AWS_S3CONTROL_API ListStorageLensConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API ListStorageLensConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>If the request produced more than the maximum number of S3 Storage Lens
     * configuration results, you can pass this value into a subsequent request to
     * retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the request produced more than the maximum number of S3 Storage Lens
     * configuration results, you can pass this value into a subsequent request to
     * retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the request produced more than the maximum number of S3 Storage Lens
     * configuration results, you can pass this value into a subsequent request to
     * retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the request produced more than the maximum number of S3 Storage Lens
     * configuration results, you can pass this value into a subsequent request to
     * retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the request produced more than the maximum number of S3 Storage Lens
     * configuration results, you can pass this value into a subsequent request to
     * retrieve the next page of results.</p>
     */
    inline ListStorageLensConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the request produced more than the maximum number of S3 Storage Lens
     * configuration results, you can pass this value into a subsequent request to
     * retrieve the next page of results.</p>
     */
    inline ListStorageLensConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the request produced more than the maximum number of S3 Storage Lens
     * configuration results, you can pass this value into a subsequent request to
     * retrieve the next page of results.</p>
     */
    inline ListStorageLensConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of S3 Storage Lens configurations.</p>
     */
    inline const Aws::Vector<ListStorageLensConfigurationEntry>& GetStorageLensConfigurationList() const{ return m_storageLensConfigurationList; }

    /**
     * <p>A list of S3 Storage Lens configurations.</p>
     */
    inline void SetStorageLensConfigurationList(const Aws::Vector<ListStorageLensConfigurationEntry>& value) { m_storageLensConfigurationList = value; }

    /**
     * <p>A list of S3 Storage Lens configurations.</p>
     */
    inline void SetStorageLensConfigurationList(Aws::Vector<ListStorageLensConfigurationEntry>&& value) { m_storageLensConfigurationList = std::move(value); }

    /**
     * <p>A list of S3 Storage Lens configurations.</p>
     */
    inline ListStorageLensConfigurationsResult& WithStorageLensConfigurationList(const Aws::Vector<ListStorageLensConfigurationEntry>& value) { SetStorageLensConfigurationList(value); return *this;}

    /**
     * <p>A list of S3 Storage Lens configurations.</p>
     */
    inline ListStorageLensConfigurationsResult& WithStorageLensConfigurationList(Aws::Vector<ListStorageLensConfigurationEntry>&& value) { SetStorageLensConfigurationList(std::move(value)); return *this;}

    /**
     * <p>A list of S3 Storage Lens configurations.</p>
     */
    inline ListStorageLensConfigurationsResult& AddStorageLensConfigurationList(const ListStorageLensConfigurationEntry& value) { m_storageLensConfigurationList.push_back(value); return *this; }

    /**
     * <p>A list of S3 Storage Lens configurations.</p>
     */
    inline ListStorageLensConfigurationsResult& AddStorageLensConfigurationList(ListStorageLensConfigurationEntry&& value) { m_storageLensConfigurationList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ListStorageLensConfigurationEntry> m_storageLensConfigurationList;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
