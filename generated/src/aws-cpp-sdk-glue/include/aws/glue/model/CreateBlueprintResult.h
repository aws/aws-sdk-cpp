/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateBlueprintResult
  {
  public:
    AWS_GLUE_API CreateBlueprintResult();
    AWS_GLUE_API CreateBlueprintResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CreateBlueprintResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the name of the blueprint that was registered.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Returns the name of the blueprint that was registered.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Returns the name of the blueprint that was registered.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Returns the name of the blueprint that was registered.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Returns the name of the blueprint that was registered.</p>
     */
    inline CreateBlueprintResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Returns the name of the blueprint that was registered.</p>
     */
    inline CreateBlueprintResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Returns the name of the blueprint that was registered.</p>
     */
    inline CreateBlueprintResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
