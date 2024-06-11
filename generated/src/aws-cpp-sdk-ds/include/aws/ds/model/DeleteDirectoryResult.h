﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{
  /**
   * <p>Contains the results of the <a>DeleteDirectory</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DeleteDirectoryResult">AWS
   * API Reference</a></p>
   */
  class DeleteDirectoryResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DeleteDirectoryResult();
    AWS_DIRECTORYSERVICE_API DeleteDirectoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DeleteDirectoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The directory identifier.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryId.assign(value); }
    inline DeleteDirectoryResult& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline DeleteDirectoryResult& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline DeleteDirectoryResult& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteDirectoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteDirectoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteDirectoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
