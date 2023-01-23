/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/LayoutContent.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ConnectCases
{
namespace Model
{
  class GetLayoutResult
  {
  public:
    AWS_CONNECTCASES_API GetLayoutResult();
    AWS_CONNECTCASES_API GetLayoutResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API GetLayoutResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about which fields will be present in the layout, the order of
     * the fields, and read-only attribute of the field. </p>
     */
    inline const LayoutContent& GetContent() const{ return m_content; }

    /**
     * <p>Information about which fields will be present in the layout, the order of
     * the fields, and read-only attribute of the field. </p>
     */
    inline void SetContent(const LayoutContent& value) { m_content = value; }

    /**
     * <p>Information about which fields will be present in the layout, the order of
     * the fields, and read-only attribute of the field. </p>
     */
    inline void SetContent(LayoutContent&& value) { m_content = std::move(value); }

    /**
     * <p>Information about which fields will be present in the layout, the order of
     * the fields, and read-only attribute of the field. </p>
     */
    inline GetLayoutResult& WithContent(const LayoutContent& value) { SetContent(value); return *this;}

    /**
     * <p>Information about which fields will be present in the layout, the order of
     * the fields, and read-only attribute of the field. </p>
     */
    inline GetLayoutResult& WithContent(LayoutContent&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline const Aws::String& GetLayoutArn() const{ return m_layoutArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline void SetLayoutArn(const Aws::String& value) { m_layoutArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline void SetLayoutArn(Aws::String&& value) { m_layoutArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline void SetLayoutArn(const char* value) { m_layoutArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline GetLayoutResult& WithLayoutArn(const Aws::String& value) { SetLayoutArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline GetLayoutResult& WithLayoutArn(Aws::String&& value) { SetLayoutArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline GetLayoutResult& WithLayoutArn(const char* value) { SetLayoutArn(value); return *this;}


    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline const Aws::String& GetLayoutId() const{ return m_layoutId; }

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline void SetLayoutId(const Aws::String& value) { m_layoutId = value; }

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline void SetLayoutId(Aws::String&& value) { m_layoutId = std::move(value); }

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline void SetLayoutId(const char* value) { m_layoutId.assign(value); }

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline GetLayoutResult& WithLayoutId(const Aws::String& value) { SetLayoutId(value); return *this;}

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline GetLayoutResult& WithLayoutId(Aws::String&& value) { SetLayoutId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline GetLayoutResult& WithLayoutId(const char* value) { SetLayoutId(value); return *this;}


    /**
     * <p>The name of the layout. It must be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the layout. It must be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the layout. It must be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the layout. It must be unique.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the layout. It must be unique.</p>
     */
    inline GetLayoutResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the layout. It must be unique.</p>
     */
    inline GetLayoutResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the layout. It must be unique.</p>
     */
    inline GetLayoutResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetLayoutResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetLayoutResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetLayoutResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetLayoutResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetLayoutResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetLayoutResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetLayoutResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetLayoutResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of of key-value pairs that represent tags on a resource. Tags are used
     * to organize, track, or control access for this resource.</p>
     */
    inline GetLayoutResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    LayoutContent m_content;

    Aws::String m_layoutArn;

    Aws::String m_layoutId;

    Aws::String m_name;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
