﻿/**
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
   * <p>DescribeNFSFileSharesInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeNFSFileSharesInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API DescribeNFSFileSharesRequest : public StorageGatewayRequest
  {
  public:
    DescribeNFSFileSharesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNFSFileShares"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFileShareARNList() const{ return m_fileShareARNList; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described.</p>
     */
    inline bool FileShareARNListHasBeenSet() const { return m_fileShareARNListHasBeenSet; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described.</p>
     */
    inline void SetFileShareARNList(const Aws::Vector<Aws::String>& value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList = value; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described.</p>
     */
    inline void SetFileShareARNList(Aws::Vector<Aws::String>&& value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList = std::move(value); }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described.</p>
     */
    inline DescribeNFSFileSharesRequest& WithFileShareARNList(const Aws::Vector<Aws::String>& value) { SetFileShareARNList(value); return *this;}

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described.</p>
     */
    inline DescribeNFSFileSharesRequest& WithFileShareARNList(Aws::Vector<Aws::String>&& value) { SetFileShareARNList(std::move(value)); return *this;}

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described.</p>
     */
    inline DescribeNFSFileSharesRequest& AddFileShareARNList(const Aws::String& value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList.push_back(value); return *this; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described.</p>
     */
    inline DescribeNFSFileSharesRequest& AddFileShareARNList(Aws::String&& value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList.push_back(std::move(value)); return *this; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described.</p>
     */
    inline DescribeNFSFileSharesRequest& AddFileShareARNList(const char* value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_fileShareARNList;
    bool m_fileShareARNListHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
