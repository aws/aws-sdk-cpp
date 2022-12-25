/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resource-explorer-2/model/View.h>
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
namespace ResourceExplorer2
{
namespace Model
{
  class GetViewResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API GetViewResult();
    AWS_RESOURCEEXPLORER2_API GetViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API GetViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline GetViewResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline GetViewResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline GetViewResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline GetViewResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline GetViewResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline GetViewResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline GetViewResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline GetViewResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tag key and value pairs that are attached to the view.</p>
     */
    inline GetViewResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>A structure that contains the details for the requested view.</p>
     */
    inline const View& GetView() const{ return m_view; }

    /**
     * <p>A structure that contains the details for the requested view.</p>
     */
    inline void SetView(const View& value) { m_view = value; }

    /**
     * <p>A structure that contains the details for the requested view.</p>
     */
    inline void SetView(View&& value) { m_view = std::move(value); }

    /**
     * <p>A structure that contains the details for the requested view.</p>
     */
    inline GetViewResult& WithView(const View& value) { SetView(value); return *this;}

    /**
     * <p>A structure that contains the details for the requested view.</p>
     */
    inline GetViewResult& WithView(View&& value) { SetView(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_tags;

    View m_view;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
