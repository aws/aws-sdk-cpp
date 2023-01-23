/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
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
  class UpdateComponentResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API UpdateComponentResult();
    AWS_AMPLIFYUIBUILDER_API UpdateComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API UpdateComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the configuration of the updated component.</p>
     */
    inline const Component& GetEntity() const{ return m_entity; }

    /**
     * <p>Describes the configuration of the updated component.</p>
     */
    inline void SetEntity(const Component& value) { m_entity = value; }

    /**
     * <p>Describes the configuration of the updated component.</p>
     */
    inline void SetEntity(Component&& value) { m_entity = std::move(value); }

    /**
     * <p>Describes the configuration of the updated component.</p>
     */
    inline UpdateComponentResult& WithEntity(const Component& value) { SetEntity(value); return *this;}

    /**
     * <p>Describes the configuration of the updated component.</p>
     */
    inline UpdateComponentResult& WithEntity(Component&& value) { SetEntity(std::move(value)); return *this;}

  private:

    Component m_entity;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
