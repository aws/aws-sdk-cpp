/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/AppBlockBuilder.h>
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
  class CreateAppBlockBuilderResult
  {
  public:
    AWS_APPSTREAM_API CreateAppBlockBuilderResult();
    AWS_APPSTREAM_API CreateAppBlockBuilderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CreateAppBlockBuilderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const AppBlockBuilder& GetAppBlockBuilder() const{ return m_appBlockBuilder; }

    
    inline void SetAppBlockBuilder(const AppBlockBuilder& value) { m_appBlockBuilder = value; }

    
    inline void SetAppBlockBuilder(AppBlockBuilder&& value) { m_appBlockBuilder = std::move(value); }

    
    inline CreateAppBlockBuilderResult& WithAppBlockBuilder(const AppBlockBuilder& value) { SetAppBlockBuilder(value); return *this;}

    
    inline CreateAppBlockBuilderResult& WithAppBlockBuilder(AppBlockBuilder&& value) { SetAppBlockBuilder(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAppBlockBuilderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAppBlockBuilderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAppBlockBuilderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AppBlockBuilder m_appBlockBuilder;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
