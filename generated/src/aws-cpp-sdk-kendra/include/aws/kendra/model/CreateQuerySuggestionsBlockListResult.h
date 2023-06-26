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
  class CreateQuerySuggestionsBlockListResult
  {
  public:
    AWS_KENDRA_API CreateQuerySuggestionsBlockListResult();
    AWS_KENDRA_API CreateQuerySuggestionsBlockListResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API CreateQuerySuggestionsBlockListResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the block list.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the block list.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the block list.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the block list.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the block list.</p>
     */
    inline CreateQuerySuggestionsBlockListResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the block list.</p>
     */
    inline CreateQuerySuggestionsBlockListResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the block list.</p>
     */
    inline CreateQuerySuggestionsBlockListResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateQuerySuggestionsBlockListResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateQuerySuggestionsBlockListResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateQuerySuggestionsBlockListResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
