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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/SMBFileShareInfo.h>
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
  /**
   * <p>DescribeSMBFileSharesOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeSMBFileSharesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API DescribeSMBFileSharesResult
  {
  public:
    DescribeSMBFileSharesResult();
    DescribeSMBFileSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSMBFileSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array containing a description for each requested file share. </p>
     */
    inline const Aws::Vector<SMBFileShareInfo>& GetSMBFileShareInfoList() const{ return m_sMBFileShareInfoList; }

    /**
     * <p>An array containing a description for each requested file share. </p>
     */
    inline void SetSMBFileShareInfoList(const Aws::Vector<SMBFileShareInfo>& value) { m_sMBFileShareInfoList = value; }

    /**
     * <p>An array containing a description for each requested file share. </p>
     */
    inline void SetSMBFileShareInfoList(Aws::Vector<SMBFileShareInfo>&& value) { m_sMBFileShareInfoList = std::move(value); }

    /**
     * <p>An array containing a description for each requested file share. </p>
     */
    inline DescribeSMBFileSharesResult& WithSMBFileShareInfoList(const Aws::Vector<SMBFileShareInfo>& value) { SetSMBFileShareInfoList(value); return *this;}

    /**
     * <p>An array containing a description for each requested file share. </p>
     */
    inline DescribeSMBFileSharesResult& WithSMBFileShareInfoList(Aws::Vector<SMBFileShareInfo>&& value) { SetSMBFileShareInfoList(std::move(value)); return *this;}

    /**
     * <p>An array containing a description for each requested file share. </p>
     */
    inline DescribeSMBFileSharesResult& AddSMBFileShareInfoList(const SMBFileShareInfo& value) { m_sMBFileShareInfoList.push_back(value); return *this; }

    /**
     * <p>An array containing a description for each requested file share. </p>
     */
    inline DescribeSMBFileSharesResult& AddSMBFileShareInfoList(SMBFileShareInfo&& value) { m_sMBFileShareInfoList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SMBFileShareInfo> m_sMBFileShareInfoList;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
