/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeSMBFileSharesResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeSMBFileSharesResult();
    AWS_STORAGEGATEWAY_API DescribeSMBFileSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeSMBFileSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline const Aws::Vector<SMBFileShareInfo>& GetSMBFileShareInfoList() const{ return m_sMBFileShareInfoList; }

    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline void SetSMBFileShareInfoList(const Aws::Vector<SMBFileShareInfo>& value) { m_sMBFileShareInfoList = value; }

    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline void SetSMBFileShareInfoList(Aws::Vector<SMBFileShareInfo>&& value) { m_sMBFileShareInfoList = std::move(value); }

    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline DescribeSMBFileSharesResult& WithSMBFileShareInfoList(const Aws::Vector<SMBFileShareInfo>& value) { SetSMBFileShareInfoList(value); return *this;}

    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline DescribeSMBFileSharesResult& WithSMBFileShareInfoList(Aws::Vector<SMBFileShareInfo>&& value) { SetSMBFileShareInfoList(std::move(value)); return *this;}

    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline DescribeSMBFileSharesResult& AddSMBFileShareInfoList(const SMBFileShareInfo& value) { m_sMBFileShareInfoList.push_back(value); return *this; }

    /**
     * <p>An array containing a description for each requested file share.</p>
     */
    inline DescribeSMBFileSharesResult& AddSMBFileShareInfoList(SMBFileShareInfo&& value) { m_sMBFileShareInfoList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SMBFileShareInfo> m_sMBFileShareInfoList;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
