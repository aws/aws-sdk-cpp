/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_GLUE_API GetMappingResult() = default;
    AWS_GLUE_API GetMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of mappings to the specified targets.</p>
     */
    inline const Aws::Vector<MappingEntry>& GetMapping() const { return m_mapping; }
    template<typename MappingT = Aws::Vector<MappingEntry>>
    void SetMapping(MappingT&& value) { m_mappingHasBeenSet = true; m_mapping = std::forward<MappingT>(value); }
    template<typename MappingT = Aws::Vector<MappingEntry>>
    GetMappingResult& WithMapping(MappingT&& value) { SetMapping(std::forward<MappingT>(value)); return *this;}
    template<typename MappingT = MappingEntry>
    GetMappingResult& AddMapping(MappingT&& value) { m_mappingHasBeenSet = true; m_mapping.emplace_back(std::forward<MappingT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMappingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MappingEntry> m_mapping;
    bool m_mappingHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
