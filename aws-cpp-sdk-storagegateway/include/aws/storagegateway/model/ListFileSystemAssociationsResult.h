/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/FileSystemAssociationSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  class ListFileSystemAssociationsResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListFileSystemAssociationsResult();
    AWS_STORAGEGATEWAY_API ListFileSystemAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListFileSystemAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline ListFileSystemAssociationsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline ListFileSystemAssociationsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline ListFileSystemAssociationsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>If a value is present, there are more file system associations to return. In
     * a subsequent request, use <code>NextMarker</code> as the value for
     * <code>Marker</code> to retrieve the next set of file system associations.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If a value is present, there are more file system associations to return. In
     * a subsequent request, use <code>NextMarker</code> as the value for
     * <code>Marker</code> to retrieve the next set of file system associations.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If a value is present, there are more file system associations to return. In
     * a subsequent request, use <code>NextMarker</code> as the value for
     * <code>Marker</code> to retrieve the next set of file system associations.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If a value is present, there are more file system associations to return. In
     * a subsequent request, use <code>NextMarker</code> as the value for
     * <code>Marker</code> to retrieve the next set of file system associations.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If a value is present, there are more file system associations to return. In
     * a subsequent request, use <code>NextMarker</code> as the value for
     * <code>Marker</code> to retrieve the next set of file system associations.</p>
     */
    inline ListFileSystemAssociationsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If a value is present, there are more file system associations to return. In
     * a subsequent request, use <code>NextMarker</code> as the value for
     * <code>Marker</code> to retrieve the next set of file system associations.</p>
     */
    inline ListFileSystemAssociationsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If a value is present, there are more file system associations to return. In
     * a subsequent request, use <code>NextMarker</code> as the value for
     * <code>Marker</code> to retrieve the next set of file system associations.</p>
     */
    inline ListFileSystemAssociationsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>An array of information about the Amazon FSx gateway's file system
     * associations.</p>
     */
    inline const Aws::Vector<FileSystemAssociationSummary>& GetFileSystemAssociationSummaryList() const{ return m_fileSystemAssociationSummaryList; }

    /**
     * <p>An array of information about the Amazon FSx gateway's file system
     * associations.</p>
     */
    inline void SetFileSystemAssociationSummaryList(const Aws::Vector<FileSystemAssociationSummary>& value) { m_fileSystemAssociationSummaryList = value; }

    /**
     * <p>An array of information about the Amazon FSx gateway's file system
     * associations.</p>
     */
    inline void SetFileSystemAssociationSummaryList(Aws::Vector<FileSystemAssociationSummary>&& value) { m_fileSystemAssociationSummaryList = std::move(value); }

    /**
     * <p>An array of information about the Amazon FSx gateway's file system
     * associations.</p>
     */
    inline ListFileSystemAssociationsResult& WithFileSystemAssociationSummaryList(const Aws::Vector<FileSystemAssociationSummary>& value) { SetFileSystemAssociationSummaryList(value); return *this;}

    /**
     * <p>An array of information about the Amazon FSx gateway's file system
     * associations.</p>
     */
    inline ListFileSystemAssociationsResult& WithFileSystemAssociationSummaryList(Aws::Vector<FileSystemAssociationSummary>&& value) { SetFileSystemAssociationSummaryList(std::move(value)); return *this;}

    /**
     * <p>An array of information about the Amazon FSx gateway's file system
     * associations.</p>
     */
    inline ListFileSystemAssociationsResult& AddFileSystemAssociationSummaryList(const FileSystemAssociationSummary& value) { m_fileSystemAssociationSummaryList.push_back(value); return *this; }

    /**
     * <p>An array of information about the Amazon FSx gateway's file system
     * associations.</p>
     */
    inline ListFileSystemAssociationsResult& AddFileSystemAssociationSummaryList(FileSystemAssociationSummary&& value) { m_fileSystemAssociationSummaryList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_marker;

    Aws::String m_nextMarker;

    Aws::Vector<FileSystemAssociationSummary> m_fileSystemAssociationSummaryList;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
