/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplifyuibuilder/model/Component.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{
  class AWS_AMPLIFYUIBUILDER_API ExportComponentsResult
  {
  public:
    ExportComponentsResult();
    ExportComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ExportComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the configuration of the exported components.</p>
     */
    inline const Aws::Vector<Component>& GetEntities() const{ return m_entities; }

    /**
     * <p>Represents the configuration of the exported components.</p>
     */
    inline void SetEntities(const Aws::Vector<Component>& value) { m_entities = value; }

    /**
     * <p>Represents the configuration of the exported components.</p>
     */
    inline void SetEntities(Aws::Vector<Component>&& value) { m_entities = std::move(value); }

    /**
     * <p>Represents the configuration of the exported components.</p>
     */
    inline ExportComponentsResult& WithEntities(const Aws::Vector<Component>& value) { SetEntities(value); return *this;}

    /**
     * <p>Represents the configuration of the exported components.</p>
     */
    inline ExportComponentsResult& WithEntities(Aws::Vector<Component>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>Represents the configuration of the exported components.</p>
     */
    inline ExportComponentsResult& AddEntities(const Component& value) { m_entities.push_back(value); return *this; }

    /**
     * <p>Represents the configuration of the exported components.</p>
     */
    inline ExportComponentsResult& AddEntities(Component&& value) { m_entities.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Component> m_entities;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
