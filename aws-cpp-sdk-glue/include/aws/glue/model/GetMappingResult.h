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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/MappingEntry.h>
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
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API GetMappingResult
  {
  public:
    GetMappingResult();
    GetMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of mappings to the specified targets.</p>
     */
    inline const Aws::Vector<MappingEntry>& GetMapping() const{ return m_mapping; }

    /**
     * <p>A list of mappings to the specified targets.</p>
     */
    inline void SetMapping(const Aws::Vector<MappingEntry>& value) { m_mapping = value; }

    /**
     * <p>A list of mappings to the specified targets.</p>
     */
    inline void SetMapping(Aws::Vector<MappingEntry>&& value) { m_mapping = std::move(value); }

    /**
     * <p>A list of mappings to the specified targets.</p>
     */
    inline GetMappingResult& WithMapping(const Aws::Vector<MappingEntry>& value) { SetMapping(value); return *this;}

    /**
     * <p>A list of mappings to the specified targets.</p>
     */
    inline GetMappingResult& WithMapping(Aws::Vector<MappingEntry>&& value) { SetMapping(std::move(value)); return *this;}

    /**
     * <p>A list of mappings to the specified targets.</p>
     */
    inline GetMappingResult& AddMapping(const MappingEntry& value) { m_mapping.push_back(value); return *this; }

    /**
     * <p>A list of mappings to the specified targets.</p>
     */
    inline GetMappingResult& AddMapping(MappingEntry&& value) { m_mapping.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MappingEntry> m_mapping;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
