/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object representing the query parameter to match.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/QueryParameterMatch">AWS
   * API Reference</a></p>
   */
  class QueryParameterMatch
  {
  public:
    AWS_APPMESH_API QueryParameterMatch();
    AWS_APPMESH_API QueryParameterMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API QueryParameterMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The exact query parameter to match on.</p>
     */
    inline const Aws::String& GetExact() const{ return m_exact; }

    /**
     * <p>The exact query parameter to match on.</p>
     */
    inline bool ExactHasBeenSet() const { return m_exactHasBeenSet; }

    /**
     * <p>The exact query parameter to match on.</p>
     */
    inline void SetExact(const Aws::String& value) { m_exactHasBeenSet = true; m_exact = value; }

    /**
     * <p>The exact query parameter to match on.</p>
     */
    inline void SetExact(Aws::String&& value) { m_exactHasBeenSet = true; m_exact = std::move(value); }

    /**
     * <p>The exact query parameter to match on.</p>
     */
    inline void SetExact(const char* value) { m_exactHasBeenSet = true; m_exact.assign(value); }

    /**
     * <p>The exact query parameter to match on.</p>
     */
    inline QueryParameterMatch& WithExact(const Aws::String& value) { SetExact(value); return *this;}

    /**
     * <p>The exact query parameter to match on.</p>
     */
    inline QueryParameterMatch& WithExact(Aws::String&& value) { SetExact(std::move(value)); return *this;}

    /**
     * <p>The exact query parameter to match on.</p>
     */
    inline QueryParameterMatch& WithExact(const char* value) { SetExact(value); return *this;}

  private:

    Aws::String m_exact;
    bool m_exactHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
