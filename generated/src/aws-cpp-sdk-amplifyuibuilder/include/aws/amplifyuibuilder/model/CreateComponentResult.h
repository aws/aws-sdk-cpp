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
  class CreateComponentResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API CreateComponentResult();
    AWS_AMPLIFYUIBUILDER_API CreateComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API CreateComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the configuration of the new component.</p>
     */
    inline const Component& GetEntity() const{ return m_entity; }

    /**
     * <p>Describes the configuration of the new component.</p>
     */
    inline void SetEntity(const Component& value) { m_entity = value; }

    /**
     * <p>Describes the configuration of the new component.</p>
     */
    inline void SetEntity(Component&& value) { m_entity = std::move(value); }

    /**
     * <p>Describes the configuration of the new component.</p>
     */
    inline CreateComponentResult& WithEntity(const Component& value) { SetEntity(value); return *this;}

    /**
     * <p>Describes the configuration of the new component.</p>
     */
    inline CreateComponentResult& WithEntity(Component&& value) { SetEntity(std::move(value)); return *this;}

  private:

    Component m_entity;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
