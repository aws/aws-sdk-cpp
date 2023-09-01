/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/View.h>
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
namespace Connect
{
namespace Model
{
  class CreateViewVersionResult
  {
  public:
    AWS_CONNECT_API CreateViewVersionResult();
    AWS_CONNECT_API CreateViewVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateViewVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>All view data is contained within the View object.</p>
     */
    inline const View& GetView() const{ return m_view; }

    /**
     * <p>All view data is contained within the View object.</p>
     */
    inline void SetView(const View& value) { m_view = value; }

    /**
     * <p>All view data is contained within the View object.</p>
     */
    inline void SetView(View&& value) { m_view = std::move(value); }

    /**
     * <p>All view data is contained within the View object.</p>
     */
    inline CreateViewVersionResult& WithView(const View& value) { SetView(value); return *this;}

    /**
     * <p>All view data is contained within the View object.</p>
     */
    inline CreateViewVersionResult& WithView(View&& value) { SetView(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateViewVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateViewVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateViewVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    View m_view;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
