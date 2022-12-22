/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class DescribeFileSystemAssociationsRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeFileSystemAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFileSystemAssociations"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file system
     * association to be described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFileSystemAssociationARNList() const{ return m_fileSystemAssociationARNList; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file system
     * association to be described.</p>
     */
    inline bool FileSystemAssociationARNListHasBeenSet() const { return m_fileSystemAssociationARNListHasBeenSet; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file system
     * association to be described.</p>
     */
    inline void SetFileSystemAssociationARNList(const Aws::Vector<Aws::String>& value) { m_fileSystemAssociationARNListHasBeenSet = true; m_fileSystemAssociationARNList = value; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file system
     * association to be described.</p>
     */
    inline void SetFileSystemAssociationARNList(Aws::Vector<Aws::String>&& value) { m_fileSystemAssociationARNListHasBeenSet = true; m_fileSystemAssociationARNList = std::move(value); }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file system
     * association to be described.</p>
     */
    inline DescribeFileSystemAssociationsRequest& WithFileSystemAssociationARNList(const Aws::Vector<Aws::String>& value) { SetFileSystemAssociationARNList(value); return *this;}

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file system
     * association to be described.</p>
     */
    inline DescribeFileSystemAssociationsRequest& WithFileSystemAssociationARNList(Aws::Vector<Aws::String>&& value) { SetFileSystemAssociationARNList(std::move(value)); return *this;}

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file system
     * association to be described.</p>
     */
    inline DescribeFileSystemAssociationsRequest& AddFileSystemAssociationARNList(const Aws::String& value) { m_fileSystemAssociationARNListHasBeenSet = true; m_fileSystemAssociationARNList.push_back(value); return *this; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file system
     * association to be described.</p>
     */
    inline DescribeFileSystemAssociationsRequest& AddFileSystemAssociationARNList(Aws::String&& value) { m_fileSystemAssociationARNListHasBeenSet = true; m_fileSystemAssociationARNList.push_back(std::move(value)); return *this; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file system
     * association to be described.</p>
     */
    inline DescribeFileSystemAssociationsRequest& AddFileSystemAssociationARNList(const char* value) { m_fileSystemAssociationARNListHasBeenSet = true; m_fileSystemAssociationARNList.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_fileSystemAssociationARNList;
    bool m_fileSystemAssociationARNListHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
