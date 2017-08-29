/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>The identifier of an <a>ApiKey</a> used in a <a>UsagePlan</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ApiKeyIds">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API ImportApiKeysResult
  {
  public:
    ImportApiKeysResult();
    ImportApiKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ImportApiKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of all the <a>ApiKey</a> identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }

    /**
     * <p>A list of all the <a>ApiKey</a> identifiers.</p>
     */
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_ids = value; }

    /**
     * <p>A list of all the <a>ApiKey</a> identifiers.</p>
     */
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_ids = std::move(value); }

    /**
     * <p>A list of all the <a>ApiKey</a> identifiers.</p>
     */
    inline ImportApiKeysResult& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}

    /**
     * <p>A list of all the <a>ApiKey</a> identifiers.</p>
     */
    inline ImportApiKeysResult& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}

    /**
     * <p>A list of all the <a>ApiKey</a> identifiers.</p>
     */
    inline ImportApiKeysResult& AddIds(const Aws::String& value) { m_ids.push_back(value); return *this; }

    /**
     * <p>A list of all the <a>ApiKey</a> identifiers.</p>
     */
    inline ImportApiKeysResult& AddIds(Aws::String&& value) { m_ids.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of all the <a>ApiKey</a> identifiers.</p>
     */
    inline ImportApiKeysResult& AddIds(const char* value) { m_ids.push_back(value); return *this; }


    /**
     * <p>A list of warning messages.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>A list of warning messages.</p>
     */
    inline void SetWarnings(const Aws::Vector<Aws::String>& value) { m_warnings = value; }

    /**
     * <p>A list of warning messages.</p>
     */
    inline void SetWarnings(Aws::Vector<Aws::String>&& value) { m_warnings = std::move(value); }

    /**
     * <p>A list of warning messages.</p>
     */
    inline ImportApiKeysResult& WithWarnings(const Aws::Vector<Aws::String>& value) { SetWarnings(value); return *this;}

    /**
     * <p>A list of warning messages.</p>
     */
    inline ImportApiKeysResult& WithWarnings(Aws::Vector<Aws::String>&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>A list of warning messages.</p>
     */
    inline ImportApiKeysResult& AddWarnings(const Aws::String& value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>A list of warning messages.</p>
     */
    inline ImportApiKeysResult& AddWarnings(Aws::String&& value) { m_warnings.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of warning messages.</p>
     */
    inline ImportApiKeysResult& AddWarnings(const char* value) { m_warnings.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_ids;

    Aws::Vector<Aws::String> m_warnings;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
