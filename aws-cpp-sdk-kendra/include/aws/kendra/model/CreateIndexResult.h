/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{
  class CreateIndexResult
  {
  public:
    AWS_KENDRA_API CreateIndexResult();
    AWS_KENDRA_API CreateIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API CreateIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the index. Use this identifier when you query an index, set
     * up a data source, or index a document.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the index. Use this identifier when you query an index, set
     * up a data source, or index a document.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the index. Use this identifier when you query an index, set
     * up a data source, or index a document.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the index. Use this identifier when you query an index, set
     * up a data source, or index a document.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the index. Use this identifier when you query an index, set
     * up a data source, or index a document.</p>
     */
    inline CreateIndexResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the index. Use this identifier when you query an index, set
     * up a data source, or index a document.</p>
     */
    inline CreateIndexResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index. Use this identifier when you query an index, set
     * up a data source, or index a document.</p>
     */
    inline CreateIndexResult& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
