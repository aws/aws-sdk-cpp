/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplifyuibuilder/model/Theme.h>
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
  class AWS_AMPLIFYUIBUILDER_API ExportThemesResult
  {
  public:
    ExportThemesResult();
    ExportThemesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ExportThemesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the configuration of the exported themes.</p>
     */
    inline const Aws::Vector<Theme>& GetEntities() const{ return m_entities; }

    /**
     * <p>Represents the configuration of the exported themes.</p>
     */
    inline void SetEntities(const Aws::Vector<Theme>& value) { m_entities = value; }

    /**
     * <p>Represents the configuration of the exported themes.</p>
     */
    inline void SetEntities(Aws::Vector<Theme>&& value) { m_entities = std::move(value); }

    /**
     * <p>Represents the configuration of the exported themes.</p>
     */
    inline ExportThemesResult& WithEntities(const Aws::Vector<Theme>& value) { SetEntities(value); return *this;}

    /**
     * <p>Represents the configuration of the exported themes.</p>
     */
    inline ExportThemesResult& WithEntities(Aws::Vector<Theme>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>Represents the configuration of the exported themes.</p>
     */
    inline ExportThemesResult& AddEntities(const Theme& value) { m_entities.push_back(value); return *this; }

    /**
     * <p>Represents the configuration of the exported themes.</p>
     */
    inline ExportThemesResult& AddEntities(Theme&& value) { m_entities.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Theme> m_entities;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
