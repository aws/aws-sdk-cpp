﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFileShareARNList() const{ return m_fileShareARNList; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described. </p>
     */
    inline void SetFileShareARNList(const Aws::Vector<Aws::String>& value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList = value; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described. </p>
     */
    inline void SetFileShareARNList(Aws::Vector<Aws::String>&& value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList = value; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described. </p>
     */
    inline DescribeNFSFileSharesRequest& WithFileShareARNList(const Aws::Vector<Aws::String>& value) { SetFileShareARNList(value); return *this;}

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described. </p>
     */
    inline DescribeNFSFileSharesRequest& WithFileShareARNList(Aws::Vector<Aws::String>&& value) { SetFileShareARNList(value); return *this;}

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described. </p>
     */
    inline DescribeNFSFileSharesRequest& AddFileShareARNList(const Aws::String& value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList.push_back(value); return *this; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described. </p>
     */
    inline DescribeNFSFileSharesRequest& AddFileShareARNList(Aws::String&& value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList.push_back(value); return *this; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described. </p>
     */
    inline DescribeNFSFileSharesRequest& AddFileShareARNList(const char* value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_fileShareARNList;
    bool m_fileShareARNListHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
