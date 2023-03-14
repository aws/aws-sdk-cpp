/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/AppBlock.h>
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
namespace AppStream
{
namespace Model
{
  class CreateAppBlockResult
  {
  public:
    AWS_APPSTREAM_API CreateAppBlockResult();
    AWS_APPSTREAM_API CreateAppBlockResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CreateAppBlockResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The app block.</p>
     */
    inline const AppBlock& GetAppBlock() const{ return m_appBlock; }

    /**
     * <p>The app block.</p>
     */
    inline void SetAppBlock(const AppBlock& value) { m_appBlock = value; }

    /**
     * <p>The app block.</p>
     */
    inline void SetAppBlock(AppBlock&& value) { m_appBlock = std::move(value); }

    /**
     * <p>The app block.</p>
     */
    inline CreateAppBlockResult& WithAppBlock(const AppBlock& value) { SetAppBlock(value); return *this;}

    /**
     * <p>The app block.</p>
     */
    inline CreateAppBlockResult& WithAppBlock(AppBlock&& value) { SetAppBlock(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAppBlockResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAppBlockResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAppBlockResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AppBlock m_appBlock;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
