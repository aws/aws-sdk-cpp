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
  class StartAppBlockBuilderResult
  {
  public:
    AWS_APPSTREAM_API StartAppBlockBuilderResult();
    AWS_APPSTREAM_API StartAppBlockBuilderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API StartAppBlockBuilderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const AppBlockBuilder& GetAppBlockBuilder() const{ return m_appBlockBuilder; }

    
    inline void SetAppBlockBuilder(const AppBlockBuilder& value) { m_appBlockBuilder = value; }

    
    inline void SetAppBlockBuilder(AppBlockBuilder&& value) { m_appBlockBuilder = std::move(value); }

    
    inline StartAppBlockBuilderResult& WithAppBlockBuilder(const AppBlockBuilder& value) { SetAppBlockBuilder(value); return *this;}

    
    inline StartAppBlockBuilderResult& WithAppBlockBuilder(AppBlockBuilder&& value) { SetAppBlockBuilder(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartAppBlockBuilderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartAppBlockBuilderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartAppBlockBuilderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AppBlockBuilder m_appBlockBuilder;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
