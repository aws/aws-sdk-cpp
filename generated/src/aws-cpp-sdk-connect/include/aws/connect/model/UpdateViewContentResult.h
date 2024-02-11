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
  class UpdateViewContentResult
  {
  public:
    AWS_CONNECT_API UpdateViewContentResult();
    AWS_CONNECT_API UpdateViewContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API UpdateViewContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A view resource object. Contains metadata and content necessary to render the
     * view.</p>
     */
    inline const View& GetView() const{ return m_view; }

    /**
     * <p>A view resource object. Contains metadata and content necessary to render the
     * view.</p>
     */
    inline void SetView(const View& value) { m_view = value; }

    /**
     * <p>A view resource object. Contains metadata and content necessary to render the
     * view.</p>
     */
    inline void SetView(View&& value) { m_view = std::move(value); }

    /**
     * <p>A view resource object. Contains metadata and content necessary to render the
     * view.</p>
     */
    inline UpdateViewContentResult& WithView(const View& value) { SetView(value); return *this;}

    /**
     * <p>A view resource object. Contains metadata and content necessary to render the
     * view.</p>
     */
    inline UpdateViewContentResult& WithView(View&& value) { SetView(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateViewContentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateViewContentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateViewContentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    View m_view;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
