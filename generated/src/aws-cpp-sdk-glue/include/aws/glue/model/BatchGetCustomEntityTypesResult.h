/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/CustomEntityType.h>
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
  class BatchGetCustomEntityTypesResult
  {
  public:
    AWS_GLUE_API BatchGetCustomEntityTypesResult() = default;
    AWS_GLUE_API BatchGetCustomEntityTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetCustomEntityTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>CustomEntityType</code> objects representing the custom
     * patterns that have been created.</p>
     */
    inline const Aws::Vector<CustomEntityType>& GetCustomEntityTypes() const { return m_customEntityTypes; }
    template<typename CustomEntityTypesT = Aws::Vector<CustomEntityType>>
    void SetCustomEntityTypes(CustomEntityTypesT&& value) { m_customEntityTypesHasBeenSet = true; m_customEntityTypes = std::forward<CustomEntityTypesT>(value); }
    template<typename CustomEntityTypesT = Aws::Vector<CustomEntityType>>
    BatchGetCustomEntityTypesResult& WithCustomEntityTypes(CustomEntityTypesT&& value) { SetCustomEntityTypes(std::forward<CustomEntityTypesT>(value)); return *this;}
    template<typename CustomEntityTypesT = CustomEntityType>
    BatchGetCustomEntityTypesResult& AddCustomEntityTypes(CustomEntityTypesT&& value) { m_customEntityTypesHasBeenSet = true; m_customEntityTypes.emplace_back(std::forward<CustomEntityTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the names of custom patterns that were not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomEntityTypesNotFound() const { return m_customEntityTypesNotFound; }
    template<typename CustomEntityTypesNotFoundT = Aws::Vector<Aws::String>>
    void SetCustomEntityTypesNotFound(CustomEntityTypesNotFoundT&& value) { m_customEntityTypesNotFoundHasBeenSet = true; m_customEntityTypesNotFound = std::forward<CustomEntityTypesNotFoundT>(value); }
    template<typename CustomEntityTypesNotFoundT = Aws::Vector<Aws::String>>
    BatchGetCustomEntityTypesResult& WithCustomEntityTypesNotFound(CustomEntityTypesNotFoundT&& value) { SetCustomEntityTypesNotFound(std::forward<CustomEntityTypesNotFoundT>(value)); return *this;}
    template<typename CustomEntityTypesNotFoundT = Aws::String>
    BatchGetCustomEntityTypesResult& AddCustomEntityTypesNotFound(CustomEntityTypesNotFoundT&& value) { m_customEntityTypesNotFoundHasBeenSet = true; m_customEntityTypesNotFound.emplace_back(std::forward<CustomEntityTypesNotFoundT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetCustomEntityTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomEntityType> m_customEntityTypes;
    bool m_customEntityTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_customEntityTypesNotFound;
    bool m_customEntityTypesNotFoundHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
