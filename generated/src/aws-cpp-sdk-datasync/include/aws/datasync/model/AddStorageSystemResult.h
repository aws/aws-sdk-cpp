/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataSync
{
namespace Model
{
  class AddStorageSystemResult
  {
  public:
    AWS_DATASYNC_API AddStorageSystemResult();
    AWS_DATASYNC_API AddStorageSystemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API AddStorageSystemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the on-premises storage system that you can use with DataSync
     * Discovery.</p>
     */
    inline const Aws::String& GetStorageSystemArn() const{ return m_storageSystemArn; }

    /**
     * <p>The ARN of the on-premises storage system that you can use with DataSync
     * Discovery.</p>
     */
    inline void SetStorageSystemArn(const Aws::String& value) { m_storageSystemArn = value; }

    /**
     * <p>The ARN of the on-premises storage system that you can use with DataSync
     * Discovery.</p>
     */
    inline void SetStorageSystemArn(Aws::String&& value) { m_storageSystemArn = std::move(value); }

    /**
     * <p>The ARN of the on-premises storage system that you can use with DataSync
     * Discovery.</p>
     */
    inline void SetStorageSystemArn(const char* value) { m_storageSystemArn.assign(value); }

    /**
     * <p>The ARN of the on-premises storage system that you can use with DataSync
     * Discovery.</p>
     */
    inline AddStorageSystemResult& WithStorageSystemArn(const Aws::String& value) { SetStorageSystemArn(value); return *this;}

    /**
     * <p>The ARN of the on-premises storage system that you can use with DataSync
     * Discovery.</p>
     */
    inline AddStorageSystemResult& WithStorageSystemArn(Aws::String&& value) { SetStorageSystemArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the on-premises storage system that you can use with DataSync
     * Discovery.</p>
     */
    inline AddStorageSystemResult& WithStorageSystemArn(const char* value) { SetStorageSystemArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AddStorageSystemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AddStorageSystemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AddStorageSystemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_storageSystemArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
