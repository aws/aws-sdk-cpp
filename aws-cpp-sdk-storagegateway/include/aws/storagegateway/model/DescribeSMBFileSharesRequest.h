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
   * <p>DescribeSMBFileSharesInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeSMBFileSharesInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API DescribeSMBFileSharesRequest : public StorageGatewayRequest
  {
  public:
    DescribeSMBFileSharesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSMBFileShares"; }

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
    inline bool FileShareARNListHasBeenSet() const { return m_fileShareARNListHasBeenSet; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described. </p>
     */
    inline void SetFileShareARNList(const Aws::Vector<Aws::String>& value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList = value; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described. </p>
     */
    inline void SetFileShareARNList(Aws::Vector<Aws::String>&& value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList = std::move(value); }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described. </p>
     */
    inline DescribeSMBFileSharesRequest& WithFileShareARNList(const Aws::Vector<Aws::String>& value) { SetFileShareARNList(value); return *this;}

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described. </p>
     */
    inline DescribeSMBFileSharesRequest& WithFileShareARNList(Aws::Vector<Aws::String>&& value) { SetFileShareARNList(std::move(value)); return *this;}

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described. </p>
     */
    inline DescribeSMBFileSharesRequest& AddFileShareARNList(const Aws::String& value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList.push_back(value); return *this; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described. </p>
     */
    inline DescribeSMBFileSharesRequest& AddFileShareARNList(Aws::String&& value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList.push_back(std::move(value)); return *this; }

    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file share to be
     * described. </p>
     */
    inline DescribeSMBFileSharesRequest& AddFileShareARNList(const char* value) { m_fileShareARNListHasBeenSet = true; m_fileShareARNList.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_fileShareARNList;
    bool m_fileShareARNListHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
