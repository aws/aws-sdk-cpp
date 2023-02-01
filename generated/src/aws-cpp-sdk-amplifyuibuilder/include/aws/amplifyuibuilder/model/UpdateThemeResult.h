/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
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
  class UpdateThemeResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API UpdateThemeResult();
    AWS_AMPLIFYUIBUILDER_API UpdateThemeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API UpdateThemeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the configuration of the updated theme.</p>
     */
    inline const Theme& GetEntity() const{ return m_entity; }

    /**
     * <p>Describes the configuration of the updated theme.</p>
     */
    inline void SetEntity(const Theme& value) { m_entity = value; }

    /**
     * <p>Describes the configuration of the updated theme.</p>
     */
    inline void SetEntity(Theme&& value) { m_entity = std::move(value); }

    /**
     * <p>Describes the configuration of the updated theme.</p>
     */
    inline UpdateThemeResult& WithEntity(const Theme& value) { SetEntity(value); return *this;}

    /**
     * <p>Describes the configuration of the updated theme.</p>
     */
    inline UpdateThemeResult& WithEntity(Theme&& value) { SetEntity(std::move(value)); return *this;}

  private:

    Theme m_entity;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
