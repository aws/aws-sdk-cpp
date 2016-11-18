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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>The result of a DeleteTrust request.</p>
   */
  class AWS_DIRECTORYSERVICE_API DeleteTrustResult
  {
  public:
    DeleteTrustResult();
    DeleteTrustResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteTrustResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The Trust ID of the trust relationship that was deleted.</p>
     */
    inline const Aws::String& GetTrustId() const{ return m_trustId; }

    /**
     * <p>The Trust ID of the trust relationship that was deleted.</p>
     */
    inline void SetTrustId(const Aws::String& value) { m_trustId = value; }

    /**
     * <p>The Trust ID of the trust relationship that was deleted.</p>
     */
    inline void SetTrustId(Aws::String&& value) { m_trustId = value; }

    /**
     * <p>The Trust ID of the trust relationship that was deleted.</p>
     */
    inline void SetTrustId(const char* value) { m_trustId.assign(value); }

    /**
     * <p>The Trust ID of the trust relationship that was deleted.</p>
     */
    inline DeleteTrustResult& WithTrustId(const Aws::String& value) { SetTrustId(value); return *this;}

    /**
     * <p>The Trust ID of the trust relationship that was deleted.</p>
     */
    inline DeleteTrustResult& WithTrustId(Aws::String&& value) { SetTrustId(value); return *this;}

    /**
     * <p>The Trust ID of the trust relationship that was deleted.</p>
     */
    inline DeleteTrustResult& WithTrustId(const char* value) { SetTrustId(value); return *this;}

  private:
    Aws::String m_trustId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
