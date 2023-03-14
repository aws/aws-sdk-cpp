/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/ApiKey.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents a collection of API keys as represented by an ApiKeys
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ApiKeys">AWS
   * API Reference</a></p>
   */
  class GetApiKeysResult
  {
  public:
    AWS_APIGATEWAY_API GetApiKeysResult();
    AWS_APIGATEWAY_API GetApiKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetApiKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of warning messages logged during the import of API keys when the
     * <code>failOnWarnings</code> option is set to true.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>A list of warning messages logged during the import of API keys when the
     * <code>failOnWarnings</code> option is set to true.</p>
     */
    inline void SetWarnings(const Aws::Vector<Aws::String>& value) { m_warnings = value; }

    /**
     * <p>A list of warning messages logged during the import of API keys when the
     * <code>failOnWarnings</code> option is set to true.</p>
     */
    inline void SetWarnings(Aws::Vector<Aws::String>&& value) { m_warnings = std::move(value); }

    /**
     * <p>A list of warning messages logged during the import of API keys when the
     * <code>failOnWarnings</code> option is set to true.</p>
     */
    inline GetApiKeysResult& WithWarnings(const Aws::Vector<Aws::String>& value) { SetWarnings(value); return *this;}

    /**
     * <p>A list of warning messages logged during the import of API keys when the
     * <code>failOnWarnings</code> option is set to true.</p>
     */
    inline GetApiKeysResult& WithWarnings(Aws::Vector<Aws::String>&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>A list of warning messages logged during the import of API keys when the
     * <code>failOnWarnings</code> option is set to true.</p>
     */
    inline GetApiKeysResult& AddWarnings(const Aws::String& value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>A list of warning messages logged during the import of API keys when the
     * <code>failOnWarnings</code> option is set to true.</p>
     */
    inline GetApiKeysResult& AddWarnings(Aws::String&& value) { m_warnings.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of warning messages logged during the import of API keys when the
     * <code>failOnWarnings</code> option is set to true.</p>
     */
    inline GetApiKeysResult& AddWarnings(const char* value) { m_warnings.push_back(value); return *this; }


    
    inline const Aws::String& GetPosition() const{ return m_position; }

    
    inline void SetPosition(const Aws::String& value) { m_position = value; }

    
    inline void SetPosition(Aws::String&& value) { m_position = std::move(value); }

    
    inline void SetPosition(const char* value) { m_position.assign(value); }

    
    inline GetApiKeysResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    
    inline GetApiKeysResult& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}

    
    inline GetApiKeysResult& WithPosition(const char* value) { SetPosition(value); return *this;}


    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline const Aws::Vector<ApiKey>& GetItems() const{ return m_items; }

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline void SetItems(const Aws::Vector<ApiKey>& value) { m_items = value; }

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline void SetItems(Aws::Vector<ApiKey>&& value) { m_items = std::move(value); }

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline GetApiKeysResult& WithItems(const Aws::Vector<ApiKey>& value) { SetItems(value); return *this;}

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline GetApiKeysResult& WithItems(Aws::Vector<ApiKey>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline GetApiKeysResult& AddItems(const ApiKey& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline GetApiKeysResult& AddItems(ApiKey&& value) { m_items.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetApiKeysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetApiKeysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetApiKeysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_warnings;

    Aws::String m_position;

    Aws::Vector<ApiKey> m_items;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
