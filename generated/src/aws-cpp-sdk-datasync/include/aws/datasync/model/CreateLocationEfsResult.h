﻿/**
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
  /**
   * <p>CreateLocationEfs</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationEfsResponse">AWS
   * API Reference</a></p>
   */
  class CreateLocationEfsResult
  {
  public:
    AWS_DATASYNC_API CreateLocationEfsResult();
    AWS_DATASYNC_API CreateLocationEfsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API CreateLocationEfsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS file system location that
     * you create.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }
    inline CreateLocationEfsResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}
    inline CreateLocationEfsResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}
    inline CreateLocationEfsResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateLocationEfsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateLocationEfsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateLocationEfsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
