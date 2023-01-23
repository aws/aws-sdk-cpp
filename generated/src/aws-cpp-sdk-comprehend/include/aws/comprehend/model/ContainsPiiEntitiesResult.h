/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/EntityLabel.h>
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
namespace Comprehend
{
namespace Model
{
  class ContainsPiiEntitiesResult
  {
  public:
    AWS_COMPREHEND_API ContainsPiiEntitiesResult();
    AWS_COMPREHEND_API ContainsPiiEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ContainsPiiEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The labels used in the document being analyzed. Individual labels represent
     * personally identifiable information (PII) entity types.</p>
     */
    inline const Aws::Vector<EntityLabel>& GetLabels() const{ return m_labels; }

    /**
     * <p>The labels used in the document being analyzed. Individual labels represent
     * personally identifiable information (PII) entity types.</p>
     */
    inline void SetLabels(const Aws::Vector<EntityLabel>& value) { m_labels = value; }

    /**
     * <p>The labels used in the document being analyzed. Individual labels represent
     * personally identifiable information (PII) entity types.</p>
     */
    inline void SetLabels(Aws::Vector<EntityLabel>&& value) { m_labels = std::move(value); }

    /**
     * <p>The labels used in the document being analyzed. Individual labels represent
     * personally identifiable information (PII) entity types.</p>
     */
    inline ContainsPiiEntitiesResult& WithLabels(const Aws::Vector<EntityLabel>& value) { SetLabels(value); return *this;}

    /**
     * <p>The labels used in the document being analyzed. Individual labels represent
     * personally identifiable information (PII) entity types.</p>
     */
    inline ContainsPiiEntitiesResult& WithLabels(Aws::Vector<EntityLabel>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>The labels used in the document being analyzed. Individual labels represent
     * personally identifiable information (PII) entity types.</p>
     */
    inline ContainsPiiEntitiesResult& AddLabels(const EntityLabel& value) { m_labels.push_back(value); return *this; }

    /**
     * <p>The labels used in the document being analyzed. Individual labels represent
     * personally identifiable information (PII) entity types.</p>
     */
    inline ContainsPiiEntitiesResult& AddLabels(EntityLabel&& value) { m_labels.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EntityLabel> m_labels;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
