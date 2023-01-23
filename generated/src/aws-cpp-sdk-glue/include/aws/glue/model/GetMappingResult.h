/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetMappingResult
  {
  public:
    AWS_GLUE_API GetMappingResult();
    AWS_GLUE_API GetMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
